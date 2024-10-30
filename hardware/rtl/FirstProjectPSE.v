// Quartus II Verilog Template
// Signed adder

module FirstProjectPSE #(parameter WIDTH=8)
(
    input osc_clk,        // Porta de entrada para o sinal de clock
    input reset_n        // Porta de entrada para o reset
    
);

    wire wire1;   // Porta de sai­da para o sinal de ack
    wire wire2;   // Porta de sai­da para o sinal de req
    wire wire3;      // Porta de entrada para o sinal de req
    wire wire4;      // Porta de entrada para o sinal de ack

    SoC1 SoC1(
        .clk_clk(osc_clk),
        .reset_reset_n(reset_n),
        .receive_req_export(wire3),
        .req_export(wire1),
        .receive_ack_export(wire2),
        .ack_export(wire4)
    );

    SoC2 SoC2(
        .clk_clk(osc_clk),
        .reset_reset_n(reset_n),
        .receive_req_export(wire1),
        .req_export(wire3),
        .receive_ack_export(wire4),
        .ack_export(wire2)
    );

endmodule
