
## Descrição dos Diretórios

- **hardware/**: Diretório principal para os arquivos de hardware.
  - **quartus/**: Arquivos de projeto do Quartus, incluindo os arquivos `.qpf` e `.SoC2.qsys`).
  - **rtl/**: Código RTL em Verilog ou VHDL, organizado em módulos e testbenches.
- **software/**: Diretórios separados para os workspaces de software Nios II para cada SoC.
  - **SoC1_workspace/**: Primeiro projeto de software Nios II, incluindo o BSP, aplicativo e bibliotecas.
  - **SoC2_workspace/**: Segundo projeto de software Nios II, com estrutura similar ao primeiro.

## Pré-requisitos

- **Quartus II**: Para configurar o hardware e compilar o projeto.
- **QSys**: Para gerar os arquivos de sistema dos SoCs.
- **Nios II Software Build Tools for Eclipse**: Para desenvolvimento do software Nios II.
- **ModelSim** (ou outro simulador): Para simulação de RTL e verificação dos módulos.

## Instruções de Configuração

1. Navegue até a unidade C: e crie o diretório `PSE` caso ainda não exista:

  ```bash

    cd C:\
    mkdir PSE
    cd fourth_pse_actvt
    git clone https://github.com/ohgabrieldias/fourth_pse_actvt
    cd fourth_pse_actvt
  ```
