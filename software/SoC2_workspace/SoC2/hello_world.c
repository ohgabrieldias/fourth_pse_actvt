/*
 * Exemplo "Hello World".
 *
 * Este exemplo imprime 'Hello from Nios II' no fluxo STDOUT. Ele roda nas
 * plataformas 'standard', 'full_featured', 'fast' e 'low_cost' do Nios II.
 * Funciona com ou sem o RTOS MicroC/OS-II e requer um dispositivo STDOUT
 * no hardware do sistema.
 *
 * O tamanho em memória desta aplicação é de aproximadamente 69 kbytes por
 * padrão usando o design de referência padrão.
 *
 * Para uma versão com menor footprint de memória, e uma explicação de como
 * reduzir o footprint de memória para uma aplicação específica, veja o
 * template "small_hello_world".
 *
 */
#define REQ_ADDR (short *) REQ_BASE
#define RECEIVE_ACK_ADDR (short *) RECEIVE_ACK_BASE
#define ACK_BASE_ADDR (short *) ACK_BASE
#define RECEIVE_REQ_ADDR (short *) RECEIVE_REQ_BASE

#include <stdio.h>
#include "system.h"
#include "io.h"

int main() {
    // Loop principal de comunicação para o SoC2
    while (1) {
        // Aguarda o sinal de requisição (req) do SoC1
        printf("Aguardando sinal de requisição (req) do SoC1...\n");
        while (IORD(RECEIVE_REQ_BASE, 0) == 0);

        // Quando o sinal de requisição é recebido, executa uma ação
        printf("Sinal de requisição (req) recebido! Executando ação...\n");

        // Envia sinal de reconhecimento (ack) para o SoC1
        printf("Enviando sinal de reconhecimento (ack) para o SoC1...\n");
        IOWR(ACK_BASE, 0, 1);

        // Aguarda o SoC1 limpar o sinal de requisição
        printf("Aguardando o SoC1 limpar o sinal de requisição (req)...\n");
        while (IORD(RECEIVE_REQ_BASE, 0) == 1);

        // Limpa o sinal de reconhecimento (ack)
        printf("Limpando sinal de reconhecimento (ack)...\n");
        IOWR(ACK_BASE, 0, 0);

        // Indica que o loop recomeçará para a próxima comunicação
        printf("Sinal de reconhecimento (ack) limpo! Reiniciando o loop de comunicação...\n");
    }
    return 0;
}
