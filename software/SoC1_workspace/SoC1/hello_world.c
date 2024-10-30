#define REQ_ADDR (short *) REQ_BASE
#define RECEIVE_ACK_ADDR (short *) RECEIVE_ACK_BASE
#define ACK_BASE_ADDR (short *) ACK_BASE
#define RECEIVE_REQ_ADDR (short *) RECEIVE_REQ_BASE

#include <stdio.h>
#include "system.h"
#include "io.h"

int main() {
    // Loop principal de comunica��o para o SoC1
	printf("Iniciando comunica��o...\n");
    while (1) {
        // Envia sinal de requisi��o para o SoC2
        printf("Enviando sinal de requisi��o para o SoC2...\n");
        IOWR(REQ_BASE, 0, 1);

        // Aguarda o sinal de reconhecimento (ack) do SoC2
        printf("Aguardando sinal de reconhecimento (ack) do SoC2...\n");
        while (IORD(RECEIVE_ACK_BASE, 0) == 0);

        // Quando o sinal de reconhecimento � recebido, executa uma a��o
        printf("Sinal de reconhecimento (ack) recebido! Executando a��o...\n");

        // Limpa o sinal de requisi��o
        printf("Limpando sinal de requisi��o...\n");
        IOWR(REQ_BASE, 0, 0);

        // Aguarda o SoC2 limpar o sinal de reconhecimento (ack)
        printf("Aguardando SoC2 limpar o sinal de reconhecimento (ack)...\n");
        while (IORD(RECEIVE_ACK_BASE, 0) == 1);

        // Indica que o sinal de reconhecimento foi limpo e o loop recome�ar�
        printf("Sinal de reconhecimento (ack) limpo! Reiniciando o loop de comunica��o...\n");
    }
    return 0;
}
