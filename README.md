#  Mão Robótica com Controle por Potenciômetros Deslizantes

Projeto educacional de robótica utilizando uma mão mecânica controlada por servomotores e potenciômetros deslizantes. A solução permite o controle independente de cada dedo, com feedback visual via porta serial, e foi desenvolvida para fins acadêmicos, oficinas e prototipagem.

---

##  Componentes Utilizados

- **4x Potenciômetros deslizantes (10kΩ)** – 1 para cada dedo exceto o dedão
- **5x Servomotores SG90 ou similares**
- **1x Placa Arduino (Nano ou Uno)**
- **Jumpers, protoboard ou PCB**
- **1x Sensor digital (opcional)** – conectado ao pino D4

>  **Nota:** O potenciômetro do dedão apresentou falhas durante os testes. Atualmente, ele espelha o movimento do indicador. A versão final deverá restabelecer controle individual.

---

##  Começando com a IDE Arduino

### 1. Instale a Arduino IDE

Baixe a IDE oficial em:  
🔗 [https://www.arduino.cc/en/software](https://www.arduino.cc/en/software)

---

### 2. Baixe o Código-Fonte

#### Clonar via Git:
```bash
git clone https://github.com/seu-usuario/mao-robotica.git
Ou baixe o ZIP:
Clique em Code > Download ZIP

Extraia o conteúdo localmente

3. Abra o Projeto na IDE
Vá em Arquivo > Abrir...

Selecione o arquivo mao-robotica.ino

Importante: o nome da pasta deve ser o mesmo do arquivo .ino

4. Configure sua Placa e Porta
Ferramentas > Placa > Arduino Nano (ou outra usada)

Ferramentas > Porta > COMx (confirme no Gerenciador de Dispositivos)

Se usar Arduino Nano, selecione também:

Processador > ATmega328P (Old Bootloader) (em muitos casos)

5. Compile e Envie
Clique em ✓ para compilar

Clique em ➡️ para enviar o código à placa

Use Monitor Serial ou Serial Plotter para visualizar os dados (9600 baud)

⚙️ Lógica do Código
Estrutura
Cada dedo é controlado por um potenciômetro deslizante.

O valor analógico é convertido em ângulo (0° a 180°) via map().

O dedão atualmente espelha o movimento do indicador, devido a falha no seu potenciômetro.

Monitoramento
Os valores dos potenciômetros e do sensor são exibidos via Serial:

Ideal para testes, calibração e visualização com o Serial Plotter

 Simulação e Protótipos
Simulação no Tinkercad Circuits: disponível em breve
(ideal para testar sem montagem física)

Modelos 3D e peças da mão robótica: disponíveis no diretório /cad
(impressão 3D ou ajustes manuais)

 Organização do Projeto

├── mao-robotica.ino           # Código principal Arduino
├── slide                  # Slides
└── README.md                  # Este arquivo

Próximos Passos
Substituição e reconfiguração do potenciômetro do dedão

Evento: Semana Nacional de TI - Palestra “Do Protótipo à Inovação”
Este projeto é livre para fins educacionais e de demonstração.