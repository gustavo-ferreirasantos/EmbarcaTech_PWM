# EmbarcaTech_PWM

## 📌 DESCRIÇÃO
Este projeto demonstra o controle de um servomotor utilizando PWM no microcontrolador RP2040 (Raspberry Pi Pico W). A implementação é feita no simulador Wokwi e explora a variação do ângulo do servomotor por meio do ajuste do ciclo de trabalho do sinal PWM. Além disso, há uma experimentação prática utilizando a placa educacional BitDogLab para analisar o comportamento do LED RGB durante a execução do código.

---

## 🎯 OBJETIVOS
✅ Configurar um sinal PWM na GPIO 22 com frequência de 50 Hz (período de 20 ms).  
✅ Ajustar o ciclo de trabalho do PWM para diferentes ângulos do servomotor (0°, 90° e 180°).  
✅ Implementar uma rotina de movimentação contínua do servo entre 0° e 180° com incrementos suaves de 5μs e atraso de 10 ms.  
✅ Explorar a interação com a ferramenta educacional BitDogLab e observar o comportamento do LED RGB durante a execução do código.  

---

## 🛠️ PRÉ-REQUISITOS

- 🛠️ HARDWARE NECESSÁRIO:
  
  - Placa de desenvolvimento BitDogLab (RP2040).  
  - Microcontrolador Raspberry Pi Pico W.
  - LED BLUE, conectada à GPIO 12. (Experimento).  

  
- 🖥 SOFTWARE NECESSÁRIO:
  - Raspberry Pi Pico SDK configurado.  
  - CMake para compilação.  
  - VS Code com a extensão Raspberry Pi Pico.  
  - Wokwi. 

---

## 🚀 COMO EXECUTAR

1️⃣ **Clone este repositório:**

       git clone https://github.com/gustavo-ferreirasantos/EmbarcaTech_PWM

2️⃣ Abra o projeto no VS Code e importe.

3️⃣ Compile e abra o simulador do Wokwi no VSCode. Para o experimento mude o pino de 22 para 12, compile e carregue o código na BitDogLab usando o SDK do Raspberry Pi Pico.

4️⃣ Execute a simulação no Wokwi para visualização do funcionamento no Servomotor / Faça a experimentação na placa BitDogLab, 

---

## 🎥 Vídeo de demonstração
🔗 <u>[Assista aqui](https://youtu.be/q4XUrOrBhnc)</u>
