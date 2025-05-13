// Definição de bibliotecas necessárias
#include <Servo.h>

// Definição dos objetos servos
Servo dedao;
Servo indicador;
Servo anelar;
Servo medio;
Servo mindinho;

// Variáveis para armazenar os valores dos potenciômetros (A0 à A5)
int potIndicador;
int potAnelar;
int potMindinho;
int potMedio;

// Variável para o sensor digital
int sensor = 0;

void setup() {
  Serial.begin(9600); // Uso do Serial Plotter
  
  // Associar os servos aos pinos
  dedao.attach(6);     // Servo do dedão no pino 6
  indicador.attach(7); // Servo do indicador no pino 7
  medio.attach(9);     // Servo do médio no pino 9
  anelar.attach(12);   // Servo do anelar no pino 12
  mindinho.attach(10); // Servo do mindinho no pino 13 (corrigido de 11 para 13)
  
  // Configurar o pino do sensor como entrada
  pinMode(4, INPUT);
}

void loop() {
  // Leitura dos potenciômetros disponíveis
  potIndicador = analogRead(A4);
  potAnelar = analogRead(A5);
  potMindinho = analogRead(A0); 
  potMedio = analogRead(A3);     // Alterado para A3, que era do dedão
  

  // Controle proporcional dos dedos usando a função map()
  // Mapeia o valor do potenciômetro para o ângulo do servo (0-180)
  int anguloIndicador = map(potIndicador, 0, 1023, 0, 180);
  int anguloAnelar = map(potAnelar, 0, 1023, 0, 180);
  int anguloMindinho = map(potMindinho, 0, 1023, 0, 180); 
  int anguloMedio = map(potMedio, 0, 1023, 0, 180); 
  
  // O dedão agora segue o movimento do indicador
  int anguloDedao = map(potIndicador, 0, 1023, 160, 60); 
   // Usa o mesmo potenciômetro do indicador
  
  // Envia os ângulos para os servos
  indicador.write(anguloIndicador);
  anelar.write(anguloAnelar);
  mindinho.write(anguloMindinho);
  dedao.write(anguloDedao);
  medio.write(anguloMedio); 

  // Impressão dos valores para monitoramento
  Serial.print("A0 ");
  Serial.print(potIndicador);
  Serial.print(" A1 ");
  Serial.print(potAnelar);
  Serial.print(" A2 ");
  Serial.print(potMindinho);
  Serial.print(" A4 ");
  Serial.print(potMedio);
  
  Serial.println();
  Serial.println(sensor);
  
  delay(100);
}