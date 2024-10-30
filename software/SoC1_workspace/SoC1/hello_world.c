
#define REQ_ADDR (short *) REQ_BASE
#define RECEIVE_ACK_ADDR (short *) RECEIVE_ACK_BASE
#define ACK_BASE_ADDR (short *) ACK_BASE
#define RECEIVE_REQ_ADDR (short *) RECEIVE_REQ_BASE

#include <stdio.h>
#include "system.h"
#include "io.h"


int main() {
    // Main communication loop for SoC1
    while (1) {
        // Send request signal to SoC2
        IOWR(REQ_BASE, 0, 1);

        // Wait for ack signal from SoC2
        while (IORD(RECEIVE_ACK_BASE, 0) == 0);

        // Do something when ack is received

        // Clear request signal
        IOWR(REQ_BASE, 0, 0);

        // Wait for SoC2 to clear ack
        while (IORD(RECEIVE_ACK_BASE, 0) == 1);
    }
    return 0;
}
