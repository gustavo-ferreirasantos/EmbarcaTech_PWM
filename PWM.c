#include <stdio.h>            // Biblioteca padrão para entrada/saída
#include "pico/stdlib.h"      // Biblioteca da Raspberry Pi Pico (GPIO, UART, etc.)
#include "hardware/pwm.h"     // Biblioteca para controle de PWM

// GPIO onde o Servomotor está conectado
#define SERVOMOTOR 22


// 1) Considerando a GPIO 22, definindo a frequência de PWM para aproximadamente, 50Hz – período de 20ms. 
/*
    - Frequência do sinal de clock base (125Mhz)
    - Divisor = 125 
    - Wrap = 20000
    - Frequência do PWM = 125000000 / 125*20000 = 50 Hz
*/

// Função para configurar o PWM
void pwm_setup() {
    // Configura a função do pino como PWM
    gpio_set_function(SERVOMOTOR, GPIO_FUNC_PWM);
    
    // Obtém o canal(slice) de PWM a partir do GPIO
    uint slice = pwm_gpio_to_slice_num(SERVOMOTOR);

    // Define o divisor de clock do PWM para 125
    pwm_set_clkdiv(slice, 125.0);
    
    // Definir o valor de wrap – valor máximo do contador PWM, para 20000(20ms)
    pwm_set_wrap(slice, 20000);

    // Definir o cico de trabalho (duty cycle) do pwm
    pwm_set_gpio_level(SERVOMOTOR, 0);

    // Habilitar o PWM no slice correspondente
    pwm_set_enabled(slice, true);
}

int main() {
    stdio_init_all();
    
    // Inicializa o PWM no pino do servomotor
    pwm_setup();

    // 2) 2400us (180º)

    pwm_set_gpio_level(SERVOMOTOR, 2400); // Define o nível atual do PWM (duty cycle)
    sleep_ms(5000); // Atraso de 5 segundos

    // 3) 1470us (90º)
    
    pwm_set_gpio_level(SERVOMOTOR, 1470);
    sleep_ms(5000);

    // 4) 500us (0º)

    pwm_set_gpio_level(SERVOMOTOR, 500);
    sleep_ms(5000);

    while (true) {
        // 5)

        // 500us (0º) ->  2400us (180º)
        for (uint16_t level = 500; level <= 2400; level += 5) {
            pwm_set_gpio_level(SERVOMOTOR, level);
            sleep_ms(10);
        }

        // 2400us (180º) -> 500us (0º)
        for (uint16_t level = 2400; level >= 500; level -= 5) {
            pwm_set_gpio_level(SERVOMOTOR, level);
            sleep_ms(10);
        }
    }
    return 0;
}