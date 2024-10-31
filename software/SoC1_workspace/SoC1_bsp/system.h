/*
 * system.h - SOPC Builder system and BSP software package information
 *
 * Machine generated for CPU 'NIOS' in SOPC Builder design 'SoC1'
 * SOPC Builder design path: C:/PSE/fourth_pse_actvt/hardware/qsys/SoC1/SoC1.sopcinfo
 *
 * Generated: Thu Oct 31 11:42:58 BRST 2024
 */

/*
 * DO NOT MODIFY THIS FILE
 *
 * Changing this file will have subtle consequences
 * which will almost certainly lead to a nonfunctioning
 * system. If you do modify this file, be aware that your
 * changes will be overwritten and lost when this file
 * is generated again.
 *
 * DO NOT MODIFY THIS FILE
 */

/*
 * License Agreement
 *
 * Copyright (c) 2008
 * Altera Corporation, San Jose, California, USA.
 * All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * This agreement shall be governed in all respects by the laws of the State
 * of California and by the laws of the United States of America.
 */

#ifndef __SYSTEM_H_
#define __SYSTEM_H_

/* Include definitions from linker script generator */
#include "linker.h"


/*
 * ACK configuration
 *
 */

#define ACK_BASE 0x11040
#define ACK_BIT_CLEARING_EDGE_REGISTER 0
#define ACK_BIT_MODIFYING_OUTPUT_REGISTER 0
#define ACK_CAPTURE 0
#define ACK_DATA_WIDTH 1
#define ACK_DO_TEST_BENCH_WIRING 0
#define ACK_DRIVEN_SIM_VALUE 0
#define ACK_EDGE_TYPE "NONE"
#define ACK_FREQ 50000000
#define ACK_HAS_IN 0
#define ACK_HAS_OUT 1
#define ACK_HAS_TRI 0
#define ACK_IRQ -1
#define ACK_IRQ_INTERRUPT_CONTROLLER_ID -1
#define ACK_IRQ_TYPE "NONE"
#define ACK_NAME "/dev/ACK"
#define ACK_RESET_VALUE 0
#define ACK_SPAN 16
#define ACK_TYPE "altera_avalon_pio"
#define ALT_MODULE_CLASS_ACK altera_avalon_pio


/*
 * CPU configuration
 *
 */

#define ALT_CPU_ARCHITECTURE "altera_nios2_qsys"
#define ALT_CPU_BIG_ENDIAN 0
#define ALT_CPU_BREAK_ADDR 0x10820
#define ALT_CPU_CPU_FREQ 50000000u
#define ALT_CPU_CPU_ID_SIZE 1
#define ALT_CPU_CPU_ID_VALUE 0x00000000
#define ALT_CPU_CPU_IMPLEMENTATION "tiny"
#define ALT_CPU_DATA_ADDR_WIDTH 0x11
#define ALT_CPU_DCACHE_LINE_SIZE 0
#define ALT_CPU_DCACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_DCACHE_SIZE 0
#define ALT_CPU_EXCEPTION_ADDR 0x8020
#define ALT_CPU_FLUSHDA_SUPPORTED
#define ALT_CPU_FREQ 50000000
#define ALT_CPU_HARDWARE_DIVIDE_PRESENT 0
#define ALT_CPU_HARDWARE_MULTIPLY_PRESENT 0
#define ALT_CPU_HARDWARE_MULX_PRESENT 0
#define ALT_CPU_HAS_DEBUG_CORE 1
#define ALT_CPU_HAS_DEBUG_STUB
#define ALT_CPU_HAS_JMPI_INSTRUCTION
#define ALT_CPU_ICACHE_LINE_SIZE 0
#define ALT_CPU_ICACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_ICACHE_SIZE 0
#define ALT_CPU_INST_ADDR_WIDTH 0x11
#define ALT_CPU_NAME "NIOS"
#define ALT_CPU_RESET_ADDR 0x8000


/*
 * CPU configuration (with legacy prefix - don't use these anymore)
 *
 */

#define NIOS2_BIG_ENDIAN 0
#define NIOS2_BREAK_ADDR 0x10820
#define NIOS2_CPU_FREQ 50000000u
#define NIOS2_CPU_ID_SIZE 1
#define NIOS2_CPU_ID_VALUE 0x00000000
#define NIOS2_CPU_IMPLEMENTATION "tiny"
#define NIOS2_DATA_ADDR_WIDTH 0x11
#define NIOS2_DCACHE_LINE_SIZE 0
#define NIOS2_DCACHE_LINE_SIZE_LOG2 0
#define NIOS2_DCACHE_SIZE 0
#define NIOS2_EXCEPTION_ADDR 0x8020
#define NIOS2_FLUSHDA_SUPPORTED
#define NIOS2_HARDWARE_DIVIDE_PRESENT 0
#define NIOS2_HARDWARE_MULTIPLY_PRESENT 0
#define NIOS2_HARDWARE_MULX_PRESENT 0
#define NIOS2_HAS_DEBUG_CORE 1
#define NIOS2_HAS_DEBUG_STUB
#define NIOS2_HAS_JMPI_INSTRUCTION
#define NIOS2_ICACHE_LINE_SIZE 0
#define NIOS2_ICACHE_LINE_SIZE_LOG2 0
#define NIOS2_ICACHE_SIZE 0
#define NIOS2_INST_ADDR_WIDTH 0x11
#define NIOS2_RESET_ADDR 0x8000


/*
 * Define for each module class mastered by the CPU
 *
 */

#define __ALTERA_AVALON_JTAG_UART
#define __ALTERA_AVALON_ONCHIP_MEMORY2
#define __ALTERA_AVALON_PERFORMANCE_COUNTER
#define __ALTERA_AVALON_PIO
#define __ALTERA_AVALON_SYSID_QSYS
#define __ALTERA_NIOS2_QSYS


/*
 * JTAG configuration
 *
 */

#define ALT_MODULE_CLASS_JTAG altera_avalon_jtag_uart
#define JTAG_BASE 0x11088
#define JTAG_IRQ 0
#define JTAG_IRQ_INTERRUPT_CONTROLLER_ID 0
#define JTAG_NAME "/dev/JTAG"
#define JTAG_READ_DEPTH 64
#define JTAG_READ_THRESHOLD 8
#define JTAG_SPAN 8
#define JTAG_TYPE "altera_avalon_jtag_uart"
#define JTAG_WRITE_DEPTH 64
#define JTAG_WRITE_THRESHOLD 8


/*
 * PCU configuration
 *
 */

#define ALT_MODULE_CLASS_PCU altera_avalon_performance_counter
#define PCU_BASE 0x11000
#define PCU_HOW_MANY_SECTIONS 3
#define PCU_IRQ -1
#define PCU_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PCU_NAME "/dev/PCU"
#define PCU_SPAN 64
#define PCU_TYPE "altera_avalon_performance_counter"


/*
 * RAM configuration
 *
 */

#define ALT_MODULE_CLASS_RAM altera_avalon_onchip_memory2
#define RAM_ALLOW_IN_SYSTEM_MEMORY_CONTENT_EDITOR 0
#define RAM_ALLOW_MRAM_SIM_CONTENTS_ONLY_FILE 0
#define RAM_BASE 0x8000
#define RAM_CONTENTS_INFO ""
#define RAM_DUAL_PORT 0
#define RAM_GUI_RAM_BLOCK_TYPE "AUTO"
#define RAM_INIT_CONTENTS_FILE "SoC1_RAM"
#define RAM_INIT_MEM_CONTENT 1
#define RAM_INSTANCE_ID "NONE"
#define RAM_IRQ -1
#define RAM_IRQ_INTERRUPT_CONTROLLER_ID -1
#define RAM_NAME "/dev/RAM"
#define RAM_NON_DEFAULT_INIT_FILE_ENABLED 0
#define RAM_RAM_BLOCK_TYPE "AUTO"
#define RAM_READ_DURING_WRITE_MODE "DONT_CARE"
#define RAM_SINGLE_CLOCK_OP 0
#define RAM_SIZE_MULTIPLE 1
#define RAM_SIZE_VALUE 20480
#define RAM_SPAN 20480
#define RAM_TYPE "altera_avalon_onchip_memory2"
#define RAM_WRITABLE 1


/*
 * RECEIVE_ACK configuration
 *
 */

#define ALT_MODULE_CLASS_RECEIVE_ACK altera_avalon_pio
#define RECEIVE_ACK_BASE 0x11060
#define RECEIVE_ACK_BIT_CLEARING_EDGE_REGISTER 0
#define RECEIVE_ACK_BIT_MODIFYING_OUTPUT_REGISTER 0
#define RECEIVE_ACK_CAPTURE 0
#define RECEIVE_ACK_DATA_WIDTH 1
#define RECEIVE_ACK_DO_TEST_BENCH_WIRING 0
#define RECEIVE_ACK_DRIVEN_SIM_VALUE 0
#define RECEIVE_ACK_EDGE_TYPE "NONE"
#define RECEIVE_ACK_FREQ 50000000
#define RECEIVE_ACK_HAS_IN 1
#define RECEIVE_ACK_HAS_OUT 0
#define RECEIVE_ACK_HAS_TRI 0
#define RECEIVE_ACK_IRQ -1
#define RECEIVE_ACK_IRQ_INTERRUPT_CONTROLLER_ID -1
#define RECEIVE_ACK_IRQ_TYPE "NONE"
#define RECEIVE_ACK_NAME "/dev/RECEIVE_ACK"
#define RECEIVE_ACK_RESET_VALUE 0
#define RECEIVE_ACK_SPAN 16
#define RECEIVE_ACK_TYPE "altera_avalon_pio"


/*
 * RECEIVE_REQ configuration
 *
 */

#define ALT_MODULE_CLASS_RECEIVE_REQ altera_avalon_pio
#define RECEIVE_REQ_BASE 0x11070
#define RECEIVE_REQ_BIT_CLEARING_EDGE_REGISTER 0
#define RECEIVE_REQ_BIT_MODIFYING_OUTPUT_REGISTER 0
#define RECEIVE_REQ_CAPTURE 0
#define RECEIVE_REQ_DATA_WIDTH 1
#define RECEIVE_REQ_DO_TEST_BENCH_WIRING 0
#define RECEIVE_REQ_DRIVEN_SIM_VALUE 0
#define RECEIVE_REQ_EDGE_TYPE "NONE"
#define RECEIVE_REQ_FREQ 50000000
#define RECEIVE_REQ_HAS_IN 1
#define RECEIVE_REQ_HAS_OUT 0
#define RECEIVE_REQ_HAS_TRI 0
#define RECEIVE_REQ_IRQ -1
#define RECEIVE_REQ_IRQ_INTERRUPT_CONTROLLER_ID -1
#define RECEIVE_REQ_IRQ_TYPE "NONE"
#define RECEIVE_REQ_NAME "/dev/RECEIVE_REQ"
#define RECEIVE_REQ_RESET_VALUE 0
#define RECEIVE_REQ_SPAN 16
#define RECEIVE_REQ_TYPE "altera_avalon_pio"


/*
 * REQ configuration
 *
 */

#define ALT_MODULE_CLASS_REQ altera_avalon_pio
#define REQ_BASE 0x11050
#define REQ_BIT_CLEARING_EDGE_REGISTER 0
#define REQ_BIT_MODIFYING_OUTPUT_REGISTER 0
#define REQ_CAPTURE 0
#define REQ_DATA_WIDTH 1
#define REQ_DO_TEST_BENCH_WIRING 0
#define REQ_DRIVEN_SIM_VALUE 0
#define REQ_EDGE_TYPE "NONE"
#define REQ_FREQ 50000000
#define REQ_HAS_IN 0
#define REQ_HAS_OUT 1
#define REQ_HAS_TRI 0
#define REQ_IRQ -1
#define REQ_IRQ_INTERRUPT_CONTROLLER_ID -1
#define REQ_IRQ_TYPE "NONE"
#define REQ_NAME "/dev/REQ"
#define REQ_RESET_VALUE 0
#define REQ_SPAN 16
#define REQ_TYPE "altera_avalon_pio"


/*
 * SYSID configuration
 *
 */

#define ALT_MODULE_CLASS_SYSID altera_avalon_sysid_qsys
#define SYSID_BASE 0x11080
#define SYSID_ID 0
#define SYSID_IRQ -1
#define SYSID_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SYSID_NAME "/dev/SYSID"
#define SYSID_SPAN 8
#define SYSID_TIMESTAMP 1730382123
#define SYSID_TYPE "altera_avalon_sysid_qsys"


/*
 * System configuration
 *
 */

#define ALT_DEVICE_FAMILY "Cyclone III"
#define ALT_ENHANCED_INTERRUPT_API_PRESENT
#define ALT_IRQ_BASE NULL
#define ALT_LOG_PORT "/dev/null"
#define ALT_LOG_PORT_BASE 0x0
#define ALT_LOG_PORT_DEV null
#define ALT_LOG_PORT_TYPE ""
#define ALT_NUM_EXTERNAL_INTERRUPT_CONTROLLERS 0
#define ALT_NUM_INTERNAL_INTERRUPT_CONTROLLERS 1
#define ALT_NUM_INTERRUPT_CONTROLLERS 1
#define ALT_STDERR "/dev/JTAG"
#define ALT_STDERR_BASE 0x11088
#define ALT_STDERR_DEV JTAG
#define ALT_STDERR_IS_JTAG_UART
#define ALT_STDERR_PRESENT
#define ALT_STDERR_TYPE "altera_avalon_jtag_uart"
#define ALT_STDIN "/dev/JTAG"
#define ALT_STDIN_BASE 0x11088
#define ALT_STDIN_DEV JTAG
#define ALT_STDIN_IS_JTAG_UART
#define ALT_STDIN_PRESENT
#define ALT_STDIN_TYPE "altera_avalon_jtag_uart"
#define ALT_STDOUT "/dev/JTAG"
#define ALT_STDOUT_BASE 0x11088
#define ALT_STDOUT_DEV JTAG
#define ALT_STDOUT_IS_JTAG_UART
#define ALT_STDOUT_PRESENT
#define ALT_STDOUT_TYPE "altera_avalon_jtag_uart"
#define ALT_SYSTEM_NAME "SoC1"


/*
 * hal configuration
 *
 */

#define ALT_MAX_FD 32
#define ALT_SYS_CLK none
#define ALT_TIMESTAMP_CLK none

#endif /* __SYSTEM_H_ */
