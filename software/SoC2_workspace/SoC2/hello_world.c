/*
 * Exemplo "Hello World".
 *
 * Este exemplo imprime 'Hello from Nios II' no fluxo STDOUT. Ele roda nas
 * plataformas 'standard', 'full_featured', 'fast' e 'low_cost' do Nios II.
 * Funciona com ou sem o RTOS MicroC/OS-II e requer um dispositivo STDOUT
 * no hardware do sistema.
 *
 * O tamanho em mem�ria desta aplica��o � de aproximadamente 69 kbytes por
 * padr�o usando o design de refer�ncia padr�o.
 *
 * Para uma vers�o com menor footprint de mem�ria, e uma explica��o de como
 * reduzir o footprint de mem�ria para uma aplica��o espec�fica, veja o
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
    // Loop principal de comunica��o para o SoC2
    while (1) {
        // Aguarda o sinal de requisi��o (req) do SoC1
        printf("Aguardando sinal de requisi��o (req) do SoC1...\n");
        while (IORD(RECEIVE_REQ_BASE, 0) == 0);

        // Quando o sinal de requisi��o � recebido, executa uma a��o
        printf("Sinal de requisi��o (req) recebido! Executando a��o...\n");

        // Envia sinal de reconhecimento (ack) para o SoC1
        printf("Enviando sinal de reconhecimento (ack) para o SoC1...\n");
        IOWR(ACK_BASE, 0, 1);

        // Aguarda o SoC1 limpar o sinal de requisi��o
        printf("Aguardando o SoC1 limpar o sinal de requisi��o (req)...\n");
        while (IORD(RECEIVE_REQ_BASE, 0) == 1);

        // Limpa o sinal de reconhecimento (ack)
        printf("Limpando sinal de reconhecimento (ack)...\n");
        IOWR(ACK_BASE, 0, 0);

        // Indica que o loop recome�ar� para a pr�xima comunica��o
        printf("Sinal de reconhecimento (ack) limpo! Reiniciando o loop de comunica��o...\n");
    }
    return 0;
}
