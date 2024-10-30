#define REQ_ADDR (short *) REQ_BASE
#define RECEIVE_ACK_ADDR (short *) RECEIVE_ACK_BASE
#define ACK_BASE_ADDR (short *) ACK_BASE
#define RECEIVE_REQ_ADDR (short *) RECEIVE_REQ_BASE

#include <stdio.h>
#include "system.h"
#include "io.h"

int main() {
    // Loop principal de comunicação para o SoC1
	printf("Iniciando comunicação...\n");
    while (1) {
        // Envia sinal de requisição para o SoC2
        printf("Enviando sinal de requisição para o SoC2...\n");
        IOWR(REQ_BASE, 0, 1);

        // Aguarda o sinal de reconhecimento (ack) do SoC2
        printf("Aguardando sinal de reconhecimento (ack) do SoC2...\n");
        while (IORD(RECEIVE_ACK_BASE, 0) == 0);

        // Quando o sinal de reconhecimento é recebido, executa uma ação
        printf("Sinal de reconhecimento (ack) recebido! Executando ação...\n");

        // Limpa o sinal de requisição
        printf("Limpando sinal de requisição...\n");
        IOWR(REQ_BASE, 0, 0);

        // Aguarda o SoC2 limpar o sinal de reconhecimento (ack)
        printf("Aguardando SoC2 limpar o sinal de reconhecimento (ack)...\n");
        while (IORD(RECEIVE_ACK_BASE, 0) == 1);

        // Indica que o sinal de reconhecimento foi limpo e o loop recomeçará
        printf("Sinal de reconhecimento (ack) limpo! Reiniciando o loop de comunicação...\n");
    }
    return 0;
}
