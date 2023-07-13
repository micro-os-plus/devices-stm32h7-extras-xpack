/*
 * This file is part of the µOS++ distribution.
 *   (https://github.com/micro-os-plus/)
 * Copyright (c) 2023 Liviu Ionescu.
 *
 * Permission to use, copy, modify, and/or distribute this software
 * for any purpose is hereby granted, under the terms of the MIT license.
 *
 * If a copy of the license was not distributed with this file, it can
 * be obtained from https://opensource.org/licenses/MIT/.
 */

/*
 * The list of external handlers was automatically generated by
 * processing the files available in the CubeMX packages, the folder:
 * `/Drivers/CMSIS/Device/ST/STM32F?xx/Source/Templates/arm`
 */

// clang-format off
// ----------------------------------------------------------------------------

#include <micro-os-plus/architecture.h>
#include <micro-os-plus/architecture-cortexm/exception-handlers.h>

// ----------------------------------------------------------------------------

void __attribute__((weak))
Default_Handler(void);

/*
 * Forward declaration of the specific IRQ handlers. These are aliased
 * to the Default_Handler, which is a 'forever' loop. When the application
 * defines an actual handler (with the same name), it will automatically
 * take precedence over these weak definitions.
 */

void __attribute__ ((weak, alias ("Default_Handler")))
WWDG_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
PVD_AVD_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
TAMP_STAMP_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
RTC_WKUP_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
FLASH_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
RCC_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
EXTI0_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
EXTI1_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
EXTI2_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
EXTI3_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
EXTI4_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
DMA1_Stream0_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
DMA1_Stream1_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
DMA1_Stream2_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
DMA1_Stream3_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
DMA1_Stream4_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
DMA1_Stream5_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
DMA1_Stream6_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
ADC_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
FDCAN1_IT0_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
FDCAN2_IT0_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
FDCAN1_IT1_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
FDCAN2_IT1_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
EXTI9_5_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
TIM1_BRK_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
TIM1_UP_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
TIM1_TRG_COM_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
TIM1_CC_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
TIM2_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
TIM3_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
TIM4_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
I2C1_EV_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
I2C1_ER_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
I2C2_EV_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
I2C2_ER_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
SPI1_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
SPI2_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
USART1_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
USART2_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
USART3_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
EXTI15_10_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
RTC_Alarm_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
TIM8_BRK_TIM12_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
TIM8_UP_TIM13_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
TIM8_TRG_COM_TIM14_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
TIM8_CC_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
DMA1_Stream7_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
FMC_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
SDMMC1_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
TIM5_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
SPI3_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
UART4_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
UART5_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
TIM6_DAC_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
TIM7_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
DMA2_Stream0_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
DMA2_Stream1_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
DMA2_Stream2_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
DMA2_Stream3_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
DMA2_Stream4_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
ETH_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
ETH_WKUP_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
FDCAN_CAL_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
CM7_SEV_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
CM4_SEV_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
DMA2_Stream5_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
DMA2_Stream6_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
DMA2_Stream7_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
USART6_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
I2C3_EV_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
I2C3_ER_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
OTG_HS_EP1_OUT_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
OTG_HS_EP1_IN_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
OTG_HS_WKUP_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
OTG_HS_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
DCMI_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
RNG_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
FPU_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
UART7_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
UART8_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
SPI4_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
SPI5_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
SPI6_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
SAI1_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
LTDC_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
LTDC_ER_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
DMA2D_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
SAI2_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
QUADSPI_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
LPTIM1_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
CEC_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
I2C4_EV_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
I2C4_ER_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
SPDIF_RX_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
OTG_FS_EP1_OUT_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
OTG_FS_EP1_IN_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
OTG_FS_WKUP_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
OTG_FS_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
DMAMUX1_OVR_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
HRTIM1_Master_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
HRTIM1_TIMA_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
HRTIM1_TIMB_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
HRTIM1_TIMC_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
HRTIM1_TIMD_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
HRTIM1_TIME_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
HRTIM1_FLT_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
DFSDM1_FLT0_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
DFSDM1_FLT1_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
DFSDM1_FLT2_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
DFSDM1_FLT3_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
SAI3_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
SWPMI1_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
TIM15_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
TIM16_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
TIM17_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
MDIOS_WKUP_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
MDIOS_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
JPEG_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
MDMA_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
DSI_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
SDMMC2_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
HSEM1_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
HSEM2_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
ADC3_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
DMAMUX2_OVR_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
BDMA_Channel0_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
BDMA_Channel1_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
BDMA_Channel2_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
BDMA_Channel3_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
BDMA_Channel4_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
BDMA_Channel5_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
BDMA_Channel6_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
BDMA_Channel7_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
COMP1_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
LPTIM2_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
LPTIM3_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
LPTIM4_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
LPTIM5_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
LPUART1_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
WWDG_RST_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
CRS_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
ECC_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
SAI4_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
HOLD_CORE_IRQHandler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
WAKEUP_PIN_IRQHandler(void);

// ----------------------------------------------------------------------------

extern uint32_t __stack;

typedef void
(*handler_ptr_t)(void);

// ----------------------------------------------------------------------------

#pragma GCC diagnostic push

#pragma GCC diagnostic ignored "-Wpedantic"

/**
 * The table of interrupt handlers. It has an explicit section name
 * and relies on the linker script to place it at the correct location
 * in memory, usually at the very beginning of the flash bank.
 */
__attribute__ ((section(".interrupt_vectors"),used))
handler_ptr_t _interrupt_vectors[] =
  {
    // Cortex-M Core Handlers
    (handler_ptr_t) &__stack,          // MSP
    Reset_Handler,                     // The reset handler

    NMI_Handler,                       // The NMI handler
    HardFault_Handler,                 // The hard fault handler

#if defined(__ARM_ARCH_7M__) || defined(__ARM_ARCH_7EM__)
    MemManage_Handler,                 // The MPU fault handler
    BusFault_Handler,                  // The bus fault handler
    UsageFault_Handler,                // The usage fault handler
#else
    0,                                 // Reserved
    0,                                 // Reserved
    0,                                 // Reserved
#endif
    0,                                 // Reserved
    0,                                 // Reserved
    0,                                 // Reserved
    0,                                 // Reserved
    SVC_Handler,                       // SVCall handler
#if defined(__ARM_ARCH_7M__) || defined(__ARM_ARCH_7EM__)
    DebugMon_Handler,                  // Debug monitor handler
#else
    0,                                 // Reserved
#endif
    0,                                 // Reserved
    PendSV_Handler,                    // The PendSV handler
    SysTick_Handler,                   // The SysTick handler

    // ------------------------------------------------------------------------
    // External Interrupts
    WWDG_IRQHandler,                   // Window WatchDog interrupt ( wwdg1_it, wwdg2_it)
    PVD_AVD_IRQHandler,                // PVD/AVD through EXTI Line detection
    TAMP_STAMP_IRQHandler,             // Tamper and TimeStamps through the EXTI line
    RTC_WKUP_IRQHandler,               // RTC Wakeup through the EXTI line
    FLASH_IRQHandler,                  // FLASH
    RCC_IRQHandler,                    // RCC
    EXTI0_IRQHandler,                  // EXTI Line0
    EXTI1_IRQHandler,                  // EXTI Line1
    EXTI2_IRQHandler,                  // EXTI Line2
    EXTI3_IRQHandler,                  // EXTI Line3
    EXTI4_IRQHandler,                  // EXTI Line4
    DMA1_Stream0_IRQHandler,           // DMA1 Stream 0
    DMA1_Stream1_IRQHandler,           // DMA1 Stream 1
    DMA1_Stream2_IRQHandler,           // DMA1 Stream 2
    DMA1_Stream3_IRQHandler,           // DMA1 Stream 3
    DMA1_Stream4_IRQHandler,           // DMA1 Stream 4
    DMA1_Stream5_IRQHandler,           // DMA1 Stream 5
    DMA1_Stream6_IRQHandler,           // DMA1 Stream 6
    ADC_IRQHandler,                    // ADC1, ADC2
    FDCAN1_IT0_IRQHandler,             // FDCAN1 interrupt line 0
    FDCAN2_IT0_IRQHandler,             // FDCAN2 interrupt line 0
    FDCAN1_IT1_IRQHandler,             // FDCAN1 interrupt line 1
    FDCAN2_IT1_IRQHandler,             // FDCAN2 interrupt line 1
    EXTI9_5_IRQHandler,                // External Line[9:5]s
    TIM1_BRK_IRQHandler,               // TIM1 Break interrupt
    TIM1_UP_IRQHandler,                // TIM1 Update Interrupt
    TIM1_TRG_COM_IRQHandler,           // TIM1 Trigger and Commutation Interrupt
    TIM1_CC_IRQHandler,                // TIM1 Capture Compare
    TIM2_IRQHandler,                   // TIM2
    TIM3_IRQHandler,                   // TIM3
    TIM4_IRQHandler,                   // TIM4
    I2C1_EV_IRQHandler,                // I2C1 Event
    I2C1_ER_IRQHandler,                // I2C1 Error
    I2C2_EV_IRQHandler,                // I2C2 Event
    I2C2_ER_IRQHandler,                // I2C2 Error
    SPI1_IRQHandler,                   // SPI1
    SPI2_IRQHandler,                   // SPI2
    USART1_IRQHandler,                 // USART1
    USART2_IRQHandler,                 // USART2
    USART3_IRQHandler,                 // USART3
    EXTI15_10_IRQHandler,              // External Line[15:10]
    RTC_Alarm_IRQHandler,              // RTC Alarm (A and B) through EXTI Line
    0,                                 // Reserved
    TIM8_BRK_TIM12_IRQHandler,         // TIM8 Break Interrupt and TIM12 global interrupt
    TIM8_UP_TIM13_IRQHandler,          // TIM8 Update Interrupt and TIM13 global interrupt
    TIM8_TRG_COM_TIM14_IRQHandler,     // TIM8 Trigger and Commutation Interrupt and TIM14 global interrupt
    TIM8_CC_IRQHandler,                // TIM8 Capture Compare Interrupt
    DMA1_Stream7_IRQHandler,           // DMA1 Stream7
    FMC_IRQHandler,                    // FMC
    SDMMC1_IRQHandler,                 // SDMMC1
    TIM5_IRQHandler,                   // TIM5
    SPI3_IRQHandler,                   // SPI3
    UART4_IRQHandler,                  // UART4
    UART5_IRQHandler,                  // UART5
    TIM6_DAC_IRQHandler,               // TIM6 and DAC1&2 underrun errors
    TIM7_IRQHandler,                   // TIM7
    DMA2_Stream0_IRQHandler,           // DMA2 Stream 0
    DMA2_Stream1_IRQHandler,           // DMA2 Stream 1
    DMA2_Stream2_IRQHandler,           // DMA2 Stream 2
    DMA2_Stream3_IRQHandler,           // DMA2 Stream 3
    DMA2_Stream4_IRQHandler,           // DMA2 Stream 4
    ETH_IRQHandler,                    // Ethernet
    ETH_WKUP_IRQHandler,               // Ethernet Wakeup through EXTI line
    FDCAN_CAL_IRQHandler,              // FDCAN calibration unit interrupt
    CM7_SEV_IRQHandler,                // CM7 Send event interrupt for CM4
    CM4_SEV_IRQHandler,                // CM4 Send event interrupt for CM7
    0,                                 // Reserved
    0,                                 // Reserved
    DMA2_Stream5_IRQHandler,           // DMA2 Stream 5
    DMA2_Stream6_IRQHandler,           // DMA2 Stream 6
    DMA2_Stream7_IRQHandler,           // DMA2 Stream 7
    USART6_IRQHandler,                 // USART6
    I2C3_EV_IRQHandler,                // I2C3 event
    I2C3_ER_IRQHandler,                // I2C3 error
    OTG_HS_EP1_OUT_IRQHandler,         // USB OTG HS End Point 1 Out
    OTG_HS_EP1_IN_IRQHandler,          // USB OTG HS End Point 1 In
    OTG_HS_WKUP_IRQHandler,            // USB OTG HS Wakeup through EXTI
    OTG_HS_IRQHandler,                 // USB OTG HS
    DCMI_IRQHandler,                   // DCMI
    0,                                 // Reserved
    RNG_IRQHandler,                    // Rng
    FPU_IRQHandler,                    // FPU
    UART7_IRQHandler,                  // UART7
    UART8_IRQHandler,                  // UART8
    SPI4_IRQHandler,                   // SPI4
    SPI5_IRQHandler,                   // SPI5
    SPI6_IRQHandler,                   // SPI6
    SAI1_IRQHandler,                   // SAI1
    LTDC_IRQHandler,                   // LTDC
    LTDC_ER_IRQHandler,                // LTDC error
    DMA2D_IRQHandler,                  // DMA2D
    SAI2_IRQHandler,                   // SAI2
    QUADSPI_IRQHandler,                // QUADSPI
    LPTIM1_IRQHandler,                 // LPTIM1
    CEC_IRQHandler,                    // HDMI_CEC
    I2C4_EV_IRQHandler,                // I2C4 Event
    I2C4_ER_IRQHandler,                // I2C4 Error
    SPDIF_RX_IRQHandler,               // SPDIF_RX
    OTG_FS_EP1_OUT_IRQHandler,         // USB OTG FS End Point 1 Out
    OTG_FS_EP1_IN_IRQHandler,          // USB OTG FS End Point 1 In
    OTG_FS_WKUP_IRQHandler,            // USB OTG FS Wakeup through EXTI
    OTG_FS_IRQHandler,                 // USB OTG FS
    DMAMUX1_OVR_IRQHandler,            // DMAMUX1 Overrun interrupt
    HRTIM1_Master_IRQHandler,          //  HRTIM Master Timer global Interrupts
    HRTIM1_TIMA_IRQHandler,            //  HRTIM Timer A global Interrupt
    HRTIM1_TIMB_IRQHandler,            //  HRTIM Timer B global Interrupt
    HRTIM1_TIMC_IRQHandler,            //  HRTIM Timer C global Interrupt
    HRTIM1_TIMD_IRQHandler,            //  HRTIM Timer D global Interrupt
    HRTIM1_TIME_IRQHandler,            //  HRTIM Timer E global Interrupt
    HRTIM1_FLT_IRQHandler,             //  HRTIM Fault global Interrupt
    DFSDM1_FLT0_IRQHandler,            // DFSDM Filter0 Interrupt
    DFSDM1_FLT1_IRQHandler,            // DFSDM Filter1 Interrupt
    DFSDM1_FLT2_IRQHandler,            // DFSDM Filter2 Interrupt
    DFSDM1_FLT3_IRQHandler,            // DFSDM Filter3 Interrupt
    SAI3_IRQHandler,                   //  SAI3 global Interrupt
    SWPMI1_IRQHandler,                 //  Serial Wire Interface 1 global interrupt
    TIM15_IRQHandler,                  //  TIM15 global Interrupt
    TIM16_IRQHandler,                  //  TIM16 global Interrupt
    TIM17_IRQHandler,                  //  TIM17 global Interrupt
    MDIOS_WKUP_IRQHandler,             //  MDIOS Wakeup  Interrupt
    MDIOS_IRQHandler,                  //  MDIOS global Interrupt
    JPEG_IRQHandler,                   //  JPEG global Interrupt
    MDMA_IRQHandler,                   //  MDMA global Interrupt
    DSI_IRQHandler,                    //  DSI global Interrupt
    SDMMC2_IRQHandler,                 //  SDMMC2 global Interrupt
    HSEM1_IRQHandler,                  //  HSEM1 global Interrupt
    HSEM2_IRQHandler,                  //  HSEM2 global Interrupt
    ADC3_IRQHandler,                   //  ADC3 global Interrupt
    DMAMUX2_OVR_IRQHandler,            // DMAMUX Overrun interrupt
    BDMA_Channel0_IRQHandler,          //  BDMA Channel 0 global Interrupt
    BDMA_Channel1_IRQHandler,          //  BDMA Channel 1 global Interrupt
    BDMA_Channel2_IRQHandler,          //  BDMA Channel 2 global Interrupt
    BDMA_Channel3_IRQHandler,          //  BDMA Channel 3 global Interrupt
    BDMA_Channel4_IRQHandler,          //  BDMA Channel 4 global Interrupt
    BDMA_Channel5_IRQHandler,          //  BDMA Channel 5 global Interrupt
    BDMA_Channel6_IRQHandler,          //  BDMA Channel 6 global Interrupt
    BDMA_Channel7_IRQHandler,          //  BDMA Channel 7 global Interrupt
    COMP1_IRQHandler,                  //  COMP1 global Interrupt
    LPTIM2_IRQHandler,                 //  LP TIM2 global interrupt
    LPTIM3_IRQHandler,                 //  LP TIM3 global interrupt
    LPTIM4_IRQHandler,                 //  LP TIM4 global interrupt
    LPTIM5_IRQHandler,                 //  LP TIM5 global interrupt
    LPUART1_IRQHandler,                //  LP UART1 interrupt
    WWDG_RST_IRQHandler,               // Window Watchdog reset interrupt (exti_d2_wwdg_it, exti_d1_wwdg_it)
    CRS_IRQHandler,                    //  Clock Recovery Global Interrupt
    ECC_IRQHandler,                    // ECC diagnostic Global Interrupt
    SAI4_IRQHandler,                   //  SAI4 global interrupt
    0,                                 // Reserved
    HOLD_CORE_IRQHandler,              //  Hold core interrupt
    WAKEUP_PIN_IRQHandler,             //  Interrupt for all 6 wake-up pins
};

#pragma GCC diagnostic pop

// ----------------------------------------------------------------------------

/**
 * The processor ends up here if an unexpected interrupt occurs or a
 * specific handler is not present in the application code.
 * When in DEBUG, trigger a debug exception to clearly notify
 * the user of the exception and help identify the cause.
 */
void __attribute__ ((section(".after_vectors")))
Default_Handler(void)
{
#if defined(DEBUG)
  micro_os_plus_architecture_brk();
#endif
  while (1)
    {
    }
}

// ----------------------------------------------------------------------------
