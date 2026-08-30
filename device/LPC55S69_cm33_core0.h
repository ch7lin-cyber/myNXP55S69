/*
** ###################################################################
**     Processors:          LPC55S69JBD100_cm33_core0
**                          LPC55S69JBD64_cm33_core0
**                          LPC55S69JEV98_cm33_core0
**
**     Compilers:           GNU C Compiler
**                          IAR ANSI C/C++ Compiler for ARM
**                          Keil ARM C/C++ Compiler
**                          MCUXpresso Compiler
**
**     Reference manual:    LPC55S6x/LPC55S2x/LPC552x User manual(UM11126) Rev.1.3  16 May 2019
**     Version:             rev. 1.1, 2019-05-16
**     Build:               b200311
**
**     Abstract:
**         CMSIS Peripheral Access Layer for LPC55S69_cm33_core0
**
**     Copyright 1997-2016 Freescale Semiconductor, Inc.
**     Copyright 2016-2020 NXP
**     All rights reserved.
**
**     SPDX-License-Identifier: BSD-3-Clause
**
**     http:                 www.nxp.com
**     mail:                 support@nxp.com
**
**     Revisions:
**     - rev. 1.0 (2018-08-22)
**         Initial version based on v0.2UM
**     - rev. 1.1 (2019-05-16)
**         Initial A1 version based on v1.3UM
**
** ###################################################################
*/

/*!
 * @file LPC55S69_cm33_core0.h
 * @version 1.1
 * @date 2019-05-16
 * @brief CMSIS Peripheral Access Layer for LPC55S69_cm33_core0
 *
 * CMSIS Peripheral Access Layer for LPC55S69_cm33_core0
 */

#ifndef _LPC55S69_CM33_CORE0_H_
#define _LPC55S69_CM33_CORE0_H_                  /**< Symbol preventing repeated inclusion */

/** Memory map major version (memory maps with equal major version number are
 * compatible) */
#define MCU_MEM_MAP_VERSION 0x0100U
/** Memory map minor version */
#define MCU_MEM_MAP_VERSION_MINOR 0x0001U


/* ----------------------------------------------------------------------------
   -- Interrupt vector numbers
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup Interrupt_vector_numbers Interrupt vector numbers
 * @{
 */

/** Interrupt Number Definitions */
#define NUMBER_OF_INT_VECTORS 76                 /**< Number of interrupts in the Vector table */

typedef enum IRQn {
  /* Auxiliary constants */
  NotAvail_IRQn                = -128,             /**< Not available device specific interrupt */

  /* Core interrupts */
  NonMaskableInt_IRQn          = -14,              /**< Non Maskable Interrupt */
  HardFault_IRQn               = -13,              /**< Cortex-M33 SV Hard Fault Interrupt */
  MemoryManagement_IRQn        = -12,              /**< Cortex-M33 Memory Management Interrupt */
  BusFault_IRQn                = -11,              /**< Cortex-M33 Bus Fault Interrupt */
  UsageFault_IRQn              = -10,              /**< Cortex-M33 Usage Fault Interrupt */
  SecureFault_IRQn             = -9,               /**< Cortex-M33 Secure Fault Interrupt */
  SVCall_IRQn                  = -5,               /**< Cortex-M33 SV Call Interrupt */
  DebugMonitor_IRQn            = -4,               /**< Cortex-M33 Debug Monitor Interrupt */
  PendSV_IRQn                  = -2,               /**< Cortex-M33 Pend SV Interrupt */
  SysTick_IRQn                 = -1,               /**< Cortex-M33 System Tick Interrupt */

  /* Device specific interrupts */
  WDT_BOD_IRQn                 = 0,                /**< Windowed watchdog timer, Brownout detect, Flash interrupt */
  DMA0_IRQn                    = 1,                /**< DMA0 controller */
  GINT0_IRQn                   = 2,                /**< GPIO group 0 */
  GINT1_IRQn                   = 3,                /**< GPIO group 1 */
  PIN_INT0_IRQn                = 4,                /**< Pin interrupt 0 or pattern match engine slice 0 */
  PIN_INT1_IRQn                = 5,                /**< Pin interrupt 1or pattern match engine slice 1 */
  PIN_INT2_IRQn                = 6,                /**< Pin interrupt 2 or pattern match engine slice 2 */
  PIN_INT3_IRQn                = 7,                /**< Pin interrupt 3 or pattern match engine slice 3 */
  UTICK0_IRQn                  = 8,                /**< Micro-tick Timer */
  MRT0_IRQn                    = 9,                /**< Multi-rate timer */
  CTIMER0_IRQn                 = 10,               /**< Standard counter/timer CTIMER0 */
  CTIMER1_IRQn                 = 11,               /**< Standard counter/timer CTIMER1 */
  SCT0_IRQn                    = 12,               /**< SCTimer/PWM */
  CTIMER3_IRQn                 = 13,               /**< Standard counter/timer CTIMER3 */
  FLEXCOMM0_IRQn               = 14,               /**< Flexcomm Interface 0 (USART, SPI, I2C, I2S, FLEXCOMM) */
  FLEXCOMM1_IRQn               = 15,               /**< Flexcomm Interface 1 (USART, SPI, I2C, I2S, FLEXCOMM) */
  FLEXCOMM2_IRQn               = 16,               /**< Flexcomm Interface 2 (USART, SPI, I2C, I2S, FLEXCOMM) */
  FLEXCOMM3_IRQn               = 17,               /**< Flexcomm Interface 3 (USART, SPI, I2C, I2S, FLEXCOMM) */
  FLEXCOMM4_IRQn               = 18,               /**< Flexcomm Interface 4 (USART, SPI, I2C, I2S, FLEXCOMM) */
  FLEXCOMM5_IRQn               = 19,               /**< Flexcomm Interface 5 (USART, SPI, I2C, I2S, FLEXCOMM) */
  FLEXCOMM6_IRQn               = 20,               /**< Flexcomm Interface 6 (USART, SPI, I2C, I2S, FLEXCOMM) */
  FLEXCOMM7_IRQn               = 21,               /**< Flexcomm Interface 7 (USART, SPI, I2C, I2S, FLEXCOMM) */
  ADC0_IRQn                    = 22,               /**< ADC0  */
  Reserved39_IRQn              = 23,               /**< Reserved interrupt */
  ACMP_IRQn                    = 24,               /**< ACMP  interrupts */
  Reserved41_IRQn              = 25,               /**< Reserved interrupt */
  Reserved42_IRQn              = 26,               /**< Reserved interrupt */
  USB0_NEEDCLK_IRQn            = 27,               /**< USB Activity Wake-up Interrupt */
  USB0_IRQn                    = 28,               /**< USB device */
  RTC_IRQn                     = 29,               /**< RTC alarm and wake-up interrupts */
  Reserved46_IRQn              = 30,               /**< Reserved interrupt */
  MAILBOX_IRQn                 = 31,               /**< WAKEUP,Mailbox interrupt (present on selected devices) */
  PIN_INT4_IRQn                = 32,               /**< Pin interrupt 4 or pattern match engine slice 4 int */
  PIN_INT5_IRQn                = 33,               /**< Pin interrupt 5 or pattern match engine slice 5 int */
  PIN_INT6_IRQn                = 34,               /**< Pin interrupt 6 or pattern match engine slice 6 int */
  PIN_INT7_IRQn                = 35,               /**< Pin interrupt 7 or pattern match engine slice 7 int */
  CTIMER2_IRQn                 = 36,               /**< Standard counter/timer CTIMER2 */
  CTIMER4_IRQn                 = 37,               /**< Standard counter/timer CTIMER4 */
  OS_EVENT_IRQn                = 38,               /**< OSEVTIMER0 and OSEVTIMER0_WAKEUP interrupts */
  Reserved55_IRQn              = 39,               /**< Reserved interrupt */
  Reserved56_IRQn              = 40,               /**< Reserved interrupt */
  Reserved57_IRQn              = 41,               /**< Reserved interrupt */
  SDIO_IRQn                    = 42,               /**< SD/MMC  */
  Reserved59_IRQn              = 43,               /**< Reserved interrupt */
  Reserved60_IRQn              = 44,               /**< Reserved interrupt */
  Reserved61_IRQn              = 45,               /**< Reserved interrupt */
  USB1_PHY_IRQn                = 46,               /**< USB1_PHY */
  USB1_IRQn                    = 47,               /**< USB1 interrupt */
  USB1_NEEDCLK_IRQn            = 48,               /**< USB1 activity */
  SEC_HYPERVISOR_CALL_IRQn     = 49,               /**< SEC_HYPERVISOR_CALL interrupt */
  SEC_GPIO_INT0_IRQ0_IRQn      = 50,               /**< SEC_GPIO_INT0_IRQ0 interrupt */
  SEC_GPIO_INT0_IRQ1_IRQn      = 51,               /**< SEC_GPIO_INT0_IRQ1 interrupt */
  PLU_IRQn                     = 52,               /**< PLU interrupt */
  SEC_VIO_IRQn                 = 53,               /**< SEC_VIO interrupt */
  HASHCRYPT_IRQn               = 54,               /**< HASHCRYPT interrupt */
  CASER_IRQn                   = 55,               /**< CASPER interrupt */
  PUF_IRQn                     = 56,               /**< PUF interrupt */
  PQ_IRQn                      = 57,               /**< PQ interrupt */
  DMA1_IRQn                    = 58,               /**< DMA1 interrupt */
  FLEXCOMM8_IRQn               = 59                /**< Flexcomm Interface 8 (SPI, , FLEXCOMM) */
} IRQn_Type;

/*!
 * @}
 */ /* end of group Interrupt_vector_numbers */


/* ----------------------------------------------------------------------------
   -- Cortex M33 Core Configuration
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup Cortex_Core_Configuration Cortex M33 Core Configuration
 * @{
 */

#define __MPU_PRESENT                  1         /**< Defines if an MPU is present or not */
#define __NVIC_PRIO_BITS               3         /**< Number of priority bits implemented in the NVIC */
#define __Vendor_SysTickConfig         0         /**< Vendor specific implementation of SysTickConfig is defined */
#define __FPU_PRESENT                  1         /**< Defines if an FPU is present or not */
#define __DSP_PRESENT                  1         /**< Defines if Armv8-M Mainline core supports DSP instructions */
#define __SAUREGION_PRESENT            1         /**< Defines if an SAU is present or not */

#include "core_cm33.h"                 /* Core Peripheral Access Layer */
#include "system_LPC55S69_cm33_core0.h" /* Device specific configuration file */

/*!
 * @}
 */ /* end of group Cortex_Core_Configuration */


/* ----------------------------------------------------------------------------
   -- Mapping Information
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup Mapping_Information Mapping Information
 * @{
 */

/** Mapping Information */
/*!
 * @addtogroup dma_request
 * @{
 */

/*******************************************************************************
 * Definitions
 ******************************************************************************/

/*!
 * @brief Structure for the DMA hardware request
 *
 * Defines the structure for the DMA hardware request collections. The user can configure the
 * hardware request to trigger the DMA transfer accordingly. The index
 * of the hardware request varies according  to the to SoC.
 */
typedef enum _dma_request_source
{
    kDma0RequestHashCrypt           = 0U,          /**< HashCrypt */
    kDma1RequestHashCrypt           = 0U,          /**< HashCrypt */
    kDma0RequestNoDMARequest1       = 1U,          /**< No DMA request 1 */
    kDma1RequestNoDMARequest1       = 1U,          /**< No DMA request 1 */
    kDma0RequestFlexcomm8Rx         = 2U,          /**< Flexcomm Interface 8 RX */
    kDma1RequestFlexcomm8Rx         = 2U,          /**< Flexcomm Interface 8 RX */
    kDma0RequestFlexcomm8Tx         = 3U,          /**< Flexcomm Interface 8 TX */
    kDma1RequestFlexcomm8Tx         = 3U,          /**< Flexcomm Interface 8 TX */
    kDma0RequestFlexcomm0Rx         = 4U,          /**< Flexcomm Interface 0 RX/I2C Slave */
    kDma1RequestFlexcomm0Rx         = 4U,          /**< Flexcomm Interface 0 RX/I2C Slave */
    kDma0RequestFlexcomm0Tx         = 5U,          /**< Flexcomm Interface 0 TX/I2C Master */
    kDma1RequestFlexcomm0Tx         = 5U,          /**< Flexcomm Interface 0 TX/I2C Master */
    kDma0RequestFlexcomm1Rx         = 6U,          /**< Flexcomm Interface 1 RX/I2C Slave */
    kDma1RequestFlexcomm1Rx         = 6U,          /**< Flexcomm Interface 1 RX/I2C Slave */
    kDma0RequestFlexcomm1Tx         = 7U,          /**< Flexcomm Interface 1 TX/I2C Master */
    kDma1RequestFlexcomm1Tx         = 7U,          /**< Flexcomm Interface 1 TX/I2C Master */
    kDma0RequestFlexcomm3Rx         = 8U,          /**< Flexcomm Interface 3 RX/I2C Slave */
    kDma1RequestFlexcomm3Rx         = 8U,          /**< Flexcomm Interface 3 RX/I2C Slave */
    kDma0RequestFlexcomm3Tx         = 9U,          /**< Flexcomm Interface 3 TX/I2C Master */
    kDma1RequestFlexcomm3Tx         = 9U,          /**< Flexcomm Interface 3 TX/I2C Master */
    kDma0RequestFlexcomm2Rx         = 10U,         /**< Flexcomm Interface 2 RX/I2C Slave */
    kDma0RequestFlexcomm2Tx         = 11U,         /**< Flexcomm Interface 2 TX/I2C Master */
    kDma0RequestFlexcomm4Rx         = 12U,         /**< Flexcomm Interface 4 RX/I2C Slave */
    kDma0RequestFlexcomm4Tx         = 13U,         /**< Flexcomm Interface 4 TX/I2C Master */
    kDma0RequestFlexcomm5Rx         = 14U,         /**< Flexcomm Interface 5 RX/I2C Slave */
    kDma0RequestFlexcomm5Tx         = 15U,         /**< Flexcomm Interface 5 TX/I2C Master */
    kDma0RequestFlexcomm6Rx         = 16U,         /**< Flexcomm Interface 6 RX/I2C Slave */
    kDma0RequestFlexcomm6Tx         = 17U,         /**< Flexcomm Interface 6 TX/I2C Master */
    kDma0RequestFlexcomm7Rx         = 18U,         /**< Flexcomm Interface 7 RX/I2C Slave */
    kDma0RequestFlexcomm7Tx         = 19U,         /**< Flexcomm Interface 7 TX/I2C Master */
    kDma0RequestNoDMARequest20      = 20U,         /**< No DMA request 20 */
    kDma0RequestADC0FIFO0           = 21U,         /**< ADC0 FIFO 0 */
    kDma0RequestADC0FIFO1           = 22U,         /**< ADC0 FIFO 1 */
} dma_request_source_t;

/* @} */


/*!
 * @}
 */ /* end of group Mapping_Information */


/* ----------------------------------------------------------------------------
   -- Device Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup Peripheral_access_layer Device Peripheral Access Layer
 * @{
 */


/*
** Start of section using anonymous unions
*/

#if defined(__ARMCC_VERSION)
  #if (__ARMCC_VERSION >= 6010050)
    #pragma clang diagnostic push
  #else
    #pragma push
    #pragma anon_unions
  #endif
#elif defined(__GNUC__)
  /* anonymous unions are enabled by default */
#elif defined(__IAR_SYSTEMS_ICC__)
  #pragma language=extended
#else
  #error Not supported compiler type
#endif

/* ----------------------------------------------------------------------------
   -- ADC Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup ADC_Peripheral_Access_Layer ADC Peripheral Access Layer
 * @{
 */

/** ADC - Register Layout Typedef */
typedef struct {
  __I  uint32_t VERID;                             /**< Version ID Register, offset: 0x0 */
  __I  uint32_t PARAM;                             /**< Parameter Register, offset: 0x4 */
       uint8_t RESERVED_0[8];
  __IO uint32_t CTRL;                              /**< ADC Control Register, offset: 0x10 */
  __IO uint32_t STAT;                              /**< ADC Status Register, offset: 0x14 */
  __IO uint32_t IE;                                /**< Interrupt Enable Register, offset: 0x18 */
  __IO uint32_t DE;                                /**< DMA Enable Register, offset: 0x1C */
  __IO uint32_t CFG;                               /**< ADC Configuration Register, offset: 0x20 */
  __IO uint32_t PAUSE;                             /**< ADC Pause Register, offset: 0x24 */
       uint8_t RESERVED_1[12];
  __O  uint32_t SWTRIG;                            /**< Software Trigger Register, offset: 0x34 */
  __IO uint32_t TSTAT;                             /**< Trigger Status Register, offset: 0x38 */
       uint8_t RESERVED_2[4];
  __IO uint32_t OFSTRIM;                           /**< ADC Offset Trim Register, offset: 0x40 */
       uint8_t RESERVED_3[92];
  __IO uint32_t TCTRL[16];                         /**< Trigger Control Register, array offset: 0xA0, array step: 0x4 */
  __IO uint32_t FCTRL[2];                          /**< FIFO Control Register, array offset: 0xE0, array step: 0x4 */
       uint8_t RESERVED_4[8];
  __I  uint32_t GCC[2];                            /**< Gain Calibration Control, array offset: 0xF0, array step: 0x4 */
  __IO uint32_t GCR[2];                            /**< Gain Calculation Result, array offset: 0xF8, array step: 0x4 */
  struct {                                         /* offset: 0x100, array step: 0x8 */
    __IO uint32_t CMDL;                              /**< ADC Command Low Buffer Register, array offset: 0x100, array step: 0x8 */
    __IO uint32_t CMDH;                              /**< ADC Command High Buffer Register, array offset: 0x104, array step: 0x8 */
  } CMD[15];
       uint8_t RESERVED_5[136];
  __IO uint32_t CV[4];                             /**< Compare Value Register, array offset: 0x200, array step: 0x4 */
       uint8_t RESERVED_6[240];
  __I  uint32_t RESFIFO[2];                        /**< ADC Data Result FIFO Register, array offset: 0x300, array step: 0x4 */
       uint8_t RESERVED_7[248];
  __IO uint32_t CAL_GAR[33];                       /**< Calibration General A-Side Registers, array offset: 0x400, array step: 0x4 */
       uint8_t RESERVED_8[124];
  __IO uint32_t CAL_GBR[33];                       /**< Calibration General B-Side Registers, array offset: 0x500, array step: 0x4 */
       uint8_t RESERVED_9[2680];
  __IO uint32_t TST;                               /**< ADC Test Register, offset: 0xFFC */
} ADC_Type;

/* ----------------------------------------------------------------------------
   -- ADC Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup ADC_Register_Masks ADC Register Masks
 * @{
 */

/*! @name VERID - Version ID Register */
/*! @{ */
#define ADC_VERID_RES_MASK                       (0x1U)
#define ADC_VERID_RES_SHIFT                      (0U)
/*! RES - Resolution
 *  0b0..Up to 13-bit differential/12-bit single ended resolution supported.
 *  0b1..Up to 16-bit differential/16-bit single ended resolution supported.
 */
#define ADC_VERID_RES(x)                         (((uint32_t)(((uint32_t)(x)) << ADC_VERID_RES_SHIFT)) & ADC_VERID_RES_MASK)
#define ADC_VERID_DIFFEN_MASK                    (0x2U)
#define ADC_VERID_DIFFEN_SHIFT                   (1U)
/*! DIFFEN - Differential Supported
 *  0b0..Differential operation not supported.
 *  0b1..Differential operation supported. CMDLa[CTYPE] controls fields implemented.
 */
#define ADC_VERID_DIFFEN(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_VERID_DIFFEN_SHIFT)) & ADC_VERID_DIFFEN_MASK)
#define ADC_VERID_MVI_MASK                       (0x8U)
#define ADC_VERID_MVI_SHIFT                      (3U)
/*! MVI - Multi Vref Implemented
 *  0b0..Single voltage reference high (VREFH) input supported.
 *  0b1..Multiple voltage reference high (VREFH) inputs supported.
 */
#define ADC_VERID_MVI(x)                         (((uint32_t)(((uint32_t)(x)) << ADC_VERID_MVI_SHIFT)) & ADC_VERID_MVI_MASK)
#define ADC_VERID_CSW_MASK                       (0x70U)
#define ADC_VERID_CSW_SHIFT                      (4U)
/*! CSW - Channel Scale Width
 *  0b000..Channel scaling not supported.
 *  0b001..Channel scaling supported. 1-bit CSCALE control field.
 *  0b110..Channel scaling supported. 6-bit CSCALE control field.
 */
#define ADC_VERID_CSW(x)                         (((uint32_t)(((uint32_t)(x)) << ADC_VERID_CSW_SHIFT)) & ADC_VERID_CSW_MASK)
#define ADC_VERID_VR1RNGI_MASK                   (0x100U)
#define ADC_VERID_VR1RNGI_SHIFT                  (8U)
/*! VR1RNGI - Voltage Reference 1 Range Control Bit Implemented
 *  0b0..Range control not required. CFG[VREF1RNG] is not implemented.
 *  0b1..Range control required. CFG[VREF1RNG] is implemented.
 */
#define ADC_VERID_VR1RNGI(x)                     (((uint32_t)(((uint32_t)(x)) << ADC_VERID_VR1RNGI_SHIFT)) & ADC_VERID_VR1RNGI_MASK)
#define ADC_VERID_IADCKI_MASK                    (0x200U)
#define ADC_VERID_IADCKI_SHIFT                   (9U)
/*! IADCKI - Internal ADC Clock implemented
 *  0b0..Internal clock source not implemented.
 *  0b1..Internal clock source (and CFG[ADCKEN]) implemented.
 */
#define ADC_VERID_IADCKI(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_VERID_IADCKI_SHIFT)) & ADC_VERID_IADCKI_MASK)
#define ADC_VERID_CALOFSI_MASK                   (0x400U)
#define ADC_VERID_CALOFSI_SHIFT                  (10U)
/*! CALOFSI - Calibration Function Implemented
 *  0b0..Calibration Not Implemented.
 *  0b1..Calibration Implemented.
 */
#define ADC_VERID_CALOFSI(x)                     (((uint32_t)(((uint32_t)(x)) << ADC_VERID_CALOFSI_SHIFT)) & ADC_VERID_CALOFSI_MASK)
#define ADC_VERID_NUM_SEC_MASK                   (0x800U)
#define ADC_VERID_NUM_SEC_SHIFT                  (11U)
/*! NUM_SEC - Number of Single Ended Outputs Supported
 *  0b0..This design supports one single ended conversion at a time.
 *  0b1..This design supports two simultanious single ended conversions.
 */
#define ADC_VERID_NUM_SEC(x)                     (((uint32_t)(((uint32_t)(x)) << ADC_VERID_NUM_SEC_SHIFT)) & ADC_VERID_NUM_SEC_MASK)
#define ADC_VERID_NUM_FIFO_MASK                  (0x7000U)
#define ADC_VERID_NUM_FIFO_SHIFT                 (12U)
/*! NUM_FIFO - Number of FIFOs
 *  0b000..N/A
 *  0b001..This design supports one result FIFO.
 *  0b010..This design supports two result FIFOs.
 *  0b011..This design supports three result FIFOs.
 *  0b100..This design supports four result FIFOs.
 */
#define ADC_VERID_NUM_FIFO(x)                    (((uint32_t)(((uint32_t)(x)) << ADC_VERID_NUM_FIFO_SHIFT)) & ADC_VERID_NUM_FIFO_MASK)
#define ADC_VERID_MINOR_MASK                     (0xFF0000U)
#define ADC_VERID_MINOR_SHIFT                    (16U)
/*! MINOR - Minor Version Number
 */
#define ADC_VERID_MINOR(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_VERID_MINOR_SHIFT)) & ADC_VERID_MINOR_MASK)
#define ADC_VERID_MAJOR_MASK                     (0xFF000000U)
#define ADC_VERID_MAJOR_SHIFT                    (24U)
/*! MAJOR - Major Version Number
 */
#define ADC_VERID_MAJOR(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_VERID_MAJOR_SHIFT)) & ADC_VERID_MAJOR_MASK)
/*! @} */

/*! @name PARAM - Parameter Register */
/*! @{ */
#define ADC_PARAM_TRIG_NUM_MASK                  (0xFFU)
#define ADC_PARAM_TRIG_NUM_SHIFT                 (0U)
/*! TRIG_NUM - Trigger Number
 */
#define ADC_PARAM_TRIG_NUM(x)                    (((uint32_t)(((uint32_t)(x)) << ADC_PARAM_TRIG_NUM_SHIFT)) & ADC_PARAM_TRIG_NUM_MASK)
#define ADC_PARAM_FIFOSIZE_MASK                  (0xFF00U)
#define ADC_PARAM_FIFOSIZE_SHIFT                 (8U)
/*! FIFOSIZE - Result FIFO Depth
 *  0b00000001..Result FIFO depth = 1 dataword.
 *  0b00000100..Result FIFO depth = 4 datawords.
 *  0b00001000..Result FIFO depth = 8 datawords.
 *  0b00010000..Result FIFO depth = 16 datawords.
 *  0b00100000..Result FIFO depth = 32 datawords.
 *  0b01000000..Result FIFO depth = 64 datawords.
 */
#define ADC_PARAM_FIFOSIZE(x)                    (((uint32_t)(((uint32_t)(x)) << ADC_PARAM_FIFOSIZE_SHIFT)) & ADC_PARAM_FIFOSIZE_MASK)
#define ADC_PARAM_CV_NUM_MASK                    (0xFF0000U)
#define ADC_PARAM_CV_NUM_SHIFT                   (16U)
/*! CV_NUM - Compare Value Number
 */
#define ADC_PARAM_CV_NUM(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_PARAM_CV_NUM_SHIFT)) & ADC_PARAM_CV_NUM_MASK)
#define ADC_PARAM_CMD_NUM_MASK                   (0xFF000000U)
#define ADC_PARAM_CMD_NUM_SHIFT                  (24U)
/*! CMD_NUM - Command Buffer Number
 */
#define ADC_PARAM_CMD_NUM(x)                     (((uint32_t)(((uint32_t)(x)) << ADC_PARAM_CMD_NUM_SHIFT)) & ADC_PARAM_CMD_NUM_MASK)
/*! @} */

/*! @name CTRL - ADC Control Register */
/*! @{ */
#define ADC_CTRL_ADCEN_MASK                      (0x1U)
#define ADC_CTRL_ADCEN_SHIFT                     (0U)
/*! ADCEN - ADC Enable
 *  0b0..ADC is disabled.
 *  0b1..ADC is enabled.
 */
#define ADC_CTRL_ADCEN(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_CTRL_ADCEN_SHIFT)) & ADC_CTRL_ADCEN_MASK)
#define ADC_CTRL_RST_MASK                        (0x2U)
#define ADC_CTRL_RST_SHIFT                       (1U)
/*! RST - Software Reset
 *  0b0..ADC logic is not reset.
 *  0b1..ADC logic is reset.
 */
#define ADC_CTRL_RST(x)                          (((uint32_t)(((uint32_t)(x)) << ADC_CTRL_RST_SHIFT)) & ADC_CTRL_RST_MASK)
#define ADC_CTRL_DOZEN_MASK                      (0x4U)
#define ADC_CTRL_DOZEN_SHIFT                     (2U)
/*! DOZEN - Doze Enable
 *  0b0..ADC is enabled in Doze mode.
 *  0b1..ADC is disabled in Doze mode.
 */
#define ADC_CTRL_DOZEN(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_CTRL_DOZEN_SHIFT)) & ADC_CTRL_DOZEN_MASK)
#define ADC_CTRL_CAL_REQ_MASK                    (0x8U)
#define ADC_CTRL_CAL_REQ_SHIFT                   (3U)
/*! CAL_REQ - Auto-Calibration Request
 *  0b0..No request for auto-calibration has been made.
 *  0b1..A request for auto-calibration has been made
 */
#define ADC_CTRL_CAL_REQ(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_CTRL_CAL_REQ_SHIFT)) & ADC_CTRL_CAL_REQ_MASK)
#define ADC_CTRL_CALOFS_MASK                     (0x10U)
#define ADC_CTRL_CALOFS_SHIFT                    (4U)
/*! CALOFS - Configure for offset calibration function
 *  0b0..Calibration function disabled
 *  0b1..Request for offset calibration function
 */
#define ADC_CTRL_CALOFS(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_CTRL_CALOFS_SHIFT)) & ADC_CTRL_CALOFS_MASK)
#define ADC_CTRL_RSTFIFO0_MASK                   (0x100U)
#define ADC_CTRL_RSTFIFO0_SHIFT                  (8U)
/*! RSTFIFO0 - Reset FIFO 0
 *  0b0..No effect.
 *  0b1..FIFO 0 is reset.
 */
#define ADC_CTRL_RSTFIFO0(x)                     (((uint32_t)(((uint32_t)(x)) << ADC_CTRL_RSTFIFO0_SHIFT)) & ADC_CTRL_RSTFIFO0_MASK)
#define ADC_CTRL_RSTFIFO1_MASK                   (0x200U)
#define ADC_CTRL_RSTFIFO1_SHIFT                  (9U)
/*! RSTFIFO1 - Reset FIFO 1
 *  0b0..No effect.
 *  0b1..FIFO 1 is reset.
 */
#define ADC_CTRL_RSTFIFO1(x)                     (((uint32_t)(((uint32_t)(x)) << ADC_CTRL_RSTFIFO1_SHIFT)) & ADC_CTRL_RSTFIFO1_MASK)
#define ADC_CTRL_CAL_AVGS_MASK                   (0x70000U)
#define ADC_CTRL_CAL_AVGS_SHIFT                  (16U)
/*! CAL_AVGS - Auto-Calibration Averages
 *  0b000..Single conversion.
 *  0b001..2 conversions averaged.
 *  0b010..4 conversions averaged.
 *  0b011..8 conversions averaged.
 *  0b100..16 conversions averaged.
 *  0b101..32 conversions averaged.
 *  0b110..64 conversions averaged.
 *  0b111..128 conversions averaged.
 */
#define ADC_CTRL_CAL_AVGS(x)                     (((uint32_t)(((uint32_t)(x)) << ADC_CTRL_CAL_AVGS_SHIFT)) & ADC_CTRL_CAL_AVGS_MASK)
/*! @} */

/*! @name STAT - ADC Status Register */
/*! @{ */
#define ADC_STAT_RDY0_MASK                       (0x1U)
#define ADC_STAT_RDY0_SHIFT                      (0U)
/*! RDY0 - Result FIFO 0 Ready Flag
 *  0b0..Result FIFO 0 data level not above watermark level.
 *  0b1..Result FIFO 0 holding data above watermark level.
 */
#define ADC_STAT_RDY0(x)                         (((uint32_t)(((uint32_t)(x)) << ADC_STAT_RDY0_SHIFT)) & ADC_STAT_RDY0_MASK)
#define ADC_STAT_FOF0_MASK                       (0x2U)
#define ADC_STAT_FOF0_SHIFT                      (1U)
/*! FOF0 - Result FIFO 0 Overflow Flag
 *  0b0..No result FIFO 0 overflow has occurred since the last time the flag was cleared.
 *  0b1..At least one result FIFO 0 overflow has occurred since the last time the flag was cleared.
 */
#define ADC_STAT_FOF0(x)                         (((uint32_t)(((uint32_t)(x)) << ADC_STAT_FOF0_SHIFT)) & ADC_STAT_FOF0_MASK)
#define ADC_STAT_RDY1_MASK                       (0x4U)
#define ADC_STAT_RDY1_SHIFT                      (2U)
/*! RDY1 - Result FIFO1 Ready Flag
 *  0b0..Result FIFO1 data level not above watermark level.
 *  0b1..Result FIFO1 holding data above watermark level.
 */
#define ADC_STAT_RDY1(x)                         (((uint32_t)(((uint32_t)(x)) << ADC_STAT_RDY1_SHIFT)) & ADC_STAT_RDY1_MASK)
#define ADC_STAT_FOF1_MASK                       (0x8U)
#define ADC_STAT_FOF1_SHIFT                      (3U)
/*! FOF1 - Result FIFO1 Overflow Flag
 *  0b0..No result FIFO1 overflow has occurred since the last time the flag was cleared.
 *  0b1..At least one result FIFO1 overflow has occurred since the last time the flag was cleared.
 */
#define ADC_STAT_FOF1(x)                         (((uint32_t)(((uint32_t)(x)) << ADC_STAT_FOF1_SHIFT)) & ADC_STAT_FOF1_MASK)
#define ADC_STAT_TEXC_INT_MASK                   (0x100U)
#define ADC_STAT_TEXC_INT_SHIFT                  (8U)
/*! TEXC_INT - Interrupt Flag For High Priority Trigger Exception
 *  0b0..No trigger exceptions have occurred.
 *  0b1..A trigger exception has occurred and is pending acknowledgement.
 */
#define ADC_STAT_TEXC_INT(x)                     (((uint32_t)(((uint32_t)(x)) << ADC_STAT_TEXC_INT_SHIFT)) & ADC_STAT_TEXC_INT_MASK)
#define ADC_STAT_TCOMP_INT_MASK                  (0x200U)
#define ADC_STAT_TCOMP_INT_SHIFT                 (9U)
/*! TCOMP_INT - Interrupt Flag For Trigger Completion
 *  0b0..Either IE[TCOMP_IE] is set to 0, or no trigger sequences have run to completion.
 *  0b1..Trigger sequence has been completed and all data is stored in the associated FIFO.
 */
#define ADC_STAT_TCOMP_INT(x)                    (((uint32_t)(((uint32_t)(x)) << ADC_STAT_TCOMP_INT_SHIFT)) & ADC_STAT_TCOMP_INT_MASK)
#define ADC_STAT_CAL_RDY_MASK                    (0x400U)
#define ADC_STAT_CAL_RDY_SHIFT                   (10U)
/*! CAL_RDY - Calibration Ready
 *  0b0..Calibration is incomplete or hasn't been ran.
 *  0b1..The ADC is calibrated.
 */
#define ADC_STAT_CAL_RDY(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_STAT_CAL_RDY_SHIFT)) & ADC_STAT_CAL_RDY_MASK)
#define ADC_STAT_ADC_ACTIVE_MASK                 (0x800U)
#define ADC_STAT_ADC_ACTIVE_SHIFT                (11U)
/*! ADC_ACTIVE - ADC Active
 *  0b0..The ADC is IDLE. There are no pending triggers to service and no active commands are being processed.
 *  0b1..The ADC is processing a conversion, running through the power up delay, or servicing a trigger.
 */
#define ADC_STAT_ADC_ACTIVE(x)                   (((uint32_t)(((uint32_t)(x)) << ADC_STAT_ADC_ACTIVE_SHIFT)) & ADC_STAT_ADC_ACTIVE_MASK)
#define ADC_STAT_TRGACT_MASK                     (0xF0000U)
#define ADC_STAT_TRGACT_SHIFT                    (16U)
/*! TRGACT - Trigger Active
 *  0b0000..Command (sequence) associated with Trigger 0 currently being executed.
 *  0b0001..Command (sequence) associated with Trigger 1 currently being executed.
 *  0b0010..Command (sequence) associated with Trigger 2 currently being executed.
 *  0b0011-0b1111..Command (sequence) from the associated Trigger number is currently being executed.
 */
#define ADC_STAT_TRGACT(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_STAT_TRGACT_SHIFT)) & ADC_STAT_TRGACT_MASK)
#define ADC_STAT_CMDACT_MASK                     (0xF000000U)
#define ADC_STAT_CMDACT_SHIFT                    (24U)
/*! CMDACT - Command Active
 *  0b0000..No command is currently in progress.
 *  0b0001..Command 1 currently being executed.
 *  0b0010..Command 2 currently being executed.
 *  0b0011-0b1111..Associated command number is currently being executed.
 */
#define ADC_STAT_CMDACT(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_STAT_CMDACT_SHIFT)) & ADC_STAT_CMDACT_MASK)
/*! @} */

/*! @name IE - Interrupt Enable Register */
/*! @{ */
#define ADC_IE_FWMIE0_MASK                       (0x1U)
#define ADC_IE_FWMIE0_SHIFT                      (0U)
/*! FWMIE0 - FIFO 0 Watermark Interrupt Enable
 *  0b0..FIFO 0 watermark interrupts are not enabled.
 *  0b1..FIFO 0 watermark interrupts are enabled.
 */
#define ADC_IE_FWMIE0(x)                         (((uint32_t)(((uint32_t)(x)) << ADC_IE_FWMIE0_SHIFT)) & ADC_IE_FWMIE0_MASK)
#define ADC_IE_FOFIE0_MASK                       (0x2U)
#define ADC_IE_FOFIE0_SHIFT                      (1U)
/*! FOFIE0 - Result FIFO 0 Overflow Interrupt Enable
 *  0b0..FIFO 0 overflow interrupts are not enabled.
 *  0b1..FIFO 0 overflow interrupts are enabled.
 */
#define ADC_IE_FOFIE0(x)                         (((uint32_t)(((uint32_t)(x)) << ADC_IE_FOFIE0_SHIFT)) & ADC_IE_FOFIE0_MASK)
#define ADC_IE_FWMIE1_MASK                       (0x4U)
#define ADC_IE_FWMIE1_SHIFT                      (2U)
/*! FWMIE1 - FIFO1 Watermark Interrupt Enable
 *  0b0..FIFO1 watermark interrupts are not enabled.
 *  0b1..FIFO1 watermark interrupts are enabled.
 */
#define ADC_IE_FWMIE1(x)                         (((uint32_t)(((uint32_t)(x)) << ADC_IE_FWMIE1_SHIFT)) & ADC_IE_FWMIE1_MASK)
#define ADC_IE_FOFIE1_MASK                       (0x8U)
#define ADC_IE_FOFIE1_SHIFT                      (3U)
/*! FOFIE1 - Result FIFO1 Overflow Interrupt Enable
 *  0b0..No result FIFO1 overflow has occurred since the last time the flag was cleared.
 *  0b1..At least one result FIFO1 overflow has occurred since the last time the flag was cleared.
 */
#define ADC_IE_FOFIE1(x)                         (((uint32_t)(((uint32_t)(x)) << ADC_IE_FOFIE1_SHIFT)) & ADC_IE_FOFIE1_MASK)
#define ADC_IE_TEXC_IE_MASK                      (0x100U)
#define ADC_IE_TEXC_IE_SHIFT                     (8U)
/*! TEXC_IE - Trigger Exception Interrupt Enable
 *  0b0..Trigger exception interrupts are disabled.
 *  0b1..Trigger exception interrupts are enabled.
 */
#define ADC_IE_TEXC_IE(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_IE_TEXC_IE_SHIFT)) & ADC_IE_TEXC_IE_MASK)
#define ADC_IE_TCOMP_IE_MASK                     (0xFFFF0000U)
#define ADC_IE_TCOMP_IE_SHIFT                    (16U)
/*! TCOMP_IE - Trigger Completion Interrupt Enable
 *  0b0000000000000000..Trigger completion interrupts are disabled.
 *  0b0000000000000001..Trigger completion interrupts are enabled for trigger source 0 only.
 *  0b0000000000000010..Trigger completion interrupts are enabled for trigger source 1 only.
 *  0b0000000000000011-0b1111111111111110..Associated trigger completion interrupts are enabled.
 *  0b1111111111111111..Trigger completion interrupts are enabled for every trigger source.
 */
#define ADC_IE_TCOMP_IE(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_IE_TCOMP_IE_SHIFT)) & ADC_IE_TCOMP_IE_MASK)
/*! @} */

/*! @name DE - DMA Enable Register */
/*! @{ */
#define ADC_DE_FWMDE0_MASK                       (0x1U)
#define ADC_DE_FWMDE0_SHIFT                      (0U)
/*! FWMDE0 - FIFO 0 Watermark DMA Enable
 *  0b0..DMA request disabled.
 *  0b1..DMA request enabled.
 */
#define ADC_DE_FWMDE0(x)                         (((uint32_t)(((uint32_t)(x)) << ADC_DE_FWMDE0_SHIFT)) & ADC_DE_FWMDE0_MASK)
#define ADC_DE_FWMDE1_MASK                       (0x2U)
#define ADC_DE_FWMDE1_SHIFT                      (1U)
/*! FWMDE1 - FIFO1 Watermark DMA Enable
 *  0b0..DMA request disabled.
 *  0b1..DMA request enabled.
 */
#define ADC_DE_FWMDE1(x)                         (((uint32_t)(((uint32_t)(x)) << ADC_DE_FWMDE1_SHIFT)) & ADC_DE_FWMDE1_MASK)
/*! @} */

/*! @name CFG - ADC Configuration Register */
/*! @{ */
#define ADC_CFG_TPRICTRL_MASK                    (0x3U)
#define ADC_CFG_TPRICTRL_SHIFT                   (0U)
/*! TPRICTRL - ADC trigger priority control
 *  0b00..If a higher priority trigger is detected during command processing, the current conversion is aborted
 *        and the new command specified by the trigger is started.
 *  0b01..If a higher priority trigger is received during command processing, the current command is stopped after
 *        after completing the current conversion. If averaging is enabled, the averaging loop will be completed.
 *        However, CMDHa[LOOP] will be ignored and the higher priority trigger will be serviced.
 *  0b10..If a higher priority trigger is received during command processing, the current command will be
 *        completed (averaging, looping, compare) before servicing the higher priority trigger.
 *  0b11..RESERVED
 */
#define ADC_CFG_TPRICTRL(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_CFG_TPRICTRL_SHIFT)) & ADC_CFG_TPRICTRL_MASK)
#define ADC_CFG_PWRSEL_MASK                      (0x30U)
#define ADC_CFG_PWRSEL_SHIFT                     (4U)
/*! PWRSEL - Power Configuration Select
 *  0b00..Lowest power setting.
 *  0b01..Higher power setting than 0b0.
 *  0b10..Higher power setting than 0b1.
 *  0b11..Highest power setting.
 */
#define ADC_CFG_PWRSEL(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_CFG_PWRSEL_SHIFT)) & ADC_CFG_PWRSEL_MASK)
#define ADC_CFG_REFSEL_MASK                      (0xC0U)
#define ADC_CFG_REFSEL_SHIFT                     (6U)
/*! REFSEL - Voltage Reference Selection
 *  0b00..(Default) Option 1 setting.
 *  0b01..Option 2 setting.
 *  0b10..Option 3 setting.
 *  0b11..Reserved
 */
#define ADC_CFG_REFSEL(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_CFG_REFSEL_SHIFT)) & ADC_CFG_REFSEL_MASK)
#define ADC_CFG_TRES_MASK                        (0x100U)
#define ADC_CFG_TRES_SHIFT                       (8U)
/*! TRES - Trigger Resume Enable
 *  0b0..Trigger sequences interrupted by a high priority trigger exception will not be automatically resumed or restarted.
 *  0b1..Trigger sequences interrupted by a high priority trigger exception will be automatically resumed or restarted.
 */
#define ADC_CFG_TRES(x)                          (((uint32_t)(((uint32_t)(x)) << ADC_CFG_TRES_SHIFT)) & ADC_CFG_TRES_MASK)
#define ADC_CFG_TCMDRES_MASK                     (0x200U)
#define ADC_CFG_TCMDRES_SHIFT                    (9U)
/*! TCMDRES - Trigger Command Resume
 *  0b0..Trigger sequences interrupted by a high priority trigger exception will be automatically restarted.
 *  0b1..Trigger sequences interrupted by a high priority trigger exception will be resumed from the command executing before the exception.
 */
#define ADC_CFG_TCMDRES(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_CFG_TCMDRES_SHIFT)) & ADC_CFG_TCMDRES_MASK)
#define ADC_CFG_HPT_EXDI_MASK                    (0x400U)
#define ADC_CFG_HPT_EXDI_SHIFT                   (10U)
/*! HPT_EXDI - High Priority Trigger Exception Disable
 *  0b0..High priority trigger exceptions are enabled.
 *  0b1..High priority trigger exceptions are disabled.
 */
#define ADC_CFG_HPT_EXDI(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_CFG_HPT_EXDI_SHIFT)) & ADC_CFG_HPT_EXDI_MASK)
#define ADC_CFG_PUDLY_MASK                       (0xFF0000U)
#define ADC_CFG_PUDLY_SHIFT                      (16U)
/*! PUDLY - Power Up Delay
 */
#define ADC_CFG_PUDLY(x)                         (((uint32_t)(((uint32_t)(x)) << ADC_CFG_PUDLY_SHIFT)) & ADC_CFG_PUDLY_MASK)
#define ADC_CFG_PWREN_MASK                       (0x10000000U)
#define ADC_CFG_PWREN_SHIFT                      (28U)
/*! PWREN - ADC Analog Pre-Enable
 *  0b0..ADC analog circuits are only enabled while conversions are active. Performance is affected due to analog startup delays.
 *  0b1..ADC analog circuits are pre-enabled and ready to execute conversions without startup delays (at the cost
 *       of higher DC current consumption). A single power up delay (CFG[PUDLY]) is executed immediately once PWREN
 *       is set, and any detected trigger does not begin ADC operation until the power up delay time has passed.
 *       After this initial delay expires the analog will remain pre-enabled, and no additional delays will be
 *       executed.
 */
#define ADC_CFG_PWREN(x)                         (((uint32_t)(((uint32_t)(x)) << ADC_CFG_PWREN_SHIFT)) & ADC_CFG_PWREN_MASK)
/*! @} */

/*! @name PAUSE - ADC Pause Register */
/*! @{ */
#define ADC_PAUSE_PAUSEDLY_MASK                  (0x1FFU)
#define ADC_PAUSE_PAUSEDLY_SHIFT                 (0U)
/*! PAUSEDLY - Pause Delay
 */
#define ADC_PAUSE_PAUSEDLY(x)                    (((uint32_t)(((uint32_t)(x)) << ADC_PAUSE_PAUSEDLY_SHIFT)) & ADC_PAUSE_PAUSEDLY_MASK)
#define ADC_PAUSE_PAUSEEN_MASK                   (0x80000000U)
#define ADC_PAUSE_PAUSEEN_SHIFT                  (31U)
/*! PAUSEEN - PAUSE Option Enable
 *  0b0..Pause operation disabled
 *  0b1..Pause operation enabled
 */
#define ADC_PAUSE_PAUSEEN(x)                     (((uint32_t)(((uint32_t)(x)) << ADC_PAUSE_PAUSEEN_SHIFT)) & ADC_PAUSE_PAUSEEN_MASK)
/*! @} */

/*! @name SWTRIG - Software Trigger Register */
/*! @{ */
#define ADC_SWTRIG_SWT0_MASK                     (0x1U)
#define ADC_SWTRIG_SWT0_SHIFT                    (0U)
/*! SWT0 - Software trigger 0 event
 *  0b0..No trigger 0 event generated.
 *  0b1..Trigger 0 event generated.
 */
#define ADC_SWTRIG_SWT0(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_SWTRIG_SWT0_SHIFT)) & ADC_SWTRIG_SWT0_MASK)
#define ADC_SWTRIG_SWT1_MASK                     (0x2U)
#define ADC_SWTRIG_SWT1_SHIFT                    (1U)
/*! SWT1 - Software trigger 1 event
 *  0b0..No trigger 1 event generated.
 *  0b1..Trigger 1 event generated.
 */
#define ADC_SWTRIG_SWT1(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_SWTRIG_SWT1_SHIFT)) & ADC_SWTRIG_SWT1_MASK)
#define ADC_SWTRIG_SWT2_MASK                     (0x4U)
#define ADC_SWTRIG_SWT2_SHIFT                    (2U)
/*! SWT2 - Software trigger 2 event
 *  0b0..No trigger 2 event generated.
 *  0b1..Trigger 2 event generated.
 */
#define ADC_SWTRIG_SWT2(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_SWTRIG_SWT2_SHIFT)) & ADC_SWTRIG_SWT2_MASK)
#define ADC_SWTRIG_SWT3_MASK                     (0x8U)
#define ADC_SWTRIG_SWT3_SHIFT                    (3U)
/*! SWT3 - Software trigger 3 event
 *  0b0..No trigger 3 event generated.
 *  0b1..Trigger 3 event generated.
 */
#define ADC_SWTRIG_SWT3(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_SWTRIG_SWT3_SHIFT)) & ADC_SWTRIG_SWT3_MASK)
#define ADC_SWTRIG_SWT4_MASK                     (0x10U)
#define ADC_SWTRIG_SWT4_SHIFT                    (4U)
/*! SWT4 - Software trigger 4 event
 *  0b0..No trigger 4 event generated.
 *  0b1..Trigger 4 event generated.
 */
#define ADC_SWTRIG_SWT4(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_SWTRIG_SWT4_SHIFT)) & ADC_SWTRIG_SWT4_MASK)
#define ADC_SWTRIG_SWT5_MASK                     (0x20U)
#define ADC_SWTRIG_SWT5_SHIFT                    (5U)
/*! SWT5 - Software trigger 5 event
 *  0b0..No trigger 5 event generated.
 *  0b1..Trigger 5 event generated.
 */
#define ADC_SWTRIG_SWT5(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_SWTRIG_SWT5_SHIFT)) & ADC_SWTRIG_SWT5_MASK)
#define ADC_SWTRIG_SWT6_MASK                     (0x40U)
#define ADC_SWTRIG_SWT6_SHIFT                    (6U)
/*! SWT6 - Software trigger 6 event
 *  0b0..No trigger 6 event generated.
 *  0b1..Trigger 6 event generated.
 */
#define ADC_SWTRIG_SWT6(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_SWTRIG_SWT6_SHIFT)) & ADC_SWTRIG_SWT6_MASK)
#define ADC_SWTRIG_SWT7_MASK                     (0x80U)
#define ADC_SWTRIG_SWT7_SHIFT                    (7U)
/*! SWT7 - Software trigger 7 event
 *  0b0..No trigger 7 event generated.
 *  0b1..Trigger 7 event generated.
 */
#define ADC_SWTRIG_SWT7(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_SWTRIG_SWT7_SHIFT)) & ADC_SWTRIG_SWT7_MASK)
#define ADC_SWTRIG_SWT8_MASK                     (0x100U)
#define ADC_SWTRIG_SWT8_SHIFT                    (8U)
/*! SWT8 - Software trigger 8 event
 *  0b0..No trigger 8 event generated.
 *  0b1..Trigger 8 event generated.
 */
#define ADC_SWTRIG_SWT8(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_SWTRIG_SWT8_SHIFT)) & ADC_SWTRIG_SWT8_MASK)
#define ADC_SWTRIG_SWT9_MASK                     (0x200U)
#define ADC_SWTRIG_SWT9_SHIFT                    (9U)
/*! SWT9 - Software trigger 9 event
 *  0b0..No trigger 9 event generated.
 *  0b1..Trigger 9 event generated.
 */
#define ADC_SWTRIG_SWT9(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_SWTRIG_SWT9_SHIFT)) & ADC_SWTRIG_SWT9_MASK)
#define ADC_SWTRIG_SWT10_MASK                    (0x400U)
#define ADC_SWTRIG_SWT10_SHIFT                   (10U)
/*! SWT10 - Software trigger 10 event
 *  0b0..No trigger 10 event generated.
 *  0b1..Trigger 10 event generated.
 */
#define ADC_SWTRIG_SWT10(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_SWTRIG_SWT10_SHIFT)) & ADC_SWTRIG_SWT10_MASK)
#define ADC_SWTRIG_SWT11_MASK                    (0x800U)
#define ADC_SWTRIG_SWT11_SHIFT                   (11U)
/*! SWT11 - Software trigger 11 event
 *  0b0..No trigger 11 event generated.
 *  0b1..Trigger 11 event generated.
 */
#define ADC_SWTRIG_SWT11(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_SWTRIG_SWT11_SHIFT)) & ADC_SWTRIG_SWT11_MASK)
#define ADC_SWTRIG_SWT12_MASK                    (0x1000U)
#define ADC_SWTRIG_SWT12_SHIFT                   (12U)
/*! SWT12 - Software trigger 12 event
 *  0b0..No trigger 12 event generated.
 *  0b1..Trigger 12 event generated.
 */
#define ADC_SWTRIG_SWT12(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_SWTRIG_SWT12_SHIFT)) & ADC_SWTRIG_SWT12_MASK)
#define ADC_SWTRIG_SWT13_MASK                    (0x2000U)
#define ADC_SWTRIG_SWT13_SHIFT                   (13U)
/*! SWT13 - Software trigger 13 event
 *  0b0..No trigger 13 event generated.
 *  0b1..Trigger 13 event generated.
 */
#define ADC_SWTRIG_SWT13(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_SWTRIG_SWT13_SHIFT)) & ADC_SWTRIG_SWT13_MASK)
#define ADC_SWTRIG_SWT14_MASK                    (0x4000U)
#define ADC_SWTRIG_SWT14_SHIFT                   (14U)
/*! SWT14 - Software trigger 14 event
 *  0b0..No trigger 14 event generated.
 *  0b1..Trigger 14 event generated.
 */
#define ADC_SWTRIG_SWT14(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_SWTRIG_SWT14_SHIFT)) & ADC_SWTRIG_SWT14_MASK)
#define ADC_SWTRIG_SWT15_MASK                    (0x8000U)
#define ADC_SWTRIG_SWT15_SHIFT                   (15U)
/*! SWT15 - Software trigger 15 event
 *  0b0..No trigger 15 event generated.
 *  0b1..Trigger 15 event generated.
 */
#define ADC_SWTRIG_SWT15(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_SWTRIG_SWT15_SHIFT)) & ADC_SWTRIG_SWT15_MASK)
/*! @} */

/*! @name TSTAT - Trigger Status Register */
/*! @{ */
#define ADC_TSTAT_TEXC_NUM_MASK                  (0xFFFFU)
#define ADC_TSTAT_TEXC_NUM_SHIFT                 (0U)
/*! TEXC_NUM - Trigger Exception Number
 *  0b0000000000000000..No triggers have been interrupted by a high priority exception. Or CFG[TRES] = 1.
 *  0b0000000000000001..Trigger 0 has been interrupted by a high priority exception.
 *  0b0000000000000010..Trigger 1 has been interrupted by a high priority exception.
 *  0b0000000000000011-0b1111111111111110..Associated trigger sequence has interrupted by a high priority exception.
 *  0b1111111111111111..Every trigger sequence has been interrupted by a high priority exception.
 */
#define ADC_TSTAT_TEXC_NUM(x)                    (((uint32_t)(((uint32_t)(x)) << ADC_TSTAT_TEXC_NUM_SHIFT)) & ADC_TSTAT_TEXC_NUM_MASK)
#define ADC_TSTAT_TCOMP_FLAG_MASK                (0xFFFF0000U)
#define ADC_TSTAT_TCOMP_FLAG_SHIFT               (16U)
/*! TCOMP_FLAG - Trigger Completion Flag
 *  0b0000000000000000..No triggers have been completed. Trigger completion interrupts are disabled.
 *  0b0000000000000001..Trigger 0 has been completed and triger 0 has enabled completion interrupts.
 *  0b0000000000000010..Trigger 1 has been completed and triger 1 has enabled completion interrupts.
 *  0b0000000000000011-0b1111111111111110..Associated trigger sequence has completed and has enabled completion interrupts.
 *  0b1111111111111111..Every trigger sequence has been completed and every trigger has enabled completion interrupts.
 */
#define ADC_TSTAT_TCOMP_FLAG(x)                  (((uint32_t)(((uint32_t)(x)) << ADC_TSTAT_TCOMP_FLAG_SHIFT)) & ADC_TSTAT_TCOMP_FLAG_MASK)
/*! @} */

/*! @name OFSTRIM - ADC Offset Trim Register */
/*! @{ */
#define ADC_OFSTRIM_OFSTRIM_A_MASK               (0x1FU)
#define ADC_OFSTRIM_OFSTRIM_A_SHIFT              (0U)
/*! OFSTRIM_A - Trim for offset
 */
#define ADC_OFSTRIM_OFSTRIM_A(x)                 (((uint32_t)(((uint32_t)(x)) << ADC_OFSTRIM_OFSTRIM_A_SHIFT)) & ADC_OFSTRIM_OFSTRIM_A_MASK)
#define ADC_OFSTRIM_OFSTRIM_B_MASK               (0x1F0000U)
#define ADC_OFSTRIM_OFSTRIM_B_SHIFT              (16U)
/*! OFSTRIM_B - Trim for offset
 */
#define ADC_OFSTRIM_OFSTRIM_B(x)                 (((uint32_t)(((uint32_t)(x)) << ADC_OFSTRIM_OFSTRIM_B_SHIFT)) & ADC_OFSTRIM_OFSTRIM_B_MASK)
/*! @} */

/*! @name TCTRL - Trigger Control Register */
/*! @{ */
#define ADC_TCTRL_HTEN_MASK                      (0x1U)
#define ADC_TCTRL_HTEN_SHIFT                     (0U)
/*! HTEN - Trigger enable
 *  0b0..Hardware trigger source disabled
 *  0b1..Hardware trigger source enabled
 */
#define ADC_TCTRL_HTEN(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_TCTRL_HTEN_SHIFT)) & ADC_TCTRL_HTEN_MASK)
#define ADC_TCTRL_FIFO_SEL_A_MASK                (0x2U)
#define ADC_TCTRL_FIFO_SEL_A_SHIFT               (1U)
/*! FIFO_SEL_A - SAR Result Destination For Channel A
 *  0b0..Result written to FIFO 0
 *  0b1..Result written to FIFO 1
 */
#define ADC_TCTRL_FIFO_SEL_A(x)                  (((uint32_t)(((uint32_t)(x)) << ADC_TCTRL_FIFO_SEL_A_SHIFT)) & ADC_TCTRL_FIFO_SEL_A_MASK)
#define ADC_TCTRL_FIFO_SEL_B_MASK                (0x4U)
#define ADC_TCTRL_FIFO_SEL_B_SHIFT               (2U)
/*! FIFO_SEL_B - SAR Result Destination For Channel B
 *  0b0..Result written to FIFO 0
 *  0b1..Result written to FIFO 1
 */
#define ADC_TCTRL_FIFO_SEL_B(x)                  (((uint32_t)(((uint32_t)(x)) << ADC_TCTRL_FIFO_SEL_B_SHIFT)) & ADC_TCTRL_FIFO_SEL_B_MASK)
#define ADC_TCTRL_TPRI_MASK                      (0xF00U)
#define ADC_TCTRL_TPRI_SHIFT                     (8U)
/*! TPRI - Trigger priority setting
 *  0b0000..Set to highest priority, Level 1
 *  0b0001-0b1110..Set to corresponding priority level
 *  0b1111..Set to lowest priority, Level 16
 */
#define ADC_TCTRL_TPRI(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_TCTRL_TPRI_SHIFT)) & ADC_TCTRL_TPRI_MASK)
#define ADC_TCTRL_RSYNC_MASK                     (0x8000U)
#define ADC_TCTRL_RSYNC_SHIFT                    (15U)
/*! RSYNC - Trigger Resync
 */
#define ADC_TCTRL_RSYNC(x)                       (((uint32_t)(((uint32_t)(x)) << ADC_TCTRL_RSYNC_SHIFT)) & ADC_TCTRL_RSYNC_MASK)
#define ADC_TCTRL_TDLY_MASK                      (0xF0000U)
#define ADC_TCTRL_TDLY_SHIFT                     (16U)
/*! TDLY - Trigger delay select
 */
#define ADC_TCTRL_TDLY(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_TCTRL_TDLY_SHIFT)) & ADC_TCTRL_TDLY_MASK)
#define ADC_TCTRL_TCMD_MASK                      (0xF000000U)
#define ADC_TCTRL_TCMD_SHIFT                     (24U)
/*! TCMD - Trigger command select
 *  0b0000..Not a valid selection from the command buffer. Trigger event is ignored.
 *  0b0001..CMD1 is executed
 *  0b0010-0b1110..Corresponding CMD is executed
 *  0b1111..CMD15 is executed
 */
#define ADC_TCTRL_TCMD(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_TCTRL_TCMD_SHIFT)) & ADC_TCTRL_TCMD_MASK)
/*! @} */

/* The count of ADC_TCTRL */
#define ADC_TCTRL_COUNT                          (16U)

/*! @name FCTRL - FIFO Control Register */
/*! @{ */
#define ADC_FCTRL_FCOUNT_MASK                    (0x1FU)
#define ADC_FCTRL_FCOUNT_SHIFT                   (0U)
/*! FCOUNT - Result FIFO counter
 */
#define ADC_FCTRL_FCOUNT(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_FCTRL_FCOUNT_SHIFT)) & ADC_FCTRL_FCOUNT_MASK)
#define ADC_FCTRL_FWMARK_MASK                    (0xF0000U)
#define ADC_FCTRL_FWMARK_SHIFT                   (16U)
/*! FWMARK - Watermark level selection
 */
#define ADC_FCTRL_FWMARK(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_FCTRL_FWMARK_SHIFT)) & ADC_FCTRL_FWMARK_MASK)
/*! @} */

/* The count of ADC_FCTRL */
#define ADC_FCTRL_COUNT                          (2U)

/*! @name GCC - Gain Calibration Control */
/*! @{ */
#define ADC_GCC_GAIN_CAL_MASK                    (0xFFFFU)
#define ADC_GCC_GAIN_CAL_SHIFT                   (0U)
/*! GAIN_CAL - Gain Calibration Value
 */
#define ADC_GCC_GAIN_CAL(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_GCC_GAIN_CAL_SHIFT)) & ADC_GCC_GAIN_CAL_MASK)
#define ADC_GCC_RDY_MASK                         (0x1000000U)
#define ADC_GCC_RDY_SHIFT                        (24U)
/*! RDY - Gain Calibration Value Valid
 *  0b0..The gain calibration value is invalid. Run the auto-calibration routine for this value to be written.
 *  0b1..The gain calibration value is valid. It should be used to update the GCRa[GCALR] register field.
 */
#define ADC_GCC_RDY(x)                           (((uint32_t)(((uint32_t)(x)) << ADC_GCC_RDY_SHIFT)) & ADC_GCC_RDY_MASK)
/*! @} */

/* The count of ADC_GCC */
#define ADC_GCC_COUNT                            (2U)

/*! @name GCR - Gain Calculation Result */
/*! @{ */
#define ADC_GCR_GCALR_MASK                       (0xFFFFU)
#define ADC_GCR_GCALR_SHIFT                      (0U)
/*! GCALR - Gain Calculation Result
 */
#define ADC_GCR_GCALR(x)                         (((uint32_t)(((uint32_t)(x)) << ADC_GCR_GCALR_SHIFT)) & ADC_GCR_GCALR_MASK)
#define ADC_GCR_RDY_MASK                         (0x1000000U)
#define ADC_GCR_RDY_SHIFT                        (24U)
/*! RDY - Gain Calculation Ready
 *  0b0..The gain offset calculation value is invalid.
 *  0b1..The gain calibration value is valid.
 */
#define ADC_GCR_RDY(x)                           (((uint32_t)(((uint32_t)(x)) << ADC_GCR_RDY_SHIFT)) & ADC_GCR_RDY_MASK)
/*! @} */

/* The count of ADC_GCR */
#define ADC_GCR_COUNT                            (2U)

/*! @name CMDL - ADC Command Low Buffer Register */
/*! @{ */
#define ADC_CMDL_ADCH_MASK                       (0x1FU)
#define ADC_CMDL_ADCH_SHIFT                      (0U)
/*! ADCH - Input channel select
 *  0b00000..Select CH0A or CH0B or CH0A/CH0B pair.
 *  0b00001..Select CH1A or CH1B or CH1A/CH1B pair.
 *  0b00010..Select CH2A or CH2B or CH2A/CH2B pair.
 *  0b00011..Select CH3A or CH3B or CH3A/CH3B pair.
 *  0b00100-0b11101..Select corresponding channel CHnA or CHnB or CHnA/CHnB pair.
 *  0b11110..Select CH30A or CH30B or CH30A/CH30B pair.
 *  0b11111..Select CH31A or CH31B or CH31A/CH31B pair.
 */
#define ADC_CMDL_ADCH(x)                         (((uint32_t)(((uint32_t)(x)) << ADC_CMDL_ADCH_SHIFT)) & ADC_CMDL_ADCH_MASK)
#define ADC_CMDL_CTYPE_MASK                      (0x60U)
#define ADC_CMDL_CTYPE_SHIFT                     (5U)
/*! CTYPE - Conversion Type
 *  0b00..Single-Ended Mode. Only A side channel is converted.
 *  0b01..Single-Ended Mode. Only B side channel is converted.
 *  0b10..Differential Mode. A-B.
 *  0b11..Dual-Single-Ended Mode. Both A side and B side channels are converted independently.
 */
#define ADC_CMDL_CTYPE(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_CMDL_CTYPE_SHIFT)) & ADC_CMDL_CTYPE_MASK)
#define ADC_CMDL_MODE_MASK                       (0x80U)
#define ADC_CMDL_MODE_SHIFT                      (7U)
/*! MODE - Select resolution of conversions
 *  0b0..Standard resolution. Single-ended 12-bit conversion; Differential 13-bit conversion with 2's complement output.
 *  0b1..High resolution. Single-ended 16-bit conversion; Differential 16-bit conversion with 2's complement output.
 */
#define ADC_CMDL_MODE(x)                         (((uint32_t)(((uint32_t)(x)) << ADC_CMDL_MODE_SHIFT)) & ADC_CMDL_MODE_MASK)
/*! @} */

/* The count of ADC_CMDL */
#define ADC_CMDL_COUNT                           (15U)

/*! @name CMDH - ADC Command High Buffer Register */
/*! @{ */
#define ADC_CMDH_CMPEN_MASK                      (0x3U)
#define ADC_CMDH_CMPEN_SHIFT                     (0U)
/*! CMPEN - Compare Function Enable
 *  0b00..Compare disabled.
 *  0b01..Reserved
 *  0b10..Compare enabled. Store on true.
 *  0b11..Compare enabled. Repeat channel acquisition (sample/convert/compare) until true.
 */
#define ADC_CMDH_CMPEN(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_CMDH_CMPEN_SHIFT)) & ADC_CMDH_CMPEN_MASK)
#define ADC_CMDH_WAIT_TRIG_MASK                  (0x4U)
#define ADC_CMDH_WAIT_TRIG_SHIFT                 (2U)
/*! WAIT_TRIG - Wait for trigger assertion before execution.
 *  0b0..This command will be automatically executed.
 *  0b1..The active trigger must be asserted again before executing this command.
 */
#define ADC_CMDH_WAIT_TRIG(x)                    (((uint32_t)(((uint32_t)(x)) << ADC_CMDH_WAIT_TRIG_SHIFT)) & ADC_CMDH_WAIT_TRIG_MASK)
#define ADC_CMDH_LWI_MASK                        (0x80U)
#define ADC_CMDH_LWI_SHIFT                       (7U)
/*! LWI - Loop with Increment
 *  0b0..Auto channel increment disabled
 *  0b1..Auto channel increment enabled
 */
#define ADC_CMDH_LWI(x)                          (((uint32_t)(((uint32_t)(x)) << ADC_CMDH_LWI_SHIFT)) & ADC_CMDH_LWI_MASK)
#define ADC_CMDH_STS_MASK                        (0x700U)
#define ADC_CMDH_STS_SHIFT                       (8U)
/*! STS - Sample Time Select
 *  0b000..Minimum sample time of 3 ADCK cycles.
 *  0b001..3 + 21 ADCK cycles; 5 ADCK cycles total sample time.
 *  0b010..3 + 22 ADCK cycles; 7 ADCK cycles total sample time.
 *  0b011..3 + 23 ADCK cycles; 11 ADCK cycles total sample time.
 *  0b100..3 + 24 ADCK cycles; 19 ADCK cycles total sample time.
 *  0b101..3 + 25 ADCK cycles; 35 ADCK cycles total sample time.
 *  0b110..3 + 26 ADCK cycles; 67 ADCK cycles total sample time.
 *  0b111..3 + 27 ADCK cycles; 131 ADCK cycles total sample time.
 */
#define ADC_CMDH_STS(x)                          (((uint32_t)(((uint32_t)(x)) << ADC_CMDH_STS_SHIFT)) & ADC_CMDH_STS_MASK)
#define ADC_CMDH_AVGS_MASK                       (0x7000U)
#define ADC_CMDH_AVGS_SHIFT                      (12U)
/*! AVGS - Hardware Average Select
 *  0b000..Single conversion.
 *  0b001..2 conversions averaged.
 *  0b010..4 conversions averaged.
 *  0b011..8 conversions averaged.
 *  0b100..16 conversions averaged.
 *  0b101..32 conversions averaged.
 *  0b110..64 conversions averaged.
 *  0b111..128 conversions averaged.
 */
#define ADC_CMDH_AVGS(x)                         (((uint32_t)(((uint32_t)(x)) << ADC_CMDH_AVGS_SHIFT)) & ADC_CMDH_AVGS_MASK)
#define ADC_CMDH_LOOP_MASK                       (0xF0000U)
#define ADC_CMDH_LOOP_SHIFT                      (16U)
/*! LOOP - Loop Count Select
 *  0b0000..Looping not enabled. Command executes 1 time.
 *  0b0001..Loop 1 time. Command executes 2 times.
 *  0b0010..Loop 2 times. Command executes 3 times.
 *  0b0011-0b1110..Loop corresponding number of times. Command executes LOOP+1 times.
 *  0b1111..Loop 15 times. Command executes 16 times.
 */
#define ADC_CMDH_LOOP(x)                         (((uint32_t)(((uint32_t)(x)) << ADC_CMDH_LOOP_SHIFT)) & ADC_CMDH_LOOP_MASK)
#define ADC_CMDH_NEXT_MASK                       (0xF000000U)
#define ADC_CMDH_NEXT_SHIFT                      (24U)
/*! NEXT - Next Command Select
 *  0b0000..No next command defined. Terminate conversions at completion of current command. If lower priority
 *          trigger pending, begin command associated with lower priority trigger.
 *  0b0001..Select CMD1 command buffer register as next command.
 *  0b0010-0b1110..Select corresponding CMD command buffer register as next command
 *  0b1111..Select CMD15 command buffer register as next command.
 */
#define ADC_CMDH_NEXT(x)                         (((uint32_t)(((uint32_t)(x)) << ADC_CMDH_NEXT_SHIFT)) & ADC_CMDH_NEXT_MASK)
/*! @} */

/* The count of ADC_CMDH */
#define ADC_CMDH_COUNT                           (15U)

/*! @name CV - Compare Value Register */
/*! @{ */
#define ADC_CV_CVL_MASK                          (0xFFFFU)
#define ADC_CV_CVL_SHIFT                         (0U)
/*! CVL - Compare Value Low.
 */
#define ADC_CV_CVL(x)                            (((uint32_t)(((uint32_t)(x)) << ADC_CV_CVL_SHIFT)) & ADC_CV_CVL_MASK)
#define ADC_CV_CVH_MASK                          (0xFFFF0000U)
#define ADC_CV_CVH_SHIFT                         (16U)
/*! CVH - Compare Value High.
 */
#define ADC_CV_CVH(x)                            (((uint32_t)(((uint32_t)(x)) << ADC_CV_CVH_SHIFT)) & ADC_CV_CVH_MASK)
/*! @} */

/* The count of ADC_CV */
#define ADC_CV_COUNT                             (4U)

/*! @name RESFIFO - ADC Data Result FIFO Register */
/*! @{ */
#define ADC_RESFIFO_D_MASK                       (0xFFFFU)
#define ADC_RESFIFO_D_SHIFT                      (0U)
/*! D - Data result
 */
#define ADC_RESFIFO_D(x)                         (((uint32_t)(((uint32_t)(x)) << ADC_RESFIFO_D_SHIFT)) & ADC_RESFIFO_D_MASK)
#define ADC_RESFIFO_TSRC_MASK                    (0xF0000U)
#define ADC_RESFIFO_TSRC_SHIFT                   (16U)
/*! TSRC - Trigger Source
 *  0b0000..Trigger source 0 initiated this conversion.
 *  0b0001..Trigger source 1 initiated this conversion.
 *  0b0010-0b1110..Corresponding trigger source initiated this conversion.
 *  0b1111..Trigger source 15 initiated this conversion.
 */
#define ADC_RESFIFO_TSRC(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_RESFIFO_TSRC_SHIFT)) & ADC_RESFIFO_TSRC_MASK)
#define ADC_RESFIFO_LOOPCNT_MASK                 (0xF00000U)
#define ADC_RESFIFO_LOOPCNT_SHIFT                (20U)
/*! LOOPCNT - Loop count value
 *  0b0000..Result is from initial conversion in command.
 *  0b0001..Result is from second conversion in command.
 *  0b0010-0b1110..Result is from LOOPCNT+1 conversion in command.
 *  0b1111..Result is from 16th conversion in command.
 */
#define ADC_RESFIFO_LOOPCNT(x)                   (((uint32_t)(((uint32_t)(x)) << ADC_RESFIFO_LOOPCNT_SHIFT)) & ADC_RESFIFO_LOOPCNT_MASK)
#define ADC_RESFIFO_CMDSRC_MASK                  (0xF000000U)
#define ADC_RESFIFO_CMDSRC_SHIFT                 (24U)
/*! CMDSRC - Command Buffer Source
 *  0b0000..Not a valid value CMDSRC value for a dataword in RESFIFO. 0x0 is only found in initial FIFO state
 *          prior to an ADC conversion result dataword being stored to a RESFIFO buffer.
 *  0b0001..CMD1 buffer used as control settings for this conversion.
 *  0b0010-0b1110..Corresponding command buffer used as control settings for this conversion.
 *  0b1111..CMD15 buffer used as control settings for this conversion.
 */
#define ADC_RESFIFO_CMDSRC(x)                    (((uint32_t)(((uint32_t)(x)) << ADC_RESFIFO_CMDSRC_SHIFT)) & ADC_RESFIFO_CMDSRC_MASK)
#define ADC_RESFIFO_VALID_MASK                   (0x80000000U)
#define ADC_RESFIFO_VALID_SHIFT                  (31U)
/*! VALID - FIFO entry is valid
 *  0b0..FIFO is empty. Discard any read from RESFIFO.
 *  0b1..FIFO record read from RESFIFO is valid.
 */
#define ADC_RESFIFO_VALID(x)                     (((uint32_t)(((uint32_t)(x)) << ADC_RESFIFO_VALID_SHIFT)) & ADC_RESFIFO_VALID_MASK)
/*! @} */

/* The count of ADC_RESFIFO */
#define ADC_RESFIFO_COUNT                        (2U)

/*! @name CAL_GAR - Calibration General A-Side Registers */
/*! @{ */
#define ADC_CAL_GAR_CAL_GAR_VAL_MASK             (0xFFFFU)
#define ADC_CAL_GAR_CAL_GAR_VAL_SHIFT            (0U)
/*! CAL_GAR_VAL - Calibration General A Side Register Element
 */
#define ADC_CAL_GAR_CAL_GAR_VAL(x)               (((uint32_t)(((uint32_t)(x)) << ADC_CAL_GAR_CAL_GAR_VAL_SHIFT)) & ADC_CAL_GAR_CAL_GAR_VAL_MASK)
/*! @} */

/* The count of ADC_CAL_GAR */
#define ADC_CAL_GAR_COUNT                        (33U)

/*! @name CAL_GBR - Calibration General B-Side Registers */
/*! @{ */
#define ADC_CAL_GBR_CAL_GBR_VAL_MASK             (0xFFFFU)
#define ADC_CAL_GBR_CAL_GBR_VAL_SHIFT            (0U)
/*! CAL_GBR_VAL - Calibration General B Side Register Element
 */
#define ADC_CAL_GBR_CAL_GBR_VAL(x)               (((uint32_t)(((uint32_t)(x)) << ADC_CAL_GBR_CAL_GBR_VAL_SHIFT)) & ADC_CAL_GBR_CAL_GBR_VAL_MASK)
/*! @} */

/* The count of ADC_CAL_GBR */
#define ADC_CAL_GBR_COUNT                        (33U)

/*! @name TST - ADC Test Register */
/*! @{ */
#define ADC_TST_CST_LONG_MASK                    (0x1U)
#define ADC_TST_CST_LONG_SHIFT                   (0U)
/*! CST_LONG - Calibration Sample Time Long
 *  0b0..Normal sample time. Minimum sample time of 3 ADCK cycles.
 *  0b1..Increased sample time. 67 ADCK cycles total sample time.
 */
#define ADC_TST_CST_LONG(x)                      (((uint32_t)(((uint32_t)(x)) << ADC_TST_CST_LONG_SHIFT)) & ADC_TST_CST_LONG_MASK)
#define ADC_TST_FOFFM_MASK                       (0x100U)
#define ADC_TST_FOFFM_SHIFT                      (8U)
/*! FOFFM - Force M-side positive offset
 *  0b0..Normal operation. No forced offset.
 *  0b1..Test configuration. Forced positive offset on MDAC.
 */
#define ADC_TST_FOFFM(x)                         (((uint32_t)(((uint32_t)(x)) << ADC_TST_FOFFM_SHIFT)) & ADC_TST_FOFFM_MASK)
#define ADC_TST_FOFFP_MASK                       (0x200U)
#define ADC_TST_FOFFP_SHIFT                      (9U)
/*! FOFFP - Force P-side positive offset
 *  0b0..Normal operation. No forced offset.
 *  0b1..Test configuration. Forced positive offset on PDAC.
 */
#define ADC_TST_FOFFP(x)                         (((uint32_t)(((uint32_t)(x)) << ADC_TST_FOFFP_SHIFT)) & ADC_TST_FOFFP_MASK)
#define ADC_TST_FOFFM2_MASK                      (0x400U)
#define ADC_TST_FOFFM2_SHIFT                     (10U)
/*! FOFFM2 - Force M-side negative offset
 *  0b0..Normal operation. No forced offset.
 *  0b1..Test configuration. Forced negative offset on MDAC.
 */
#define ADC_TST_FOFFM2(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_TST_FOFFM2_SHIFT)) & ADC_TST_FOFFM2_MASK)
#define ADC_TST_FOFFP2_MASK                      (0x800U)
#define ADC_TST_FOFFP2_SHIFT                     (11U)
/*! FOFFP2 - Force P-side negative offset
 *  0b0..Normal operation. No forced offset.
 *  0b1..Test configuration. Forced negative offset on PDAC.
 */
#define ADC_TST_FOFFP2(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_TST_FOFFP2_SHIFT)) & ADC_TST_FOFFP2_MASK)
#define ADC_TST_TESTEN_MASK                      (0x800000U)
#define ADC_TST_TESTEN_SHIFT                     (23U)
/*! TESTEN - Enable test configuration
 *  0b0..Normal operation. Test configuration not enabled.
 *  0b1..Hardware BIST Test in progress.
 */
#define ADC_TST_TESTEN(x)                        (((uint32_t)(((uint32_t)(x)) << ADC_TST_TESTEN_SHIFT)) & ADC_TST_TESTEN_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group ADC_Register_Masks */


/* ADC - Peripheral instance base addresses */
#if (__ARM_FEATURE_CMSE & 0x2)
  /** Peripheral ADC0 base address */
  #define ADC0_BASE                                (0x500A0000u)
  /** Peripheral ADC0 base address */
  #define ADC0_BASE_NS                             (0x400A0000u)
  /** Peripheral ADC0 base pointer */
  #define ADC0                                     ((ADC_Type *)ADC0_BASE)
  /** Peripheral ADC0 base pointer */
  #define ADC0_NS                                  ((ADC_Type *)ADC0_BASE_NS)
  /** Array initializer of ADC peripheral base addresses */
  #define ADC_BASE_ADDRS                           { ADC0_BASE }
  /** Array initializer of ADC peripheral base pointers */
  #define ADC_BASE_PTRS                            { ADC0 }
  /** Array initializer of ADC peripheral base addresses */
  #define ADC_BASE_ADDRS_NS                        { ADC0_BASE_NS }
  /** Array initializer of ADC peripheral base pointers */
  #define ADC_BASE_PTRS_NS                         { ADC0_NS }
#else
  /** Peripheral ADC0 base address */
  #define ADC0_BASE                                (0x400A0000u)
  /** Peripheral ADC0 base pointer */
  #define ADC0                                     ((ADC_Type *)ADC0_BASE)
  /** Array initializer of ADC peripheral base addresses */
  #define ADC_BASE_ADDRS                           { ADC0_BASE }
  /** Array initializer of ADC peripheral base pointers */
  #define ADC_BASE_PTRS                            { ADC0 }
#endif
/** Interrupt vectors for the ADC peripheral type */
#define ADC_IRQS                                 { ADC0_IRQn }

/*!
 * @}
 */ /* end of group ADC_Peripheral_Access_Layer */


/* ----------------------------------------------------------------------------
   -- AHB_SECURE_CTRL Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup AHB_SECURE_CTRL_Peripheral_Access_Layer AHB_SECURE_CTRL Peripheral Access Layer
 * @{
 */

/** AHB_SECURE_CTRL - Register Layout Typedef */
typedef struct {
  struct {                                         /* offset: 0x0, array step: 0x30 */
    __IO uint32_t SLAVE_RULE;                        /**< Security access rules for Flash and ROM slaves., array offset: 0x0, array step: 0x30 */
         uint8_t RESERVED_0[12];
    __IO uint32_t SEC_CTRL_FLASH_MEM_RULE[3];        /**< Security access rules for FLASH sector 0 to sector 20. Each Flash sector is 32 Kbytes. There are 20 FLASH sectors in total., array offset: 0x10, array step: index*0x30, index2*0x4 */
         uint8_t RESERVED_1[4];
    __IO uint32_t SEC_CTRL_ROM_MEM_RULE[4];          /**< Security access rules for ROM sector 0 to sector 31. Each ROM sector is 4 Kbytes. There are 32 ROM sectors in total., array offset: 0x20, array step: index*0x30, index2*0x4 */
  } SEC_CTRL_FLASH_ROM[1];
  struct {                                         /* offset: 0x30, array step: 0x14 */
    __IO uint32_t SLAVE_RULE;                        /**< Security access rules for RAMX slaves., array offset: 0x30, array step: 0x14 */
         uint8_t RESERVED_0[12];
    __IO uint32_t MEM_RULE[1];                       /**< Security access rules for RAMX slaves., array offset: 0x40, array step: index*0x14, index2*0x4 */
  } SEC_CTRL_RAMX[1];
       uint8_t RESERVED_0[12];
  struct {                                         /* offset: 0x50, array step: 0x18 */
    __IO uint32_t SLAVE_RULE;                        /**< Security access rules for RAM0 slaves., array offset: 0x50, array step: 0x18 */
         uint8_t RESERVED_0[12];
    __IO uint32_t MEM_RULE[2];                       /**< Security access rules for RAM0 slaves., array offset: 0x60, array step: index*0x18, index2*0x4 */
  } SEC_CTRL_RAM0[1];
       uint8_t RESERVED_1[8];
  struct {                                         /* offset: 0x70, array step: 0x18 */
    __IO uint32_t SLAVE_RULE;                        /**< Security access rules for RAM1 slaves., array offset: 0x70, array step: 0x18 */
         uint8_t RESERVED_0[12];
    __IO uint32_t MEM_RULE[2];                       /**< Security access rules for RAM1 slaves., array offset: 0x80, array step: index*0x18, index2*0x4 */
  } SEC_CTRL_RAM1[1];
       uint8_t RESERVED_2[8];
  struct {                                         /* offset: 0x90, array step: 0x18 */
    __IO uint32_t SLAVE_RULE;                        /**< Security access rules for RAM2 slaves., array offset: 0x90, array step: 0x18 */
         uint8_t RESERVED_0[12];
    __IO uint32_t MEM_RULE[2];                       /**< Security access rules for RAM2 slaves., array offset: 0xA0, array step: index*0x18, index2*0x4 */
  } SEC_CTRL_RAM2[1];
       uint8_t RESERVED_3[8];
  struct {                                         /* offset: 0xB0, array step: 0x18 */
    __IO uint32_t SLAVE_RULE;                        /**< Security access rules for RAM3 slaves., array offset: 0xB0, array step: 0x18 */
         uint8_t RESERVED_0[12];
    __IO uint32_t MEM_RULE[2];                       /**< Security access rules for RAM3 slaves., array offset: 0xC0, array step: index*0x18, index2*0x4 */
  } SEC_CTRL_RAM3[1];
       uint8_t RESERVED_4[8];
  struct {                                         /* offset: 0xD0, array step: 0x14 */
    __IO uint32_t SLAVE_RULE;                        /**< Security access rules for RAM4 slaves., array offset: 0xD0, array step: 0x14 */
         uint8_t RESERVED_0[12];
    __IO uint32_t MEM_RULE[1];                       /**< Security access rules for RAM4 slaves., array offset: 0xE0, array step: index*0x14, index2*0x4 */
  } SEC_CTRL_RAM4[1];
       uint8_t RESERVED_5[12];
  struct {                                         /* offset: 0xF0, array step: 0x30 */
    __IO uint32_t SLAVE_RULE;                        /**< Security access rules for both APB Bridges slaves., array offset: 0xF0, array step: 0x30 */
         uint8_t RESERVED_0[12];
    __IO uint32_t SEC_CTRL_APB_BRIDGE0_MEM_CTRL0;    /**< Security access rules for APB Bridge 0 peripherals. Each APB bridge sector is 4 Kbytes. There are 32 APB Bridge 0 sectors in total., array offset: 0x100, array step: 0x30 */
    __IO uint32_t SEC_CTRL_APB_BRIDGE0_MEM_CTRL1;    /**< Security access rules for APB Bridge 0 peripherals. Each APB bridge sector is 4 Kbytes. There are 32 APB Bridge 0 sectors in total., array offset: 0x104, array step: 0x30 */
    __IO uint32_t SEC_CTRL_APB_BRIDGE0_MEM_CTRL2;    /**< Security access rules for APB Bridge 0 peripherals. Each APB bridge sector is 4 Kbytes. There are 32 APB Bridge 0 sectors in total., array offset: 0x108, array step: 0x30 */
         uint8_t RESERVED_1[4];
    __IO uint32_t SEC_CTRL_APB_BRIDGE1_MEM_CTRL0;    /**< Security access rules for APB Bridge 1 peripherals. Each APB bridge sector is 4 Kbytes. There are 32 APB Bridge 1 sectors in total., array offset: 0x110, array step: 0x30 */
    __IO uint32_t SEC_CTRL_APB_BRIDGE1_MEM_CTRL1;    /**< Security access rules for APB Bridge 1 peripherals. Each APB bridge sector is 4 Kbytes. There are 32 APB Bridge 1 sectors in total., array offset: 0x114, array step: 0x30 */
    __IO uint32_t SEC_CTRL_APB_BRIDGE1_MEM_CTRL2;    /**< Security access rules for APB Bridge 1 peripherals. Each APB bridge sector is 4 Kbytes. There are 32 APB Bridge 1 sectors in total., array offset: 0x118, array step: 0x30 */
    __IO uint32_t SEC_CTRL_APB_BRIDGE1_MEM_CTRL3;    /**< Security access rules for APB Bridge 1 peripherals. Each APB bridge sector is 4 Kbytes. There are 32 APB Bridge 1 sectors in total., array offset: 0x11C, array step: 0x30 */
  } SEC_CTRL_APB_BRIDGE[1];
  __IO uint32_t SEC_CTRL_AHB_PORT8_SLAVE0_RULE;    /**< Security access rules for AHB peripherals., offset: 0x120 */
  __IO uint32_t SEC_CTRL_AHB_PORT8_SLAVE1_RULE;    /**< Security access rules for AHB peripherals., offset: 0x124 */
       uint8_t RESERVED_6[8];
  __IO uint32_t SEC_CTRL_AHB_PORT9_SLAVE0_RULE;    /**< Security access rules for AHB peripherals., offset: 0x130 */
  __IO uint32_t SEC_CTRL_AHB_PORT9_SLAVE1_RULE;    /**< Security access rules for AHB peripherals., offset: 0x134 */
       uint8_t RESERVED_7[8];
  struct {                                         /* offset: 0x140, array step: 0x14 */
    __IO uint32_t SLAVE0_RULE;                       /**< Security access rules for AHB peripherals., array offset: 0x140, array step: 0x14 */
    __IO uint32_t SLAVE1_RULE;                       /**< Security access rules for AHB peripherals., array offset: 0x144, array step: 0x14 */
         uint8_t RESERVED_0[8];
    __IO uint32_t SEC_CTRL_AHB_SEC_CTRL_MEM_RULE[1];   /**< Security access rules for AHB_SEC_CTRL_AHB., array offset: 0x150, array step: index*0x14, index2*0x4 */
  } SEC_CTRL_AHB_PORT10[1];
       uint8_t RESERVED_8[12];
  struct {                                         /* offset: 0x160, array step: 0x14 */
    __IO uint32_t SLAVE_RULE;                        /**< Security access rules for USB High speed RAM slaves., array offset: 0x160, array step: 0x14 */
         uint8_t RESERVED_0[12];
    __IO uint32_t MEM_RULE[1];                       /**< Security access rules for RAM_USB_HS., array offset: 0x170, array step: index*0x14, index2*0x4 */
  } SEC_CTRL_USB_HS[1];
       uint8_t RESERVED_9[3212];
  __I  uint32_t SEC_VIO_ADDR[12];                  /**< most recent security violation address for AHB port n, array offset: 0xE00, array step: 0x4 */
       uint8_t RESERVED_10[80];
  __I  uint32_t SEC_VIO_MISC_INFO[12];             /**< most recent security violation miscellaneous information for AHB port n, array offset: 0xE80, array step: 0x4 */
       uint8_t RESERVED_11[80];
  __IO uint32_t SEC_VIO_INFO_VALID;                /**< security violation address/information registers valid flags, offset: 0xF00 */
       uint8_t RESERVED_12[124];
  __IO uint32_t SEC_GPIO_MASK0;                    /**< Secure GPIO mask for port 0 pins., offset: 0xF80 */
  __IO uint32_t SEC_GPIO_MASK1;                    /**< Secure GPIO mask for port 1 pins., offset: 0xF84 */
       uint8_t RESERVED_13[8];
  __IO uint32_t SEC_CPU_INT_MASK0;                 /**< Secure Interrupt mask for CPU1, offset: 0xF90 */
  __IO uint32_t SEC_CPU_INT_MASK1;                 /**< Secure Interrupt mask for CPU1, offset: 0xF94 */
       uint8_t RESERVED_14[36];
  __IO uint32_t SEC_MASK_LOCK;                     /**< Security General Purpose register access control., offset: 0xFBC */
       uint8_t RESERVED_15[16];
  __IO uint32_t MASTER_SEC_LEVEL;                  /**< master secure level register, offset: 0xFD0 */
  __IO uint32_t MASTER_SEC_ANTI_POL_REG;           /**< master secure level anti-pole register, offset: 0xFD4 */
       uint8_t RESERVED_16[20];
  __IO uint32_t CPU0_LOCK_REG;                     /**< Miscalleneous control signals for in Cortex M33 (CPU0), offset: 0xFEC */
  __IO uint32_t CPU1_LOCK_REG;                     /**< Miscalleneous control signals for in micro-Cortex M33 (CPU1), offset: 0xFF0 */
       uint8_t RESERVED_17[4];
  __IO uint32_t MISC_CTRL_DP_REG;                  /**< secure control duplicate register, offset: 0xFF8 */
  __IO uint32_t MISC_CTRL_REG;                     /**< secure control register, offset: 0xFFC */
} AHB_SECURE_CTRL_Type;

/* ----------------------------------------------------------------------------
   -- AHB_SECURE_CTRL Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup AHB_SECURE_CTRL_Register_Masks AHB_SECURE_CTRL Register Masks
 * @{
 */

/*! @name SEC_CTRL_FLASH_ROM_SLAVE_RULE - Security access rules for Flash and ROM slaves. */
/*! @{ */
#define AHB_SECURE_CTRL_SEC_CTRL_FLASH_ROM_SLAVE_RULE_FLASH_RULE_MASK (0x3U)
#define AHB_SECURE_CTRL_SEC_CTRL_FLASH_ROM_SLAVE_RULE_FLASH_RULE_SHIFT (0U)
/*! FLASH_RULE - Security access rules for the whole FLASH : 0x0000_0000 - 0x0009_FFFF
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_FLASH_ROM_SLAVE_RULE_FLASH_RULE(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_FLASH_ROM_SLAVE_RULE_FLASH_RULE_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_FLASH_ROM_SLAVE_RULE_FLASH_RULE_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_FLASH_ROM_SLAVE_RULE_ROM_RULE_MASK (0x30U)
#define AHB_SECURE_CTRL_SEC_CTRL_FLASH_ROM_SLAVE_RULE_ROM_RULE_SHIFT (4U)
/*! ROM_RULE - Security access rules for the whole ROM : 0x0300_0000 - 0x0301_FFFF
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_FLASH_ROM_SLAVE_RULE_ROM_RULE(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_FLASH_ROM_SLAVE_RULE_ROM_RULE_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_FLASH_ROM_SLAVE_RULE_ROM_RULE_MASK)
/*! @} */

/* The count of AHB_SECURE_CTRL_SEC_CTRL_FLASH_ROM_SLAVE_RULE */
#define AHB_SECURE_CTRL_SEC_CTRL_FLASH_ROM_SLAVE_RULE_COUNT (1U)

/*! @name SEC_CTRL_FLASH_MEM_RULE - Security access rules for FLASH sector 0 to sector 20. Each Flash sector is 32 Kbytes. There are 20 FLASH sectors in total. */
/*! @{ */
#define AHB_SECURE_CTRL_SEC_CTRL_FLASH_MEM_RULE_RULE0_MASK (0x3U)
#define AHB_SECURE_CTRL_SEC_CTRL_FLASH_MEM_RULE_RULE0_SHIFT (0U)
/*! RULE0 - secure control rule0. it can be set when check_reg's write_lock is '0'
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_FLASH_MEM_RULE_RULE0(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_FLASH_MEM_RULE_RULE0_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_FLASH_MEM_RULE_RULE0_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_FLASH_MEM_RULE_RULE1_MASK (0x30U)
#define AHB_SECURE_CTRL_SEC_CTRL_FLASH_MEM_RULE_RULE1_SHIFT (4U)
/*! RULE1 - secure control rule1. it can be set when check_reg's write_lock is '0'
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_FLASH_MEM_RULE_RULE1(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_FLASH_MEM_RULE_RULE1_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_FLASH_MEM_RULE_RULE1_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_FLASH_MEM_RULE_RULE2_MASK (0x300U)
#define AHB_SECURE_CTRL_SEC_CTRL_FLASH_MEM_RULE_RULE2_SHIFT (8U)
/*! RULE2 - secure control rule2. it can be set when check_reg's write_lock is '0'
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_FLASH_MEM_RULE_RULE2(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_FLASH_MEM_RULE_RULE2_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_FLASH_MEM_RULE_RULE2_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_FLASH_MEM_RULE_RULE3_MASK (0x3000U)
#define AHB_SECURE_CTRL_SEC_CTRL_FLASH_MEM_RULE_RULE3_SHIFT (12U)
/*! RULE3 - secure control rule3. it can be set when check_reg's write_lock is '0'
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_FLASH_MEM_RULE_RULE3(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_FLASH_MEM_RULE_RULE3_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_FLASH_MEM_RULE_RULE3_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_FLASH_MEM_RULE_RULE4_MASK (0x30000U)
#define AHB_SECURE_CTRL_SEC_CTRL_FLASH_MEM_RULE_RULE4_SHIFT (16U)
/*! RULE4 - secure control rule4. it can be set when check_reg's write_lock is '0'
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_FLASH_MEM_RULE_RULE4(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_FLASH_MEM_RULE_RULE4_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_FLASH_MEM_RULE_RULE4_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_FLASH_MEM_RULE_RULE5_MASK (0x300000U)
#define AHB_SECURE_CTRL_SEC_CTRL_FLASH_MEM_RULE_RULE5_SHIFT (20U)
/*! RULE5 - secure control rule5. it can be set when check_reg's write_lock is '0'
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_FLASH_MEM_RULE_RULE5(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_FLASH_MEM_RULE_RULE5_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_FLASH_MEM_RULE_RULE5_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_FLASH_MEM_RULE_RULE6_MASK (0x3000000U)
#define AHB_SECURE_CTRL_SEC_CTRL_FLASH_MEM_RULE_RULE6_SHIFT (24U)
/*! RULE6 - secure control rule6. it can be set when check_reg's write_lock is '0'
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_FLASH_MEM_RULE_RULE6(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_FLASH_MEM_RULE_RULE6_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_FLASH_MEM_RULE_RULE6_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_FLASH_MEM_RULE_RULE7_MASK (0x30000000U)
#define AHB_SECURE_CTRL_SEC_CTRL_FLASH_MEM_RULE_RULE7_SHIFT (28U)
/*! RULE7 - secure control rule7. it can be set when check_reg's write_lock is '0'
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_FLASH_MEM_RULE_RULE7(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_FLASH_MEM_RULE_RULE7_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_FLASH_MEM_RULE_RULE7_MASK)
/*! @} */

/* The count of AHB_SECURE_CTRL_SEC_CTRL_FLASH_MEM_RULE */
#define AHB_SECURE_CTRL_SEC_CTRL_FLASH_MEM_RULE_COUNT (1U)

/* The count of AHB_SECURE_CTRL_SEC_CTRL_FLASH_MEM_RULE */
#define AHB_SECURE_CTRL_SEC_CTRL_FLASH_MEM_RULE_COUNT2 (3U)

/*! @name SEC_CTRL_ROM_MEM_RULE - Security access rules for ROM sector 0 to sector 31. Each ROM sector is 4 Kbytes. There are 32 ROM sectors in total. */
/*! @{ */
#define AHB_SECURE_CTRL_SEC_CTRL_ROM_MEM_RULE_RULE0_MASK (0x3U)
#define AHB_SECURE_CTRL_SEC_CTRL_ROM_MEM_RULE_RULE0_SHIFT (0U)
/*! RULE0 - secure control rule0. it can be set when check_reg's write_lock is '0'
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_ROM_MEM_RULE_RULE0(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_ROM_MEM_RULE_RULE0_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_ROM_MEM_RULE_RULE0_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_ROM_MEM_RULE_RULE1_MASK (0x30U)
#define AHB_SECURE_CTRL_SEC_CTRL_ROM_MEM_RULE_RULE1_SHIFT (4U)
/*! RULE1 - secure control rule1. it can be set when check_reg's write_lock is '0'
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_ROM_MEM_RULE_RULE1(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_ROM_MEM_RULE_RULE1_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_ROM_MEM_RULE_RULE1_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_ROM_MEM_RULE_RULE2_MASK (0x300U)
#define AHB_SECURE_CTRL_SEC_CTRL_ROM_MEM_RULE_RULE2_SHIFT (8U)
/*! RULE2 - secure control rule2. it can be set when check_reg's write_lock is '0'
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_ROM_MEM_RULE_RULE2(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_ROM_MEM_RULE_RULE2_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_ROM_MEM_RULE_RULE2_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_ROM_MEM_RULE_RULE3_MASK (0x3000U)
#define AHB_SECURE_CTRL_SEC_CTRL_ROM_MEM_RULE_RULE3_SHIFT (12U)
/*! RULE3 - secure control rule3. it can be set when check_reg's write_lock is '0'
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_ROM_MEM_RULE_RULE3(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_ROM_MEM_RULE_RULE3_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_ROM_MEM_RULE_RULE3_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_ROM_MEM_RULE_RULE4_MASK (0x30000U)
#define AHB_SECURE_CTRL_SEC_CTRL_ROM_MEM_RULE_RULE4_SHIFT (16U)
/*! RULE4 - secure control rule4. it can be set when check_reg's write_lock is '0'
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_ROM_MEM_RULE_RULE4(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_ROM_MEM_RULE_RULE4_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_ROM_MEM_RULE_RULE4_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_ROM_MEM_RULE_RULE5_MASK (0x300000U)
#define AHB_SECURE_CTRL_SEC_CTRL_ROM_MEM_RULE_RULE5_SHIFT (20U)
/*! RULE5 - secure control rule5. it can be set when check_reg's write_lock is '0'
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_ROM_MEM_RULE_RULE5(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_ROM_MEM_RULE_RULE5_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_ROM_MEM_RULE_RULE5_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_ROM_MEM_RULE_RULE6_MASK (0x3000000U)
#define AHB_SECURE_CTRL_SEC_CTRL_ROM_MEM_RULE_RULE6_SHIFT (24U)
/*! RULE6 - secure control rule6. it can be set when check_reg's write_lock is '0'
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_ROM_MEM_RULE_RULE6(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_ROM_MEM_RULE_RULE6_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_ROM_MEM_RULE_RULE6_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_ROM_MEM_RULE_RULE7_MASK (0x30000000U)
#define AHB_SECURE_CTRL_SEC_CTRL_ROM_MEM_RULE_RULE7_SHIFT (28U)
/*! RULE7 - secure control rule7. it can be set when check_reg's write_lock is '0'
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_ROM_MEM_RULE_RULE7(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_ROM_MEM_RULE_RULE7_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_ROM_MEM_RULE_RULE7_MASK)
/*! @} */

/* The count of AHB_SECURE_CTRL_SEC_CTRL_ROM_MEM_RULE */
#define AHB_SECURE_CTRL_SEC_CTRL_ROM_MEM_RULE_COUNT (1U)

/* The count of AHB_SECURE_CTRL_SEC_CTRL_ROM_MEM_RULE */
#define AHB_SECURE_CTRL_SEC_CTRL_ROM_MEM_RULE_COUNT2 (4U)

/*! @name SEC_CTRL_RAMX_SLAVE_RULE - Security access rules for RAMX slaves. */
/*! @{ */
#define AHB_SECURE_CTRL_SEC_CTRL_RAMX_SLAVE_RULE_RAMX_RULE_MASK (0x3U)
#define AHB_SECURE_CTRL_SEC_CTRL_RAMX_SLAVE_RULE_RAMX_RULE_SHIFT (0U)
/*! RAMX_RULE - Security access rules for the whole RAMX : 0x0400_0000 - 0x0400_7FFF
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_RAMX_SLAVE_RULE_RAMX_RULE(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_RAMX_SLAVE_RULE_RAMX_RULE_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_RAMX_SLAVE_RULE_RAMX_RULE_MASK)
/*! @} */

/* The count of AHB_SECURE_CTRL_SEC_CTRL_RAMX_SLAVE_RULE */
#define AHB_SECURE_CTRL_SEC_CTRL_RAMX_SLAVE_RULE_COUNT (1U)

/*! @name SEC_CTRL_RAMX_MEM_RULE - Security access rules for RAMX slaves. */
/*! @{ */
#define AHB_SECURE_CTRL_SEC_CTRL_RAMX_MEM_RULE_RULE0_MASK (0x3U)
#define AHB_SECURE_CTRL_SEC_CTRL_RAMX_MEM_RULE_RULE0_SHIFT (0U)
/*! RULE0 - secure control rule0. it can be set when check_reg's write_lock is '0'
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_RAMX_MEM_RULE_RULE0(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_RAMX_MEM_RULE_RULE0_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_RAMX_MEM_RULE_RULE0_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_RAMX_MEM_RULE_RULE1_MASK (0x30U)
#define AHB_SECURE_CTRL_SEC_CTRL_RAMX_MEM_RULE_RULE1_SHIFT (4U)
/*! RULE1 - secure control rule1. it can be set when check_reg's write_lock is '0'
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_RAMX_MEM_RULE_RULE1(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_RAMX_MEM_RULE_RULE1_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_RAMX_MEM_RULE_RULE1_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_RAMX_MEM_RULE_RULE2_MASK (0x300U)
#define AHB_SECURE_CTRL_SEC_CTRL_RAMX_MEM_RULE_RULE2_SHIFT (8U)
/*! RULE2 - secure control rule2. it can be set when check_reg's write_lock is '0'
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_RAMX_MEM_RULE_RULE2(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_RAMX_MEM_RULE_RULE2_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_RAMX_MEM_RULE_RULE2_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_RAMX_MEM_RULE_RULE3_MASK (0x3000U)
#define AHB_SECURE_CTRL_SEC_CTRL_RAMX_MEM_RULE_RULE3_SHIFT (12U)
/*! RULE3 - secure control rule3. it can be set when check_reg's write_lock is '0'
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_RAMX_MEM_RULE_RULE3(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_RAMX_MEM_RULE_RULE3_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_RAMX_MEM_RULE_RULE3_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_RAMX_MEM_RULE_RULE4_MASK (0x30000U)
#define AHB_SECURE_CTRL_SEC_CTRL_RAMX_MEM_RULE_RULE4_SHIFT (16U)
/*! RULE4 - secure control rule4. it can be set when check_reg's write_lock is '0'
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_RAMX_MEM_RULE_RULE4(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_RAMX_MEM_RULE_RULE4_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_RAMX_MEM_RULE_RULE4_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_RAMX_MEM_RULE_RULE5_MASK (0x300000U)
#define AHB_SECURE_CTRL_SEC_CTRL_RAMX_MEM_RULE_RULE5_SHIFT (20U)
/*! RULE5 - secure control rule5. it can be set when check_reg's write_lock is '0'
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_RAMX_MEM_RULE_RULE5(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_RAMX_MEM_RULE_RULE5_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_RAMX_MEM_RULE_RULE5_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_RAMX_MEM_RULE_RULE6_MASK (0x3000000U)
#define AHB_SECURE_CTRL_SEC_CTRL_RAMX_MEM_RULE_RULE6_SHIFT (24U)
/*! RULE6 - secure control rule6. it can be set when check_reg's write_lock is '0'
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_RAMX_MEM_RULE_RULE6(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_RAMX_MEM_RULE_RULE6_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_RAMX_MEM_RULE_RULE6_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_RAMX_MEM_RULE_RULE7_MASK (0x30000000U)
#define AHB_SECURE_CTRL_SEC_CTRL_RAMX_MEM_RULE_RULE7_SHIFT (28U)
/*! RULE7 - secure control rule7. it can be set when check_reg's write_lock is '0'
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_RAMX_MEM_RULE_RULE7(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_RAMX_MEM_RULE_RULE7_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_RAMX_MEM_RULE_RULE7_MASK)
/*! @} */

/* The count of AHB_SECURE_CTRL_SEC_CTRL_RAMX_MEM_RULE */
#define AHB_SECURE_CTRL_SEC_CTRL_RAMX_MEM_RULE_COUNT (1U)

/* The count of AHB_SECURE_CTRL_SEC_CTRL_RAMX_MEM_RULE */
#define AHB_SECURE_CTRL_SEC_CTRL_RAMX_MEM_RULE_COUNT2 (1U)

/*! @name SEC_CTRL_RAM0_SLAVE_RULE - Security access rules for RAM0 slaves. */
/*! @{ */
#define AHB_SECURE_CTRL_SEC_CTRL_RAM0_SLAVE_RULE_RAM0_RULE_MASK (0x3U)
#define AHB_SECURE_CTRL_SEC_CTRL_RAM0_SLAVE_RULE_RAM0_RULE_SHIFT (0U)
/*! RAM0_RULE - Security access rules for the whole RAM0 : 0x2000_0000 - 0x2000_FFFF
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_RAM0_SLAVE_RULE_RAM0_RULE(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_RAM0_SLAVE_RULE_RAM0_RULE_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_RAM0_SLAVE_RULE_RAM0_RULE_MASK)
/*! @} */

/* The count of AHB_SECURE_CTRL_SEC_CTRL_RAM0_SLAVE_RULE */
#define AHB_SECURE_CTRL_SEC_CTRL_RAM0_SLAVE_RULE_COUNT (1U)

/*! @name SEC_CTRL_RAM0_MEM_RULE - Security access rules for RAM0 slaves. */
/*! @{ */
#define AHB_SECURE_CTRL_SEC_CTRL_RAM0_MEM_RULE_RULE0_MASK (0x3U)
#define AHB_SECURE_CTRL_SEC_CTRL_RAM0_MEM_RULE_RULE0_SHIFT (0U)
/*! RULE0 - secure control rule0. it can be set when check_reg's write_lock is '0'
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_RAM0_MEM_RULE_RULE0(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_RAM0_MEM_RULE_RULE0_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_RAM0_MEM_RULE_RULE0_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_RAM0_MEM_RULE_RULE1_MASK (0x30U)
#define AHB_SECURE_CTRL_SEC_CTRL_RAM0_MEM_RULE_RULE1_SHIFT (4U)
/*! RULE1 - secure control rule1. it can be set when check_reg's write_lock is '0'
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_RAM0_MEM_RULE_RULE1(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_RAM0_MEM_RULE_RULE1_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_RAM0_MEM_RULE_RULE1_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_RAM0_MEM_RULE_RULE2_MASK (0x300U)
#define AHB_SECURE_CTRL_SEC_CTRL_RAM0_MEM_RULE_RULE2_SHIFT (8U)
/*! RULE2 - secure control rule2. it can be set when check_reg's write_lock is '0'
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_RAM0_MEM_RULE_RULE2(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_RAM0_MEM_RULE_RULE2_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_RAM0_MEM_RULE_RULE2_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_RAM0_MEM_RULE_RULE3_MASK (0x3000U)
#define AHB_SECURE_CTRL_SEC_CTRL_RAM0_MEM_RULE_RULE3_SHIFT (12U)
/*! RULE3 - secure control rule3. it can be set when check_reg's write_lock is '0'
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_RAM0_MEM_RULE_RULE3(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_RAM0_MEM_RULE_RULE3_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_RAM0_MEM_RULE_RULE3_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_RAM0_MEM_RULE_RULE4_MASK (0x30000U)
#define AHB_SECURE_CTRL_SEC_CTRL_RAM0_MEM_RULE_RULE4_SHIFT (16U)
/*! RULE4 - secure control rule4. it can be set when check_reg's write_lock is '0'
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_RAM0_MEM_RULE_RULE4(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_RAM0_MEM_RULE_RULE4_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_RAM0_MEM_RULE_RULE4_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_RAM0_MEM_RULE_RULE5_MASK (0x300000U)
#define AHB_SECURE_CTRL_SEC_CTRL_RAM0_MEM_RULE_RULE5_SHIFT (20U)
/*! RULE5 - secure control rule5. it can be set when check_reg's write_lock is '0'
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_RAM0_MEM_RULE_RULE5(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_RAM0_MEM_RULE_RULE5_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_RAM0_MEM_RULE_RULE5_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_RAM0_MEM_RULE_RULE6_MASK (0x3000000U)
#define AHB_SECURE_CTRL_SEC_CTRL_RAM0_MEM_RULE_RULE6_SHIFT (24U)
/*! RULE6 - secure control rule6. it can be set when check_reg's write_lock is '0'
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_RAM0_MEM_RULE_RULE6(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_RAM0_MEM_RULE_RULE6_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_RAM0_MEM_RULE_RULE6_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_RAM0_MEM_RULE_RULE7_MASK (0x30000000U)
#define AHB_SECURE_CTRL_SEC_CTRL_RAM0_MEM_RULE_RULE7_SHIFT (28U)
/*! RULE7 - secure control rule7. it can be set when check_reg's write_lock is '0'
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_RAM0_MEM_RULE_RULE7(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_RAM0_MEM_RULE_RULE7_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_RAM0_MEM_RULE_RULE7_MASK)
/*! @} */

/* The count of AHB_SECURE_CTRL_SEC_CTRL_RAM0_MEM_RULE */
#define AHB_SECURE_CTRL_SEC_CTRL_RAM0_MEM_RULE_COUNT (1U)

/* The count of AHB_SECURE_CTRL_SEC_CTRL_RAM0_MEM_RULE */
#define AHB_SECURE_CTRL_SEC_CTRL_RAM0_MEM_RULE_COUNT2 (2U)

/*! @name SEC_CTRL_RAM1_SLAVE_RULE - Security access rules for RAM1 slaves. */
/*! @{ */
#define AHB_SECURE_CTRL_SEC_CTRL_RAM1_SLAVE_RULE_RAM1_RULE_MASK (0x3U)
#define AHB_SECURE_CTRL_SEC_CTRL_RAM1_SLAVE_RULE_RAM1_RULE_SHIFT (0U)
/*! RAM1_RULE - Security access rules for the whole RAM1 : 0x2001_0000 - 0x2001_FFFF" name="0
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_RAM1_SLAVE_RULE_RAM1_RULE(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_RAM1_SLAVE_RULE_RAM1_RULE_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_RAM1_SLAVE_RULE_RAM1_RULE_MASK)
/*! @} */

/* The count of AHB_SECURE_CTRL_SEC_CTRL_RAM1_SLAVE_RULE */
#define AHB_SECURE_CTRL_SEC_CTRL_RAM1_SLAVE_RULE_COUNT (1U)

/*! @name SEC_CTRL_RAM1_MEM_RULE - Security access rules for RAM1 slaves. */
/*! @{ */
#define AHB_SECURE_CTRL_SEC_CTRL_RAM1_MEM_RULE_RULE0_MASK (0x3U)
#define AHB_SECURE_CTRL_SEC_CTRL_RAM1_MEM_RULE_RULE0_SHIFT (0U)
/*! RULE0 - secure control rule0. it can be set when check_reg's write_lock is '0'
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_RAM1_MEM_RULE_RULE0(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_RAM1_MEM_RULE_RULE0_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_RAM1_MEM_RULE_RULE0_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_RAM1_MEM_RULE_RULE1_MASK (0x30U)
#define AHB_SECURE_CTRL_SEC_CTRL_RAM1_MEM_RULE_RULE1_SHIFT (4U)
/*! RULE1 - secure control rule1. it can be set when check_reg's write_lock is '0'
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_RAM1_MEM_RULE_RULE1(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_RAM1_MEM_RULE_RULE1_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_RAM1_MEM_RULE_RULE1_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_RAM1_MEM_RULE_RULE2_MASK (0x300U)
#define AHB_SECURE_CTRL_SEC_CTRL_RAM1_MEM_RULE_RULE2_SHIFT (8U)
/*! RULE2 - secure control rule2. it can be set when check_reg's write_lock is '0'
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_RAM1_MEM_RULE_RULE2(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_RAM1_MEM_RULE_RULE2_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_RAM1_MEM_RULE_RULE2_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_RAM1_MEM_RULE_RULE3_MASK (0x3000U)
#define AHB_SECURE_CTRL_SEC_CTRL_RAM1_MEM_RULE_RULE3_SHIFT (12U)
/*! RULE3 - secure control rule3. it can be set when check_reg's write_lock is '0'
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_RAM1_MEM_RULE_RULE3(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_RAM1_MEM_RULE_RULE3_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_RAM1_MEM_RULE_RULE3_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_RAM1_MEM_RULE_RULE4_MASK (0x30000U)
#define AHB_SECURE_CTRL_SEC_CTRL_RAM1_MEM_RULE_RULE4_SHIFT (16U)
/*! RULE4 - secure control rule4. it can be set when check_reg's write_lock is '0'
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_RAM1_MEM_RULE_RULE4(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_RAM1_MEM_RULE_RULE4_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_RAM1_MEM_RULE_RULE4_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_RAM1_MEM_RULE_RULE5_MASK (0x300000U)
#define AHB_SECURE_CTRL_SEC_CTRL_RAM1_MEM_RULE_RULE5_SHIFT (20U)
/*! RULE5 - secure control rule5. it can be set when check_reg's write_lock is '0'
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_RAM1_MEM_RULE_RULE5(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_RAM1_MEM_RULE_RULE5_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_RAM1_MEM_RULE_RULE5_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_RAM1_MEM_RULE_RULE6_MASK (0x3000000U)
#define AHB_SECURE_CTRL_SEC_CTRL_RAM1_MEM_RULE_RULE6_SHIFT (24U)
/*! RULE6 - secure control rule6. it can be set when check_reg's write_lock is '0'
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_RAM1_MEM_RULE_RULE6(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_RAM1_MEM_RULE_RULE6_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_RAM1_MEM_RULE_RULE6_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_RAM1_MEM_RULE_RULE7_MASK (0x30000000U)
#define AHB_SECURE_CTRL_SEC_CTRL_RAM1_MEM_RULE_RULE7_SHIFT (28U)
/*! RULE7 - secure control rule7. it can be set when check_reg's write_lock is '0'
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_RAM1_MEM_RULE_RULE7(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_RAM1_MEM_RULE_RULE7_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_RAM1_MEM_RULE_RULE7_MASK)
/*! @} */

/* The count of AHB_SECURE_CTRL_SEC_CTRL_RAM1_MEM_RULE */
#define AHB_SECURE_CTRL_SEC_CTRL_RAM1_MEM_RULE_COUNT (1U)

/* The count of AHB_SECURE_CTRL_SEC_CTRL_RAM1_MEM_RULE */
#define AHB_SECURE_CTRL_SEC_CTRL_RAM1_MEM_RULE_COUNT2 (2U)

/*! @name SEC_CTRL_RAM2_SLAVE_RULE - Security access rules for RAM2 slaves. */
/*! @{ */
#define AHB_SECURE_CTRL_SEC_CTRL_RAM2_SLAVE_RULE_RAM2_RULE_MASK (0x3U)
#define AHB_SECURE_CTRL_SEC_CTRL_RAM2_SLAVE_RULE_RAM2_RULE_SHIFT (0U)
/*! RAM2_RULE - Security access rules for the whole RAM2 : 0x2002_0000 - 0x2002_FFFF
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_RAM2_SLAVE_RULE_RAM2_RULE(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_RAM2_SLAVE_RULE_RAM2_RULE_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_RAM2_SLAVE_RULE_RAM2_RULE_MASK)
/*! @} */

/* The count of AHB_SECURE_CTRL_SEC_CTRL_RAM2_SLAVE_RULE */
#define AHB_SECURE_CTRL_SEC_CTRL_RAM2_SLAVE_RULE_COUNT (1U)

/*! @name SEC_CTRL_RAM2_MEM_RULE - Security access rules for RAM2 slaves. */
/*! @{ */
#define AHB_SECURE_CTRL_SEC_CTRL_RAM2_MEM_RULE_RULE0_MASK (0x3U)
#define AHB_SECURE_CTRL_SEC_CTRL_RAM2_MEM_RULE_RULE0_SHIFT (0U)
/*! RULE0 - secure control rule0. it can be set when check_reg's write_lock is '0'
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_RAM2_MEM_RULE_RULE0(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_RAM2_MEM_RULE_RULE0_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_RAM2_MEM_RULE_RULE0_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_RAM2_MEM_RULE_RULE1_MASK (0x30U)
#define AHB_SECURE_CTRL_SEC_CTRL_RAM2_MEM_RULE_RULE1_SHIFT (4U)
/*! RULE1 - secure control rule1. it can be set when check_reg's write_lock is '0'
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_RAM2_MEM_RULE_RULE1(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_RAM2_MEM_RULE_RULE1_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_RAM2_MEM_RULE_RULE1_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_RAM2_MEM_RULE_RULE2_MASK (0x300U)
#define AHB_SECURE_CTRL_SEC_CTRL_RAM2_MEM_RULE_RULE2_SHIFT (8U)
/*! RULE2 - secure control rule2. it can be set when check_reg's write_lock is '0'
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_RAM2_MEM_RULE_RULE2(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_RAM2_MEM_RULE_RULE2_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_RAM2_MEM_RULE_RULE2_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_RAM2_MEM_RULE_RULE3_MASK (0x3000U)
#define AHB_SECURE_CTRL_SEC_CTRL_RAM2_MEM_RULE_RULE3_SHIFT (12U)
/*! RULE3 - secure control rule3. it can be set when check_reg's write_lock is '0'
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_RAM2_MEM_RULE_RULE3(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_RAM2_MEM_RULE_RULE3_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_RAM2_MEM_RULE_RULE3_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_RAM2_MEM_RULE_RULE4_MASK (0x30000U)
#define AHB_SECURE_CTRL_SEC_CTRL_RAM2_MEM_RULE_RULE4_SHIFT (16U)
/*! RULE4 - secure control rule4. it can be set when check_reg's write_lock is '0'
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_RAM2_MEM_RULE_RULE4(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_RAM2_MEM_RULE_RULE4_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_RAM2_MEM_RULE_RULE4_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_RAM2_MEM_RULE_RULE5_MASK (0x300000U)
#define AHB_SECURE_CTRL_SEC_CTRL_RAM2_MEM_RULE_RULE5_SHIFT (20U)
/*! RULE5 - secure control rule5. it can be set when check_reg's write_lock is '0'
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_RAM2_MEM_RULE_RULE5(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_RAM2_MEM_RULE_RULE5_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_RAM2_MEM_RULE_RULE5_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_RAM2_MEM_RULE_RULE6_MASK (0x3000000U)
#define AHB_SECURE_CTRL_SEC_CTRL_RAM2_MEM_RULE_RULE6_SHIFT (24U)
/*! RULE6 - secure control rule6. it can be set when check_reg's write_lock is '0'
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_RAM2_MEM_RULE_RULE6(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_RAM2_MEM_RULE_RULE6_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_RAM2_MEM_RULE_RULE6_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_RAM2_MEM_RULE_RULE7_MASK (0x30000000U)
#define AHB_SECURE_CTRL_SEC_CTRL_RAM2_MEM_RULE_RULE7_SHIFT (28U)
/*! RULE7 - secure control rule7. it can be set when check_reg's write_lock is '0'
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_RAM2_MEM_RULE_RULE7(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_RAM2_MEM_RULE_RULE7_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_RAM2_MEM_RULE_RULE7_MASK)
/*! @} */

/* The count of AHB_SECURE_CTRL_SEC_CTRL_RAM2_MEM_RULE */
#define AHB_SECURE_CTRL_SEC_CTRL_RAM2_MEM_RULE_COUNT (1U)

/* The count of AHB_SECURE_CTRL_SEC_CTRL_RAM2_MEM_RULE */
#define AHB_SECURE_CTRL_SEC_CTRL_RAM2_MEM_RULE_COUNT2 (2U)

/*! @name SEC_CTRL_RAM3_SLAVE_RULE - Security access rules for RAM3 slaves. */
/*! @{ */
#define AHB_SECURE_CTRL_SEC_CTRL_RAM3_SLAVE_RULE_RAM3_RULE_MASK (0x3U)
#define AHB_SECURE_CTRL_SEC_CTRL_RAM3_SLAVE_RULE_RAM3_RULE_SHIFT (0U)
/*! RAM3_RULE - Security access rules for the whole RAM3: 0x2003_0000 - 0x2003_FFFF
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_RAM3_SLAVE_RULE_RAM3_RULE(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_RAM3_SLAVE_RULE_RAM3_RULE_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_RAM3_SLAVE_RULE_RAM3_RULE_MASK)
/*! @} */

/* The count of AHB_SECURE_CTRL_SEC_CTRL_RAM3_SLAVE_RULE */
#define AHB_SECURE_CTRL_SEC_CTRL_RAM3_SLAVE_RULE_COUNT (1U)

/*! @name SEC_CTRL_RAM3_MEM_RULE - Security access rules for RAM3 slaves. */
/*! @{ */
#define AHB_SECURE_CTRL_SEC_CTRL_RAM3_MEM_RULE_RULE0_MASK (0x3U)
#define AHB_SECURE_CTRL_SEC_CTRL_RAM3_MEM_RULE_RULE0_SHIFT (0U)
/*! RULE0 - secure control rule0. it can be set when check_reg's write_lock is '0'
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_RAM3_MEM_RULE_RULE0(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_RAM3_MEM_RULE_RULE0_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_RAM3_MEM_RULE_RULE0_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_RAM3_MEM_RULE_RULE1_MASK (0x30U)
#define AHB_SECURE_CTRL_SEC_CTRL_RAM3_MEM_RULE_RULE1_SHIFT (4U)
/*! RULE1 - secure control rule1. it can be set when check_reg's write_lock is '0'
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_RAM3_MEM_RULE_RULE1(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_RAM3_MEM_RULE_RULE1_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_RAM3_MEM_RULE_RULE1_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_RAM3_MEM_RULE_RULE2_MASK (0x300U)
#define AHB_SECURE_CTRL_SEC_CTRL_RAM3_MEM_RULE_RULE2_SHIFT (8U)
/*! RULE2 - secure control rule2. it can be set when check_reg's write_lock is '0'
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_RAM3_MEM_RULE_RULE2(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_RAM3_MEM_RULE_RULE2_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_RAM3_MEM_RULE_RULE2_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_RAM3_MEM_RULE_RULE3_MASK (0x3000U)
#define AHB_SECURE_CTRL_SEC_CTRL_RAM3_MEM_RULE_RULE3_SHIFT (12U)
/*! RULE3 - secure control rule3. it can be set when check_reg's write_lock is '0'
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_RAM3_MEM_RULE_RULE3(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_RAM3_MEM_RULE_RULE3_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_RAM3_MEM_RULE_RULE3_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_RAM3_MEM_RULE_RULE4_MASK (0x30000U)
#define AHB_SECURE_CTRL_SEC_CTRL_RAM3_MEM_RULE_RULE4_SHIFT (16U)
/*! RULE4 - secure control rule4. it can be set when check_reg's write_lock is '0'
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_RAM3_MEM_RULE_RULE4(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_RAM3_MEM_RULE_RULE4_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_RAM3_MEM_RULE_RULE4_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_RAM3_MEM_RULE_RULE5_MASK (0x300000U)
#define AHB_SECURE_CTRL_SEC_CTRL_RAM3_MEM_RULE_RULE5_SHIFT (20U)
/*! RULE5 - secure control rule5. it can be set when check_reg's write_lock is '0'
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_RAM3_MEM_RULE_RULE5(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_RAM3_MEM_RULE_RULE5_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_RAM3_MEM_RULE_RULE5_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_RAM3_MEM_RULE_RULE6_MASK (0x3000000U)
#define AHB_SECURE_CTRL_SEC_CTRL_RAM3_MEM_RULE_RULE6_SHIFT (24U)
/*! RULE6 - secure control rule6. it can be set when check_reg's write_lock is '0'
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_RAM3_MEM_RULE_RULE6(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_RAM3_MEM_RULE_RULE6_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_RAM3_MEM_RULE_RULE6_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_RAM3_MEM_RULE_RULE7_MASK (0x30000000U)
#define AHB_SECURE_CTRL_SEC_CTRL_RAM3_MEM_RULE_RULE7_SHIFT (28U)
/*! RULE7 - secure control rule7. it can be set when check_reg's write_lock is '0'
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_RAM3_MEM_RULE_RULE7(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_RAM3_MEM_RULE_RULE7_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_RAM3_MEM_RULE_RULE7_MASK)
/*! @} */

/* The count of AHB_SECURE_CTRL_SEC_CTRL_RAM3_MEM_RULE */
#define AHB_SECURE_CTRL_SEC_CTRL_RAM3_MEM_RULE_COUNT (1U)

/* The count of AHB_SECURE_CTRL_SEC_CTRL_RAM3_MEM_RULE */
#define AHB_SECURE_CTRL_SEC_CTRL_RAM3_MEM_RULE_COUNT2 (2U)

/*! @name SEC_CTRL_RAM4_SLAVE_RULE - Security access rules for RAM4 slaves. */
/*! @{ */
#define AHB_SECURE_CTRL_SEC_CTRL_RAM4_SLAVE_RULE_RAM4_RULE_MASK (0x3U)
#define AHB_SECURE_CTRL_SEC_CTRL_RAM4_SLAVE_RULE_RAM4_RULE_SHIFT (0U)
/*! RAM4_RULE - Security access rules for the whole RAM4 : 0x2004_0000 - 0x2004_3FFF
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_RAM4_SLAVE_RULE_RAM4_RULE(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_RAM4_SLAVE_RULE_RAM4_RULE_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_RAM4_SLAVE_RULE_RAM4_RULE_MASK)
/*! @} */

/* The count of AHB_SECURE_CTRL_SEC_CTRL_RAM4_SLAVE_RULE */
#define AHB_SECURE_CTRL_SEC_CTRL_RAM4_SLAVE_RULE_COUNT (1U)

/*! @name SEC_CTRL_RAM4_MEM_RULE - Security access rules for RAM4 slaves. */
/*! @{ */
#define AHB_SECURE_CTRL_SEC_CTRL_RAM4_MEM_RULE_RULE0_MASK (0x3U)
#define AHB_SECURE_CTRL_SEC_CTRL_RAM4_MEM_RULE_RULE0_SHIFT (0U)
/*! RULE0 - secure control rule0. it can be set when check_reg's write_lock is '0'
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_RAM4_MEM_RULE_RULE0(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_RAM4_MEM_RULE_RULE0_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_RAM4_MEM_RULE_RULE0_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_RAM4_MEM_RULE_RULE1_MASK (0x30U)
#define AHB_SECURE_CTRL_SEC_CTRL_RAM4_MEM_RULE_RULE1_SHIFT (4U)
/*! RULE1 - secure control rule1. it can be set when check_reg's write_lock is '0'
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_RAM4_MEM_RULE_RULE1(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_RAM4_MEM_RULE_RULE1_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_RAM4_MEM_RULE_RULE1_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_RAM4_MEM_RULE_RULE2_MASK (0x300U)
#define AHB_SECURE_CTRL_SEC_CTRL_RAM4_MEM_RULE_RULE2_SHIFT (8U)
/*! RULE2 - secure control rule2. it can be set when check_reg's write_lock is '0'
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_RAM4_MEM_RULE_RULE2(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_RAM4_MEM_RULE_RULE2_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_RAM4_MEM_RULE_RULE2_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_RAM4_MEM_RULE_RULE3_MASK (0x3000U)
#define AHB_SECURE_CTRL_SEC_CTRL_RAM4_MEM_RULE_RULE3_SHIFT (12U)
/*! RULE3 - secure control rule3. it can be set when check_reg's write_lock is '0'
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_RAM4_MEM_RULE_RULE3(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_RAM4_MEM_RULE_RULE3_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_RAM4_MEM_RULE_RULE3_MASK)
/*! @} */

/* The count of AHB_SECURE_CTRL_SEC_CTRL_RAM4_MEM_RULE */
#define AHB_SECURE_CTRL_SEC_CTRL_RAM4_MEM_RULE_COUNT (1U)

/* The count of AHB_SECURE_CTRL_SEC_CTRL_RAM4_MEM_RULE */
#define AHB_SECURE_CTRL_SEC_CTRL_RAM4_MEM_RULE_COUNT2 (1U)

/*! @name SEC_CTRL_APB_BRIDGE_SLAVE_RULE - Security access rules for both APB Bridges slaves. */
/*! @{ */
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE_SLAVE_RULE_APBBRIDGE0_RULE_MASK (0x3U)
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE_SLAVE_RULE_APBBRIDGE0_RULE_SHIFT (0U)
/*! APBBRIDGE0_RULE - Security access rules for the whole APB Bridge 0
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE_SLAVE_RULE_APBBRIDGE0_RULE(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE_SLAVE_RULE_APBBRIDGE0_RULE_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE_SLAVE_RULE_APBBRIDGE0_RULE_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE_SLAVE_RULE_APBBRIDGE1_RULE_MASK (0x30U)
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE_SLAVE_RULE_APBBRIDGE1_RULE_SHIFT (4U)
/*! APBBRIDGE1_RULE - Security access rules for the whole APB Bridge 1
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE_SLAVE_RULE_APBBRIDGE1_RULE(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE_SLAVE_RULE_APBBRIDGE1_RULE_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE_SLAVE_RULE_APBBRIDGE1_RULE_MASK)
/*! @} */

/* The count of AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE_SLAVE_RULE */
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE_SLAVE_RULE_COUNT (1U)

/*! @name SEC_CTRL_APB_BRIDGE0_MEM_CTRL0 - Security access rules for APB Bridge 0 peripherals. Each APB bridge sector is 4 Kbytes. There are 32 APB Bridge 0 sectors in total. */
/*! @{ */
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE0_MEM_CTRL0_SYSCON_RULE_MASK (0x3U)
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE0_MEM_CTRL0_SYSCON_RULE_SHIFT (0U)
/*! SYSCON_RULE - System Configuration
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE0_MEM_CTRL0_SYSCON_RULE(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE0_MEM_CTRL0_SYSCON_RULE_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE0_MEM_CTRL0_SYSCON_RULE_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE0_MEM_CTRL0_IOCON_RULE_MASK (0x30U)
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE0_MEM_CTRL0_IOCON_RULE_SHIFT (4U)
/*! IOCON_RULE - I/O Configuration
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE0_MEM_CTRL0_IOCON_RULE(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE0_MEM_CTRL0_IOCON_RULE_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE0_MEM_CTRL0_IOCON_RULE_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE0_MEM_CTRL0_GINT0_RULE_MASK (0x300U)
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE0_MEM_CTRL0_GINT0_RULE_SHIFT (8U)
/*! GINT0_RULE - GPIO input Interrupt 0
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE0_MEM_CTRL0_GINT0_RULE(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE0_MEM_CTRL0_GINT0_RULE_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE0_MEM_CTRL0_GINT0_RULE_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE0_MEM_CTRL0_GINT1_RULE_MASK (0x3000U)
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE0_MEM_CTRL0_GINT1_RULE_SHIFT (12U)
/*! GINT1_RULE - GPIO input Interrupt 1
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE0_MEM_CTRL0_GINT1_RULE(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE0_MEM_CTRL0_GINT1_RULE_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE0_MEM_CTRL0_GINT1_RULE_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE0_MEM_CTRL0_PINT_RULE_MASK (0x30000U)
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE0_MEM_CTRL0_PINT_RULE_SHIFT (16U)
/*! PINT_RULE - Pin Interrupt and Pattern match
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE0_MEM_CTRL0_PINT_RULE(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE0_MEM_CTRL0_PINT_RULE_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE0_MEM_CTRL0_PINT_RULE_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE0_MEM_CTRL0_SEC_PINT_RULE_MASK (0x300000U)
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE0_MEM_CTRL0_SEC_PINT_RULE_SHIFT (20U)
/*! SEC_PINT_RULE - Secure Pin Interrupt and Pattern match
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE0_MEM_CTRL0_SEC_PINT_RULE(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE0_MEM_CTRL0_SEC_PINT_RULE_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE0_MEM_CTRL0_SEC_PINT_RULE_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE0_MEM_CTRL0_INPUTMUX_RULE_MASK (0x3000000U)
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE0_MEM_CTRL0_INPUTMUX_RULE_SHIFT (24U)
/*! INPUTMUX_RULE - Peripheral input multiplexing
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE0_MEM_CTRL0_INPUTMUX_RULE(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE0_MEM_CTRL0_INPUTMUX_RULE_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE0_MEM_CTRL0_INPUTMUX_RULE_MASK)
/*! @} */

/* The count of AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE0_MEM_CTRL0 */
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE0_MEM_CTRL0_COUNT (1U)

/*! @name SEC_CTRL_APB_BRIDGE0_MEM_CTRL1 - Security access rules for APB Bridge 0 peripherals. Each APB bridge sector is 4 Kbytes. There are 32 APB Bridge 0 sectors in total. */
/*! @{ */
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE0_MEM_CTRL1_CTIMER0_RULE_MASK (0x3U)
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE0_MEM_CTRL1_CTIMER0_RULE_SHIFT (0U)
/*! CTIMER0_RULE - Standard counter/Timer 0
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE0_MEM_CTRL1_CTIMER0_RULE(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE0_MEM_CTRL1_CTIMER0_RULE_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE0_MEM_CTRL1_CTIMER0_RULE_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE0_MEM_CTRL1_CTIMER1_RULE_MASK (0x30U)
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE0_MEM_CTRL1_CTIMER1_RULE_SHIFT (4U)
/*! CTIMER1_RULE - Standard counter/Timer 1
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE0_MEM_CTRL1_CTIMER1_RULE(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE0_MEM_CTRL1_CTIMER1_RULE_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE0_MEM_CTRL1_CTIMER1_RULE_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE0_MEM_CTRL1_WWDT_RULE_MASK (0x30000U)
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE0_MEM_CTRL1_WWDT_RULE_SHIFT (16U)
/*! WWDT_RULE - Windiwed wtachdog Timer
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE0_MEM_CTRL1_WWDT_RULE(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE0_MEM_CTRL1_WWDT_RULE_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE0_MEM_CTRL1_WWDT_RULE_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE0_MEM_CTRL1_MRT_RULE_MASK (0x300000U)
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE0_MEM_CTRL1_MRT_RULE_SHIFT (20U)
/*! MRT_RULE - Multi-rate Timer
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE0_MEM_CTRL1_MRT_RULE(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE0_MEM_CTRL1_MRT_RULE_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE0_MEM_CTRL1_MRT_RULE_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE0_MEM_CTRL1_UTICK_RULE_MASK (0x3000000U)
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE0_MEM_CTRL1_UTICK_RULE_SHIFT (24U)
/*! UTICK_RULE - Micro-Timer
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE0_MEM_CTRL1_UTICK_RULE(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE0_MEM_CTRL1_UTICK_RULE_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE0_MEM_CTRL1_UTICK_RULE_MASK)
/*! @} */

/* The count of AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE0_MEM_CTRL1 */
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE0_MEM_CTRL1_COUNT (1U)

/*! @name SEC_CTRL_APB_BRIDGE0_MEM_CTRL2 - Security access rules for APB Bridge 0 peripherals. Each APB bridge sector is 4 Kbytes. There are 32 APB Bridge 0 sectors in total. */
/*! @{ */
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE0_MEM_CTRL2_ANACTRL_RULE_MASK (0x3000U)
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE0_MEM_CTRL2_ANACTRL_RULE_SHIFT (12U)
/*! ANACTRL_RULE - Analog Modules controller
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE0_MEM_CTRL2_ANACTRL_RULE(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE0_MEM_CTRL2_ANACTRL_RULE_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE0_MEM_CTRL2_ANACTRL_RULE_MASK)
/*! @} */

/* The count of AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE0_MEM_CTRL2 */
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE0_MEM_CTRL2_COUNT (1U)

/*! @name SEC_CTRL_APB_BRIDGE1_MEM_CTRL0 - Security access rules for APB Bridge 1 peripherals. Each APB bridge sector is 4 Kbytes. There are 32 APB Bridge 1 sectors in total. */
/*! @{ */
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE1_MEM_CTRL0_PMC_RULE_MASK (0x3U)
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE1_MEM_CTRL0_PMC_RULE_SHIFT (0U)
/*! PMC_RULE - Power Management Controller
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE1_MEM_CTRL0_PMC_RULE(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE1_MEM_CTRL0_PMC_RULE_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE1_MEM_CTRL0_PMC_RULE_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE1_MEM_CTRL0_SYSCTRL_RULE_MASK (0x3000U)
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE1_MEM_CTRL0_SYSCTRL_RULE_SHIFT (12U)
/*! SYSCTRL_RULE - System Controller
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE1_MEM_CTRL0_SYSCTRL_RULE(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE1_MEM_CTRL0_SYSCTRL_RULE_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE1_MEM_CTRL0_SYSCTRL_RULE_MASK)
/*! @} */

/* The count of AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE1_MEM_CTRL0 */
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE1_MEM_CTRL0_COUNT (1U)

/*! @name SEC_CTRL_APB_BRIDGE1_MEM_CTRL1 - Security access rules for APB Bridge 1 peripherals. Each APB bridge sector is 4 Kbytes. There are 32 APB Bridge 1 sectors in total. */
/*! @{ */
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE1_MEM_CTRL1_CTIMER2_RULE_MASK (0x3U)
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE1_MEM_CTRL1_CTIMER2_RULE_SHIFT (0U)
/*! CTIMER2_RULE - Standard counter/Timer 2
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE1_MEM_CTRL1_CTIMER2_RULE(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE1_MEM_CTRL1_CTIMER2_RULE_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE1_MEM_CTRL1_CTIMER2_RULE_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE1_MEM_CTRL1_CTIMER3_RULE_MASK (0x30U)
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE1_MEM_CTRL1_CTIMER3_RULE_SHIFT (4U)
/*! CTIMER3_RULE - Standard counter/Timer 3
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE1_MEM_CTRL1_CTIMER3_RULE(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE1_MEM_CTRL1_CTIMER3_RULE_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE1_MEM_CTRL1_CTIMER3_RULE_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE1_MEM_CTRL1_CTIMER4_RULE_MASK (0x300U)
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE1_MEM_CTRL1_CTIMER4_RULE_SHIFT (8U)
/*! CTIMER4_RULE - Standard counter/Timer 4
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE1_MEM_CTRL1_CTIMER4_RULE(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE1_MEM_CTRL1_CTIMER4_RULE_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE1_MEM_CTRL1_CTIMER4_RULE_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE1_MEM_CTRL1_RTC_RULE_MASK (0x30000U)
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE1_MEM_CTRL1_RTC_RULE_SHIFT (16U)
/*! RTC_RULE - Real Time Counter
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE1_MEM_CTRL1_RTC_RULE(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE1_MEM_CTRL1_RTC_RULE_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE1_MEM_CTRL1_RTC_RULE_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE1_MEM_CTRL1_OSEVENT_RULE_MASK (0x300000U)
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE1_MEM_CTRL1_OSEVENT_RULE_SHIFT (20U)
/*! OSEVENT_RULE - OS Event Timer
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE1_MEM_CTRL1_OSEVENT_RULE(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE1_MEM_CTRL1_OSEVENT_RULE_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE1_MEM_CTRL1_OSEVENT_RULE_MASK)
/*! @} */

/* The count of AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE1_MEM_CTRL1 */
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE1_MEM_CTRL1_COUNT (1U)

/*! @name SEC_CTRL_APB_BRIDGE1_MEM_CTRL2 - Security access rules for APB Bridge 1 peripherals. Each APB bridge sector is 4 Kbytes. There are 32 APB Bridge 1 sectors in total. */
/*! @{ */
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE1_MEM_CTRL2_FLASH_CTRL_RULE_MASK (0x30000U)
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE1_MEM_CTRL2_FLASH_CTRL_RULE_SHIFT (16U)
/*! FLASH_CTRL_RULE - Flash Controller
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE1_MEM_CTRL2_FLASH_CTRL_RULE(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE1_MEM_CTRL2_FLASH_CTRL_RULE_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE1_MEM_CTRL2_FLASH_CTRL_RULE_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE1_MEM_CTRL2_PRINCE_RULE_MASK (0x300000U)
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE1_MEM_CTRL2_PRINCE_RULE_SHIFT (20U)
/*! PRINCE_RULE - Prince
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE1_MEM_CTRL2_PRINCE_RULE(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE1_MEM_CTRL2_PRINCE_RULE_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE1_MEM_CTRL2_PRINCE_RULE_MASK)
/*! @} */

/* The count of AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE1_MEM_CTRL2 */
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE1_MEM_CTRL2_COUNT (1U)

/*! @name SEC_CTRL_APB_BRIDGE1_MEM_CTRL3 - Security access rules for APB Bridge 1 peripherals. Each APB bridge sector is 4 Kbytes. There are 32 APB Bridge 1 sectors in total. */
/*! @{ */
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE1_MEM_CTRL3_USBHPHY_RULE_MASK (0x3U)
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE1_MEM_CTRL3_USBHPHY_RULE_SHIFT (0U)
/*! USBHPHY_RULE - USB High Speed Phy controller
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE1_MEM_CTRL3_USBHPHY_RULE(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE1_MEM_CTRL3_USBHPHY_RULE_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE1_MEM_CTRL3_USBHPHY_RULE_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE1_MEM_CTRL3_RNG_RULE_MASK (0x300U)
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE1_MEM_CTRL3_RNG_RULE_SHIFT (8U)
/*! RNG_RULE - True Random Number Generator
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE1_MEM_CTRL3_RNG_RULE(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE1_MEM_CTRL3_RNG_RULE_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE1_MEM_CTRL3_RNG_RULE_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE1_MEM_CTRL3_PUF_RULE_MASK (0x3000U)
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE1_MEM_CTRL3_PUF_RULE_SHIFT (12U)
/*! PUF_RULE - PUF
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE1_MEM_CTRL3_PUF_RULE(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE1_MEM_CTRL3_PUF_RULE_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE1_MEM_CTRL3_PUF_RULE_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE1_MEM_CTRL3_PLU_RULE_MASK (0x300000U)
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE1_MEM_CTRL3_PLU_RULE_SHIFT (20U)
/*! PLU_RULE - Programmable Look-Up logic
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE1_MEM_CTRL3_PLU_RULE(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE1_MEM_CTRL3_PLU_RULE_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE1_MEM_CTRL3_PLU_RULE_MASK)
/*! @} */

/* The count of AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE1_MEM_CTRL3 */
#define AHB_SECURE_CTRL_SEC_CTRL_APB_BRIDGE1_MEM_CTRL3_COUNT (1U)

/*! @name SEC_CTRL_AHB_PORT8_SLAVE0_RULE - Security access rules for AHB peripherals. */
/*! @{ */
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT8_SLAVE0_RULE_DMA0_RULE_MASK (0x300U)
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT8_SLAVE0_RULE_DMA0_RULE_SHIFT (8U)
/*! DMA0_RULE - DMA Controller
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT8_SLAVE0_RULE_DMA0_RULE(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT8_SLAVE0_RULE_DMA0_RULE_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT8_SLAVE0_RULE_DMA0_RULE_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT8_SLAVE0_RULE_FS_USB_DEV_RULE_MASK (0x30000U)
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT8_SLAVE0_RULE_FS_USB_DEV_RULE_SHIFT (16U)
/*! FS_USB_DEV_RULE - USB Full-speed device
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT8_SLAVE0_RULE_FS_USB_DEV_RULE(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT8_SLAVE0_RULE_FS_USB_DEV_RULE_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT8_SLAVE0_RULE_FS_USB_DEV_RULE_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT8_SLAVE0_RULE_SCT_RULE_MASK (0x300000U)
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT8_SLAVE0_RULE_SCT_RULE_SHIFT (20U)
/*! SCT_RULE - SCTimer
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT8_SLAVE0_RULE_SCT_RULE(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT8_SLAVE0_RULE_SCT_RULE_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT8_SLAVE0_RULE_SCT_RULE_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT8_SLAVE0_RULE_FLEXCOMM0_RULE_MASK (0x3000000U)
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT8_SLAVE0_RULE_FLEXCOMM0_RULE_SHIFT (24U)
/*! FLEXCOMM0_RULE - Flexcomm interface 0
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT8_SLAVE0_RULE_FLEXCOMM0_RULE(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT8_SLAVE0_RULE_FLEXCOMM0_RULE_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT8_SLAVE0_RULE_FLEXCOMM0_RULE_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT8_SLAVE0_RULE_FLEXCOMM1_RULE_MASK (0x30000000U)
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT8_SLAVE0_RULE_FLEXCOMM1_RULE_SHIFT (28U)
/*! FLEXCOMM1_RULE - Flexcomm interface 1
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT8_SLAVE0_RULE_FLEXCOMM1_RULE(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT8_SLAVE0_RULE_FLEXCOMM1_RULE_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT8_SLAVE0_RULE_FLEXCOMM1_RULE_MASK)
/*! @} */

/*! @name SEC_CTRL_AHB_PORT8_SLAVE1_RULE - Security access rules for AHB peripherals. */
/*! @{ */
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT8_SLAVE1_RULE_FLEXCOMM2_RULE_MASK (0x3U)
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT8_SLAVE1_RULE_FLEXCOMM2_RULE_SHIFT (0U)
/*! FLEXCOMM2_RULE - Flexcomm interface 2
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT8_SLAVE1_RULE_FLEXCOMM2_RULE(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT8_SLAVE1_RULE_FLEXCOMM2_RULE_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT8_SLAVE1_RULE_FLEXCOMM2_RULE_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT8_SLAVE1_RULE_FLEXCOMM3_RULE_MASK (0x30U)
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT8_SLAVE1_RULE_FLEXCOMM3_RULE_SHIFT (4U)
/*! FLEXCOMM3_RULE - Flexcomm interface 3
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT8_SLAVE1_RULE_FLEXCOMM3_RULE(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT8_SLAVE1_RULE_FLEXCOMM3_RULE_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT8_SLAVE1_RULE_FLEXCOMM3_RULE_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT8_SLAVE1_RULE_FLEXCOMM4_RULE_MASK (0x300U)
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT8_SLAVE1_RULE_FLEXCOMM4_RULE_SHIFT (8U)
/*! FLEXCOMM4_RULE - Flexcomm interface 4
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT8_SLAVE1_RULE_FLEXCOMM4_RULE(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT8_SLAVE1_RULE_FLEXCOMM4_RULE_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT8_SLAVE1_RULE_FLEXCOMM4_RULE_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT8_SLAVE1_RULE_MAILBOX_RULE_MASK (0x3000U)
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT8_SLAVE1_RULE_MAILBOX_RULE_SHIFT (12U)
/*! MAILBOX_RULE - Inter CPU communication Mailbox
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT8_SLAVE1_RULE_MAILBOX_RULE(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT8_SLAVE1_RULE_MAILBOX_RULE_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT8_SLAVE1_RULE_MAILBOX_RULE_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT8_SLAVE1_RULE_GPIO0_RULE_MASK (0x30000U)
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT8_SLAVE1_RULE_GPIO0_RULE_SHIFT (16U)
/*! GPIO0_RULE - High Speed GPIO
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT8_SLAVE1_RULE_GPIO0_RULE(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT8_SLAVE1_RULE_GPIO0_RULE_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT8_SLAVE1_RULE_GPIO0_RULE_MASK)
/*! @} */

/*! @name SEC_CTRL_AHB_PORT9_SLAVE0_RULE - Security access rules for AHB peripherals. */
/*! @{ */
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT9_SLAVE0_RULE_USB_HS_DEV_RULE_MASK (0x30000U)
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT9_SLAVE0_RULE_USB_HS_DEV_RULE_SHIFT (16U)
/*! USB_HS_DEV_RULE - USB high Speed device registers
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT9_SLAVE0_RULE_USB_HS_DEV_RULE(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT9_SLAVE0_RULE_USB_HS_DEV_RULE_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT9_SLAVE0_RULE_USB_HS_DEV_RULE_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT9_SLAVE0_RULE_CRC_RULE_MASK (0x300000U)
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT9_SLAVE0_RULE_CRC_RULE_SHIFT (20U)
/*! CRC_RULE - CRC engine
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT9_SLAVE0_RULE_CRC_RULE(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT9_SLAVE0_RULE_CRC_RULE_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT9_SLAVE0_RULE_CRC_RULE_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT9_SLAVE0_RULE_FLEXCOMM5_RULE_MASK (0x3000000U)
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT9_SLAVE0_RULE_FLEXCOMM5_RULE_SHIFT (24U)
/*! FLEXCOMM5_RULE - Flexcomm interface 5
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT9_SLAVE0_RULE_FLEXCOMM5_RULE(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT9_SLAVE0_RULE_FLEXCOMM5_RULE_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT9_SLAVE0_RULE_FLEXCOMM5_RULE_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT9_SLAVE0_RULE_FLEXCOMM6_RULE_MASK (0x30000000U)
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT9_SLAVE0_RULE_FLEXCOMM6_RULE_SHIFT (28U)
/*! FLEXCOMM6_RULE - Flexcomm interface 6
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT9_SLAVE0_RULE_FLEXCOMM6_RULE(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT9_SLAVE0_RULE_FLEXCOMM6_RULE_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT9_SLAVE0_RULE_FLEXCOMM6_RULE_MASK)
/*! @} */

/*! @name SEC_CTRL_AHB_PORT9_SLAVE1_RULE - Security access rules for AHB peripherals. */
/*! @{ */
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT9_SLAVE1_RULE_FLEXCOMM7_RULE_MASK (0x3U)
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT9_SLAVE1_RULE_FLEXCOMM7_RULE_SHIFT (0U)
/*! FLEXCOMM7_RULE - Flexcomm interface 7
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT9_SLAVE1_RULE_FLEXCOMM7_RULE(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT9_SLAVE1_RULE_FLEXCOMM7_RULE_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT9_SLAVE1_RULE_FLEXCOMM7_RULE_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT9_SLAVE1_RULE_SDIO_RULE_MASK (0x3000U)
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT9_SLAVE1_RULE_SDIO_RULE_SHIFT (12U)
/*! SDIO_RULE - SDMMC card interface
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT9_SLAVE1_RULE_SDIO_RULE(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT9_SLAVE1_RULE_SDIO_RULE_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT9_SLAVE1_RULE_SDIO_RULE_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT9_SLAVE1_RULE_DBG_MAILBOX_RULE_MASK (0x30000U)
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT9_SLAVE1_RULE_DBG_MAILBOX_RULE_SHIFT (16U)
/*! DBG_MAILBOX_RULE - Debug mailbox (aka ISP-AP)
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT9_SLAVE1_RULE_DBG_MAILBOX_RULE(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT9_SLAVE1_RULE_DBG_MAILBOX_RULE_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT9_SLAVE1_RULE_DBG_MAILBOX_RULE_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT9_SLAVE1_RULE_HS_LSPI_RULE_MASK (0x30000000U)
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT9_SLAVE1_RULE_HS_LSPI_RULE_SHIFT (28U)
/*! HS_LSPI_RULE - High Speed SPI
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT9_SLAVE1_RULE_HS_LSPI_RULE(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT9_SLAVE1_RULE_HS_LSPI_RULE_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT9_SLAVE1_RULE_HS_LSPI_RULE_MASK)
/*! @} */

/*! @name SEC_CTRL_AHB_PORT10_SLAVE0_RULE - Security access rules for AHB peripherals. */
/*! @{ */
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT10_SLAVE0_RULE_ADC_RULE_MASK (0x3U)
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT10_SLAVE0_RULE_ADC_RULE_SHIFT (0U)
/*! ADC_RULE - ADC
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT10_SLAVE0_RULE_ADC_RULE(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT10_SLAVE0_RULE_ADC_RULE_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT10_SLAVE0_RULE_ADC_RULE_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT10_SLAVE0_RULE_USB_FS_HOST_RULE_MASK (0x300U)
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT10_SLAVE0_RULE_USB_FS_HOST_RULE_SHIFT (8U)
/*! USB_FS_HOST_RULE - USB Full Speed Host registers.
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT10_SLAVE0_RULE_USB_FS_HOST_RULE(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT10_SLAVE0_RULE_USB_FS_HOST_RULE_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT10_SLAVE0_RULE_USB_FS_HOST_RULE_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT10_SLAVE0_RULE_USB_HS_HOST_RULE_MASK (0x3000U)
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT10_SLAVE0_RULE_USB_HS_HOST_RULE_SHIFT (12U)
/*! USB_HS_HOST_RULE - USB High speed host registers
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT10_SLAVE0_RULE_USB_HS_HOST_RULE(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT10_SLAVE0_RULE_USB_HS_HOST_RULE_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT10_SLAVE0_RULE_USB_HS_HOST_RULE_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT10_SLAVE0_RULE_HASH_RULE_MASK (0x30000U)
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT10_SLAVE0_RULE_HASH_RULE_SHIFT (16U)
/*! HASH_RULE - SHA-2 crypto registers
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT10_SLAVE0_RULE_HASH_RULE(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT10_SLAVE0_RULE_HASH_RULE_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT10_SLAVE0_RULE_HASH_RULE_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT10_SLAVE0_RULE_CASPER_RULE_MASK (0x300000U)
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT10_SLAVE0_RULE_CASPER_RULE_SHIFT (20U)
/*! CASPER_RULE - RSA/ECC crypto accelerator
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT10_SLAVE0_RULE_CASPER_RULE(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT10_SLAVE0_RULE_CASPER_RULE_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT10_SLAVE0_RULE_CASPER_RULE_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT10_SLAVE0_RULE_PQ_RULE_MASK (0x3000000U)
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT10_SLAVE0_RULE_PQ_RULE_SHIFT (24U)
/*! PQ_RULE - Power Quad (CPU0 processor hardware accelerator)
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT10_SLAVE0_RULE_PQ_RULE(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT10_SLAVE0_RULE_PQ_RULE_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT10_SLAVE0_RULE_PQ_RULE_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT10_SLAVE0_RULE_DMA1_RULE_MASK (0x30000000U)
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT10_SLAVE0_RULE_DMA1_RULE_SHIFT (28U)
/*! DMA1_RULE - DMA Controller (Secure)
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT10_SLAVE0_RULE_DMA1_RULE(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT10_SLAVE0_RULE_DMA1_RULE_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT10_SLAVE0_RULE_DMA1_RULE_MASK)
/*! @} */

/* The count of AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT10_SLAVE0_RULE */
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT10_SLAVE0_RULE_COUNT (1U)

/*! @name SEC_CTRL_AHB_PORT10_SLAVE1_RULE - Security access rules for AHB peripherals. */
/*! @{ */
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT10_SLAVE1_RULE_GPIO1_RULE_MASK (0x3U)
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT10_SLAVE1_RULE_GPIO1_RULE_SHIFT (0U)
/*! GPIO1_RULE - Secure High Speed GPIO
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT10_SLAVE1_RULE_GPIO1_RULE(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT10_SLAVE1_RULE_GPIO1_RULE_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT10_SLAVE1_RULE_GPIO1_RULE_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT10_SLAVE1_RULE_AHB_SEC_CTRL_RULE_MASK (0x30U)
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT10_SLAVE1_RULE_AHB_SEC_CTRL_RULE_SHIFT (4U)
/*! AHB_SEC_CTRL_RULE - AHB Secure Controller
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT10_SLAVE1_RULE_AHB_SEC_CTRL_RULE(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT10_SLAVE1_RULE_AHB_SEC_CTRL_RULE_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT10_SLAVE1_RULE_AHB_SEC_CTRL_RULE_MASK)
/*! @} */

/* The count of AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT10_SLAVE1_RULE */
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_PORT10_SLAVE1_RULE_COUNT (1U)

/*! @name SEC_CTRL_AHB_SEC_CTRL_MEM_RULE - Security access rules for AHB_SEC_CTRL_AHB. */
/*! @{ */
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_SEC_CTRL_MEM_RULE_AHB_SEC_CTRL_SECT_0_RULE_MASK (0x3U)
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_SEC_CTRL_MEM_RULE_AHB_SEC_CTRL_SECT_0_RULE_SHIFT (0U)
/*! AHB_SEC_CTRL_SECT_0_RULE - Address space: 0x400A_0000 - 0x400A_CFFF
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_SEC_CTRL_MEM_RULE_AHB_SEC_CTRL_SECT_0_RULE(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_AHB_SEC_CTRL_MEM_RULE_AHB_SEC_CTRL_SECT_0_RULE_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_AHB_SEC_CTRL_MEM_RULE_AHB_SEC_CTRL_SECT_0_RULE_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_SEC_CTRL_MEM_RULE_AHB_SEC_CTRL_SECT_1_RULE_MASK (0x30U)
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_SEC_CTRL_MEM_RULE_AHB_SEC_CTRL_SECT_1_RULE_SHIFT (4U)
/*! AHB_SEC_CTRL_SECT_1_RULE - Address space: 0x400A_D000 - 0x400A_DFFF
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_SEC_CTRL_MEM_RULE_AHB_SEC_CTRL_SECT_1_RULE(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_AHB_SEC_CTRL_MEM_RULE_AHB_SEC_CTRL_SECT_1_RULE_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_AHB_SEC_CTRL_MEM_RULE_AHB_SEC_CTRL_SECT_1_RULE_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_SEC_CTRL_MEM_RULE_AHB_SEC_CTRL_SECT_2_RULE_MASK (0x300U)
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_SEC_CTRL_MEM_RULE_AHB_SEC_CTRL_SECT_2_RULE_SHIFT (8U)
/*! AHB_SEC_CTRL_SECT_2_RULE - Address space: 0x400A_E000 - 0x400A_EFFF
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_SEC_CTRL_MEM_RULE_AHB_SEC_CTRL_SECT_2_RULE(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_AHB_SEC_CTRL_MEM_RULE_AHB_SEC_CTRL_SECT_2_RULE_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_AHB_SEC_CTRL_MEM_RULE_AHB_SEC_CTRL_SECT_2_RULE_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_SEC_CTRL_MEM_RULE_AHB_SEC_CTRL_SECT_3_RULE_MASK (0x3000U)
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_SEC_CTRL_MEM_RULE_AHB_SEC_CTRL_SECT_3_RULE_SHIFT (12U)
/*! AHB_SEC_CTRL_SECT_3_RULE - Address space: 0x400A_F000 - 0x400A_FFFF
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_SEC_CTRL_MEM_RULE_AHB_SEC_CTRL_SECT_3_RULE(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_AHB_SEC_CTRL_MEM_RULE_AHB_SEC_CTRL_SECT_3_RULE_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_AHB_SEC_CTRL_MEM_RULE_AHB_SEC_CTRL_SECT_3_RULE_MASK)
/*! @} */

/* The count of AHB_SECURE_CTRL_SEC_CTRL_AHB_SEC_CTRL_MEM_RULE */
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_SEC_CTRL_MEM_RULE_COUNT (1U)

/* The count of AHB_SECURE_CTRL_SEC_CTRL_AHB_SEC_CTRL_MEM_RULE */
#define AHB_SECURE_CTRL_SEC_CTRL_AHB_SEC_CTRL_MEM_RULE_COUNT2 (1U)

/*! @name SEC_CTRL_USB_HS_SLAVE_RULE - Security access rules for USB High speed RAM slaves. */
/*! @{ */
#define AHB_SECURE_CTRL_SEC_CTRL_USB_HS_SLAVE_RULE_RAM_USB_HS_RULE_MASK (0x3U)
#define AHB_SECURE_CTRL_SEC_CTRL_USB_HS_SLAVE_RULE_RAM_USB_HS_RULE_SHIFT (0U)
/*! RAM_USB_HS_RULE - Security access rules for the whole USB High Speed RAM : 0x4010_0000 - 0x4010_3FFF
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_USB_HS_SLAVE_RULE_RAM_USB_HS_RULE(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_USB_HS_SLAVE_RULE_RAM_USB_HS_RULE_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_USB_HS_SLAVE_RULE_RAM_USB_HS_RULE_MASK)
/*! @} */

/* The count of AHB_SECURE_CTRL_SEC_CTRL_USB_HS_SLAVE_RULE */
#define AHB_SECURE_CTRL_SEC_CTRL_USB_HS_SLAVE_RULE_COUNT (1U)

/*! @name SEC_CTRL_USB_HS_MEM_RULE - Security access rules for RAM_USB_HS. */
/*! @{ */
#define AHB_SECURE_CTRL_SEC_CTRL_USB_HS_MEM_RULE_SRAM_SECT_0_RULE_MASK (0x3U)
#define AHB_SECURE_CTRL_SEC_CTRL_USB_HS_MEM_RULE_SRAM_SECT_0_RULE_SHIFT (0U)
/*! SRAM_SECT_0_RULE - Address space: 0x4010_0000 - 0x4010_0FFF
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_USB_HS_MEM_RULE_SRAM_SECT_0_RULE(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_USB_HS_MEM_RULE_SRAM_SECT_0_RULE_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_USB_HS_MEM_RULE_SRAM_SECT_0_RULE_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_USB_HS_MEM_RULE_SRAM_SECT_1_RULE_MASK (0x30U)
#define AHB_SECURE_CTRL_SEC_CTRL_USB_HS_MEM_RULE_SRAM_SECT_1_RULE_SHIFT (4U)
/*! SRAM_SECT_1_RULE - Address space: 0x4010_1000 - 0x4010_1FFF
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_USB_HS_MEM_RULE_SRAM_SECT_1_RULE(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_USB_HS_MEM_RULE_SRAM_SECT_1_RULE_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_USB_HS_MEM_RULE_SRAM_SECT_1_RULE_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_USB_HS_MEM_RULE_SRAM_SECT_2_RULE_MASK (0x300U)
#define AHB_SECURE_CTRL_SEC_CTRL_USB_HS_MEM_RULE_SRAM_SECT_2_RULE_SHIFT (8U)
/*! SRAM_SECT_2_RULE - Address space: 0x4010_2000 - 0x4010_2FFF
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_USB_HS_MEM_RULE_SRAM_SECT_2_RULE(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_USB_HS_MEM_RULE_SRAM_SECT_2_RULE_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_USB_HS_MEM_RULE_SRAM_SECT_2_RULE_MASK)
#define AHB_SECURE_CTRL_SEC_CTRL_USB_HS_MEM_RULE_SRAM_SECT_3_RULE_MASK (0x3000U)
#define AHB_SECURE_CTRL_SEC_CTRL_USB_HS_MEM_RULE_SRAM_SECT_3_RULE_SHIFT (12U)
/*! SRAM_SECT_3_RULE - Address space: 0x4010_3000 - 0x4010_3FFF
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_SEC_CTRL_USB_HS_MEM_RULE_SRAM_SECT_3_RULE(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CTRL_USB_HS_MEM_RULE_SRAM_SECT_3_RULE_SHIFT)) & AHB_SECURE_CTRL_SEC_CTRL_USB_HS_MEM_RULE_SRAM_SECT_3_RULE_MASK)
/*! @} */

/* The count of AHB_SECURE_CTRL_SEC_CTRL_USB_HS_MEM_RULE */
#define AHB_SECURE_CTRL_SEC_CTRL_USB_HS_MEM_RULE_COUNT (1U)

/* The count of AHB_SECURE_CTRL_SEC_CTRL_USB_HS_MEM_RULE */
#define AHB_SECURE_CTRL_SEC_CTRL_USB_HS_MEM_RULE_COUNT2 (1U)

/*! @name SEC_VIO_ADDR - most recent security violation address for AHB port n */
/*! @{ */
#define AHB_SECURE_CTRL_SEC_VIO_ADDR_SEC_VIO_ADDR_MASK (0xFFFFFFFFU)
#define AHB_SECURE_CTRL_SEC_VIO_ADDR_SEC_VIO_ADDR_SHIFT (0U)
/*! SEC_VIO_ADDR - security violation address for AHB port
 */
#define AHB_SECURE_CTRL_SEC_VIO_ADDR_SEC_VIO_ADDR(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_VIO_ADDR_SEC_VIO_ADDR_SHIFT)) & AHB_SECURE_CTRL_SEC_VIO_ADDR_SEC_VIO_ADDR_MASK)
/*! @} */

/* The count of AHB_SECURE_CTRL_SEC_VIO_ADDR */
#define AHB_SECURE_CTRL_SEC_VIO_ADDR_COUNT       (12U)

/*! @name SEC_VIO_MISC_INFO - most recent security violation miscellaneous information for AHB port n */
/*! @{ */
#define AHB_SECURE_CTRL_SEC_VIO_MISC_INFO_SEC_VIO_INFO_WRITE_MASK (0x1U)
#define AHB_SECURE_CTRL_SEC_VIO_MISC_INFO_SEC_VIO_INFO_WRITE_SHIFT (0U)
/*! SEC_VIO_INFO_WRITE - security violation access read/write indicator.
 *  0b0..Read access.
 *  0b1..Write access.
 */
#define AHB_SECURE_CTRL_SEC_VIO_MISC_INFO_SEC_VIO_INFO_WRITE(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_VIO_MISC_INFO_SEC_VIO_INFO_WRITE_SHIFT)) & AHB_SECURE_CTRL_SEC_VIO_MISC_INFO_SEC_VIO_INFO_WRITE_MASK)
#define AHB_SECURE_CTRL_SEC_VIO_MISC_INFO_SEC_VIO_INFO_DATA_ACCESS_MASK (0x2U)
#define AHB_SECURE_CTRL_SEC_VIO_MISC_INFO_SEC_VIO_INFO_DATA_ACCESS_SHIFT (1U)
/*! SEC_VIO_INFO_DATA_ACCESS - security violation access data/code indicator.
 *  0b0..Code access.
 *  0b1..Data access.
 */
#define AHB_SECURE_CTRL_SEC_VIO_MISC_INFO_SEC_VIO_INFO_DATA_ACCESS(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_VIO_MISC_INFO_SEC_VIO_INFO_DATA_ACCESS_SHIFT)) & AHB_SECURE_CTRL_SEC_VIO_MISC_INFO_SEC_VIO_INFO_DATA_ACCESS_MASK)
#define AHB_SECURE_CTRL_SEC_VIO_MISC_INFO_SEC_VIO_INFO_MASTER_SEC_LEVEL_MASK (0xF0U)
#define AHB_SECURE_CTRL_SEC_VIO_MISC_INFO_SEC_VIO_INFO_MASTER_SEC_LEVEL_SHIFT (4U)
/*! SEC_VIO_INFO_MASTER_SEC_LEVEL - bit [5:4]: master sec level and privilege level bit [7:6]: anti-pol value for master sec level and privilege level
 */
#define AHB_SECURE_CTRL_SEC_VIO_MISC_INFO_SEC_VIO_INFO_MASTER_SEC_LEVEL(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_VIO_MISC_INFO_SEC_VIO_INFO_MASTER_SEC_LEVEL_SHIFT)) & AHB_SECURE_CTRL_SEC_VIO_MISC_INFO_SEC_VIO_INFO_MASTER_SEC_LEVEL_MASK)
#define AHB_SECURE_CTRL_SEC_VIO_MISC_INFO_SEC_VIO_INFO_MASTER_MASK (0xF00U)
#define AHB_SECURE_CTRL_SEC_VIO_MISC_INFO_SEC_VIO_INFO_MASTER_SHIFT (8U)
/*! SEC_VIO_INFO_MASTER - security violation master number
 *  0b0000..CPU0 Code.
 *  0b0001..CPU0 System.
 *  0b0010..CPU1 Data.
 *  0b0011..CPU1 System.
 *  0b0100..USB-HS Device.
 *  0b0101..SDMA0.
 *  0b1000..SDIO.
 *  0b1001..PowerQuad.
 *  0b1010..HASH.
 *  0b1011..USB-FS Host.
 *  0b1100..SDMA1.
 */
#define AHB_SECURE_CTRL_SEC_VIO_MISC_INFO_SEC_VIO_INFO_MASTER(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_VIO_MISC_INFO_SEC_VIO_INFO_MASTER_SHIFT)) & AHB_SECURE_CTRL_SEC_VIO_MISC_INFO_SEC_VIO_INFO_MASTER_MASK)
/*! @} */

/* The count of AHB_SECURE_CTRL_SEC_VIO_MISC_INFO */
#define AHB_SECURE_CTRL_SEC_VIO_MISC_INFO_COUNT  (12U)

/*! @name SEC_VIO_INFO_VALID - security violation address/information registers valid flags */
/*! @{ */
#define AHB_SECURE_CTRL_SEC_VIO_INFO_VALID_VIO_INFO_VALID0_MASK (0x1U)
#define AHB_SECURE_CTRL_SEC_VIO_INFO_VALID_VIO_INFO_VALID0_SHIFT (0U)
/*! VIO_INFO_VALID0 - violation information valid flag for AHB port 0. Write 1 to clear.
 *  0b0..Not valid.
 *  0b1..Valid (violation occurred).
 */
#define AHB_SECURE_CTRL_SEC_VIO_INFO_VALID_VIO_INFO_VALID0(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_VIO_INFO_VALID_VIO_INFO_VALID0_SHIFT)) & AHB_SECURE_CTRL_SEC_VIO_INFO_VALID_VIO_INFO_VALID0_MASK)
#define AHB_SECURE_CTRL_SEC_VIO_INFO_VALID_VIO_INFO_VALID1_MASK (0x2U)
#define AHB_SECURE_CTRL_SEC_VIO_INFO_VALID_VIO_INFO_VALID1_SHIFT (1U)
/*! VIO_INFO_VALID1 - violation information valid flag for AHB port 1. Write 1 to clear.
 *  0b0..Not valid.
 *  0b1..Valid (violation occurred).
 */
#define AHB_SECURE_CTRL_SEC_VIO_INFO_VALID_VIO_INFO_VALID1(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_VIO_INFO_VALID_VIO_INFO_VALID1_SHIFT)) & AHB_SECURE_CTRL_SEC_VIO_INFO_VALID_VIO_INFO_VALID1_MASK)
#define AHB_SECURE_CTRL_SEC_VIO_INFO_VALID_VIO_INFO_VALID2_MASK (0x4U)
#define AHB_SECURE_CTRL_SEC_VIO_INFO_VALID_VIO_INFO_VALID2_SHIFT (2U)
/*! VIO_INFO_VALID2 - violation information valid flag for AHB port 2. Write 1 to clear.
 *  0b0..Not valid.
 *  0b1..Valid (violation occurred).
 */
#define AHB_SECURE_CTRL_SEC_VIO_INFO_VALID_VIO_INFO_VALID2(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_VIO_INFO_VALID_VIO_INFO_VALID2_SHIFT)) & AHB_SECURE_CTRL_SEC_VIO_INFO_VALID_VIO_INFO_VALID2_MASK)
#define AHB_SECURE_CTRL_SEC_VIO_INFO_VALID_VIO_INFO_VALID3_MASK (0x8U)
#define AHB_SECURE_CTRL_SEC_VIO_INFO_VALID_VIO_INFO_VALID3_SHIFT (3U)
/*! VIO_INFO_VALID3 - violation information valid flag for AHB port 3. Write 1 to clear.
 *  0b0..Not valid.
 *  0b1..Valid (violation occurred).
 */
#define AHB_SECURE_CTRL_SEC_VIO_INFO_VALID_VIO_INFO_VALID3(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_VIO_INFO_VALID_VIO_INFO_VALID3_SHIFT)) & AHB_SECURE_CTRL_SEC_VIO_INFO_VALID_VIO_INFO_VALID3_MASK)
#define AHB_SECURE_CTRL_SEC_VIO_INFO_VALID_VIO_INFO_VALID4_MASK (0x10U)
#define AHB_SECURE_CTRL_SEC_VIO_INFO_VALID_VIO_INFO_VALID4_SHIFT (4U)
/*! VIO_INFO_VALID4 - violation information valid flag for AHB port 4. Write 1 to clear.
 *  0b0..Not valid.
 *  0b1..Valid (violation occurred).
 */
#define AHB_SECURE_CTRL_SEC_VIO_INFO_VALID_VIO_INFO_VALID4(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_VIO_INFO_VALID_VIO_INFO_VALID4_SHIFT)) & AHB_SECURE_CTRL_SEC_VIO_INFO_VALID_VIO_INFO_VALID4_MASK)
#define AHB_SECURE_CTRL_SEC_VIO_INFO_VALID_VIO_INFO_VALID5_MASK (0x20U)
#define AHB_SECURE_CTRL_SEC_VIO_INFO_VALID_VIO_INFO_VALID5_SHIFT (5U)
/*! VIO_INFO_VALID5 - violation information valid flag for AHB port 5. Write 1 to clear.
 *  0b0..Not valid.
 *  0b1..Valid (violation occurred).
 */
#define AHB_SECURE_CTRL_SEC_VIO_INFO_VALID_VIO_INFO_VALID5(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_VIO_INFO_VALID_VIO_INFO_VALID5_SHIFT)) & AHB_SECURE_CTRL_SEC_VIO_INFO_VALID_VIO_INFO_VALID5_MASK)
#define AHB_SECURE_CTRL_SEC_VIO_INFO_VALID_VIO_INFO_VALID6_MASK (0x40U)
#define AHB_SECURE_CTRL_SEC_VIO_INFO_VALID_VIO_INFO_VALID6_SHIFT (6U)
/*! VIO_INFO_VALID6 - violation information valid flag for AHB port 6. Write 1 to clear.
 *  0b0..Not valid.
 *  0b1..Valid (violation occurred).
 */
#define AHB_SECURE_CTRL_SEC_VIO_INFO_VALID_VIO_INFO_VALID6(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_VIO_INFO_VALID_VIO_INFO_VALID6_SHIFT)) & AHB_SECURE_CTRL_SEC_VIO_INFO_VALID_VIO_INFO_VALID6_MASK)
#define AHB_SECURE_CTRL_SEC_VIO_INFO_VALID_VIO_INFO_VALID7_MASK (0x80U)
#define AHB_SECURE_CTRL_SEC_VIO_INFO_VALID_VIO_INFO_VALID7_SHIFT (7U)
/*! VIO_INFO_VALID7 - violation information valid flag for AHB port 7. Write 1 to clear.
 *  0b0..Not valid.
 *  0b1..Valid (violation occurred).
 */
#define AHB_SECURE_CTRL_SEC_VIO_INFO_VALID_VIO_INFO_VALID7(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_VIO_INFO_VALID_VIO_INFO_VALID7_SHIFT)) & AHB_SECURE_CTRL_SEC_VIO_INFO_VALID_VIO_INFO_VALID7_MASK)
#define AHB_SECURE_CTRL_SEC_VIO_INFO_VALID_VIO_INFO_VALID8_MASK (0x100U)
#define AHB_SECURE_CTRL_SEC_VIO_INFO_VALID_VIO_INFO_VALID8_SHIFT (8U)
/*! VIO_INFO_VALID8 - violation information valid flag for AHB port 8. Write 1 to clear.
 *  0b0..Not valid.
 *  0b1..Valid (violation occurred).
 */
#define AHB_SECURE_CTRL_SEC_VIO_INFO_VALID_VIO_INFO_VALID8(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_VIO_INFO_VALID_VIO_INFO_VALID8_SHIFT)) & AHB_SECURE_CTRL_SEC_VIO_INFO_VALID_VIO_INFO_VALID8_MASK)
#define AHB_SECURE_CTRL_SEC_VIO_INFO_VALID_VIO_INFO_VALID9_MASK (0x200U)
#define AHB_SECURE_CTRL_SEC_VIO_INFO_VALID_VIO_INFO_VALID9_SHIFT (9U)
/*! VIO_INFO_VALID9 - violation information valid flag for AHB port 9. Write 1 to clear.
 *  0b0..Not valid.
 *  0b1..Valid (violation occurred).
 */
#define AHB_SECURE_CTRL_SEC_VIO_INFO_VALID_VIO_INFO_VALID9(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_VIO_INFO_VALID_VIO_INFO_VALID9_SHIFT)) & AHB_SECURE_CTRL_SEC_VIO_INFO_VALID_VIO_INFO_VALID9_MASK)
#define AHB_SECURE_CTRL_SEC_VIO_INFO_VALID_VIO_INFO_VALID10_MASK (0x400U)
#define AHB_SECURE_CTRL_SEC_VIO_INFO_VALID_VIO_INFO_VALID10_SHIFT (10U)
/*! VIO_INFO_VALID10 - violation information valid flag for AHB port 10. Write 1 to clear.
 *  0b0..Not valid.
 *  0b1..Valid (violation occurred).
 */
#define AHB_SECURE_CTRL_SEC_VIO_INFO_VALID_VIO_INFO_VALID10(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_VIO_INFO_VALID_VIO_INFO_VALID10_SHIFT)) & AHB_SECURE_CTRL_SEC_VIO_INFO_VALID_VIO_INFO_VALID10_MASK)
#define AHB_SECURE_CTRL_SEC_VIO_INFO_VALID_VIO_INFO_VALID11_MASK (0x800U)
#define AHB_SECURE_CTRL_SEC_VIO_INFO_VALID_VIO_INFO_VALID11_SHIFT (11U)
/*! VIO_INFO_VALID11 - violation information valid flag for AHB port 11. Write 1 to clear.
 *  0b0..Not valid.
 *  0b1..Valid (violation occurred).
 */
#define AHB_SECURE_CTRL_SEC_VIO_INFO_VALID_VIO_INFO_VALID11(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_VIO_INFO_VALID_VIO_INFO_VALID11_SHIFT)) & AHB_SECURE_CTRL_SEC_VIO_INFO_VALID_VIO_INFO_VALID11_MASK)
/*! @} */

/*! @name SEC_GPIO_MASK0 - Secure GPIO mask for port 0 pins. */
/*! @{ */
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN0_SEC_MASK_MASK (0x1U)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN0_SEC_MASK_SHIFT (0U)
/*! PIO0_PIN0_SEC_MASK - Secure mask for pin P0_0
 *  0b1..Pin state is readable by non-secure world.
 *  0b0..Pin state is blocked to non-secure world.
 */
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN0_SEC_MASK(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN0_SEC_MASK_SHIFT)) & AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN0_SEC_MASK_MASK)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN1_SEC_MASK_MASK (0x2U)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN1_SEC_MASK_SHIFT (1U)
/*! PIO0_PIN1_SEC_MASK - Secure mask for pin P0_1
 *  0b1..Pin state is readable by non-secure world.
 *  0b0..Pin state is blocked to non-secure world.
 */
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN1_SEC_MASK(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN1_SEC_MASK_SHIFT)) & AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN1_SEC_MASK_MASK)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN2_SEC_MASK_MASK (0x4U)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN2_SEC_MASK_SHIFT (2U)
/*! PIO0_PIN2_SEC_MASK - Secure mask for pin P0_2
 *  0b1..Pin state is readable by non-secure world.
 *  0b0..Pin state is blocked to non-secure world.
 */
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN2_SEC_MASK(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN2_SEC_MASK_SHIFT)) & AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN2_SEC_MASK_MASK)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN3_SEC_MASK_MASK (0x8U)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN3_SEC_MASK_SHIFT (3U)
/*! PIO0_PIN3_SEC_MASK - Secure mask for pin P0_3
 *  0b1..Pin state is readable by non-secure world.
 *  0b0..Pin state is blocked to non-secure world.
 */
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN3_SEC_MASK(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN3_SEC_MASK_SHIFT)) & AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN3_SEC_MASK_MASK)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN4_SEC_MASK_MASK (0x10U)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN4_SEC_MASK_SHIFT (4U)
/*! PIO0_PIN4_SEC_MASK - Secure mask for pin P0_4
 *  0b1..Pin state is readable by non-secure world.
 *  0b0..Pin state is blocked to non-secure world.
 */
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN4_SEC_MASK(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN4_SEC_MASK_SHIFT)) & AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN4_SEC_MASK_MASK)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN5_SEC_MASK_MASK (0x20U)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN5_SEC_MASK_SHIFT (5U)
/*! PIO0_PIN5_SEC_MASK - Secure mask for pin P0_5
 *  0b1..Pin state is readable by non-secure world.
 *  0b0..Pin state is blocked to non-secure world.
 */
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN5_SEC_MASK(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN5_SEC_MASK_SHIFT)) & AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN5_SEC_MASK_MASK)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN6_SEC_MASK_MASK (0x40U)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN6_SEC_MASK_SHIFT (6U)
/*! PIO0_PIN6_SEC_MASK - Secure mask for pin P0_6
 *  0b1..Pin state is readable by non-secure world.
 *  0b0..Pin state is blocked to non-secure world.
 */
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN6_SEC_MASK(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN6_SEC_MASK_SHIFT)) & AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN6_SEC_MASK_MASK)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN7_SEC_MASK_MASK (0x80U)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN7_SEC_MASK_SHIFT (7U)
/*! PIO0_PIN7_SEC_MASK - Secure mask for pin P0_7
 *  0b1..Pin state is readable by non-secure world.
 *  0b0..Pin state is blocked to non-secure world.
 */
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN7_SEC_MASK(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN7_SEC_MASK_SHIFT)) & AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN7_SEC_MASK_MASK)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN8_SEC_MASK_MASK (0x100U)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN8_SEC_MASK_SHIFT (8U)
/*! PIO0_PIN8_SEC_MASK - Secure mask for pin P0_8
 *  0b1..Pin state is readable by non-secure world.
 *  0b0..Pin state is blocked to non-secure world.
 */
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN8_SEC_MASK(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN8_SEC_MASK_SHIFT)) & AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN8_SEC_MASK_MASK)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN9_SEC_MASK_MASK (0x200U)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN9_SEC_MASK_SHIFT (9U)
/*! PIO0_PIN9_SEC_MASK - Secure mask for pin P0_9
 *  0b1..Pin state is readable by non-secure world.
 *  0b0..Pin state is blocked to non-secure world.
 */
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN9_SEC_MASK(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN9_SEC_MASK_SHIFT)) & AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN9_SEC_MASK_MASK)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN10_SEC_MASK_MASK (0x400U)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN10_SEC_MASK_SHIFT (10U)
/*! PIO0_PIN10_SEC_MASK - Secure mask for pin P0_10
 *  0b1..Pin state is readable by non-secure world.
 *  0b0..Pin state is blocked to non-secure world.
 */
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN10_SEC_MASK(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN10_SEC_MASK_SHIFT)) & AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN10_SEC_MASK_MASK)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN11_SEC_MASK_MASK (0x800U)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN11_SEC_MASK_SHIFT (11U)
/*! PIO0_PIN11_SEC_MASK - Secure mask for pin P0_11
 *  0b1..Pin state is readable by non-secure world.
 *  0b0..Pin state is blocked to non-secure world.
 */
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN11_SEC_MASK(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN11_SEC_MASK_SHIFT)) & AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN11_SEC_MASK_MASK)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN12_SEC_MASK_MASK (0x1000U)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN12_SEC_MASK_SHIFT (12U)
/*! PIO0_PIN12_SEC_MASK - Secure mask for pin P0_12
 *  0b1..Pin state is readable by non-secure world.
 *  0b0..Pin state is blocked to non-secure world.
 */
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN12_SEC_MASK(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN12_SEC_MASK_SHIFT)) & AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN12_SEC_MASK_MASK)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN13_SEC_MASK_MASK (0x2000U)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN13_SEC_MASK_SHIFT (13U)
/*! PIO0_PIN13_SEC_MASK - Secure mask for pin P0_13
 *  0b1..Pin state is readable by non-secure world.
 *  0b0..Pin state is blocked to non-secure world.
 */
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN13_SEC_MASK(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN13_SEC_MASK_SHIFT)) & AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN13_SEC_MASK_MASK)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN14_SEC_MASK_MASK (0x4000U)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN14_SEC_MASK_SHIFT (14U)
/*! PIO0_PIN14_SEC_MASK - Secure mask for pin P0_14
 *  0b1..Pin state is readable by non-secure world.
 *  0b0..Pin state is blocked to non-secure world.
 */
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN14_SEC_MASK(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN14_SEC_MASK_SHIFT)) & AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN14_SEC_MASK_MASK)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN15_SEC_MASK_MASK (0x8000U)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN15_SEC_MASK_SHIFT (15U)
/*! PIO0_PIN15_SEC_MASK - Secure mask for pin P0_15
 *  0b1..Pin state is readable by non-secure world.
 *  0b0..Pin state is blocked to non-secure world.
 */
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN15_SEC_MASK(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN15_SEC_MASK_SHIFT)) & AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN15_SEC_MASK_MASK)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN16_SEC_MASK_MASK (0x10000U)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN16_SEC_MASK_SHIFT (16U)
/*! PIO0_PIN16_SEC_MASK - Secure mask for pin P0_16
 *  0b1..Pin state is readable by non-secure world.
 *  0b0..Pin state is blocked to non-secure world.
 */
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN16_SEC_MASK(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN16_SEC_MASK_SHIFT)) & AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN16_SEC_MASK_MASK)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN17_SEC_MASK_MASK (0x20000U)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN17_SEC_MASK_SHIFT (17U)
/*! PIO0_PIN17_SEC_MASK - Secure mask for pin P0_17
 *  0b1..Pin state is readable by non-secure world.
 *  0b0..Pin state is blocked to non-secure world.
 */
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN17_SEC_MASK(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN17_SEC_MASK_SHIFT)) & AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN17_SEC_MASK_MASK)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN18_SEC_MASK_MASK (0x40000U)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN18_SEC_MASK_SHIFT (18U)
/*! PIO0_PIN18_SEC_MASK - Secure mask for pin P0_18
 *  0b1..Pin state is readable by non-secure world.
 *  0b0..Pin state is blocked to non-secure world.
 */
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN18_SEC_MASK(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN18_SEC_MASK_SHIFT)) & AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN18_SEC_MASK_MASK)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN19_SEC_MASK_MASK (0x80000U)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN19_SEC_MASK_SHIFT (19U)
/*! PIO0_PIN19_SEC_MASK - Secure mask for pin P0_19
 *  0b1..Pin state is readable by non-secure world.
 *  0b0..Pin state is blocked to non-secure world.
 */
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN19_SEC_MASK(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN19_SEC_MASK_SHIFT)) & AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN19_SEC_MASK_MASK)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN20_SEC_MASK_MASK (0x100000U)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN20_SEC_MASK_SHIFT (20U)
/*! PIO0_PIN20_SEC_MASK - Secure mask for pin P0_20
 *  0b1..Pin state is readable by non-secure world.
 *  0b0..Pin state is blocked to non-secure world.
 */
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN20_SEC_MASK(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN20_SEC_MASK_SHIFT)) & AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN20_SEC_MASK_MASK)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN21_SEC_MASK_MASK (0x200000U)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN21_SEC_MASK_SHIFT (21U)
/*! PIO0_PIN21_SEC_MASK - Secure mask for pin P0_21
 *  0b1..Pin state is readable by non-secure world.
 *  0b0..Pin state is blocked to non-secure world.
 */
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN21_SEC_MASK(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN21_SEC_MASK_SHIFT)) & AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN21_SEC_MASK_MASK)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN22_SEC_MASK_MASK (0x400000U)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN22_SEC_MASK_SHIFT (22U)
/*! PIO0_PIN22_SEC_MASK - Secure mask for pin P0_22
 *  0b1..Pin state is readable by non-secure world.
 *  0b0..Pin state is blocked to non-secure world.
 */
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN22_SEC_MASK(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN22_SEC_MASK_SHIFT)) & AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN22_SEC_MASK_MASK)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN23_SEC_MASK_MASK (0x800000U)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN23_SEC_MASK_SHIFT (23U)
/*! PIO0_PIN23_SEC_MASK - Secure mask for pin P0_23
 *  0b1..Pin state is readable by non-secure world.
 *  0b0..Pin state is blocked to non-secure world.
 */
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN23_SEC_MASK(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN23_SEC_MASK_SHIFT)) & AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN23_SEC_MASK_MASK)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN24_SEC_MASK_MASK (0x1000000U)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN24_SEC_MASK_SHIFT (24U)
/*! PIO0_PIN24_SEC_MASK - Secure mask for pin P0_24
 *  0b1..Pin state is readable by non-secure world.
 *  0b0..Pin state is blocked to non-secure world.
 */
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN24_SEC_MASK(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN24_SEC_MASK_SHIFT)) & AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN24_SEC_MASK_MASK)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN25_SEC_MASK_MASK (0x2000000U)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN25_SEC_MASK_SHIFT (25U)
/*! PIO0_PIN25_SEC_MASK - Secure mask for pin P0_25
 *  0b1..Pin state is readable by non-secure world.
 *  0b0..Pin state is blocked to non-secure world.
 */
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN25_SEC_MASK(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN25_SEC_MASK_SHIFT)) & AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN25_SEC_MASK_MASK)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN26_SEC_MASK_MASK (0x4000000U)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN26_SEC_MASK_SHIFT (26U)
/*! PIO0_PIN26_SEC_MASK - Secure mask for pin P0_26
 *  0b1..Pin state is readable by non-secure world.
 *  0b0..Pin state is blocked to non-secure world.
 */
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN26_SEC_MASK(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN26_SEC_MASK_SHIFT)) & AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN26_SEC_MASK_MASK)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN27_SEC_MASK_MASK (0x8000000U)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN27_SEC_MASK_SHIFT (27U)
/*! PIO0_PIN27_SEC_MASK - Secure mask for pin P0_27
 *  0b1..Pin state is readable by non-secure world.
 *  0b0..Pin state is blocked to non-secure world.
 */
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN27_SEC_MASK(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN27_SEC_MASK_SHIFT)) & AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN27_SEC_MASK_MASK)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN28_SEC_MASK_MASK (0x10000000U)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN28_SEC_MASK_SHIFT (28U)
/*! PIO0_PIN28_SEC_MASK - Secure mask for pin P0_28
 *  0b1..Pin state is readable by non-secure world.
 *  0b0..Pin state is blocked to non-secure world.
 */
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN28_SEC_MASK(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN28_SEC_MASK_SHIFT)) & AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN28_SEC_MASK_MASK)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN29_SEC_MASK_MASK (0x20000000U)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN29_SEC_MASK_SHIFT (29U)
/*! PIO0_PIN29_SEC_MASK - Secure mask for pin P0_29
 *  0b1..Pin state is readable by non-secure world.
 *  0b0..Pin state is blocked to non-secure world.
 */
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN29_SEC_MASK(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN29_SEC_MASK_SHIFT)) & AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN29_SEC_MASK_MASK)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN30_SEC_MASK_MASK (0x40000000U)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN30_SEC_MASK_SHIFT (30U)
/*! PIO0_PIN30_SEC_MASK - Secure mask for pin P0_30
 *  0b1..Pin state is readable by non-secure world.
 *  0b0..Pin state is blocked to non-secure world.
 */
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN30_SEC_MASK(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN30_SEC_MASK_SHIFT)) & AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN30_SEC_MASK_MASK)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN31_SEC_MASK_MASK (0x80000000U)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN31_SEC_MASK_SHIFT (31U)
/*! PIO0_PIN31_SEC_MASK - Secure mask for pin P0_31
 *  0b1..Pin state is readable by non-secure world.
 *  0b0..Pin state is blocked to non-secure world.
 */
#define AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN31_SEC_MASK(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN31_SEC_MASK_SHIFT)) & AHB_SECURE_CTRL_SEC_GPIO_MASK0_PIO0_PIN31_SEC_MASK_MASK)
/*! @} */

/*! @name SEC_GPIO_MASK1 - Secure GPIO mask for port 1 pins. */
/*! @{ */
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN0_SEC_MASK_MASK (0x1U)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN0_SEC_MASK_SHIFT (0U)
/*! PIO1_PIN0_SEC_MASK - Secure mask for pin P1_0
 *  0b1..Pin state is readable by non-secure world.
 *  0b0..Pin state is blocked to non-secure world.
 */
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN0_SEC_MASK(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN0_SEC_MASK_SHIFT)) & AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN0_SEC_MASK_MASK)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN1_SEC_MASK_MASK (0x2U)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN1_SEC_MASK_SHIFT (1U)
/*! PIO1_PIN1_SEC_MASK - Secure mask for pin P1_1
 *  0b1..Pin state is readable by non-secure world.
 *  0b0..Pin state is blocked to non-secure world.
 */
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN1_SEC_MASK(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN1_SEC_MASK_SHIFT)) & AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN1_SEC_MASK_MASK)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN2_SEC_MASK_MASK (0x4U)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN2_SEC_MASK_SHIFT (2U)
/*! PIO1_PIN2_SEC_MASK - Secure mask for pin P1_2
 *  0b1..Pin state is readable by non-secure world.
 *  0b0..Pin state is blocked to non-secure world.
 */
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN2_SEC_MASK(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN2_SEC_MASK_SHIFT)) & AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN2_SEC_MASK_MASK)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN3_SEC_MASK_MASK (0x8U)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN3_SEC_MASK_SHIFT (3U)
/*! PIO1_PIN3_SEC_MASK - Secure mask for pin P1_3
 *  0b1..Pin state is readable by non-secure world.
 *  0b0..Pin state is blocked to non-secure world.
 */
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN3_SEC_MASK(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN3_SEC_MASK_SHIFT)) & AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN3_SEC_MASK_MASK)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN4_SEC_MASK_MASK (0x10U)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN4_SEC_MASK_SHIFT (4U)
/*! PIO1_PIN4_SEC_MASK - Secure mask for pin P1_4
 *  0b1..Pin state is readable by non-secure world.
 *  0b0..Pin state is blocked to non-secure world.
 */
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN4_SEC_MASK(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN4_SEC_MASK_SHIFT)) & AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN4_SEC_MASK_MASK)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN5_SEC_MASK_MASK (0x20U)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN5_SEC_MASK_SHIFT (5U)
/*! PIO1_PIN5_SEC_MASK - Secure mask for pin P1_5
 *  0b1..Pin state is readable by non-secure world.
 *  0b0..Pin state is blocked to non-secure world.
 */
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN5_SEC_MASK(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN5_SEC_MASK_SHIFT)) & AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN5_SEC_MASK_MASK)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN6_SEC_MASK_MASK (0x40U)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN6_SEC_MASK_SHIFT (6U)
/*! PIO1_PIN6_SEC_MASK - Secure mask for pin P1_6
 *  0b1..Pin state is readable by non-secure world.
 *  0b0..Pin state is blocked to non-secure world.
 */
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN6_SEC_MASK(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN6_SEC_MASK_SHIFT)) & AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN6_SEC_MASK_MASK)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN7_SEC_MASK_MASK (0x80U)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN7_SEC_MASK_SHIFT (7U)
/*! PIO1_PIN7_SEC_MASK - Secure mask for pin P1_7
 *  0b1..Pin state is readable by non-secure world.
 *  0b0..Pin state is blocked to non-secure world.
 */
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN7_SEC_MASK(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN7_SEC_MASK_SHIFT)) & AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN7_SEC_MASK_MASK)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN8_SEC_MASK_MASK (0x100U)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN8_SEC_MASK_SHIFT (8U)
/*! PIO1_PIN8_SEC_MASK - Secure mask for pin P1_8
 *  0b1..Pin state is readable by non-secure world.
 *  0b0..Pin state is blocked to non-secure world.
 */
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN8_SEC_MASK(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN8_SEC_MASK_SHIFT)) & AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN8_SEC_MASK_MASK)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN9_SEC_MASK_MASK (0x200U)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN9_SEC_MASK_SHIFT (9U)
/*! PIO1_PIN9_SEC_MASK - Secure mask for pin P1_9
 *  0b1..Pin state is readable by non-secure world.
 *  0b0..Pin state is blocked to non-secure world.
 */
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN9_SEC_MASK(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN9_SEC_MASK_SHIFT)) & AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN9_SEC_MASK_MASK)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN10_SEC_MASK_MASK (0x400U)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN10_SEC_MASK_SHIFT (10U)
/*! PIO1_PIN10_SEC_MASK - Secure mask for pin P1_10
 *  0b1..Pin state is readable by non-secure world.
 *  0b0..Pin state is blocked to non-secure world.
 */
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN10_SEC_MASK(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN10_SEC_MASK_SHIFT)) & AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN10_SEC_MASK_MASK)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN11_SEC_MASK_MASK (0x800U)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN11_SEC_MASK_SHIFT (11U)
/*! PIO1_PIN11_SEC_MASK - Secure mask for pin P1_11
 *  0b1..Pin state is readable by non-secure world.
 *  0b0..Pin state is blocked to non-secure world.
 */
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN11_SEC_MASK(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN11_SEC_MASK_SHIFT)) & AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN11_SEC_MASK_MASK)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN12_SEC_MASK_MASK (0x1000U)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN12_SEC_MASK_SHIFT (12U)
/*! PIO1_PIN12_SEC_MASK - Secure mask for pin P1_12
 *  0b1..Pin state is readable by non-secure world.
 *  0b0..Pin state is blocked to non-secure world.
 */
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN12_SEC_MASK(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN12_SEC_MASK_SHIFT)) & AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN12_SEC_MASK_MASK)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN13_SEC_MASK_MASK (0x2000U)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN13_SEC_MASK_SHIFT (13U)
/*! PIO1_PIN13_SEC_MASK - Secure mask for pin P1_13
 *  0b1..Pin state is readable by non-secure world.
 *  0b0..Pin state is blocked to non-secure world.
 */
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN13_SEC_MASK(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN13_SEC_MASK_SHIFT)) & AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN13_SEC_MASK_MASK)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN14_SEC_MASK_MASK (0x4000U)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN14_SEC_MASK_SHIFT (14U)
/*! PIO1_PIN14_SEC_MASK - Secure mask for pin P1_14
 *  0b1..Pin state is readable by non-secure world.
 *  0b0..Pin state is blocked to non-secure world.
 */
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN14_SEC_MASK(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN14_SEC_MASK_SHIFT)) & AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN14_SEC_MASK_MASK)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN15_SEC_MASK_MASK (0x8000U)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN15_SEC_MASK_SHIFT (15U)
/*! PIO1_PIN15_SEC_MASK - Secure mask for pin P1_15
 *  0b1..Pin state is readable by non-secure world.
 *  0b0..Pin state is blocked to non-secure world.
 */
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN15_SEC_MASK(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN15_SEC_MASK_SHIFT)) & AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN15_SEC_MASK_MASK)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN16_SEC_MASK_MASK (0x10000U)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN16_SEC_MASK_SHIFT (16U)
/*! PIO1_PIN16_SEC_MASK - Secure mask for pin P1_16
 *  0b1..Pin state is readable by non-secure world.
 *  0b0..Pin state is blocked to non-secure world.
 */
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN16_SEC_MASK(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN16_SEC_MASK_SHIFT)) & AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN16_SEC_MASK_MASK)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN17_SEC_MASK_MASK (0x20000U)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN17_SEC_MASK_SHIFT (17U)
/*! PIO1_PIN17_SEC_MASK - Secure mask for pin P1_17
 *  0b1..Pin state is readable by non-secure world.
 *  0b0..Pin state is blocked to non-secure world.
 */
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN17_SEC_MASK(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN17_SEC_MASK_SHIFT)) & AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN17_SEC_MASK_MASK)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN18_SEC_MASK_MASK (0x40000U)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN18_SEC_MASK_SHIFT (18U)
/*! PIO1_PIN18_SEC_MASK - Secure mask for pin P1_18
 *  0b1..Pin state is readable by non-secure world.
 *  0b0..Pin state is blocked to non-secure world.
 */
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN18_SEC_MASK(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN18_SEC_MASK_SHIFT)) & AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN18_SEC_MASK_MASK)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN19_SEC_MASK_MASK (0x80000U)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN19_SEC_MASK_SHIFT (19U)
/*! PIO1_PIN19_SEC_MASK - Secure mask for pin P1_19
 *  0b1..Pin state is readable by non-secure world.
 *  0b0..Pin state is blocked to non-secure world.
 */
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN19_SEC_MASK(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN19_SEC_MASK_SHIFT)) & AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN19_SEC_MASK_MASK)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN20_SEC_MASK_MASK (0x100000U)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN20_SEC_MASK_SHIFT (20U)
/*! PIO1_PIN20_SEC_MASK - Secure mask for pin P1_20
 *  0b1..Pin state is readable by non-secure world.
 *  0b0..Pin state is blocked to non-secure world.
 */
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN20_SEC_MASK(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN20_SEC_MASK_SHIFT)) & AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN20_SEC_MASK_MASK)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN21_SEC_MASK_MASK (0x200000U)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN21_SEC_MASK_SHIFT (21U)
/*! PIO1_PIN21_SEC_MASK - Secure mask for pin P1_21
 *  0b1..Pin state is readable by non-secure world.
 *  0b0..Pin state is blocked to non-secure world.
 */
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN21_SEC_MASK(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN21_SEC_MASK_SHIFT)) & AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN21_SEC_MASK_MASK)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN22_SEC_MASK_MASK (0x400000U)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN22_SEC_MASK_SHIFT (22U)
/*! PIO1_PIN22_SEC_MASK - Secure mask for pin P1_22
 *  0b1..Pin state is readable by non-secure world.
 *  0b0..Pin state is blocked to non-secure world.
 */
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN22_SEC_MASK(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN22_SEC_MASK_SHIFT)) & AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN22_SEC_MASK_MASK)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN23_SEC_MASK_MASK (0x800000U)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN23_SEC_MASK_SHIFT (23U)
/*! PIO1_PIN23_SEC_MASK - Secure mask for pin P1_23
 *  0b1..Pin state is readable by non-secure world.
 *  0b0..Pin state is blocked to non-secure world.
 */
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN23_SEC_MASK(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN23_SEC_MASK_SHIFT)) & AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN23_SEC_MASK_MASK)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN24_SEC_MASK_MASK (0x1000000U)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN24_SEC_MASK_SHIFT (24U)
/*! PIO1_PIN24_SEC_MASK - Secure mask for pin P1_24
 *  0b1..Pin state is readable by non-secure world.
 *  0b0..Pin state is blocked to non-secure world.
 */
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN24_SEC_MASK(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN24_SEC_MASK_SHIFT)) & AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN24_SEC_MASK_MASK)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN25_SEC_MASK_MASK (0x2000000U)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN25_SEC_MASK_SHIFT (25U)
/*! PIO1_PIN25_SEC_MASK - Secure mask for pin P1_25
 *  0b1..Pin state is readable by non-secure world.
 *  0b0..Pin state is blocked to non-secure world.
 */
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN25_SEC_MASK(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN25_SEC_MASK_SHIFT)) & AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN25_SEC_MASK_MASK)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN26_SEC_MASK_MASK (0x4000000U)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN26_SEC_MASK_SHIFT (26U)
/*! PIO1_PIN26_SEC_MASK - Secure mask for pin P1_26
 *  0b1..Pin state is readable by non-secure world.
 *  0b0..Pin state is blocked to non-secure world.
 */
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN26_SEC_MASK(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN26_SEC_MASK_SHIFT)) & AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN26_SEC_MASK_MASK)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN27_SEC_MASK_MASK (0x8000000U)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN27_SEC_MASK_SHIFT (27U)
/*! PIO1_PIN27_SEC_MASK - Secure mask for pin P1_27
 *  0b1..Pin state is readable by non-secure world.
 *  0b0..Pin state is blocked to non-secure world.
 */
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN27_SEC_MASK(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN27_SEC_MASK_SHIFT)) & AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN27_SEC_MASK_MASK)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN28_SEC_MASK_MASK (0x10000000U)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN28_SEC_MASK_SHIFT (28U)
/*! PIO1_PIN28_SEC_MASK - Secure mask for pin P1_28
 *  0b1..Pin state is readable by non-secure world.
 *  0b0..Pin state is blocked to non-secure world.
 */
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN28_SEC_MASK(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN28_SEC_MASK_SHIFT)) & AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN28_SEC_MASK_MASK)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN29_SEC_MASK_MASK (0x20000000U)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN29_SEC_MASK_SHIFT (29U)
/*! PIO1_PIN29_SEC_MASK - Secure mask for pin P1_29
 *  0b1..Pin state is readable by non-secure world.
 *  0b0..Pin state is blocked to non-secure world.
 */
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN29_SEC_MASK(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN29_SEC_MASK_SHIFT)) & AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN29_SEC_MASK_MASK)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN30_SEC_MASK_MASK (0x40000000U)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN30_SEC_MASK_SHIFT (30U)
/*! PIO1_PIN30_SEC_MASK - Secure mask for pin P1_30
 *  0b1..Pin state is readable by non-secure world.
 *  0b0..Pin state is blocked to non-secure world.
 */
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN30_SEC_MASK(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN30_SEC_MASK_SHIFT)) & AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN30_SEC_MASK_MASK)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN31_SEC_MASK_MASK (0x80000000U)
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN31_SEC_MASK_SHIFT (31U)
/*! PIO1_PIN31_SEC_MASK - Secure mask for pin P1_31
 *  0b1..Pin state is readable by non-secure world.
 *  0b0..Pin state is blocked to non-secure world.
 */
#define AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN31_SEC_MASK(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN31_SEC_MASK_SHIFT)) & AHB_SECURE_CTRL_SEC_GPIO_MASK1_PIO1_PIN31_SEC_MASK_MASK)
/*! @} */

/*! @name SEC_CPU_INT_MASK0 - Secure Interrupt mask for CPU1 */
/*! @{ */
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_SYS_IRQ_MASK (0x1U)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_SYS_IRQ_SHIFT (0U)
/*! SYS_IRQ - Watchdog Timer, Brown Out Detectors and Flash Controller interrupts
 *  0b0..
 *  0b1..
 */
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_SYS_IRQ(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_SYS_IRQ_SHIFT)) & AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_SYS_IRQ_MASK)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_SDMA0_IRQ_MASK (0x2U)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_SDMA0_IRQ_SHIFT (1U)
/*! SDMA0_IRQ - System DMA 0 (non-secure) interrupt.
 *  0b0..
 *  0b1..
 */
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_SDMA0_IRQ(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_SDMA0_IRQ_SHIFT)) & AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_SDMA0_IRQ_MASK)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_GPIO_GLOBALINT0_IRQ_MASK (0x4U)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_GPIO_GLOBALINT0_IRQ_SHIFT (2U)
/*! GPIO_GLOBALINT0_IRQ - GPIO Group 0 interrupt.
 *  0b0..
 *  0b1..
 */
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_GPIO_GLOBALINT0_IRQ(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_GPIO_GLOBALINT0_IRQ_SHIFT)) & AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_GPIO_GLOBALINT0_IRQ_MASK)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_GPIO_GLOBALINT1_IRQ_MASK (0x8U)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_GPIO_GLOBALINT1_IRQ_SHIFT (3U)
/*! GPIO_GLOBALINT1_IRQ - GPIO Group 1 interrupt.
 *  0b0..
 *  0b1..
 */
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_GPIO_GLOBALINT1_IRQ(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_GPIO_GLOBALINT1_IRQ_SHIFT)) & AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_GPIO_GLOBALINT1_IRQ_MASK)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_GPIO_INT0_IRQ0_MASK (0x10U)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_GPIO_INT0_IRQ0_SHIFT (4U)
/*! GPIO_INT0_IRQ0 - Pin interrupt 0 or pattern match engine slice 0 interrupt.
 *  0b0..
 *  0b1..
 */
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_GPIO_INT0_IRQ0(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_GPIO_INT0_IRQ0_SHIFT)) & AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_GPIO_INT0_IRQ0_MASK)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_GPIO_INT0_IRQ1_MASK (0x20U)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_GPIO_INT0_IRQ1_SHIFT (5U)
/*! GPIO_INT0_IRQ1 - Pin interrupt 1 or pattern match engine slice 1 interrupt.
 *  0b0..
 *  0b1..
 */
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_GPIO_INT0_IRQ1(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_GPIO_INT0_IRQ1_SHIFT)) & AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_GPIO_INT0_IRQ1_MASK)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_GPIO_INT0_IRQ2_MASK (0x40U)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_GPIO_INT0_IRQ2_SHIFT (6U)
/*! GPIO_INT0_IRQ2 - Pin interrupt 2 or pattern match engine slice 2 interrupt.
 *  0b0..
 *  0b1..
 */
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_GPIO_INT0_IRQ2(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_GPIO_INT0_IRQ2_SHIFT)) & AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_GPIO_INT0_IRQ2_MASK)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_GPIO_INT0_IRQ3_MASK (0x80U)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_GPIO_INT0_IRQ3_SHIFT (7U)
/*! GPIO_INT0_IRQ3 - Pin interrupt 3 or pattern match engine slice 3 interrupt.
 *  0b0..
 *  0b1..
 */
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_GPIO_INT0_IRQ3(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_GPIO_INT0_IRQ3_SHIFT)) & AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_GPIO_INT0_IRQ3_MASK)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_UTICK_IRQ_MASK (0x100U)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_UTICK_IRQ_SHIFT (8U)
/*! UTICK_IRQ - Micro Tick Timer interrupt.
 *  0b0..
 *  0b1..
 */
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_UTICK_IRQ(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_UTICK_IRQ_SHIFT)) & AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_UTICK_IRQ_MASK)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_MRT_IRQ_MASK (0x200U)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_MRT_IRQ_SHIFT (9U)
/*! MRT_IRQ - Multi-Rate Timer interrupt.
 *  0b0..
 *  0b1..
 */
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_MRT_IRQ(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_MRT_IRQ_SHIFT)) & AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_MRT_IRQ_MASK)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_CTIMER0_IRQ_MASK (0x400U)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_CTIMER0_IRQ_SHIFT (10U)
/*! CTIMER0_IRQ - Standard counter/timer 0 interrupt.
 *  0b0..
 *  0b1..
 */
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_CTIMER0_IRQ(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_CTIMER0_IRQ_SHIFT)) & AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_CTIMER0_IRQ_MASK)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_CTIMER1_IRQ_MASK (0x800U)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_CTIMER1_IRQ_SHIFT (11U)
/*! CTIMER1_IRQ - Standard counter/timer 1 interrupt.
 *  0b0..
 *  0b1..
 */
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_CTIMER1_IRQ(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_CTIMER1_IRQ_SHIFT)) & AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_CTIMER1_IRQ_MASK)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_SCT_IRQ_MASK (0x1000U)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_SCT_IRQ_SHIFT (12U)
/*! SCT_IRQ - SCTimer/PWM interrupt.
 *  0b0..
 *  0b1..
 */
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_SCT_IRQ(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_SCT_IRQ_SHIFT)) & AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_SCT_IRQ_MASK)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_CTIMER3_IRQ_MASK (0x2000U)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_CTIMER3_IRQ_SHIFT (13U)
/*! CTIMER3_IRQ - Standard counter/timer 3 interrupt.
 *  0b0..
 *  0b1..
 */
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_CTIMER3_IRQ(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_CTIMER3_IRQ_SHIFT)) & AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_CTIMER3_IRQ_MASK)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_FLEXCOMM0_IRQ_MASK (0x4000U)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_FLEXCOMM0_IRQ_SHIFT (14U)
/*! FLEXCOMM0_IRQ - Flexcomm 0 interrupt (USART, SPI, I2C, I2S).
 *  0b0..
 *  0b1..
 */
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_FLEXCOMM0_IRQ(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_FLEXCOMM0_IRQ_SHIFT)) & AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_FLEXCOMM0_IRQ_MASK)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_FLEXCOMM1_IRQ_MASK (0x8000U)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_FLEXCOMM1_IRQ_SHIFT (15U)
/*! FLEXCOMM1_IRQ - Flexcomm 1 interrupt (USART, SPI, I2C, I2S).
 *  0b0..
 *  0b1..
 */
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_FLEXCOMM1_IRQ(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_FLEXCOMM1_IRQ_SHIFT)) & AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_FLEXCOMM1_IRQ_MASK)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_FLEXCOMM2_IRQ_MASK (0x10000U)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_FLEXCOMM2_IRQ_SHIFT (16U)
/*! FLEXCOMM2_IRQ - Flexcomm 2 interrupt (USART, SPI, I2C, I2S).
 *  0b0..
 *  0b1..
 */
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_FLEXCOMM2_IRQ(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_FLEXCOMM2_IRQ_SHIFT)) & AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_FLEXCOMM2_IRQ_MASK)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_FLEXCOMM3_IRQ_MASK (0x20000U)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_FLEXCOMM3_IRQ_SHIFT (17U)
/*! FLEXCOMM3_IRQ - Flexcomm 3 interrupt (USART, SPI, I2C, I2S).
 *  0b0..
 *  0b1..
 */
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_FLEXCOMM3_IRQ(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_FLEXCOMM3_IRQ_SHIFT)) & AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_FLEXCOMM3_IRQ_MASK)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_FLEXCOMM4_IRQ_MASK (0x40000U)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_FLEXCOMM4_IRQ_SHIFT (18U)
/*! FLEXCOMM4_IRQ - Flexcomm 4 interrupt (USART, SPI, I2C, I2S).
 *  0b0..
 *  0b1..
 */
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_FLEXCOMM4_IRQ(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_FLEXCOMM4_IRQ_SHIFT)) & AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_FLEXCOMM4_IRQ_MASK)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_FLEXCOMM5_IRQ_MASK (0x80000U)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_FLEXCOMM5_IRQ_SHIFT (19U)
/*! FLEXCOMM5_IRQ - Flexcomm 5 interrupt (USART, SPI, I2C, I2S).
 *  0b0..
 *  0b1..
 */
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_FLEXCOMM5_IRQ(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_FLEXCOMM5_IRQ_SHIFT)) & AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_FLEXCOMM5_IRQ_MASK)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_FLEXCOMM6_IRQ_MASK (0x100000U)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_FLEXCOMM6_IRQ_SHIFT (20U)
/*! FLEXCOMM6_IRQ - Flexcomm 6 interrupt (USART, SPI, I2C, I2S).
 *  0b0..
 *  0b1..
 */
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_FLEXCOMM6_IRQ(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_FLEXCOMM6_IRQ_SHIFT)) & AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_FLEXCOMM6_IRQ_MASK)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_FLEXCOMM7_IRQ_MASK (0x200000U)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_FLEXCOMM7_IRQ_SHIFT (21U)
/*! FLEXCOMM7_IRQ - Flexcomm 7 interrupt (USART, SPI, I2C, I2S).
 *  0b0..
 *  0b1..
 */
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_FLEXCOMM7_IRQ(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_FLEXCOMM7_IRQ_SHIFT)) & AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_FLEXCOMM7_IRQ_MASK)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_ADC_IRQ_MASK (0x400000U)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_ADC_IRQ_SHIFT (22U)
/*! ADC_IRQ - General Purpose ADC interrupt.
 *  0b0..
 *  0b1..
 */
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_ADC_IRQ(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_ADC_IRQ_SHIFT)) & AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_ADC_IRQ_MASK)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_RESERVED0_MASK (0x800000U)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_RESERVED0_SHIFT (23U)
/*! RESERVED0 - Reserved. Read value is undefined, only zero should be written.
 *  0b0..
 *  0b1..
 */
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_RESERVED0(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_RESERVED0_SHIFT)) & AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_RESERVED0_MASK)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_ACMP_IRQ_MASK (0x1000000U)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_ACMP_IRQ_SHIFT (24U)
/*! ACMP_IRQ - Analog Comparator interrupt.
 *  0b0..
 *  0b1..
 */
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_ACMP_IRQ(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_ACMP_IRQ_SHIFT)) & AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_ACMP_IRQ_MASK)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_RESERVED1_MASK (0x2000000U)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_RESERVED1_SHIFT (25U)
/*! RESERVED1 - Reserved. Read value is undefined, only zero should be written.
 *  0b0..
 *  0b1..
 */
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_RESERVED1(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_RESERVED1_SHIFT)) & AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_RESERVED1_MASK)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_RESERVED2_MASK (0x4000000U)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_RESERVED2_SHIFT (26U)
/*! RESERVED2 - Reserved. Read value is undefined, only zero should be written.
 *  0b0..
 *  0b1..
 */
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_RESERVED2(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_RESERVED2_SHIFT)) & AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_RESERVED2_MASK)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_USB0_NEEDCLK_MASK (0x8000000U)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_USB0_NEEDCLK_SHIFT (27U)
/*! USB0_NEEDCLK - USB Full Speed Controller Clock request interrupt.
 *  0b0..
 *  0b1..
 */
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_USB0_NEEDCLK(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_USB0_NEEDCLK_SHIFT)) & AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_USB0_NEEDCLK_MASK)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_USB0_IRQ_MASK (0x10000000U)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_USB0_IRQ_SHIFT (28U)
/*! USB0_IRQ - USB Full Speed Controller interrupt.
 *  0b0..
 *  0b1..
 */
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_USB0_IRQ(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_USB0_IRQ_SHIFT)) & AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_USB0_IRQ_MASK)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_RTC_IRQ_MASK (0x20000000U)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_RTC_IRQ_SHIFT (29U)
/*! RTC_IRQ - RTC_LITE0_ALARM_IRQ, RTC_LITE0_WAKEUP_IRQ
 *  0b0..
 *  0b1..
 */
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_RTC_IRQ(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_RTC_IRQ_SHIFT)) & AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_RTC_IRQ_MASK)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_RESERVED3_MASK (0x40000000U)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_RESERVED3_SHIFT (30U)
/*! RESERVED3 - Reserved. Read value is undefined, only zero should be written.
 *  0b0..
 *  0b1..
 */
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_RESERVED3(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_RESERVED3_SHIFT)) & AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_RESERVED3_MASK)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_MAILBOX_IRQ_MASK (0x80000000U)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_MAILBOX_IRQ_SHIFT (31U)
/*! MAILBOX_IRQ - Mailbox interrupt.
 *  0b0..
 *  0b1..
 */
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_MAILBOX_IRQ(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_MAILBOX_IRQ_SHIFT)) & AHB_SECURE_CTRL_SEC_CPU_INT_MASK0_MAILBOX_IRQ_MASK)
/*! @} */

/*! @name SEC_CPU_INT_MASK1 - Secure Interrupt mask for CPU1 */
/*! @{ */
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_GPIO_INT0_IRQ4_MASK (0x1U)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_GPIO_INT0_IRQ4_SHIFT (0U)
/*! GPIO_INT0_IRQ4 - Pin interrupt 4 or pattern match engine slice 4 interrupt.
 *  0b0..
 *  0b1..
 */
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_GPIO_INT0_IRQ4(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_GPIO_INT0_IRQ4_SHIFT)) & AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_GPIO_INT0_IRQ4_MASK)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_GPIO_INT0_IRQ5_MASK (0x2U)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_GPIO_INT0_IRQ5_SHIFT (1U)
/*! GPIO_INT0_IRQ5 - Pin interrupt 5 or pattern match engine slice 5 interrupt.
 *  0b0..
 *  0b1..
 */
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_GPIO_INT0_IRQ5(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_GPIO_INT0_IRQ5_SHIFT)) & AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_GPIO_INT0_IRQ5_MASK)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_GPIO_INT0_IRQ6_MASK (0x4U)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_GPIO_INT0_IRQ6_SHIFT (2U)
/*! GPIO_INT0_IRQ6 - Pin interrupt 6 or pattern match engine slice 6 interrupt.
 *  0b0..
 *  0b1..
 */
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_GPIO_INT0_IRQ6(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_GPIO_INT0_IRQ6_SHIFT)) & AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_GPIO_INT0_IRQ6_MASK)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_GPIO_INT0_IRQ7_MASK (0x8U)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_GPIO_INT0_IRQ7_SHIFT (3U)
/*! GPIO_INT0_IRQ7 - Pin interrupt 7 or pattern match engine slice 7 interrupt.
 *  0b0..
 *  0b1..
 */
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_GPIO_INT0_IRQ7(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_GPIO_INT0_IRQ7_SHIFT)) & AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_GPIO_INT0_IRQ7_MASK)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_CTIMER2_IRQ_MASK (0x10U)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_CTIMER2_IRQ_SHIFT (4U)
/*! CTIMER2_IRQ - Standard counter/timer 2 interrupt.
 *  0b0..
 *  0b1..
 */
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_CTIMER2_IRQ(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_CTIMER2_IRQ_SHIFT)) & AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_CTIMER2_IRQ_MASK)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_CTIMER4_IRQ_MASK (0x20U)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_CTIMER4_IRQ_SHIFT (5U)
/*! CTIMER4_IRQ - Standard counter/timer 4 interrupt.
 *  0b0..
 *  0b1..
 */
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_CTIMER4_IRQ(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_CTIMER4_IRQ_SHIFT)) & AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_CTIMER4_IRQ_MASK)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_OS_EVENT_TIMER_IRQ_MASK (0x40U)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_OS_EVENT_TIMER_IRQ_SHIFT (6U)
/*! OS_EVENT_TIMER_IRQ - OS Event Timer and OS Event Timer Wakeup interrupts
 *  0b0..
 *  0b1..
 */
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_OS_EVENT_TIMER_IRQ(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_OS_EVENT_TIMER_IRQ_SHIFT)) & AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_OS_EVENT_TIMER_IRQ_MASK)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_RESERVED0_MASK (0x80U)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_RESERVED0_SHIFT (7U)
/*! RESERVED0 - Reserved. Read value is undefined, only zero should be written.
 *  0b0..
 *  0b1..
 */
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_RESERVED0(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_RESERVED0_SHIFT)) & AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_RESERVED0_MASK)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_RESERVED1_MASK (0x100U)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_RESERVED1_SHIFT (8U)
/*! RESERVED1 - Reserved. Read value is undefined, only zero should be written.
 *  0b0..
 *  0b1..
 */
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_RESERVED1(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_RESERVED1_SHIFT)) & AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_RESERVED1_MASK)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_RESERVED2_MASK (0x200U)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_RESERVED2_SHIFT (9U)
/*! RESERVED2 - Reserved. Read value is undefined, only zero should be written.
 *  0b0..
 *  0b1..
 */
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_RESERVED2(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_RESERVED2_SHIFT)) & AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_RESERVED2_MASK)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_SDIO_IRQ_MASK (0x400U)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_SDIO_IRQ_SHIFT (10U)
/*! SDIO_IRQ - SDIO Controller interrupt.
 *  0b0..
 *  0b1..
 */
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_SDIO_IRQ(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_SDIO_IRQ_SHIFT)) & AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_SDIO_IRQ_MASK)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_RESERVED3_MASK (0x800U)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_RESERVED3_SHIFT (11U)
/*! RESERVED3 - Reserved. Read value is undefined, only zero should be written.
 *  0b0..
 *  0b1..
 */
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_RESERVED3(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_RESERVED3_SHIFT)) & AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_RESERVED3_MASK)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_RESERVED4_MASK (0x1000U)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_RESERVED4_SHIFT (12U)
/*! RESERVED4 - Reserved. Read value is undefined, only zero should be written.
 *  0b0..
 *  0b1..
 */
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_RESERVED4(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_RESERVED4_SHIFT)) & AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_RESERVED4_MASK)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_RESERVED5_MASK (0x2000U)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_RESERVED5_SHIFT (13U)
/*! RESERVED5 - Reserved. Read value is undefined, only zero should be written.
 *  0b0..
 *  0b1..
 */
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_RESERVED5(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_RESERVED5_SHIFT)) & AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_RESERVED5_MASK)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_USB1_PHY_IRQ_MASK (0x4000U)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_USB1_PHY_IRQ_SHIFT (14U)
/*! USB1_PHY_IRQ - USB High Speed PHY Controller interrupt.
 *  0b0..
 *  0b1..
 */
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_USB1_PHY_IRQ(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_USB1_PHY_IRQ_SHIFT)) & AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_USB1_PHY_IRQ_MASK)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_USB1_IRQ_MASK (0x8000U)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_USB1_IRQ_SHIFT (15U)
/*! USB1_IRQ - USB High Speed Controller interrupt.
 *  0b0..
 *  0b1..
 */
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_USB1_IRQ(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_USB1_IRQ_SHIFT)) & AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_USB1_IRQ_MASK)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_USB1_NEEDCLK_MASK (0x10000U)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_USB1_NEEDCLK_SHIFT (16U)
/*! USB1_NEEDCLK - USB High Speed Controller Clock request interrupt.
 *  0b0..
 *  0b1..
 */
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_USB1_NEEDCLK(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_USB1_NEEDCLK_SHIFT)) & AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_USB1_NEEDCLK_MASK)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_SEC_HYPERVISOR_CALL_IRQ_MASK (0x20000U)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_SEC_HYPERVISOR_CALL_IRQ_SHIFT (17U)
/*! SEC_HYPERVISOR_CALL_IRQ - Secure fault Hyper Visor call interrupt.
 *  0b0..
 *  0b1..
 */
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_SEC_HYPERVISOR_CALL_IRQ(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_SEC_HYPERVISOR_CALL_IRQ_SHIFT)) & AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_SEC_HYPERVISOR_CALL_IRQ_MASK)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_SEC_GPIO_INT0_IRQ0_MASK (0x40000U)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_SEC_GPIO_INT0_IRQ0_SHIFT (18U)
/*! SEC_GPIO_INT0_IRQ0 - Secure Pin interrupt 0 or pattern match engine slice 0 interrupt.
 *  0b0..
 *  0b1..
 */
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_SEC_GPIO_INT0_IRQ0(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_SEC_GPIO_INT0_IRQ0_SHIFT)) & AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_SEC_GPIO_INT0_IRQ0_MASK)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_SEC_GPIO_INT0_IRQ1_MASK (0x80000U)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_SEC_GPIO_INT0_IRQ1_SHIFT (19U)
/*! SEC_GPIO_INT0_IRQ1 - Secure Pin interrupt 1 or pattern match engine slice 1 interrupt.
 *  0b0..
 *  0b1..
 */
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_SEC_GPIO_INT0_IRQ1(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_SEC_GPIO_INT0_IRQ1_SHIFT)) & AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_SEC_GPIO_INT0_IRQ1_MASK)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_PLU_IRQ_MASK (0x100000U)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_PLU_IRQ_SHIFT (20U)
/*! PLU_IRQ - Programmable Look-Up Controller interrupt.
 *  0b0..
 *  0b1..
 */
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_PLU_IRQ(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_PLU_IRQ_SHIFT)) & AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_PLU_IRQ_MASK)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_SEC_VIO_IRQ_MASK (0x200000U)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_SEC_VIO_IRQ_SHIFT (21U)
/*! SEC_VIO_IRQ - Security Violation interrupt.
 *  0b0..
 *  0b1..
 */
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_SEC_VIO_IRQ(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_SEC_VIO_IRQ_SHIFT)) & AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_SEC_VIO_IRQ_MASK)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_SHA_IRQ_MASK (0x400000U)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_SHA_IRQ_SHIFT (22U)
/*! SHA_IRQ - HASH-AES interrupt.
 *  0b0..
 *  0b1..
 */
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_SHA_IRQ(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_SHA_IRQ_SHIFT)) & AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_SHA_IRQ_MASK)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_CASPER_IRQ_MASK (0x800000U)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_CASPER_IRQ_SHIFT (23U)
/*! CASPER_IRQ - CASPER interrupt.
 *  0b0..
 *  0b1..
 */
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_CASPER_IRQ(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_CASPER_IRQ_SHIFT)) & AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_CASPER_IRQ_MASK)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_PUFKEY_IRQ_MASK (0x1000000U)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_PUFKEY_IRQ_SHIFT (24U)
/*! PUFKEY_IRQ - PUF interrupt.
 *  0b0..
 *  0b1..
 */
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_PUFKEY_IRQ(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_PUFKEY_IRQ_SHIFT)) & AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_PUFKEY_IRQ_MASK)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_PQ_IRQ_MASK (0x2000000U)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_PQ_IRQ_SHIFT (25U)
/*! PQ_IRQ - Power Quad interrupt.
 *  0b0..
 *  0b1..
 */
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_PQ_IRQ(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_PQ_IRQ_SHIFT)) & AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_PQ_IRQ_MASK)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_SDMA1_IRQ_MASK (0x4000000U)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_SDMA1_IRQ_SHIFT (26U)
/*! SDMA1_IRQ - System DMA 1 (Secure) interrupt
 *  0b0..
 *  0b1..
 */
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_SDMA1_IRQ(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_SDMA1_IRQ_SHIFT)) & AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_SDMA1_IRQ_MASK)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_LSPI_HS_IRQ_MASK (0x8000000U)
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_LSPI_HS_IRQ_SHIFT (27U)
/*! LSPI_HS_IRQ - High Speed SPI interrupt
 *  0b0..
 *  0b1..
 */
#define AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_LSPI_HS_IRQ(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_LSPI_HS_IRQ_SHIFT)) & AHB_SECURE_CTRL_SEC_CPU_INT_MASK1_LSPI_HS_IRQ_MASK)
/*! @} */

/*! @name SEC_MASK_LOCK - Security General Purpose register access control. */
/*! @{ */
#define AHB_SECURE_CTRL_SEC_MASK_LOCK_SEC_GPIO_MASK0_LOCK_MASK (0x3U)
#define AHB_SECURE_CTRL_SEC_MASK_LOCK_SEC_GPIO_MASK0_LOCK_SHIFT (0U)
/*! SEC_GPIO_MASK0_LOCK - SEC_GPIO_MASK0 register write-lock.
 *  0b10..Writable.
 *  0b01..Restricted mode.
 */
#define AHB_SECURE_CTRL_SEC_MASK_LOCK_SEC_GPIO_MASK0_LOCK(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_MASK_LOCK_SEC_GPIO_MASK0_LOCK_SHIFT)) & AHB_SECURE_CTRL_SEC_MASK_LOCK_SEC_GPIO_MASK0_LOCK_MASK)
#define AHB_SECURE_CTRL_SEC_MASK_LOCK_SEC_GPIO_MASK1_LOCK_MASK (0xCU)
#define AHB_SECURE_CTRL_SEC_MASK_LOCK_SEC_GPIO_MASK1_LOCK_SHIFT (2U)
/*! SEC_GPIO_MASK1_LOCK - SEC_GPIO_MASK1 register write-lock.
 *  0b10..Writable.
 *  0b01..Restricted mode.
 */
#define AHB_SECURE_CTRL_SEC_MASK_LOCK_SEC_GPIO_MASK1_LOCK(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_MASK_LOCK_SEC_GPIO_MASK1_LOCK_SHIFT)) & AHB_SECURE_CTRL_SEC_MASK_LOCK_SEC_GPIO_MASK1_LOCK_MASK)
#define AHB_SECURE_CTRL_SEC_MASK_LOCK_SEC_CPU1_INT_MASK0_LOCK_MASK (0x300U)
#define AHB_SECURE_CTRL_SEC_MASK_LOCK_SEC_CPU1_INT_MASK0_LOCK_SHIFT (8U)
/*! SEC_CPU1_INT_MASK0_LOCK - SEC_CPU_INT_MASK0 register write-lock.
 *  0b10..Writable.
 *  0b01..Restricted mode.
 */
#define AHB_SECURE_CTRL_SEC_MASK_LOCK_SEC_CPU1_INT_MASK0_LOCK(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_MASK_LOCK_SEC_CPU1_INT_MASK0_LOCK_SHIFT)) & AHB_SECURE_CTRL_SEC_MASK_LOCK_SEC_CPU1_INT_MASK0_LOCK_MASK)
#define AHB_SECURE_CTRL_SEC_MASK_LOCK_SEC_CPU1_INT_MASK1_LOCK_MASK (0xC00U)
#define AHB_SECURE_CTRL_SEC_MASK_LOCK_SEC_CPU1_INT_MASK1_LOCK_SHIFT (10U)
/*! SEC_CPU1_INT_MASK1_LOCK - SEC_CPU_INT_MASK1 register write-lock.
 *  0b10..Writable.
 *  0b01..Restricted mode.
 */
#define AHB_SECURE_CTRL_SEC_MASK_LOCK_SEC_CPU1_INT_MASK1_LOCK(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_SEC_MASK_LOCK_SEC_CPU1_INT_MASK1_LOCK_SHIFT)) & AHB_SECURE_CTRL_SEC_MASK_LOCK_SEC_CPU1_INT_MASK1_LOCK_MASK)
/*! @} */

/*! @name MASTER_SEC_LEVEL - master secure level register */
/*! @{ */
#define AHB_SECURE_CTRL_MASTER_SEC_LEVEL_CPU1C_MASK (0x30U)
#define AHB_SECURE_CTRL_MASTER_SEC_LEVEL_CPU1C_SHIFT (4U)
/*! CPU1C - Micro-Cortex M33 (CPU1) Code bus.
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_MASTER_SEC_LEVEL_CPU1C(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_MASTER_SEC_LEVEL_CPU1C_SHIFT)) & AHB_SECURE_CTRL_MASTER_SEC_LEVEL_CPU1C_MASK)
#define AHB_SECURE_CTRL_MASTER_SEC_LEVEL_CPU1S_MASK (0xC0U)
#define AHB_SECURE_CTRL_MASTER_SEC_LEVEL_CPU1S_SHIFT (6U)
/*! CPU1S - Micro-Cortex M33 (CPU1) System bus.
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_MASTER_SEC_LEVEL_CPU1S(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_MASTER_SEC_LEVEL_CPU1S_SHIFT)) & AHB_SECURE_CTRL_MASTER_SEC_LEVEL_CPU1S_MASK)
#define AHB_SECURE_CTRL_MASTER_SEC_LEVEL_USBFSD_MASK (0x300U)
#define AHB_SECURE_CTRL_MASTER_SEC_LEVEL_USBFSD_SHIFT (8U)
/*! USBFSD - USB Full Speed Device.
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_MASTER_SEC_LEVEL_USBFSD(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_MASTER_SEC_LEVEL_USBFSD_SHIFT)) & AHB_SECURE_CTRL_MASTER_SEC_LEVEL_USBFSD_MASK)
#define AHB_SECURE_CTRL_MASTER_SEC_LEVEL_SDMA0_MASK (0xC00U)
#define AHB_SECURE_CTRL_MASTER_SEC_LEVEL_SDMA0_SHIFT (10U)
/*! SDMA0 - System DMA 0.
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_MASTER_SEC_LEVEL_SDMA0(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_MASTER_SEC_LEVEL_SDMA0_SHIFT)) & AHB_SECURE_CTRL_MASTER_SEC_LEVEL_SDMA0_MASK)
#define AHB_SECURE_CTRL_MASTER_SEC_LEVEL_SDIO_MASK (0x30000U)
#define AHB_SECURE_CTRL_MASTER_SEC_LEVEL_SDIO_SHIFT (16U)
/*! SDIO - SDIO.
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_MASTER_SEC_LEVEL_SDIO(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_MASTER_SEC_LEVEL_SDIO_SHIFT)) & AHB_SECURE_CTRL_MASTER_SEC_LEVEL_SDIO_MASK)
#define AHB_SECURE_CTRL_MASTER_SEC_LEVEL_PQ_MASK (0xC0000U)
#define AHB_SECURE_CTRL_MASTER_SEC_LEVEL_PQ_SHIFT (18U)
/*! PQ - Power Quad.
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_MASTER_SEC_LEVEL_PQ(x)   (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_MASTER_SEC_LEVEL_PQ_SHIFT)) & AHB_SECURE_CTRL_MASTER_SEC_LEVEL_PQ_MASK)
#define AHB_SECURE_CTRL_MASTER_SEC_LEVEL_HASH_MASK (0x300000U)
#define AHB_SECURE_CTRL_MASTER_SEC_LEVEL_HASH_SHIFT (20U)
/*! HASH - Hash.
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_MASTER_SEC_LEVEL_HASH(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_MASTER_SEC_LEVEL_HASH_SHIFT)) & AHB_SECURE_CTRL_MASTER_SEC_LEVEL_HASH_MASK)
#define AHB_SECURE_CTRL_MASTER_SEC_LEVEL_USBFSH_MASK (0xC00000U)
#define AHB_SECURE_CTRL_MASTER_SEC_LEVEL_USBFSH_SHIFT (22U)
/*! USBFSH - USB Full speed Host.
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_MASTER_SEC_LEVEL_USBFSH(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_MASTER_SEC_LEVEL_USBFSH_SHIFT)) & AHB_SECURE_CTRL_MASTER_SEC_LEVEL_USBFSH_MASK)
#define AHB_SECURE_CTRL_MASTER_SEC_LEVEL_SDMA1_MASK (0x3000000U)
#define AHB_SECURE_CTRL_MASTER_SEC_LEVEL_SDMA1_SHIFT (24U)
/*! SDMA1 - System DMA 1 security level.
 *  0b00..Non-secure and Non-priviledge user access allowed.
 *  0b01..Non-secure and Privilege access allowed.
 *  0b10..Secure and Non-priviledge user access allowed.
 *  0b11..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_MASTER_SEC_LEVEL_SDMA1(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_MASTER_SEC_LEVEL_SDMA1_SHIFT)) & AHB_SECURE_CTRL_MASTER_SEC_LEVEL_SDMA1_MASK)
#define AHB_SECURE_CTRL_MASTER_SEC_LEVEL_MASTER_SEC_LEVEL_LOCK_MASK (0xC0000000U)
#define AHB_SECURE_CTRL_MASTER_SEC_LEVEL_MASTER_SEC_LEVEL_LOCK_SHIFT (30U)
/*! MASTER_SEC_LEVEL_LOCK - MASTER_SEC_LEVEL write-lock.
 *  0b10..Writable.
 *  0b01..Restricted mode.
 */
#define AHB_SECURE_CTRL_MASTER_SEC_LEVEL_MASTER_SEC_LEVEL_LOCK(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_MASTER_SEC_LEVEL_MASTER_SEC_LEVEL_LOCK_SHIFT)) & AHB_SECURE_CTRL_MASTER_SEC_LEVEL_MASTER_SEC_LEVEL_LOCK_MASK)
/*! @} */

/*! @name MASTER_SEC_ANTI_POL_REG - master secure level anti-pole register */
/*! @{ */
#define AHB_SECURE_CTRL_MASTER_SEC_ANTI_POL_REG_CPU1C_MASK (0x30U)
#define AHB_SECURE_CTRL_MASTER_SEC_ANTI_POL_REG_CPU1C_SHIFT (4U)
/*! CPU1C - Micro-Cortex M33 (CPU1) Code bus. Must be equal to NOT(MASTER_SEC_LEVEL.CPU1C)
 *  0b11..Non-secure and Non-priviledge user access allowed.
 *  0b10..Non-secure and Privilege access allowed.
 *  0b01..Secure and Non-priviledge user access allowed.
 *  0b00..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_MASTER_SEC_ANTI_POL_REG_CPU1C(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_MASTER_SEC_ANTI_POL_REG_CPU1C_SHIFT)) & AHB_SECURE_CTRL_MASTER_SEC_ANTI_POL_REG_CPU1C_MASK)
#define AHB_SECURE_CTRL_MASTER_SEC_ANTI_POL_REG_CPU1S_MASK (0xC0U)
#define AHB_SECURE_CTRL_MASTER_SEC_ANTI_POL_REG_CPU1S_SHIFT (6U)
/*! CPU1S - Micro-Cortex M33 (CPU1) System bus. Must be equal to NOT(MASTER_SEC_LEVEL.CPU1S)
 *  0b11..Non-secure and Non-priviledge user access allowed.
 *  0b10..Non-secure and Privilege access allowed.
 *  0b01..Secure and Non-priviledge user access allowed.
 *  0b00..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_MASTER_SEC_ANTI_POL_REG_CPU1S(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_MASTER_SEC_ANTI_POL_REG_CPU1S_SHIFT)) & AHB_SECURE_CTRL_MASTER_SEC_ANTI_POL_REG_CPU1S_MASK)
#define AHB_SECURE_CTRL_MASTER_SEC_ANTI_POL_REG_USBFSD_MASK (0x300U)
#define AHB_SECURE_CTRL_MASTER_SEC_ANTI_POL_REG_USBFSD_SHIFT (8U)
/*! USBFSD - USB Full Speed Device. Must be equal to NOT(MASTER_SEC_LEVEL.USBFSD)
 *  0b11..Non-secure and Non-priviledge user access allowed.
 *  0b10..Non-secure and Privilege access allowed.
 *  0b01..Secure and Non-priviledge user access allowed.
 *  0b00..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_MASTER_SEC_ANTI_POL_REG_USBFSD(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_MASTER_SEC_ANTI_POL_REG_USBFSD_SHIFT)) & AHB_SECURE_CTRL_MASTER_SEC_ANTI_POL_REG_USBFSD_MASK)
#define AHB_SECURE_CTRL_MASTER_SEC_ANTI_POL_REG_SDMA0_MASK (0xC00U)
#define AHB_SECURE_CTRL_MASTER_SEC_ANTI_POL_REG_SDMA0_SHIFT (10U)
/*! SDMA0 - System DMA 0. Must be equal to NOT(MASTER_SEC_LEVEL.SDMA0)
 *  0b11..Non-secure and Non-priviledge user access allowed.
 *  0b10..Non-secure and Privilege access allowed.
 *  0b01..Secure and Non-priviledge user access allowed.
 *  0b00..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_MASTER_SEC_ANTI_POL_REG_SDMA0(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_MASTER_SEC_ANTI_POL_REG_SDMA0_SHIFT)) & AHB_SECURE_CTRL_MASTER_SEC_ANTI_POL_REG_SDMA0_MASK)
#define AHB_SECURE_CTRL_MASTER_SEC_ANTI_POL_REG_SDIO_MASK (0x30000U)
#define AHB_SECURE_CTRL_MASTER_SEC_ANTI_POL_REG_SDIO_SHIFT (16U)
/*! SDIO - SDIO. Must be equal to NOT(MASTER_SEC_LEVEL.SDIO)
 *  0b11..Non-secure and Non-priviledge user access allowed.
 *  0b10..Non-secure and Privilege access allowed.
 *  0b01..Secure and Non-priviledge user access allowed.
 *  0b00..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_MASTER_SEC_ANTI_POL_REG_SDIO(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_MASTER_SEC_ANTI_POL_REG_SDIO_SHIFT)) & AHB_SECURE_CTRL_MASTER_SEC_ANTI_POL_REG_SDIO_MASK)
#define AHB_SECURE_CTRL_MASTER_SEC_ANTI_POL_REG_PQ_MASK (0xC0000U)
#define AHB_SECURE_CTRL_MASTER_SEC_ANTI_POL_REG_PQ_SHIFT (18U)
/*! PQ - Power Quad. Must be equal to NOT(MASTER_SEC_LEVEL.PQ)
 *  0b11..Non-secure and Non-priviledge user access allowed.
 *  0b10..Non-secure and Privilege access allowed.
 *  0b01..Secure and Non-priviledge user access allowed.
 *  0b00..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_MASTER_SEC_ANTI_POL_REG_PQ(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_MASTER_SEC_ANTI_POL_REG_PQ_SHIFT)) & AHB_SECURE_CTRL_MASTER_SEC_ANTI_POL_REG_PQ_MASK)
#define AHB_SECURE_CTRL_MASTER_SEC_ANTI_POL_REG_HASH_MASK (0x300000U)
#define AHB_SECURE_CTRL_MASTER_SEC_ANTI_POL_REG_HASH_SHIFT (20U)
/*! HASH - Hash. Must be equal to NOT(MASTER_SEC_LEVEL.HASH)
 *  0b11..Non-secure and Non-priviledge user access allowed.
 *  0b10..Non-secure and Privilege access allowed.
 *  0b01..Secure and Non-priviledge user access allowed.
 *  0b00..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_MASTER_SEC_ANTI_POL_REG_HASH(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_MASTER_SEC_ANTI_POL_REG_HASH_SHIFT)) & AHB_SECURE_CTRL_MASTER_SEC_ANTI_POL_REG_HASH_MASK)
#define AHB_SECURE_CTRL_MASTER_SEC_ANTI_POL_REG_USBFSH_MASK (0xC00000U)
#define AHB_SECURE_CTRL_MASTER_SEC_ANTI_POL_REG_USBFSH_SHIFT (22U)
/*! USBFSH - USB Full speed Host. Must be equal to NOT(MASTER_SEC_LEVEL.USBFSH)
 *  0b11..Non-secure and Non-priviledge user access allowed.
 *  0b10..Non-secure and Privilege access allowed.
 *  0b01..Secure and Non-priviledge user access allowed.
 *  0b00..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_MASTER_SEC_ANTI_POL_REG_USBFSH(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_MASTER_SEC_ANTI_POL_REG_USBFSH_SHIFT)) & AHB_SECURE_CTRL_MASTER_SEC_ANTI_POL_REG_USBFSH_MASK)
#define AHB_SECURE_CTRL_MASTER_SEC_ANTI_POL_REG_SDMA1_MASK (0x3000000U)
#define AHB_SECURE_CTRL_MASTER_SEC_ANTI_POL_REG_SDMA1_SHIFT (24U)
/*! SDMA1 - System DMA 1 security level. Must be equal to NOT(MASTER_SEC_LEVEL.SDMA1)
 *  0b11..Non-secure and Non-priviledge user access allowed.
 *  0b10..Non-secure and Privilege access allowed.
 *  0b01..Secure and Non-priviledge user access allowed.
 *  0b00..Secure and Priviledge user access allowed.
 */
#define AHB_SECURE_CTRL_MASTER_SEC_ANTI_POL_REG_SDMA1(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_MASTER_SEC_ANTI_POL_REG_SDMA1_SHIFT)) & AHB_SECURE_CTRL_MASTER_SEC_ANTI_POL_REG_SDMA1_MASK)
#define AHB_SECURE_CTRL_MASTER_SEC_ANTI_POL_REG_MASTER_SEC_LEVEL_ANTIPOL_LOCK_MASK (0xC0000000U)
#define AHB_SECURE_CTRL_MASTER_SEC_ANTI_POL_REG_MASTER_SEC_LEVEL_ANTIPOL_LOCK_SHIFT (30U)
/*! MASTER_SEC_LEVEL_ANTIPOL_LOCK - MASTER_SEC_ANTI_POL_REG register write-lock.
 *  0b10..Writable.
 *  0b01..Restricted mode.
 */
#define AHB_SECURE_CTRL_MASTER_SEC_ANTI_POL_REG_MASTER_SEC_LEVEL_ANTIPOL_LOCK(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_MASTER_SEC_ANTI_POL_REG_MASTER_SEC_LEVEL_ANTIPOL_LOCK_SHIFT)) & AHB_SECURE_CTRL_MASTER_SEC_ANTI_POL_REG_MASTER_SEC_LEVEL_ANTIPOL_LOCK_MASK)
/*! @} */

/*! @name CPU0_LOCK_REG - Miscalleneous control signals for in Cortex M33 (CPU0) */
/*! @{ */
#define AHB_SECURE_CTRL_CPU0_LOCK_REG_LOCK_NS_VTOR_MASK (0x3U)
#define AHB_SECURE_CTRL_CPU0_LOCK_REG_LOCK_NS_VTOR_SHIFT (0U)
/*! LOCK_NS_VTOR - Cortex M33 (CPU0) VTOR_NS register write-lock.
 *  0b10..Writable.
 *  0b01..Restricted mode.
 */
#define AHB_SECURE_CTRL_CPU0_LOCK_REG_LOCK_NS_VTOR(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_CPU0_LOCK_REG_LOCK_NS_VTOR_SHIFT)) & AHB_SECURE_CTRL_CPU0_LOCK_REG_LOCK_NS_VTOR_MASK)
#define AHB_SECURE_CTRL_CPU0_LOCK_REG_LOCK_NS_MPU_MASK (0xCU)
#define AHB_SECURE_CTRL_CPU0_LOCK_REG_LOCK_NS_MPU_SHIFT (2U)
/*! LOCK_NS_MPU - Cortex M33 (CPU0) non-secure MPU register write-lock.
 *  0b10..Writable.
 *  0b01..Restricted mode.
 */
#define AHB_SECURE_CTRL_CPU0_LOCK_REG_LOCK_NS_MPU(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_CPU0_LOCK_REG_LOCK_NS_MPU_SHIFT)) & AHB_SECURE_CTRL_CPU0_LOCK_REG_LOCK_NS_MPU_MASK)
#define AHB_SECURE_CTRL_CPU0_LOCK_REG_LOCK_S_VTAIRCR_MASK (0x30U)
#define AHB_SECURE_CTRL_CPU0_LOCK_REG_LOCK_S_VTAIRCR_SHIFT (4U)
/*! LOCK_S_VTAIRCR - Cortex M33 (CPU0) VTOR_S, AIRCR.PRIS, IRCR.BFHFNMINS registers write-lock.
 *  0b10..Writable.
 *  0b01..Restricted mode.
 */
#define AHB_SECURE_CTRL_CPU0_LOCK_REG_LOCK_S_VTAIRCR(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_CPU0_LOCK_REG_LOCK_S_VTAIRCR_SHIFT)) & AHB_SECURE_CTRL_CPU0_LOCK_REG_LOCK_S_VTAIRCR_MASK)
#define AHB_SECURE_CTRL_CPU0_LOCK_REG_LOCK_S_MPU_MASK (0xC0U)
#define AHB_SECURE_CTRL_CPU0_LOCK_REG_LOCK_S_MPU_SHIFT (6U)
/*! LOCK_S_MPU - Cortex M33 (CPU0) Secure MPU registers write-lock.
 *  0b10..Writable.
 *  0b01..Restricted mode.
 */
#define AHB_SECURE_CTRL_CPU0_LOCK_REG_LOCK_S_MPU(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_CPU0_LOCK_REG_LOCK_S_MPU_SHIFT)) & AHB_SECURE_CTRL_CPU0_LOCK_REG_LOCK_S_MPU_MASK)
#define AHB_SECURE_CTRL_CPU0_LOCK_REG_LOCK_SAU_MASK (0x300U)
#define AHB_SECURE_CTRL_CPU0_LOCK_REG_LOCK_SAU_SHIFT (8U)
/*! LOCK_SAU - Cortex M33 (CPU0) SAU registers write-lock.
 *  0b10..Writable.
 *  0b01..Restricted mode.
 */
#define AHB_SECURE_CTRL_CPU0_LOCK_REG_LOCK_SAU(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_CPU0_LOCK_REG_LOCK_SAU_SHIFT)) & AHB_SECURE_CTRL_CPU0_LOCK_REG_LOCK_SAU_MASK)
#define AHB_SECURE_CTRL_CPU0_LOCK_REG_CPU0_LOCK_REG_LOCK_MASK (0xC0000000U)
#define AHB_SECURE_CTRL_CPU0_LOCK_REG_CPU0_LOCK_REG_LOCK_SHIFT (30U)
/*! CPU0_LOCK_REG_LOCK - CPU0_LOCK_REG write-lock.
 *  0b10..Writable.
 *  0b01..Restricted mode.
 */
#define AHB_SECURE_CTRL_CPU0_LOCK_REG_CPU0_LOCK_REG_LOCK(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_CPU0_LOCK_REG_CPU0_LOCK_REG_LOCK_SHIFT)) & AHB_SECURE_CTRL_CPU0_LOCK_REG_CPU0_LOCK_REG_LOCK_MASK)
/*! @} */

/*! @name CPU1_LOCK_REG - Miscalleneous control signals for in micro-Cortex M33 (CPU1) */
/*! @{ */
#define AHB_SECURE_CTRL_CPU1_LOCK_REG_LOCK_NS_VTOR_MASK (0x3U)
#define AHB_SECURE_CTRL_CPU1_LOCK_REG_LOCK_NS_VTOR_SHIFT (0U)
/*! LOCK_NS_VTOR - micro-Cortex M33 (CPU1) VTOR_NS register write-lock.
 *  0b10..Writable.
 *  0b01..Restricted mode.
 */
#define AHB_SECURE_CTRL_CPU1_LOCK_REG_LOCK_NS_VTOR(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_CPU1_LOCK_REG_LOCK_NS_VTOR_SHIFT)) & AHB_SECURE_CTRL_CPU1_LOCK_REG_LOCK_NS_VTOR_MASK)
#define AHB_SECURE_CTRL_CPU1_LOCK_REG_LOCK_NS_MPU_MASK (0xCU)
#define AHB_SECURE_CTRL_CPU1_LOCK_REG_LOCK_NS_MPU_SHIFT (2U)
/*! LOCK_NS_MPU - micro-Cortex M33 (CPU1) non-secure MPU register write-lock.
 *  0b10..Writable.
 *  0b01..Restricted mode.
 */
#define AHB_SECURE_CTRL_CPU1_LOCK_REG_LOCK_NS_MPU(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_CPU1_LOCK_REG_LOCK_NS_MPU_SHIFT)) & AHB_SECURE_CTRL_CPU1_LOCK_REG_LOCK_NS_MPU_MASK)
#define AHB_SECURE_CTRL_CPU1_LOCK_REG_CPU1_LOCK_REG_LOCK_MASK (0xC0000000U)
#define AHB_SECURE_CTRL_CPU1_LOCK_REG_CPU1_LOCK_REG_LOCK_SHIFT (30U)
/*! CPU1_LOCK_REG_LOCK - CPU1_LOCK_REG write-lock.
 *  0b10..Writable.
 *  0b01..Restricted mode.
 */
#define AHB_SECURE_CTRL_CPU1_LOCK_REG_CPU1_LOCK_REG_LOCK(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_CPU1_LOCK_REG_CPU1_LOCK_REG_LOCK_SHIFT)) & AHB_SECURE_CTRL_CPU1_LOCK_REG_CPU1_LOCK_REG_LOCK_MASK)
/*! @} */

/*! @name MISC_CTRL_DP_REG - secure control duplicate register */
/*! @{ */
#define AHB_SECURE_CTRL_MISC_CTRL_DP_REG_WRITE_LOCK_MASK (0x3U)
#define AHB_SECURE_CTRL_MISC_CTRL_DP_REG_WRITE_LOCK_SHIFT (0U)
/*! WRITE_LOCK - Write lock.
 *  0b10..Secure control registers can be written.
 *  0b01..Restricted mode.
 */
#define AHB_SECURE_CTRL_MISC_CTRL_DP_REG_WRITE_LOCK(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_MISC_CTRL_DP_REG_WRITE_LOCK_SHIFT)) & AHB_SECURE_CTRL_MISC_CTRL_DP_REG_WRITE_LOCK_MASK)
#define AHB_SECURE_CTRL_MISC_CTRL_DP_REG_ENABLE_SECURE_CHECKING_MASK (0xCU)
#define AHB_SECURE_CTRL_MISC_CTRL_DP_REG_ENABLE_SECURE_CHECKING_SHIFT (2U)
/*! ENABLE_SECURE_CHECKING - Enable secure check for AHB matrix.
 *  0b10..Disable check.
 *  0b01..Restricted mode.
 */
#define AHB_SECURE_CTRL_MISC_CTRL_DP_REG_ENABLE_SECURE_CHECKING(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_MISC_CTRL_DP_REG_ENABLE_SECURE_CHECKING_SHIFT)) & AHB_SECURE_CTRL_MISC_CTRL_DP_REG_ENABLE_SECURE_CHECKING_MASK)
#define AHB_SECURE_CTRL_MISC_CTRL_DP_REG_ENABLE_S_PRIV_CHECK_MASK (0x30U)
#define AHB_SECURE_CTRL_MISC_CTRL_DP_REG_ENABLE_S_PRIV_CHECK_SHIFT (4U)
/*! ENABLE_S_PRIV_CHECK - Enable secure privilege check for AHB matrix.
 *  0b10..Disable check.
 *  0b01..Restricted mode.
 */
#define AHB_SECURE_CTRL_MISC_CTRL_DP_REG_ENABLE_S_PRIV_CHECK(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_MISC_CTRL_DP_REG_ENABLE_S_PRIV_CHECK_SHIFT)) & AHB_SECURE_CTRL_MISC_CTRL_DP_REG_ENABLE_S_PRIV_CHECK_MASK)
#define AHB_SECURE_CTRL_MISC_CTRL_DP_REG_ENABLE_NS_PRIV_CHECK_MASK (0xC0U)
#define AHB_SECURE_CTRL_MISC_CTRL_DP_REG_ENABLE_NS_PRIV_CHECK_SHIFT (6U)
/*! ENABLE_NS_PRIV_CHECK - Enable non-secure privilege check for AHB matrix.
 *  0b10..Disable check.
 *  0b01..Restricted mode.
 */
#define AHB_SECURE_CTRL_MISC_CTRL_DP_REG_ENABLE_NS_PRIV_CHECK(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_MISC_CTRL_DP_REG_ENABLE_NS_PRIV_CHECK_SHIFT)) & AHB_SECURE_CTRL_MISC_CTRL_DP_REG_ENABLE_NS_PRIV_CHECK_MASK)
#define AHB_SECURE_CTRL_MISC_CTRL_DP_REG_DISABLE_VIOLATION_ABORT_MASK (0x300U)
#define AHB_SECURE_CTRL_MISC_CTRL_DP_REG_DISABLE_VIOLATION_ABORT_SHIFT (8U)
/*! DISABLE_VIOLATION_ABORT - Disable secure violation abort.
 *  0b10..Enable abort fort secure checker.
 *  0b01..Disable abort fort secure checker.
 */
#define AHB_SECURE_CTRL_MISC_CTRL_DP_REG_DISABLE_VIOLATION_ABORT(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_MISC_CTRL_DP_REG_DISABLE_VIOLATION_ABORT_SHIFT)) & AHB_SECURE_CTRL_MISC_CTRL_DP_REG_DISABLE_VIOLATION_ABORT_MASK)
#define AHB_SECURE_CTRL_MISC_CTRL_DP_REG_DISABLE_SIMPLE_MASTER_STRICT_MODE_MASK (0xC00U)
#define AHB_SECURE_CTRL_MISC_CTRL_DP_REG_DISABLE_SIMPLE_MASTER_STRICT_MODE_SHIFT (10U)
/*! DISABLE_SIMPLE_MASTER_STRICT_MODE - Disable simple master strict mode.
 *  0b10..Simple master in strict mode.
 *  0b01..Simple master in tier mode.
 */
#define AHB_SECURE_CTRL_MISC_CTRL_DP_REG_DISABLE_SIMPLE_MASTER_STRICT_MODE(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_MISC_CTRL_DP_REG_DISABLE_SIMPLE_MASTER_STRICT_MODE_SHIFT)) & AHB_SECURE_CTRL_MISC_CTRL_DP_REG_DISABLE_SIMPLE_MASTER_STRICT_MODE_MASK)
#define AHB_SECURE_CTRL_MISC_CTRL_DP_REG_DISABLE_SMART_MASTER_STRICT_MODE_MASK (0x3000U)
#define AHB_SECURE_CTRL_MISC_CTRL_DP_REG_DISABLE_SMART_MASTER_STRICT_MODE_SHIFT (12U)
/*! DISABLE_SMART_MASTER_STRICT_MODE - Disable smart master strict mode.
 *  0b10..Smart master in strict mode.
 *  0b01..Smart master in tier mode.
 */
#define AHB_SECURE_CTRL_MISC_CTRL_DP_REG_DISABLE_SMART_MASTER_STRICT_MODE(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_MISC_CTRL_DP_REG_DISABLE_SMART_MASTER_STRICT_MODE_SHIFT)) & AHB_SECURE_CTRL_MISC_CTRL_DP_REG_DISABLE_SMART_MASTER_STRICT_MODE_MASK)
#define AHB_SECURE_CTRL_MISC_CTRL_DP_REG_IDAU_ALL_NS_MASK (0xC000U)
#define AHB_SECURE_CTRL_MISC_CTRL_DP_REG_IDAU_ALL_NS_SHIFT (14U)
/*! IDAU_ALL_NS - Disable IDAU.
 *  0b10..IDAU is enabled.
 *  0b01..IDAU is disable.
 */
#define AHB_SECURE_CTRL_MISC_CTRL_DP_REG_IDAU_ALL_NS(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_MISC_CTRL_DP_REG_IDAU_ALL_NS_SHIFT)) & AHB_SECURE_CTRL_MISC_CTRL_DP_REG_IDAU_ALL_NS_MASK)
/*! @} */

/*! @name MISC_CTRL_REG - secure control register */
/*! @{ */
#define AHB_SECURE_CTRL_MISC_CTRL_REG_WRITE_LOCK_MASK (0x3U)
#define AHB_SECURE_CTRL_MISC_CTRL_REG_WRITE_LOCK_SHIFT (0U)
/*! WRITE_LOCK - Write lock.
 *  0b10..Secure control registers can be written.
 *  0b01..Restricted mode.
 */
#define AHB_SECURE_CTRL_MISC_CTRL_REG_WRITE_LOCK(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_MISC_CTRL_REG_WRITE_LOCK_SHIFT)) & AHB_SECURE_CTRL_MISC_CTRL_REG_WRITE_LOCK_MASK)
#define AHB_SECURE_CTRL_MISC_CTRL_REG_ENABLE_SECURE_CHECKING_MASK (0xCU)
#define AHB_SECURE_CTRL_MISC_CTRL_REG_ENABLE_SECURE_CHECKING_SHIFT (2U)
/*! ENABLE_SECURE_CHECKING - Enable secure check for AHB matrix.
 *  0b10..Disable check.
 *  0b01..Restricted mode.
 */
#define AHB_SECURE_CTRL_MISC_CTRL_REG_ENABLE_SECURE_CHECKING(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_MISC_CTRL_REG_ENABLE_SECURE_CHECKING_SHIFT)) & AHB_SECURE_CTRL_MISC_CTRL_REG_ENABLE_SECURE_CHECKING_MASK)
#define AHB_SECURE_CTRL_MISC_CTRL_REG_ENABLE_S_PRIV_CHECK_MASK (0x30U)
#define AHB_SECURE_CTRL_MISC_CTRL_REG_ENABLE_S_PRIV_CHECK_SHIFT (4U)
/*! ENABLE_S_PRIV_CHECK - Enable secure privilege check for AHB matrix.
 *  0b10..Disable check.
 *  0b01..Restricted mode.
 */
#define AHB_SECURE_CTRL_MISC_CTRL_REG_ENABLE_S_PRIV_CHECK(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_MISC_CTRL_REG_ENABLE_S_PRIV_CHECK_SHIFT)) & AHB_SECURE_CTRL_MISC_CTRL_REG_ENABLE_S_PRIV_CHECK_MASK)
#define AHB_SECURE_CTRL_MISC_CTRL_REG_ENABLE_NS_PRIV_CHECK_MASK (0xC0U)
#define AHB_SECURE_CTRL_MISC_CTRL_REG_ENABLE_NS_PRIV_CHECK_SHIFT (6U)
/*! ENABLE_NS_PRIV_CHECK - Enable non-secure privilege check for AHB matrix.
 *  0b10..Disable check.
 *  0b01..Restricted mode.
 */
#define AHB_SECURE_CTRL_MISC_CTRL_REG_ENABLE_NS_PRIV_CHECK(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_MISC_CTRL_REG_ENABLE_NS_PRIV_CHECK_SHIFT)) & AHB_SECURE_CTRL_MISC_CTRL_REG_ENABLE_NS_PRIV_CHECK_MASK)
#define AHB_SECURE_CTRL_MISC_CTRL_REG_DISABLE_VIOLATION_ABORT_MASK (0x300U)
#define AHB_SECURE_CTRL_MISC_CTRL_REG_DISABLE_VIOLATION_ABORT_SHIFT (8U)
/*! DISABLE_VIOLATION_ABORT - Disable secure violation abort.
 *  0b10..Enable abort fort secure checker.
 *  0b01..Disable abort fort secure checker.
 */
#define AHB_SECURE_CTRL_MISC_CTRL_REG_DISABLE_VIOLATION_ABORT(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_MISC_CTRL_REG_DISABLE_VIOLATION_ABORT_SHIFT)) & AHB_SECURE_CTRL_MISC_CTRL_REG_DISABLE_VIOLATION_ABORT_MASK)
#define AHB_SECURE_CTRL_MISC_CTRL_REG_DISABLE_SIMPLE_MASTER_STRICT_MODE_MASK (0xC00U)
#define AHB_SECURE_CTRL_MISC_CTRL_REG_DISABLE_SIMPLE_MASTER_STRICT_MODE_SHIFT (10U)
/*! DISABLE_SIMPLE_MASTER_STRICT_MODE - Disable simple master strict mode.
 *  0b10..Simple master in strict mode.
 *  0b01..Simple master in tier mode.
 */
#define AHB_SECURE_CTRL_MISC_CTRL_REG_DISABLE_SIMPLE_MASTER_STRICT_MODE(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_MISC_CTRL_REG_DISABLE_SIMPLE_MASTER_STRICT_MODE_SHIFT)) & AHB_SECURE_CTRL_MISC_CTRL_REG_DISABLE_SIMPLE_MASTER_STRICT_MODE_MASK)
#define AHB_SECURE_CTRL_MISC_CTRL_REG_DISABLE_SMART_MASTER_STRICT_MODE_MASK (0x3000U)
#define AHB_SECURE_CTRL_MISC_CTRL_REG_DISABLE_SMART_MASTER_STRICT_MODE_SHIFT (12U)
/*! DISABLE_SMART_MASTER_STRICT_MODE - Disable smart master strict mode.
 *  0b10..Smart master in strict mode.
 *  0b01..Smart master in tier mode.
 */
#define AHB_SECURE_CTRL_MISC_CTRL_REG_DISABLE_SMART_MASTER_STRICT_MODE(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_MISC_CTRL_REG_DISABLE_SMART_MASTER_STRICT_MODE_SHIFT)) & AHB_SECURE_CTRL_MISC_CTRL_REG_DISABLE_SMART_MASTER_STRICT_MODE_MASK)
#define AHB_SECURE_CTRL_MISC_CTRL_REG_IDAU_ALL_NS_MASK (0xC000U)
#define AHB_SECURE_CTRL_MISC_CTRL_REG_IDAU_ALL_NS_SHIFT (14U)
/*! IDAU_ALL_NS - Disable IDAU.
 *  0b10..IDAU is enabled.
 *  0b01..IDAU is disable.
 */
#define AHB_SECURE_CTRL_MISC_CTRL_REG_IDAU_ALL_NS(x) (((uint32_t)(((uint32_t)(x)) << AHB_SECURE_CTRL_MISC_CTRL_REG_IDAU_ALL_NS_SHIFT)) & AHB_SECURE_CTRL_MISC_CTRL_REG_IDAU_ALL_NS_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group AHB_SECURE_CTRL_Register_Masks */


/* AHB_SECURE_CTRL - Peripheral instance base addresses */
#if (__ARM_FEATURE_CMSE & 0x2)
  /** Peripheral AHB_SECURE_CTRL base address */
  #define AHB_SECURE_CTRL_BASE                     (0x500AC000u)
  /** Peripheral AHB_SECURE_CTRL base address */
  #define AHB_SECURE_CTRL_BASE_NS                  (0x400AC000u)
  /** Peripheral AHB_SECURE_CTRL base pointer */
  #define AHB_SECURE_CTRL                          ((AHB_SECURE_CTRL_Type *)AHB_SECURE_CTRL_BASE)
  /** Peripheral AHB_SECURE_CTRL base pointer */
  #define AHB_SECURE_CTRL_NS                       ((AHB_SECURE_CTRL_Type *)AHB_SECURE_CTRL_BASE_NS)
  /** Array initializer of AHB_SECURE_CTRL peripheral base addresses */
  #define AHB_SECURE_CTRL_BASE_ADDRS               { AHB_SECURE_CTRL_BASE }
  /** Array initializer of AHB_SECURE_CTRL peripheral base pointers */
  #define AHB_SECURE_CTRL_BASE_PTRS                { AHB_SECURE_CTRL }
  /** Array initializer of AHB_SECURE_CTRL peripheral base addresses */
  #define AHB_SECURE_CTRL_BASE_ADDRS_NS            { AHB_SECURE_CTRL_BASE_NS }
  /** Array initializer of AHB_SECURE_CTRL peripheral base pointers */
  #define AHB_SECURE_CTRL_BASE_PTRS_NS             { AHB_SECURE_CTRL_NS }
#else
  /** Peripheral AHB_SECURE_CTRL base address */
  #define AHB_SECURE_CTRL_BASE                     (0x400AC000u)
  /** Peripheral AHB_SECURE_CTRL base pointer */
  #define AHB_SECURE_CTRL                          ((AHB_SECURE_CTRL_Type *)AHB_SECURE_CTRL_BASE)
  /** Array initializer of AHB_SECURE_CTRL peripheral base addresses */
  #define AHB_SECURE_CTRL_BASE_ADDRS               { AHB_SECURE_CTRL_BASE }
  /** Array initializer of AHB_SECURE_CTRL peripheral base pointers */
  #define AHB_SECURE_CTRL_BASE_PTRS                { AHB_SECURE_CTRL }
#endif

/*!
 * @}
 */ /* end of group AHB_SECURE_CTRL_Peripheral_Access_Layer */


/* ----------------------------------------------------------------------------
   -- ANACTRL Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup ANACTRL_Peripheral_Access_Layer ANACTRL Peripheral Access Layer
 * @{
 */

/** ANACTRL - Register Layout Typedef */
typedef struct {
       uint8_t RESERVED_0[4];
  __I  uint32_t ANALOG_CTRL_STATUS;                /**< Analog Macroblock Identity registers, Flash Status registers, offset: 0x4 */
       uint8_t RESERVED_1[4];
  __IO uint32_t FREQ_ME_CTRL;                      /**< Frequency Measure function control register, offset: 0xC */
  __IO uint32_t FRO192M_CTRL;                      /**< 192MHz Free Running OScillator (FRO) Control register, offset: 0x10 */
  __I  uint32_t FRO192M_STATUS;                    /**< 192MHz Free Running OScillator (FRO) Status register, offset: 0x14 */
       uint8_t RESERVED_2[8];
  __IO uint32_t XO32M_CTRL;                        /**< High speed Crystal Oscillator Control register, offset: 0x20 */
  __I  uint32_t XO32M_STATUS;                      /**< High speed Crystal Oscillator Status register, offset: 0x24 */
       uint8_t RESERVED_3[8];
  __IO uint32_t BOD_DCDC_INT_CTRL;                 /**< Brown Out Detectors (BoDs) & DCDC interrupts generation control register, offset: 0x30 */
  __I  uint32_t BOD_DCDC_INT_STATUS;               /**< BoDs & DCDC interrupts status register, offset: 0x34 */
       uint8_t RESERVED_4[8];
  __IO uint32_t RINGO0_CTRL;                       /**< First Ring Oscillator module control register., offset: 0x40 */
  __IO uint32_t RINGO1_CTRL;                       /**< Second Ring Oscillator module control register., offset: 0x44 */
  __IO uint32_t RINGO2_CTRL;                       /**< Third Ring Oscillator module control register., offset: 0x48 */
       uint8_t RESERVED_5[180];
  __IO uint32_t USBHS_PHY_CTRL;                    /**< USB High Speed Phy Control, offset: 0x100 */
} ANACTRL_Type;

/* ----------------------------------------------------------------------------
   -- ANACTRL Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup ANACTRL_Register_Masks ANACTRL Register Masks
 * @{
 */

/*! @name ANALOG_CTRL_STATUS - Analog Macroblock Identity registers, Flash Status registers */
/*! @{ */
#define ANACTRL_ANALOG_CTRL_STATUS_FLASH_PWRDWN_MASK (0x1000U)
#define ANACTRL_ANALOG_CTRL_STATUS_FLASH_PWRDWN_SHIFT (12U)
/*! FLASH_PWRDWN - Flash Power Down status.
 *  0b0..Flash is not in power down mode.
 *  0b1..Flash is in power down mode.
 */
#define ANACTRL_ANALOG_CTRL_STATUS_FLASH_PWRDWN(x) (((uint32_t)(((uint32_t)(x)) << ANACTRL_ANALOG_CTRL_STATUS_FLASH_PWRDWN_SHIFT)) & ANACTRL_ANALOG_CTRL_STATUS_FLASH_PWRDWN_MASK)
#define ANACTRL_ANALOG_CTRL_STATUS_FLASH_INIT_ERROR_MASK (0x2000U)
#define ANACTRL_ANALOG_CTRL_STATUS_FLASH_INIT_ERROR_SHIFT (13U)
/*! FLASH_INIT_ERROR - Flash initialization error status.
 *  0b0..No error.
 *  0b1..At least one error occured during flash initialization..
 */
#define ANACTRL_ANALOG_CTRL_STATUS_FLASH_INIT_ERROR(x) (((uint32_t)(((uint32_t)(x)) << ANACTRL_ANALOG_CTRL_STATUS_FLASH_INIT_ERROR_SHIFT)) & ANACTRL_ANALOG_CTRL_STATUS_FLASH_INIT_ERROR_MASK)
/*! @} */

/*! @name FREQ_ME_CTRL - Frequency Measure function control register */
/*! @{ */
#define ANACTRL_FREQ_ME_CTRL_CAPVAL_SCALE_MASK   (0x7FFFFFFFU)
#define ANACTRL_FREQ_ME_CTRL_CAPVAL_SCALE_SHIFT  (0U)
/*! CAPVAL_SCALE - Frequency measure result /Frequency measur scale
 */
#define ANACTRL_FREQ_ME_CTRL_CAPVAL_SCALE(x)     (((uint32_t)(((uint32_t)(x)) << ANACTRL_FREQ_ME_CTRL_CAPVAL_SCALE_SHIFT)) & ANACTRL_FREQ_ME_CTRL_CAPVAL_SCALE_MASK)
#define ANACTRL_FREQ_ME_CTRL_PROG_MASK           (0x80000000U)
#define ANACTRL_FREQ_ME_CTRL_PROG_SHIFT          (31U)
/*! PROG - Set this bit to one to initiate a frequency measurement cycle. Hardware clears this bit
 *    when the measurement cycle has completed and there is valid capture data in the CAPVAL field
 *    (bits 30:0).
 */
#define ANACTRL_FREQ_ME_CTRL_PROG(x)             (((uint32_t)(((uint32_t)(x)) << ANACTRL_FREQ_ME_CTRL_PROG_SHIFT)) & ANACTRL_FREQ_ME_CTRL_PROG_MASK)
/*! @} */

/*! @name FRO192M_CTRL - 192MHz Free Running OScillator (FRO) Control register */
/*! @{ */
#define ANACTRL_FRO192M_CTRL_ENA_12MHZCLK_MASK   (0x4000U)
#define ANACTRL_FRO192M_CTRL_ENA_12MHZCLK_SHIFT  (14U)
/*! ENA_12MHZCLK - 12 MHz clock control.
 *  0b0..12 MHz clock is disabled.
 *  0b1..12 MHz clock is enabled.
 */
#define ANACTRL_FRO192M_CTRL_ENA_12MHZCLK(x)     (((uint32_t)(((uint32_t)(x)) << ANACTRL_FRO192M_CTRL_ENA_12MHZCLK_SHIFT)) & ANACTRL_FRO192M_CTRL_ENA_12MHZCLK_MASK)
#define ANACTRL_FRO192M_CTRL_ENA_48MHZCLK_MASK   (0x8000U)
#define ANACTRL_FRO192M_CTRL_ENA_48MHZCLK_SHIFT  (15U)
/*! ENA_48MHZCLK - 48 MHz clock control.
 *  0b0..Reserved.
 *  0b1..48 MHz clock is enabled.
 */
#define ANACTRL_FRO192M_CTRL_ENA_48MHZCLK(x)     (((uint32_t)(((uint32_t)(x)) << ANACTRL_FRO192M_CTRL_ENA_48MHZCLK_SHIFT)) & ANACTRL_FRO192M_CTRL_ENA_48MHZCLK_MASK)
#define ANACTRL_FRO192M_CTRL_DAC_TRIM_MASK       (0xFF0000U)
#define ANACTRL_FRO192M_CTRL_DAC_TRIM_SHIFT      (16U)
/*! DAC_TRIM - Frequency trim.
 */
#define ANACTRL_FRO192M_CTRL_DAC_TRIM(x)         (((uint32_t)(((uint32_t)(x)) << ANACTRL_FRO192M_CTRL_DAC_TRIM_SHIFT)) & ANACTRL_FRO192M_CTRL_DAC_TRIM_MASK)
#define ANACTRL_FRO192M_CTRL_USBCLKADJ_MASK      (0x1000000U)
#define ANACTRL_FRO192M_CTRL_USBCLKADJ_SHIFT     (24U)
/*! USBCLKADJ - If this bit is set and the USB peripheral is enabled into full speed device mode,
 *    the USB block will provide FRO clock adjustments to lock it to the host clock using the SOF
 *    packets.
 */
#define ANACTRL_FRO192M_CTRL_USBCLKADJ(x)        (((uint32_t)(((uint32_t)(x)) << ANACTRL_FRO192M_CTRL_USBCLKADJ_SHIFT)) & ANACTRL_FRO192M_CTRL_USBCLKADJ_MASK)
#define ANACTRL_FRO192M_CTRL_USBMODCHG_MASK      (0x2000000U)
#define ANACTRL_FRO192M_CTRL_USBMODCHG_SHIFT     (25U)
/*! USBMODCHG - If it reads as 1 when reading the DAC_TRIM field and USBCLKADJ=1, it should be re-read until it is 0.
 */
#define ANACTRL_FRO192M_CTRL_USBMODCHG(x)        (((uint32_t)(((uint32_t)(x)) << ANACTRL_FRO192M_CTRL_USBMODCHG_SHIFT)) & ANACTRL_FRO192M_CTRL_USBMODCHG_MASK)
#define ANACTRL_FRO192M_CTRL_ENA_96MHZCLK_MASK   (0x40000000U)
#define ANACTRL_FRO192M_CTRL_ENA_96MHZCLK_SHIFT  (30U)
/*! ENA_96MHZCLK - 96 MHz clock control.
 *  0b0..96 MHz clock is disabled.
 *  0b1..96 MHz clock is enabled.
 */
#define ANACTRL_FRO192M_CTRL_ENA_96MHZCLK(x)     (((uint32_t)(((uint32_t)(x)) << ANACTRL_FRO192M_CTRL_ENA_96MHZCLK_SHIFT)) & ANACTRL_FRO192M_CTRL_ENA_96MHZCLK_MASK)
/*! @} */

/*! @name FRO192M_STATUS - 192MHz Free Running OScillator (FRO) Status register */
/*! @{ */
#define ANACTRL_FRO192M_STATUS_CLK_VALID_MASK    (0x1U)
#define ANACTRL_FRO192M_STATUS_CLK_VALID_SHIFT   (0U)
/*! CLK_VALID - Output clock valid signal. Indicates that CCO clock has settled.
 *  0b0..No output clock present (None of 12 MHz, 48 MHz or 96 MHz clock is available).
 *  0b1..Clock is present (12 MHz, 48 MHz or 96 MHz can be output if they are enable respectively by
 *       FRO192M_CTRL.ENA_12MHZCLK/ENA_48MHZCLK/ENA_96MHZCLK).
 */
#define ANACTRL_FRO192M_STATUS_CLK_VALID(x)      (((uint32_t)(((uint32_t)(x)) << ANACTRL_FRO192M_STATUS_CLK_VALID_SHIFT)) & ANACTRL_FRO192M_STATUS_CLK_VALID_MASK)
#define ANACTRL_FRO192M_STATUS_ATB_VCTRL_MASK    (0x2U)
#define ANACTRL_FRO192M_STATUS_ATB_VCTRL_SHIFT   (1U)
/*! ATB_VCTRL - CCO threshold voltage detector output (signal vcco_ok). Once the CCO voltage crosses
 *    the threshold voltage of a SLVT transistor, this output signal will go high. It is also
 *    possible to observe the clk_valid signal.
 */
#define ANACTRL_FRO192M_STATUS_ATB_VCTRL(x)      (((uint32_t)(((uint32_t)(x)) << ANACTRL_FRO192M_STATUS_ATB_VCTRL_SHIFT)) & ANACTRL_FRO192M_STATUS_ATB_VCTRL_MASK)
/*! @} */

/*! @name XO32M_CTRL - High speed Crystal Oscillator Control register */
/*! @{ */
#define ANACTRL_XO32M_CTRL_ACBUF_PASS_ENABLE_MASK (0x400000U)
#define ANACTRL_XO32M_CTRL_ACBUF_PASS_ENABLE_SHIFT (22U)
/*! ACBUF_PASS_ENABLE - Bypass enable of XO AC buffer enable in pll and top level.
 *  0b0..XO AC buffer bypass is disabled.
 *  0b1..XO AC buffer bypass is enabled.
 */
#define ANACTRL_XO32M_CTRL_ACBUF_PASS_ENABLE(x)  (((uint32_t)(((uint32_t)(x)) << ANACTRL_XO32M_CTRL_ACBUF_PASS_ENABLE_SHIFT)) & ANACTRL_XO32M_CTRL_ACBUF_PASS_ENABLE_MASK)
#define ANACTRL_XO32M_CTRL_ENABLE_PLL_USB_OUT_MASK (0x800000U)
#define ANACTRL_XO32M_CTRL_ENABLE_PLL_USB_OUT_SHIFT (23U)
/*! ENABLE_PLL_USB_OUT - Enable High speed Crystal oscillator output to USB HS PLL.
 *  0b0..High speed Crystal oscillator output to USB HS PLL is disabled.
 *  0b1..High speed Crystal oscillator output to USB HS PLL is enabled.
 */
#define ANACTRL_XO32M_CTRL_ENABLE_PLL_USB_OUT(x) (((uint32_t)(((uint32_t)(x)) << ANACTRL_XO32M_CTRL_ENABLE_PLL_USB_OUT_SHIFT)) & ANACTRL_XO32M_CTRL_ENABLE_PLL_USB_OUT_MASK)
#define ANACTRL_XO32M_CTRL_ENABLE_SYSTEM_CLK_OUT_MASK (0x1000000U)
#define ANACTRL_XO32M_CTRL_ENABLE_SYSTEM_CLK_OUT_SHIFT (24U)
/*! ENABLE_SYSTEM_CLK_OUT - Enable XO 32 MHz output to CPU system.
 *  0b0..High speed Crystal oscillator output to CPU system is disabled.
 *  0b1..High speed Crystal oscillator output to CPU system is enabled.
 */
#define ANACTRL_XO32M_CTRL_ENABLE_SYSTEM_CLK_OUT(x) (((uint32_t)(((uint32_t)(x)) << ANACTRL_XO32M_CTRL_ENABLE_SYSTEM_CLK_OUT_SHIFT)) & ANACTRL_XO32M_CTRL_ENABLE_SYSTEM_CLK_OUT_MASK)
/*! @} */

/*! @name XO32M_STATUS - High speed Crystal Oscillator Status register */
/*! @{ */
#define ANACTRL_XO32M_STATUS_XO_READY_MASK       (0x1U)
#define ANACTRL_XO32M_STATUS_XO_READY_SHIFT      (0U)
/*! XO_READY - Indicates XO out frequency statibilty.
 *  0b0..XO output frequency is not yet stable.
 *  0b1..XO output frequency is stable.
 */
#define ANACTRL_XO32M_STATUS_XO_READY(x)         (((uint32_t)(((uint32_t)(x)) << ANACTRL_XO32M_STATUS_XO_READY_SHIFT)) & ANACTRL_XO32M_STATUS_XO_READY_MASK)
/*! @} */

/*! @name BOD_DCDC_INT_CTRL - Brown Out Detectors (BoDs) & DCDC interrupts generation control register */
/*! @{ */
#define ANACTRL_BOD_DCDC_INT_CTRL_BODVBAT_INT_ENABLE_MASK (0x1U)
#define ANACTRL_BOD_DCDC_INT_CTRL_BODVBAT_INT_ENABLE_SHIFT (0U)
/*! BODVBAT_INT_ENABLE - BOD VBAT interrupt control.
 *  0b0..BOD VBAT interrupt is disabled.
 *  0b1..BOD VBAT interrupt is enabled.
 */
#define ANACTRL_BOD_DCDC_INT_CTRL_BODVBAT_INT_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << ANACTRL_BOD_DCDC_INT_CTRL_BODVBAT_INT_ENABLE_SHIFT)) & ANACTRL_BOD_DCDC_INT_CTRL_BODVBAT_INT_ENABLE_MASK)
#define ANACTRL_BOD_DCDC_INT_CTRL_BODVBAT_INT_CLEAR_MASK (0x2U)
#define ANACTRL_BOD_DCDC_INT_CTRL_BODVBAT_INT_CLEAR_SHIFT (1U)
/*! BODVBAT_INT_CLEAR - BOD VBAT interrupt clear.1: Clear the interrupt. Self-cleared bit.
 */
#define ANACTRL_BOD_DCDC_INT_CTRL_BODVBAT_INT_CLEAR(x) (((uint32_t)(((uint32_t)(x)) << ANACTRL_BOD_DCDC_INT_CTRL_BODVBAT_INT_CLEAR_SHIFT)) & ANACTRL_BOD_DCDC_INT_CTRL_BODVBAT_INT_CLEAR_MASK)
#define ANACTRL_BOD_DCDC_INT_CTRL_BODCORE_INT_ENABLE_MASK (0x4U)
#define ANACTRL_BOD_DCDC_INT_CTRL_BODCORE_INT_ENABLE_SHIFT (2U)
/*! BODCORE_INT_ENABLE - BOD CORE interrupt control.
 *  0b0..BOD CORE interrupt is disabled.
 *  0b1..BOD CORE interrupt is enabled.
 */
#define ANACTRL_BOD_DCDC_INT_CTRL_BODCORE_INT_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << ANACTRL_BOD_DCDC_INT_CTRL_BODCORE_INT_ENABLE_SHIFT)) & ANACTRL_BOD_DCDC_INT_CTRL_BODCORE_INT_ENABLE_MASK)
#define ANACTRL_BOD_DCDC_INT_CTRL_BODCORE_INT_CLEAR_MASK (0x8U)
#define ANACTRL_BOD_DCDC_INT_CTRL_BODCORE_INT_CLEAR_SHIFT (3U)
/*! BODCORE_INT_CLEAR - BOD CORE interrupt clear.1: Clear the interrupt. Self-cleared bit.
 */
#define ANACTRL_BOD_DCDC_INT_CTRL_BODCORE_INT_CLEAR(x) (((uint32_t)(((uint32_t)(x)) << ANACTRL_BOD_DCDC_INT_CTRL_BODCORE_INT_CLEAR_SHIFT)) & ANACTRL_BOD_DCDC_INT_CTRL_BODCORE_INT_CLEAR_MASK)
#define ANACTRL_BOD_DCDC_INT_CTRL_DCDC_INT_ENABLE_MASK (0x10U)
#define ANACTRL_BOD_DCDC_INT_CTRL_DCDC_INT_ENABLE_SHIFT (4U)
/*! DCDC_INT_ENABLE - DCDC interrupt control.
 *  0b0..DCDC interrupt is disabled.
 *  0b1..DCDC interrupt is enabled.
 */
#define ANACTRL_BOD_DCDC_INT_CTRL_DCDC_INT_ENABLE(x) (((uint32_t)(((uint32_t)(x)) << ANACTRL_BOD_DCDC_INT_CTRL_DCDC_INT_ENABLE_SHIFT)) & ANACTRL_BOD_DCDC_INT_CTRL_DCDC_INT_ENABLE_MASK)
#define ANACTRL_BOD_DCDC_INT_CTRL_DCDC_INT_CLEAR_MASK (0x20U)
#define ANACTRL_BOD_DCDC_INT_CTRL_DCDC_INT_CLEAR_SHIFT (5U)
/*! DCDC_INT_CLEAR - DCDC interrupt clear.1: Clear the interrupt. Self-cleared bit.
 */
#define ANACTRL_BOD_DCDC_INT_CTRL_DCDC_INT_CLEAR(x) (((uint32_t)(((uint32_t)(x)) << ANACTRL_BOD_DCDC_INT_CTRL_DCDC_INT_CLEAR_SHIFT)) & ANACTRL_BOD_DCDC_INT_CTRL_DCDC_INT_CLEAR_MASK)
/*! @} */

/*! @name BOD_DCDC_INT_STATUS - BoDs & DCDC interrupts status register */
/*! @{ */
#define ANACTRL_BOD_DCDC_INT_STATUS_BODVBAT_STATUS_MASK (0x1U)
#define ANACTRL_BOD_DCDC_INT_STATUS_BODVBAT_STATUS_SHIFT (0U)
/*! BODVBAT_STATUS - BOD VBAT Interrupt status before Interrupt Enable.
 *  0b0..No interrupt pending..
 *  0b1..Interrupt pending..
 */
#define ANACTRL_BOD_DCDC_INT_STATUS_BODVBAT_STATUS(x) (((uint32_t)(((uint32_t)(x)) << ANACTRL_BOD_DCDC_INT_STATUS_BODVBAT_STATUS_SHIFT)) & ANACTRL_BOD_DCDC_INT_STATUS_BODVBAT_STATUS_MASK)
#define ANACTRL_BOD_DCDC_INT_STATUS_BODVBAT_INT_STATUS_MASK (0x2U)
#define ANACTRL_BOD_DCDC_INT_STATUS_BODVBAT_INT_STATUS_SHIFT (1U)
/*! BODVBAT_INT_STATUS - BOD VBAT Interrupt status after Interrupt Enable.
 *  0b0..No interrupt pending..
 *  0b1..Interrupt pending..
 */
#define ANACTRL_BOD_DCDC_INT_STATUS_BODVBAT_INT_STATUS(x) (((uint32_t)(((uint32_t)(x)) << ANACTRL_BOD_DCDC_INT_STATUS_BODVBAT_INT_STATUS_SHIFT)) & ANACTRL_BOD_DCDC_INT_STATUS_BODVBAT_INT_STATUS_MASK)
#define ANACTRL_BOD_DCDC_INT_STATUS_BODVBAT_VAL_MASK (0x4U)
#define ANACTRL_BOD_DCDC_INT_STATUS_BODVBAT_VAL_SHIFT (2U)
/*! BODVBAT_VAL - Current value of BOD VBAT power status output.
 *  0b0..VBAT voltage level is below the threshold.
 *  0b1..VBAT voltage level is above the threshold.
 */
#define ANACTRL_BOD_DCDC_INT_STATUS_BODVBAT_VAL(x) (((uint32_t)(((uint32_t)(x)) << ANACTRL_BOD_DCDC_INT_STATUS_BODVBAT_VAL_SHIFT)) & ANACTRL_BOD_DCDC_INT_STATUS_BODVBAT_VAL_MASK)
#define ANACTRL_BOD_DCDC_INT_STATUS_BODCORE_STATUS_MASK (0x8U)
#define ANACTRL_BOD_DCDC_INT_STATUS_BODCORE_STATUS_SHIFT (3U)
/*! BODCORE_STATUS - BOD CORE Interrupt status before Interrupt Enable.
 *  0b0..No interrupt pending..
 *  0b1..Interrupt pending..
 */
#define ANACTRL_BOD_DCDC_INT_STATUS_BODCORE_STATUS(x) (((uint32_t)(((uint32_t)(x)) << ANACTRL_BOD_DCDC_INT_STATUS_BODCORE_STATUS_SHIFT)) & ANACTRL_BOD_DCDC_INT_STATUS_BODCORE_STATUS_MASK)
#define ANACTRL_BOD_DCDC_INT_STATUS_BODCORE_INT_STATUS_MASK (0x10U)
#define ANACTRL_BOD_DCDC_INT_STATUS_BODCORE_INT_STATUS_SHIFT (4U)
/*! BODCORE_INT_STATUS - BOD CORE Interrupt status after Interrupt Enable.
 *  0b0..No interrupt pending..
 *  0b1..Interrupt pending..
 */
#define ANACTRL_BOD_DCDC_INT_STATUS_BODCORE_INT_STATUS(x) (((uint32_t)(((uint32_t)(x)) << ANACTRL_BOD_DCDC_INT_STATUS_BODCORE_INT_STATUS_SHIFT)) & ANACTRL_BOD_DCDC_INT_STATUS_BODCORE_INT_STATUS_MASK)
#define ANACTRL_BOD_DCDC_INT_STATUS_BODCORE_VAL_MASK (0x20U)
#define ANACTRL_BOD_DCDC_INT_STATUS_BODCORE_VAL_SHIFT (5U)
/*! BODCORE_VAL - Current value of BOD CORE power status output.
 *  0b0..CORE voltage level is below the threshold.
 *  0b1..CORE voltage level is above the threshold.
 */
#define ANACTRL_BOD_DCDC_INT_STATUS_BODCORE_VAL(x) (((uint32_t)(((uint32_t)(x)) << ANACTRL_BOD_DCDC_INT_STATUS_BODCORE_VAL_SHIFT)) & ANACTRL_BOD_DCDC_INT_STATUS_BODCORE_VAL_MASK)
#define ANACTRL_BOD_DCDC_INT_STATUS_DCDC_STATUS_MASK (0x40U)
#define ANACTRL_BOD_DCDC_INT_STATUS_DCDC_STATUS_SHIFT (6U)
/*! DCDC_STATUS - DCDC Interrupt status before Interrupt Enable.
 *  0b0..No interrupt pending..
 *  0b1..Interrupt pending..
 */
#define ANACTRL_BOD_DCDC_INT_STATUS_DCDC_STATUS(x) (((uint32_t)(((uint32_t)(x)) << ANACTRL_BOD_DCDC_INT_STATUS_DCDC_STATUS_SHIFT)) & ANACTRL_BOD_DCDC_INT_STATUS_DCDC_STATUS_MASK)
#define ANACTRL_BOD_DCDC_INT_STATUS_DCDC_INT_STATUS_MASK (0x80U)
#define ANACTRL_BOD_DCDC_INT_STATUS_DCDC_INT_STATUS_SHIFT (7U)
/*! DCDC_INT_STATUS - DCDC Interrupt status after Interrupt Enable.
 *  0b0..No interrupt pending..
 *  0b1..Interrupt pending..
 */
#define ANACTRL_BOD_DCDC_INT_STATUS_DCDC_INT_STATUS(x) (((uint32_t)(((uint32_t)(x)) << ANACTRL_BOD_DCDC_INT_STATUS_DCDC_INT_STATUS_SHIFT)) & ANACTRL_BOD_DCDC_INT_STATUS_DCDC_INT_STATUS_MASK)
#define ANACTRL_BOD_DCDC_INT_STATUS_DCDC_VAL_MASK (0x100U)
#define ANACTRL_BOD_DCDC_INT_STATUS_DCDC_VAL_SHIFT (8U)
/*! DCDC_VAL - Current value of DCDC power status output.
 *  0b0..DCDC output Voltage is below the targeted regulation level.
 *  0b1..DCDC output Voltage is above the targeted regulation level.
 */
#define ANACTRL_BOD_DCDC_INT_STATUS_DCDC_VAL(x)  (((uint32_t)(((uint32_t)(x)) << ANACTRL_BOD_DCDC_INT_STATUS_DCDC_VAL_SHIFT)) & ANACTRL_BOD_DCDC_INT_STATUS_DCDC_VAL_MASK)
/*! @} */

/*! @name RINGO0_CTRL - First Ring Oscillator module control register. */
/*! @{ */
#define ANACTRL_RINGO0_CTRL_SL_MASK              (0x1U)
#define ANACTRL_RINGO0_CTRL_SL_SHIFT             (0U)
/*! SL - Select short or long ringo (for all ringos types).
 *  0b0..Select short ringo (few elements).
 *  0b1..Select long ringo (many elements).
 */
#define ANACTRL_RINGO0_CTRL_SL(x)                (((uint32_t)(((uint32_t)(x)) << ANACTRL_RINGO0_CTRL_SL_SHIFT)) & ANACTRL_RINGO0_CTRL_SL_MASK)
#define ANACTRL_RINGO0_CTRL_FS_MASK              (0x2U)
#define ANACTRL_RINGO0_CTRL_FS_SHIFT             (1U)
/*! FS - Ringo frequency output divider.
 *  0b0..High frequency output (frequency lower than 100 MHz).
 *  0b1..Low frequency output (frequency lower than 10 MHz).
 */
#define ANACTRL_RINGO0_CTRL_FS(x)                (((uint32_t)(((uint32_t)(x)) << ANACTRL_RINGO0_CTRL_FS_SHIFT)) & ANACTRL_RINGO0_CTRL_FS_MASK)
#define ANACTRL_RINGO0_CTRL_SWN_SWP_MASK         (0xCU)
#define ANACTRL_RINGO0_CTRL_SWN_SWP_SHIFT        (2U)
/*! SWN_SWP - PN-Ringos (P-Transistor and N-Transistor processing) control.
 *  0b00..Normal mode.
 *  0b01..P-Monitor mode. Measure with weak P transistor.
 *  0b10..P-Monitor mode. Measure with weak N transistor.
 *  0b11..Don't use.
 */
#define ANACTRL_RINGO0_CTRL_SWN_SWP(x)           (((uint32_t)(((uint32_t)(x)) << ANACTRL_RINGO0_CTRL_SWN_SWP_SHIFT)) & ANACTRL_RINGO0_CTRL_SWN_SWP_MASK)
#define ANACTRL_RINGO0_CTRL_PD_MASK              (0x10U)
#define ANACTRL_RINGO0_CTRL_PD_SHIFT             (4U)
/*! PD - Ringo module Power control.
 *  0b0..The Ringo module is enabled.
 *  0b1..The Ringo module is disabled.
 */
#define ANACTRL_RINGO0_CTRL_PD(x)                (((uint32_t)(((uint32_t)(x)) << ANACTRL_RINGO0_CTRL_PD_SHIFT)) & ANACTRL_RINGO0_CTRL_PD_MASK)
#define ANACTRL_RINGO0_CTRL_E_ND0_MASK           (0x20U)
#define ANACTRL_RINGO0_CTRL_E_ND0_SHIFT          (5U)
/*! E_ND0 - First NAND2-based ringo control.
 *  0b0..First NAND2-based ringo is disabled.
 *  0b1..First NAND2-based ringo is enabled.
 */
#define ANACTRL_RINGO0_CTRL_E_ND0(x)             (((uint32_t)(((uint32_t)(x)) << ANACTRL_RINGO0_CTRL_E_ND0_SHIFT)) & ANACTRL_RINGO0_CTRL_E_ND0_MASK)
#define ANACTRL_RINGO0_CTRL_E_ND1_MASK           (0x40U)
#define ANACTRL_RINGO0_CTRL_E_ND1_SHIFT          (6U)
/*! E_ND1 - Second NAND2-based ringo control.
 *  0b0..Second NAND2-based ringo is disabled.
 *  0b1..Second NAND2-based ringo is enabled.
 */
#define ANACTRL_RINGO0_CTRL_E_ND1(x)             (((uint32_t)(((uint32_t)(x)) << ANACTRL_RINGO0_CTRL_E_ND1_SHIFT)) & ANACTRL_RINGO0_CTRL_E_ND1_MASK)
#define ANACTRL_RINGO0_CTRL_E_NR0_MASK           (0x80U)
#define ANACTRL_RINGO0_CTRL_E_NR0_SHIFT          (7U)
/*! E_NR0 - First NOR2-based ringo control.
 *  0b0..First NOR2-based ringo is disabled.
 *  0b1..First NOR2-based ringo is enabled.
 */
#define ANACTRL_RINGO0_CTRL_E_NR0(x)             (((uint32_t)(((uint32_t)(x)) << ANACTRL_RINGO0_CTRL_E_NR0_SHIFT)) & ANACTRL_RINGO0_CTRL_E_NR0_MASK)
#define ANACTRL_RINGO0_CTRL_E_NR1_MASK           (0x100U)
#define ANACTRL_RINGO0_CTRL_E_NR1_SHIFT          (8U)
/*! E_NR1 - Second NOR2-based ringo control.
 *  0b0..Second NORD2-based ringo is disabled.
 *  0b1..Second NORD2-based ringo is enabled.
 */
#define ANACTRL_RINGO0_CTRL_E_NR1(x)             (((uint32_t)(((uint32_t)(x)) << ANACTRL_RINGO0_CTRL_E_NR1_SHIFT)) & ANACTRL_RINGO0_CTRL_E_NR1_MASK)
#define ANACTRL_RINGO0_CTRL_E_IV0_MASK           (0x200U)
#define ANACTRL_RINGO0_CTRL_E_IV0_SHIFT          (9U)
/*! E_IV0 - First Inverter-based ringo control.
 *  0b0..First INV-based ringo is disabled.
 *  0b1..First INV-based ringo is enabled.
 */
#define ANACTRL_RINGO0_CTRL_E_IV0(x)             (((uint32_t)(((uint32_t)(x)) << ANACTRL_RINGO0_CTRL_E_IV0_SHIFT)) & ANACTRL_RINGO0_CTRL_E_IV0_MASK)
#define ANACTRL_RINGO0_CTRL_E_IV1_MASK           (0x400U)
#define ANACTRL_RINGO0_CTRL_E_IV1_SHIFT          (10U)
/*! E_IV1 - Second Inverter-based ringo control.
 *  0b0..Second INV-based ringo is disabled.
 *  0b1..Second INV-based ringo is enabled.
 */
#define ANACTRL_RINGO0_CTRL_E_IV1(x)             (((uint32_t)(((uint32_t)(x)) << ANACTRL_RINGO0_CTRL_E_IV1_SHIFT)) & ANACTRL_RINGO0_CTRL_E_IV1_MASK)
#define ANACTRL_RINGO0_CTRL_E_PN0_MASK           (0x800U)
#define ANACTRL_RINGO0_CTRL_E_PN0_SHIFT          (11U)
/*! E_PN0 - First PN (P-Transistor and N-Transistor processing) monitor control.
 *  0b0..First PN-based ringo is disabled.
 *  0b1..First PN-based ringo is enabled.
 */
#define ANACTRL_RINGO0_CTRL_E_PN0(x)             (((uint32_t)(((uint32_t)(x)) << ANACTRL_RINGO0_CTRL_E_PN0_SHIFT)) & ANACTRL_RINGO0_CTRL_E_PN0_MASK)
#define ANACTRL_RINGO0_CTRL_E_PN1_MASK           (0x1000U)
#define ANACTRL_RINGO0_CTRL_E_PN1_SHIFT          (12U)
/*! E_PN1 - Second PN (P-Transistor and N-Transistor processing) monitor control.
 *  0b0..Second PN-based ringo is disabled.
 *  0b1..Second PN-based ringo is enabled.
 */
#define ANACTRL_RINGO0_CTRL_E_PN1(x)             (((uint32_t)(((uint32_t)(x)) << ANACTRL_RINGO0_CTRL_E_PN1_SHIFT)) & ANACTRL_RINGO0_CTRL_E_PN1_MASK)
#define ANACTRL_RINGO0_CTRL_DIVISOR_MASK         (0xF0000U)
#define ANACTRL_RINGO0_CTRL_DIVISOR_SHIFT        (16U)
/*! DIVISOR - Ringo out Clock divider value. Frequency Output = Frequency input / (DIViSOR+1). (minimum = Frequency input / 16)
 */
#define ANACTRL_RINGO0_CTRL_DIVISOR(x)           (((uint32_t)(((uint32_t)(x)) << ANACTRL_RINGO0_CTRL_DIVISOR_SHIFT)) & ANACTRL_RINGO0_CTRL_DIVISOR_MASK)
#define ANACTRL_RINGO0_CTRL_DIV_UPDATE_REQ_MASK  (0x80000000U)
#define ANACTRL_RINGO0_CTRL_DIV_UPDATE_REQ_SHIFT (31U)
/*! DIV_UPDATE_REQ - Ringo clock out Divider status flag. Set when a change is made to the divider
 *    value, cleared when the change is complete.
 */
#define ANACTRL_RINGO0_CTRL_DIV_UPDATE_REQ(x)    (((uint32_t)(((uint32_t)(x)) << ANACTRL_RINGO0_CTRL_DIV_UPDATE_REQ_SHIFT)) & ANACTRL_RINGO0_CTRL_DIV_UPDATE_REQ_MASK)
/*! @} */

/*! @name RINGO1_CTRL - Second Ring Oscillator module control register. */
/*! @{ */
#define ANACTRL_RINGO1_CTRL_S_MASK               (0x1U)
#define ANACTRL_RINGO1_CTRL_S_SHIFT              (0U)
/*! S - Select short or long ringo (for all ringos types).
 *  0b0..Select short ringo (few elements).
 *  0b1..Select long ringo (many elements).
 */
#define ANACTRL_RINGO1_CTRL_S(x)                 (((uint32_t)(((uint32_t)(x)) << ANACTRL_RINGO1_CTRL_S_SHIFT)) & ANACTRL_RINGO1_CTRL_S_MASK)
#define ANACTRL_RINGO1_CTRL_FS_MASK              (0x2U)
#define ANACTRL_RINGO1_CTRL_FS_SHIFT             (1U)
/*! FS - Ringo frequency output divider.
 *  0b0..High frequency output (frequency lower than 100 MHz).
 *  0b1..Low frequency output (frequency lower than 10 MHz).
 */
#define ANACTRL_RINGO1_CTRL_FS(x)                (((uint32_t)(((uint32_t)(x)) << ANACTRL_RINGO1_CTRL_FS_SHIFT)) & ANACTRL_RINGO1_CTRL_FS_MASK)
#define ANACTRL_RINGO1_CTRL_PD_MASK              (0x4U)
#define ANACTRL_RINGO1_CTRL_PD_SHIFT             (2U)
/*! PD - Ringo module Power control.
 *  0b0..The Ringo module is enabled.
 *  0b1..The Ringo module is disabled.
 */
#define ANACTRL_RINGO1_CTRL_PD(x)                (((uint32_t)(((uint32_t)(x)) << ANACTRL_RINGO1_CTRL_PD_SHIFT)) & ANACTRL_RINGO1_CTRL_PD_MASK)
#define ANACTRL_RINGO1_CTRL_E_R24_MASK           (0x8U)
#define ANACTRL_RINGO1_CTRL_E_R24_SHIFT          (3U)
/*! E_R24 - .
 *  0b0..Ringo is disabled.
 *  0b1..Ringo is enabled.
 */
#define ANACTRL_RINGO1_CTRL_E_R24(x)             (((uint32_t)(((uint32_t)(x)) << ANACTRL_RINGO1_CTRL_E_R24_SHIFT)) & ANACTRL_RINGO1_CTRL_E_R24_MASK)
#define ANACTRL_RINGO1_CTRL_E_R35_MASK           (0x10U)
#define ANACTRL_RINGO1_CTRL_E_R35_SHIFT          (4U)
/*! E_R35 - .
 *  0b0..Ringo is disabled.
 *  0b1..Ringo is enabled.
 */
#define ANACTRL_RINGO1_CTRL_E_R35(x)             (((uint32_t)(((uint32_t)(x)) << ANACTRL_RINGO1_CTRL_E_R35_SHIFT)) & ANACTRL_RINGO1_CTRL_E_R35_MASK)
#define ANACTRL_RINGO1_CTRL_E_M2_MASK            (0x20U)
#define ANACTRL_RINGO1_CTRL_E_M2_SHIFT           (5U)
/*! E_M2 - Metal 2 (M2) monitor control.
 *  0b0..Ringo is disabled.
 *  0b1..Ringo is enabled.
 */
#define ANACTRL_RINGO1_CTRL_E_M2(x)              (((uint32_t)(((uint32_t)(x)) << ANACTRL_RINGO1_CTRL_E_M2_SHIFT)) & ANACTRL_RINGO1_CTRL_E_M2_MASK)
#define ANACTRL_RINGO1_CTRL_E_M3_MASK            (0x40U)
#define ANACTRL_RINGO1_CTRL_E_M3_SHIFT           (6U)
/*! E_M3 - Metal 3 (M3) monitor control.
 *  0b0..Ringo is disabled.
 *  0b1..Ringo is enabled.
 */
#define ANACTRL_RINGO1_CTRL_E_M3(x)              (((uint32_t)(((uint32_t)(x)) << ANACTRL_RINGO1_CTRL_E_M3_SHIFT)) & ANACTRL_RINGO1_CTRL_E_M3_MASK)
#define ANACTRL_RINGO1_CTRL_E_M4_MASK            (0x80U)
#define ANACTRL_RINGO1_CTRL_E_M4_SHIFT           (7U)
/*! E_M4 - Metal 4 (M4) monitor control.
 *  0b0..Ringo is disabled.
 *  0b1..Ringo is enabled.
 */
#define ANACTRL_RINGO1_CTRL_E_M4(x)              (((uint32_t)(((uint32_t)(x)) << ANACTRL_RINGO1_CTRL_E_M4_SHIFT)) & ANACTRL_RINGO1_CTRL_E_M4_MASK)
#define ANACTRL_RINGO1_CTRL_E_M5_MASK            (0x100U)
#define ANACTRL_RINGO1_CTRL_E_M5_SHIFT           (8U)
/*! E_M5 - Metal 5 (M5) monitor control.
 *  0b0..Ringo is disabled.
 *  0b1..Ringo is enabled.
 */
#define ANACTRL_RINGO1_CTRL_E_M5(x)              (((uint32_t)(((uint32_t)(x)) << ANACTRL_RINGO1_CTRL_E_M5_SHIFT)) & ANACTRL_RINGO1_CTRL_E_M5_MASK)
#define ANACTRL_RINGO1_CTRL_DIVISOR_MASK         (0xF0000U)
#define ANACTRL_RINGO1_CTRL_DIVISOR_SHIFT        (16U)
/*! DIVISOR - Ringo out Clock divider value. Frequency Output = Frequency input / (DIViSOR+1). (minimum = Frequency input / 16)
 */
#define ANACTRL_RINGO1_CTRL_DIVISOR(x)           (((uint32_t)(((uint32_t)(x)) << ANACTRL_RINGO1_CTRL_DIVISOR_SHIFT)) & ANACTRL_RINGO1_CTRL_DIVISOR_MASK)
#define ANACTRL_RINGO1_CTRL_DIV_UPDATE_REQ_MASK  (0x80000000U)
#define ANACTRL_RINGO1_CTRL_DIV_UPDATE_REQ_SHIFT (31U)
/*! DIV_UPDATE_REQ - Ringo clock out Divider status flag. Set when a change is made to the divider
 *    value, cleared when the change is complete.
 */
#define ANACTRL_RINGO1_CTRL_DIV_UPDATE_REQ(x)    (((uint32_t)(((uint32_t)(x)) << ANACTRL_RINGO1_CTRL_DIV_UPDATE_REQ_SHIFT)) & ANACTRL_RINGO1_CTRL_DIV_UPDATE_REQ_MASK)
/*! @} */

/*! @name RINGO2_CTRL - Third Ring Oscillator module control register. */
/*! @{ */
#define ANACTRL_RINGO2_CTRL_S_MASK               (0x1U)
#define ANACTRL_RINGO2_CTRL_S_SHIFT              (0U)
/*! S - Select short or long ringo (for all ringos types).
 *  0b0..Select short ringo (few elements).
 *  0b1..Select long ringo (many elements).
 */
#define ANACTRL_RINGO2_CTRL_S(x)                 (((uint32_t)(((uint32_t)(x)) << ANACTRL_RINGO2_CTRL_S_SHIFT)) & ANACTRL_RINGO2_CTRL_S_MASK)
#define ANACTRL_RINGO2_CTRL_FS_MASK              (0x2U)
#define ANACTRL_RINGO2_CTRL_FS_SHIFT             (1U)
/*! FS - Ringo frequency output divider.
 *  0b0..High frequency output (frequency lower than 100 MHz).
 *  0b1..Low frequency output (frequency lower than 10 MHz).
 */
#define ANACTRL_RINGO2_CTRL_FS(x)                (((uint32_t)(((uint32_t)(x)) << ANACTRL_RINGO2_CTRL_FS_SHIFT)) & ANACTRL_RINGO2_CTRL_FS_MASK)
#define ANACTRL_RINGO2_CTRL_PD_MASK              (0x4U)
#define ANACTRL_RINGO2_CTRL_PD_SHIFT             (2U)
/*! PD - Ringo module Power control.
 *  0b0..The Ringo module is enabled.
 *  0b1..The Ringo module is disabled.
 */
#define ANACTRL_RINGO2_CTRL_PD(x)                (((uint32_t)(((uint32_t)(x)) << ANACTRL_RINGO2_CTRL_PD_SHIFT)) & ANACTRL_RINGO2_CTRL_PD_MASK)
#define ANACTRL_RINGO2_CTRL_E_R24_MASK           (0x8U)
#define ANACTRL_RINGO2_CTRL_E_R24_SHIFT          (3U)
/*! E_R24 - .
 *  0b0..Ringo is disabled.
 *  0b1..Ringo is enabled.
 */
#define ANACTRL_RINGO2_CTRL_E_R24(x)             (((uint32_t)(((uint32_t)(x)) << ANACTRL_RINGO2_CTRL_E_R24_SHIFT)) & ANACTRL_RINGO2_CTRL_E_R24_MASK)
#define ANACTRL_RINGO2_CTRL_E_R35_MASK           (0x10U)
#define ANACTRL_RINGO2_CTRL_E_R35_SHIFT          (4U)
/*! E_R35 - .
 *  0b0..Ringo is disabled.
 *  0b1..Ringo is enabled.
 */
#define ANACTRL_RINGO2_CTRL_E_R35(x)             (((uint32_t)(((uint32_t)(x)) << ANACTRL_RINGO2_CTRL_E_R35_SHIFT)) & ANACTRL_RINGO2_CTRL_E_R35_MASK)
#define ANACTRL_RINGO2_CTRL_E_M2_MASK            (0x20U)
#define ANACTRL_RINGO2_CTRL_E_M2_SHIFT           (5U)
/*! E_M2 - Metal 2 (M2) monitor control.
 *  0b0..Ringo is disabled.
 *  0b1..Ringo is enabled.
 */
#define ANACTRL_RINGO2_CTRL_E_M2(x)              (((uint32_t)(((uint32_t)(x)) << ANACTRL_RINGO2_CTRL_E_M2_SHIFT)) & ANACTRL_RINGO2_CTRL_E_M2_MASK)
#define ANACTRL_RINGO2_CTRL_E_M3_MASK            (0x40U)
#define ANACTRL_RINGO2_CTRL_E_M3_SHIFT           (6U)
/*! E_M3 - Metal 3 (M3) monitor control.
 *  0b0..Ringo is disabled.
 *  0b1..Ringo is enabled.
 */
#define ANACTRL_RINGO2_CTRL_E_M3(x)              (((uint32_t)(((uint32_t)(x)) << ANACTRL_RINGO2_CTRL_E_M3_SHIFT)) & ANACTRL_RINGO2_CTRL_E_M3_MASK)
#define ANACTRL_RINGO2_CTRL_E_M4_MASK            (0x80U)
#define ANACTRL_RINGO2_CTRL_E_M4_SHIFT           (7U)
/*! E_M4 - Metal 4 (M4) monitor control.
 *  0b0..Ringo is disabled.
 *  0b1..Ringo is enabled.
 */
#define ANACTRL_RINGO2_CTRL_E_M4(x)              (((uint32_t)(((uint32_t)(x)) << ANACTRL_RINGO2_CTRL_E_M4_SHIFT)) & ANACTRL_RINGO2_CTRL_E_M4_MASK)
#define ANACTRL_RINGO2_CTRL_E_M5_MASK            (0x100U)
#define ANACTRL_RINGO2_CTRL_E_M5_SHIFT           (8U)
/*! E_M5 - Metal 5 (M5) monitor control.
 *  0b0..Ringo is disabled.
 *  0b1..Ringo is enabled.
 */
#define ANACTRL_RINGO2_CTRL_E_M5(x)              (((uint32_t)(((uint32_t)(x)) << ANACTRL_RINGO2_CTRL_E_M5_SHIFT)) & ANACTRL_RINGO2_CTRL_E_M5_MASK)
#define ANACTRL_RINGO2_CTRL_DIVISOR_MASK         (0xF0000U)
#define ANACTRL_RINGO2_CTRL_DIVISOR_SHIFT        (16U)
/*! DIVISOR - Ringo out Clock divider value. Frequency Output = Frequency input / (DIViSOR+1). (minimum = Frequency input / 16)
 */
#define ANACTRL_RINGO2_CTRL_DIVISOR(x)           (((uint32_t)(((uint32_t)(x)) << ANACTRL_RINGO2_CTRL_DIVISOR_SHIFT)) & ANACTRL_RINGO2_CTRL_DIVISOR_MASK)
#define ANACTRL_RINGO2_CTRL_DIV_UPDATE_REQ_MASK  (0x80000000U)
#define ANACTRL_RINGO2_CTRL_DIV_UPDATE_REQ_SHIFT (31U)
/*! DIV_UPDATE_REQ - Ringo clock out Divider status flag. Set when a change is made to the divider
 *    value, cleared when the change is complete.
 */
#define ANACTRL_RINGO2_CTRL_DIV_UPDATE_REQ(x)    (((uint32_t)(((uint32_t)(x)) << ANACTRL_RINGO2_CTRL_DIV_UPDATE_REQ_SHIFT)) & ANACTRL_RINGO2_CTRL_DIV_UPDATE_REQ_MASK)
/*! @} */

/*! @name USBHS_PHY_CTRL - USB High Speed Phy Control */
/*! @{ */
#define ANACTRL_USBHS_PHY_CTRL_usb_vbusvalid_ext_MASK (0x1U)
#define ANACTRL_USBHS_PHY_CTRL_usb_vbusvalid_ext_SHIFT (0U)
/*! usb_vbusvalid_ext - Override value for Vbus if using external detectors.
 */
#define ANACTRL_USBHS_PHY_CTRL_usb_vbusvalid_ext(x) (((uint32_t)(((uint32_t)(x)) << ANACTRL_USBHS_PHY_CTRL_usb_vbusvalid_ext_SHIFT)) & ANACTRL_USBHS_PHY_CTRL_usb_vbusvalid_ext_MASK)
#define ANACTRL_USBHS_PHY_CTRL_usb_id_ext_MASK   (0x2U)
#define ANACTRL_USBHS_PHY_CTRL_usb_id_ext_SHIFT  (1U)
/*! usb_id_ext - Override value for ID if using external detectors.
 */
#define ANACTRL_USBHS_PHY_CTRL_usb_id_ext(x)     (((uint32_t)(((uint32_t)(x)) << ANACTRL_USBHS_PHY_CTRL_usb_id_ext_SHIFT)) & ANACTRL_USBHS_PHY_CTRL_usb_id_ext_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group ANACTRL_Register_Masks */


/* ANACTRL - Peripheral instance base addresses */
#if (__ARM_FEATURE_CMSE & 0x2)
  /** Peripheral ANACTRL base address */
  #define ANACTRL_BASE                             (0x50013000u)
  /** Peripheral ANACTRL base address */
  #define ANACTRL_BASE_NS                          (0x40013000u)
  /** Peripheral ANACTRL base pointer */
  #define ANACTRL                                  ((ANACTRL_Type *)ANACTRL_BASE)
  /** Peripheral ANACTRL base pointer */
  #define ANACTRL_NS                               ((ANACTRL_Type *)ANACTRL_BASE_NS)
  /** Array initializer of ANACTRL peripheral base addresses */
  #define ANACTRL_BASE_ADDRS                       { ANACTRL_BASE }
  /** Array initializer of ANACTRL peripheral base pointers */
  #define ANACTRL_BASE_PTRS                        { ANACTRL }
  /** Array initializer of ANACTRL peripheral base addresses */
  #define ANACTRL_BASE_ADDRS_NS                    { ANACTRL_BASE_NS }
  /** Array initializer of ANACTRL peripheral base pointers */
  #define ANACTRL_BASE_PTRS_NS                     { ANACTRL_NS }
#else
  /** Peripheral ANACTRL base address */
  #define ANACTRL_BASE                             (0x40013000u)
  /** Peripheral ANACTRL base pointer */
  #define ANACTRL                                  ((ANACTRL_Type *)ANACTRL_BASE)
  /** Array initializer of ANACTRL peripheral base addresses */
  #define ANACTRL_BASE_ADDRS                       { ANACTRL_BASE }
  /** Array initializer of ANACTRL peripheral base pointers */
  #define ANACTRL_BASE_PTRS                        { ANACTRL }
#endif

/*!
 * @}
 */ /* end of group ANACTRL_Peripheral_Access_Layer */


/* ----------------------------------------------------------------------------
   -- CASPER Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup CASPER_Peripheral_Access_Layer CASPER Peripheral Access Layer
 * @{
 */

/** CASPER - Register Layout Typedef */
typedef struct {
  __IO uint32_t CTRL0;                             /**< Contains the offsets of AB and CD in the RAM., offset: 0x0 */
  __IO uint32_t CTRL1;                             /**< Contains the opcode mode, iteration count, and result offset (in RAM) and also launches the accelerator. Note: with CP version: CTRL0 and CRTL1 can be written in one go with MCRR., offset: 0x4 */
  __IO uint32_t LOADER;                            /**< Contains an optional loader to load into CTRL0/1 in steps to perform a set of operations., offset: 0x8 */
  __IO uint32_t STATUS;                            /**< Indicates operational status and would contain the carry bit if used., offset: 0xC */
  __IO uint32_t INTENSET;                          /**< Sets interrupts, offset: 0x10 */
  __IO uint32_t INTENCLR;                          /**< Clears interrupts, offset: 0x14 */
  __I  uint32_t INTSTAT;                           /**< Interrupt status bits (mask of INTENSET and STATUS), offset: 0x18 */
       uint8_t RESERVED_0[4];
  __IO uint32_t AREG;                              /**< A register, offset: 0x20 */
  __IO uint32_t BREG;                              /**< B register, offset: 0x24 */
  __IO uint32_t CREG;                              /**< C register, offset: 0x28 */
  __IO uint32_t DREG;                              /**< D register, offset: 0x2C */
  __IO uint32_t RES0;                              /**< Result register 0, offset: 0x30 */
  __IO uint32_t RES1;                              /**< Result register 1, offset: 0x34 */
  __IO uint32_t RES2;                              /**< Result register 2, offset: 0x38 */
  __IO uint32_t RES3;                              /**< Result register 3, offset: 0x3C */
       uint8_t RESERVED_1[32];
  __IO uint32_t MASK;                              /**< Optional mask register, offset: 0x60 */
  __IO uint32_t REMASK;                            /**< Optional re-mask register, offset: 0x64 */
       uint8_t RESERVED_2[24];
  __IO uint32_t LOCK;                              /**< Security lock register, offset: 0x80 */
} CASPER_Type;

/* ----------------------------------------------------------------------------
   -- CASPER Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup CASPER_Register_Masks CASPER Register Masks
 * @{
 */

/*! @name CTRL0 - Contains the offsets of AB and CD in the RAM. */
/*! @{ */
#define CASPER_CTRL0_ABBPAIR_MASK                (0x1U)
#define CASPER_CTRL0_ABBPAIR_SHIFT               (0U)
/*! ABBPAIR - Which bank-pair the offset ABOFF is within. This must be 0 if only 2-up
 *  0b0..Bank-pair 0 (1st)
 *  0b1..Bank-pair 1 (2nd)
 */
#define CASPER_CTRL0_ABBPAIR(x)                  (((uint32_t)(((uint32_t)(x)) << CASPER_CTRL0_ABBPAIR_SHIFT)) & CASPER_CTRL0_ABBPAIR_MASK)
#define CASPER_CTRL0_ABOFF_MASK                  (0x4U)
#define CASPER_CTRL0_ABOFF_SHIFT                 (2U)
/*! ABOFF - Word or DWord Offset of AB values, with B at [2]=0 and A at [2]=1 as far as the code
 *    sees (normally will be an interleaved bank so only sequential to AHB). Word offset only allowed
 *    if 32 bit operation. Ideally not in the same RAM as the CD values if 4-up
 */
#define CASPER_CTRL0_ABOFF(x)                    (((uint32_t)(((uint32_t)(x)) << CASPER_CTRL0_ABOFF_SHIFT)) & CASPER_CTRL0_ABOFF_MASK)
#define CASPER_CTRL0_CDBPAIR_MASK                (0x10000U)
#define CASPER_CTRL0_CDBPAIR_SHIFT               (16U)
/*! CDBPAIR - Which bank-pair the offset CDOFF is within. This must be 0 if only 2-up
 *  0b0..Bank-pair 0 (1st)
 *  0b1..Bank-pair 1 (2nd)
 */
#define CASPER_CTRL0_CDBPAIR(x)                  (((uint32_t)(((uint32_t)(x)) << CASPER_CTRL0_CDBPAIR_SHIFT)) & CASPER_CTRL0_CDBPAIR_MASK)
#define CASPER_CTRL0_CDOFF_MASK                  (0x1FFC0000U)
#define CASPER_CTRL0_CDOFF_SHIFT                 (18U)
/*! CDOFF - Word or DWord Offset of CD, with D at [2]=0 and C at [2]=1 as far as the code sees
 *    (normally will be an interleaved bank so only sequential to AHB). Word offset only allowed if 32
 *    bit operation. Ideally not in the same RAM as the AB values
 */
#define CASPER_CTRL0_CDOFF(x)                    (((uint32_t)(((uint32_t)(x)) << CASPER_CTRL0_CDOFF_SHIFT)) & CASPER_CTRL0_CDOFF_MASK)
/*! @} */

/*! @name CTRL1 - Contains the opcode mode, iteration count, and result offset (in RAM) and also launches the accelerator. Note: with CP version: CTRL0 and CRTL1 can be written in one go with MCRR. */
/*! @{ */
#define CASPER_CTRL1_ITER_MASK                   (0xFFU)
#define CASPER_CTRL1_ITER_SHIFT                  (0U)
/*! ITER - Iteration counter. Is number_cycles - 1. write 0 means Does one cycle - does not iterate.
 */
#define CASPER_CTRL1_ITER(x)                     (((uint32_t)(((uint32_t)(x)) << CASPER_CTRL1_ITER_SHIFT)) & CASPER_CTRL1_ITER_MASK)
#define CASPER_CTRL1_MODE_MASK                   (0xFF00U)
#define CASPER_CTRL1_MODE_SHIFT                  (8U)
/*! MODE - Operation mode to perform. write 0 means Accelerator is inactive. write others means accelerator is active.
 */
#define CASPER_CTRL1_MODE(x)                     (((uint32_t)(((uint32_t)(x)) << CASPER_CTRL1_MODE_SHIFT)) & CASPER_CTRL1_MODE_MASK)
#define CASPER_CTRL1_RESBPAIR_MASK               (0x10000U)
#define CASPER_CTRL1_RESBPAIR_SHIFT              (16U)
/*! RESBPAIR - Which bank-pair the offset RESOFF is within. This must be 0 if only 2-up. Ideally
 *    this is not the same bank as ABBPAIR (when 4-up supported)
 *  0b0..Bank-pair 0 (1st)
 *  0b1..Bank-pair 1 (2nd)
 */
#define CASPER_CTRL1_RESBPAIR(x)                 (((uint32_t)(((uint32_t)(x)) << CASPER_CTRL1_RESBPAIR_SHIFT)) & CASPER_CTRL1_RESBPAIR_MASK)
#define CASPER_CTRL1_RESOFF_MASK                 (0x1FFC0000U)
#define CASPER_CTRL1_RESOFF_SHIFT                (18U)
/*! RESOFF - Word or DWord Offset of result. Word offset only allowed if 32 bit operation. Ideally
 *    not in the same RAM as the AB and CD values
 */
#define CASPER_CTRL1_RESOFF(x)                   (((uint32_t)(((uint32_t)(x)) << CASPER_CTRL1_RESOFF_SHIFT)) & CASPER_CTRL1_RESOFF_MASK)
#define CASPER_CTRL1_CSKIP_MASK                  (0xC0000000U)
#define CASPER_CTRL1_CSKIP_SHIFT                 (30U)
/*! CSKIP - Skip rules on Carry if needed. This operation will be skipped based on Carry value (from previous operation) if not 0:
 *  0b00..No Skip
 *  0b01..Skip if Carry is 1
 *  0b10..Skip if Carry is 0
 *  0b11..Set CTRLOFF to CDOFF and Skip
 */
#define CASPER_CTRL1_CSKIP(x)                    (((uint32_t)(((uint32_t)(x)) << CASPER_CTRL1_CSKIP_SHIFT)) & CASPER_CTRL1_CSKIP_MASK)
/*! @} */

/*! @name LOADER - Contains an optional loader to load into CTRL0/1 in steps to perform a set of operations. */
/*! @{ */
#define CASPER_LOADER_COUNT_MASK                 (0xFFU)
#define CASPER_LOADER_COUNT_SHIFT                (0U)
/*! COUNT - Number of control pairs to load 0 relative (so 1 means load 1). write 1 means Does one
 *    op - does not iterate, write N means N control pairs to load
 */
#define CASPER_LOADER_COUNT(x)                   (((uint32_t)(((uint32_t)(x)) << CASPER_LOADER_COUNT_SHIFT)) & CASPER_LOADER_COUNT_MASK)
#define CASPER_LOADER_CTRLBPAIR_MASK             (0x10000U)
#define CASPER_LOADER_CTRLBPAIR_SHIFT            (16U)
/*! CTRLBPAIR - Which bank-pair the offset CTRLOFF is within. This must be 0 if only 2-up. Does not
 *    matter which bank is used as this is loaded when not performing an operation.
 *  0b0..Bank-pair 0 (1st)
 *  0b1..Bank-pair 1 (2nd)
 */
#define CASPER_LOADER_CTRLBPAIR(x)               (((uint32_t)(((uint32_t)(x)) << CASPER_LOADER_CTRLBPAIR_SHIFT)) & CASPER_LOADER_CTRLBPAIR_MASK)
#define CASPER_LOADER_CTRLOFF_MASK               (0x1FFC0000U)
#define CASPER_LOADER_CTRLOFF_SHIFT              (18U)
/*! CTRLOFF - DWord Offset of CTRL pair to load next.
 */
#define CASPER_LOADER_CTRLOFF(x)                 (((uint32_t)(((uint32_t)(x)) << CASPER_LOADER_CTRLOFF_SHIFT)) & CASPER_LOADER_CTRLOFF_MASK)
/*! @} */

/*! @name STATUS - Indicates operational status and would contain the carry bit if used. */
/*! @{ */
#define CASPER_STATUS_DONE_MASK                  (0x1U)
#define CASPER_STATUS_DONE_SHIFT                 (0U)
/*! DONE - Indicates if the accelerator has finished an operation. Write 1 to clear, or write CTRL1 to clear.
 *  0b0..Busy or just cleared
 *  0b1..Completed last operation
 */
#define CASPER_STATUS_DONE(x)                    (((uint32_t)(((uint32_t)(x)) << CASPER_STATUS_DONE_SHIFT)) & CASPER_STATUS_DONE_MASK)
#define CASPER_STATUS_CARRY_MASK                 (0x10U)
#define CASPER_STATUS_CARRY_SHIFT                (4U)
/*! CARRY - Last carry value if operation produced a carry bit
 *  0b0..Carry was 0 or no carry
 *  0b1..Carry was 1
 */
#define CASPER_STATUS_CARRY(x)                   (((uint32_t)(((uint32_t)(x)) << CASPER_STATUS_CARRY_SHIFT)) & CASPER_STATUS_CARRY_MASK)
#define CASPER_STATUS_BUSY_MASK                  (0x20U)
#define CASPER_STATUS_BUSY_SHIFT                 (5U)
/*! BUSY - Indicates if the accelerator is busy performing an operation
 *  0b0..Not busy - is idle
 *  0b1..Is busy
 */
#define CASPER_STATUS_BUSY(x)                    (((uint32_t)(((uint32_t)(x)) << CASPER_STATUS_BUSY_SHIFT)) & CASPER_STATUS_BUSY_MASK)
/*! @} */

/*! @name INTENSET - Sets interrupts */
/*! @{ */
#define CASPER_INTENSET_DONE_MASK                (0x1U)
#define CASPER_INTENSET_DONE_SHIFT               (0U)
/*! DONE - Set if the accelerator should interrupt when done.
 *  0b0..Do not interrupt when done
 *  0b1..Interrupt when done
 */
#define CASPER_INTENSET_DONE(x)                  (((uint32_t)(((uint32_t)(x)) << CASPER_INTENSET_DONE_SHIFT)) & CASPER_INTENSET_DONE_MASK)
/*! @} */

/*! @name INTENCLR - Clears interrupts */
/*! @{ */
#define CASPER_INTENCLR_DONE_MASK                (0x1U)
#define CASPER_INTENCLR_DONE_SHIFT               (0U)
/*! DONE - Written to clear an interrupt set with INTENSET.
 *  0b0..If written 0, ignored
 *  0b1..If written 1, do not Interrupt when done
 */
#define CASPER_INTENCLR_DONE(x)                  (((uint32_t)(((uint32_t)(x)) << CASPER_INTENCLR_DONE_SHIFT)) & CASPER_INTENCLR_DONE_MASK)
/*! @} */

/*! @name INTSTAT - Interrupt status bits (mask of INTENSET and STATUS) */
/*! @{ */
#define CASPER_INTSTAT_DONE_MASK                 (0x1U)
#define CASPER_INTSTAT_DONE_SHIFT                (0U)
/*! DONE - If set, interrupt is caused by accelerator being done.
 *  0b0..Not caused by accelerator being done
 *  0b1..Caused by accelerator being done
 */
#define CASPER_INTSTAT_DONE(x)                   (((uint32_t)(((uint32_t)(x)) << CASPER_INTSTAT_DONE_SHIFT)) & CASPER_INTSTAT_DONE_MASK)
/*! @} */

/*! @name AREG - A register */
/*! @{ */
#define CASPER_AREG_REG_VALUE_MASK               (0xFFFFFFFFU)
#define CASPER_AREG_REG_VALUE_SHIFT              (0U)
/*! REG_VALUE - Register to be fed into Multiplier. Is not normally written or read by application,
 *    but is available when accelerator not busy.
 */
#define CASPER_AREG_REG_VALUE(x)                 (((uint32_t)(((uint32_t)(x)) << CASPER_AREG_REG_VALUE_SHIFT)) & CASPER_AREG_REG_VALUE_MASK)
/*! @} */

/*! @name BREG - B register */
/*! @{ */
#define CASPER_BREG_REG_VALUE_MASK               (0xFFFFFFFFU)
#define CASPER_BREG_REG_VALUE_SHIFT              (0U)
/*! REG_VALUE - Register to be fed into Multiplier. Is not normally written or read by application,
 *    but is available when accelerator not busy.
 */
#define CASPER_BREG_REG_VALUE(x)                 (((uint32_t)(((uint32_t)(x)) << CASPER_BREG_REG_VALUE_SHIFT)) & CASPER_BREG_REG_VALUE_MASK)
/*! @} */

/*! @name CREG - C register */
/*! @{ */
#define CASPER_CREG_REG_VALUE_MASK               (0xFFFFFFFFU)
#define CASPER_CREG_REG_VALUE_SHIFT              (0U)
/*! REG_VALUE - Register to be fed into Multiplier. Is not normally written or read by application,
 *    but is available when accelerator not busy.
 */
#define CASPER_CREG_REG_VALUE(x)                 (((uint32_t)(((uint32_t)(x)) << CASPER_CREG_REG_VALUE_SHIFT)) & CASPER_CREG_REG_VALUE_MASK)
/*! @} */

/*! @name DREG - D register */
/*! @{ */
#define CASPER_DREG_REG_VALUE_MASK               (0xFFFFFFFFU)
#define CASPER_DREG_REG_VALUE_SHIFT              (0U)
/*! REG_VALUE - Register to be fed into Multiplier. Is not normally written or read by application,
 *    but is available when accelerator not busy.
 */
#define CASPER_DREG_REG_VALUE(x)                 (((uint32_t)(((uint32_t)(x)) << CASPER_DREG_REG_VALUE_SHIFT)) & CASPER_DREG_REG_VALUE_MASK)
/*! @} */

/*! @name RES0 - Result register 0 */
/*! @{ */
#define CASPER_RES0_REG_VALUE_MASK               (0xFFFFFFFFU)
#define CASPER_RES0_REG_VALUE_SHIFT              (0U)
/*! REG_VALUE - Register to hold working result (from multiplier, adder/xor, etc). Is not normally
 *    written or read by application, but is available when accelerator not busy.
 */
#define CASPER_RES0_REG_VALUE(x)                 (((uint32_t)(((uint32_t)(x)) << CASPER_RES0_REG_VALUE_SHIFT)) & CASPER_RES0_REG_VALUE_MASK)
/*! @} */

/*! @name RES1 - Result register 1 */
/*! @{ */
#define CASPER_RES1_REG_VALUE_MASK               (0xFFFFFFFFU)
#define CASPER_RES1_REG_VALUE_SHIFT              (0U)
/*! REG_VALUE - Register to hold working result (from multiplier, adder/xor, etc). Is not normally
 *    written or read by application, but is available when accelerator not busy.
 */
#define CASPER_RES1_REG_VALUE(x)                 (((uint32_t)(((uint32_t)(x)) << CASPER_RES1_REG_VALUE_SHIFT)) & CASPER_RES1_REG_VALUE_MASK)
/*! @} */

/*! @name RES2 - Result register 2 */
/*! @{ */
#define CASPER_RES2_REG_VALUE_MASK               (0xFFFFFFFFU)
#define CASPER_RES2_REG_VALUE_SHIFT              (0U)
/*! REG_VALUE - Register to hold working result (from multiplier, adder/xor, etc). Is not normally
 *    written or read by application, but is available when accelerator not busy.
 */
#define CASPER_RES2_REG_VALUE(x)                 (((uint32_t)(((uint32_t)(x)) << CASPER_RES2_REG_VALUE_SHIFT)) & CASPER_RES2_REG_VALUE_MASK)
/*! @} */

/*! @name RES3 - Result register 3 */
/*! @{ */
#define CASPER_RES3_REG_VALUE_MASK               (0xFFFFFFFFU)
#define CASPER_RES3_REG_VALUE_SHIFT              (0U)
/*! REG_VALUE - Register to hold working result (from multiplier, adder/xor, etc). Is not normally
 *    written or read by application, but is available when accelerator not busy.
 */
#define CASPER_RES3_REG_VALUE(x)                 (((uint32_t)(((uint32_t)(x)) << CASPER_RES3_REG_VALUE_SHIFT)) & CASPER_RES3_REG_VALUE_MASK)
/*! @} */

/*! @name MASK - Optional mask register */
/*! @{ */
#define CASPER_MASK_MASK_MASK                    (0xFFFFFFFFU)
#define CASPER_MASK_MASK_SHIFT                   (0U)
/*! MASK - Mask to apply as side channel countermeasure. 0: No mask to be used. N: Mask to XOR onto values
 */
#define CASPER_MASK_MASK(x)                      (((uint32_t)(((uint32_t)(x)) << CASPER_MASK_MASK_SHIFT)) & CASPER_MASK_MASK_MASK)
/*! @} */

/*! @name REMASK - Optional re-mask register */
/*! @{ */
#define CASPER_REMASK_MASK_MASK                  (0xFFFFFFFFU)
#define CASPER_REMASK_MASK_SHIFT                 (0U)
/*! MASK - Mask to apply as side channel countermeasure. 0: No mask to be used. N: Mask to XOR onto values
 */
#define CASPER_REMASK_MASK(x)                    (((uint32_t)(((uint32_t)(x)) << CASPER_REMASK_MASK_SHIFT)) & CASPER_REMASK_MASK_MASK)
/*! @} */

/*! @name LOCK - Security lock register */
/*! @{ */
#define CASPER_LOCK_LOCK_MASK                    (0x1U)
#define CASPER_LOCK_LOCK_SHIFT                   (0U)
/*! LOCK - Reads back with security level locked to, or 0. Writes as 0 to unlock, 1 to lock.
 *  0b0..unlock
 *  0b1..Lock to current security level
 */
#define CASPER_LOCK_LOCK(x)                      (((uint32_t)(((uint32_t)(x)) << CASPER_LOCK_LOCK_SHIFT)) & CASPER_LOCK_LOCK_MASK)
#define CASPER_LOCK_KEY_MASK                     (0x1FFF0U)
#define CASPER_LOCK_KEY_SHIFT                    (4U)
/*! KEY - Must be written as 0x73D to change the register.
 *  0b0011100111101..If set during write, will allow lock or unlock
 */
#define CASPER_LOCK_KEY(x)                       (((uint32_t)(((uint32_t)(x)) << CASPER_LOCK_KEY_SHIFT)) & CASPER_LOCK_KEY_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group CASPER_Register_Masks */


/* CASPER - Peripheral instance base addresses */
#if (__ARM_FEATURE_CMSE & 0x2)
  /** Peripheral CASPER base address */
  #define CASPER_BASE                              (0x500A5000u)
  /** Peripheral CASPER base address */
  #define CASPER_BASE_NS                           (0x400A5000u)
  /** Peripheral CASPER base pointer */
  #define CASPER                                   ((CASPER_Type *)CASPER_BASE)
  /** Peripheral CASPER base pointer */
  #define CASPER_NS                                ((CASPER_Type *)CASPER_BASE_NS)
  /** Array initializer of CASPER peripheral base addresses */
  #define CASPER_BASE_ADDRS                        { CASPER_BASE }
  /** Array initializer of CASPER peripheral base pointers */
  #define CASPER_BASE_PTRS                         { CASPER }
  /** Array initializer of CASPER peripheral base addresses */
  #define CASPER_BASE_ADDRS_NS                     { CASPER_BASE_NS }
  /** Array initializer of CASPER peripheral base pointers */
  #define CASPER_BASE_PTRS_NS                      { CASPER_NS }
#else
  /** Peripheral CASPER base address */
  #define CASPER_BASE                              (0x400A5000u)
  /** Peripheral CASPER base pointer */
  #define CASPER                                   ((CASPER_Type *)CASPER_BASE)
  /** Array initializer of CASPER peripheral base addresses */
  #define CASPER_BASE_ADDRS                        { CASPER_BASE }
  /** Array initializer of CASPER peripheral base pointers */
  #define CASPER_BASE_PTRS                         { CASPER }
#endif

/*!
 * @}
 */ /* end of group CASPER_Peripheral_Access_Layer */


/* ----------------------------------------------------------------------------
   -- CRC Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup CRC_Peripheral_Access_Layer CRC Peripheral Access Layer
 * @{
 */

/** CRC - Register Layout Typedef */
typedef struct {
  __IO uint32_t MODE;                              /**< CRC mode register, offset: 0x0 */
  __IO uint32_t SEED;                              /**< CRC seed register, offset: 0x4 */
  union {                                          /* offset: 0x8 */
    __I  uint32_t SUM;                               /**< CRC checksum register, offset: 0x8 */
    __O  uint32_t WR_DATA;                           /**< CRC data register, offset: 0x8 */
  };
} CRC_Type;

/* ----------------------------------------------------------------------------
   -- CRC Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup CRC_Register_Masks CRC Register Masks
 * @{
 */

/*! @name MODE - CRC mode register */
/*! @{ */
#define CRC_MODE_CRC_POLY_MASK                   (0x3U)
#define CRC_MODE_CRC_POLY_SHIFT                  (0U)
/*! CRC_POLY - CRC polynomial: 1X = CRC-32 polynomial 01 = CRC-16 polynomial 00 = CRC-CCITT polynomial
 */
#define CRC_MODE_CRC_POLY(x)                     (((uint32_t)(((uint32_t)(x)) << CRC_MODE_CRC_POLY_SHIFT)) & CRC_MODE_CRC_POLY_MASK)
#define CRC_MODE_BIT_RVS_WR_MASK                 (0x4U)
#define CRC_MODE_BIT_RVS_WR_SHIFT                (2U)
/*! BIT_RVS_WR - Data bit order: 1 = Bit order reverse for CRC_WR_DATA (per byte) 0 = No bit order reverse for CRC_WR_DATA (per byte)
 */
#define CRC_MODE_BIT_RVS_WR(x)                   (((uint32_t)(((uint32_t)(x)) << CRC_MODE_BIT_RVS_WR_SHIFT)) & CRC_MODE_BIT_RVS_WR_MASK)
#define CRC_MODE_CMPL_WR_MASK                    (0x8U)
#define CRC_MODE_CMPL_WR_SHIFT                   (3U)
/*! CMPL_WR - Data complement: 1 = 1's complement for CRC_WR_DATA 0 = No 1's complement for CRC_WR_DATA
 */
#define CRC_MODE_CMPL_WR(x)                      (((uint32_t)(((uint32_t)(x)) << CRC_MODE_CMPL_WR_SHIFT)) & CRC_MODE_CMPL_WR_MASK)
#define CRC_MODE_BIT_RVS_SUM_MASK                (0x10U)
#define CRC_MODE_BIT_RVS_SUM_SHIFT               (4U)
/*! BIT_RVS_SUM - CRC sum bit order: 1 = Bit order reverse for CRC_SUM 0 = No bit order reverse for CRC_SUM
 */
#define CRC_MODE_BIT_RVS_SUM(x)                  (((uint32_t)(((uint32_t)(x)) << CRC_MODE_BIT_RVS_SUM_SHIFT)) & CRC_MODE_BIT_RVS_SUM_MASK)
#define CRC_MODE_CMPL_SUM_MASK                   (0x20U)
#define CRC_MODE_CMPL_SUM_SHIFT                  (5U)
/*! CMPL_SUM - CRC sum complement: 1 = 1's complement for CRC_SUM 0 = No 1's complement for CRC_SUM
 */
#define CRC_MODE_CMPL_SUM(x)                     (((uint32_t)(((uint32_t)(x)) << CRC_MODE_CMPL_SUM_SHIFT)) & CRC_MODE_CMPL_SUM_MASK)
/*! @} */

/*! @name SEED - CRC seed register */
/*! @{ */
#define CRC_SEED_CRC_SEED_MASK                   (0xFFFFFFFFU)
#define CRC_SEED_CRC_SEED_SHIFT                  (0U)
/*! CRC_SEED - A write access to this register will load CRC seed value to CRC_SUM register with
 *    selected bit order and 1's complement pre-processes. A write access to this register will
 *    overrule the CRC calculation in progresses.
 */
#define CRC_SEED_CRC_SEED(x)                     (((uint32_t)(((uint32_t)(x)) << CRC_SEED_CRC_SEED_SHIFT)) & CRC_SEED_CRC_SEED_MASK)
/*! @} */

/*! @name SUM - CRC checksum register */
/*! @{ */
#define CRC_SUM_CRC_SUM_MASK                     (0xFFFFFFFFU)
#define CRC_SUM_CRC_SUM_SHIFT                    (0U)
/*! CRC_SUM - The most recent CRC sum can be read through this register with selected bit order and 1's complement post-processes.
 */
#define CRC_SUM_CRC_SUM(x)                       (((uint32_t)(((uint32_t)(x)) << CRC_SUM_CRC_SUM_SHIFT)) & CRC_SUM_CRC_SUM_MASK)
/*! @} */

/*! @name WR_DATA - CRC data register */
/*! @{ */
#define CRC_WR_DATA_CRC_WR_DATA_MASK             (0xFFFFFFFFU)
#define CRC_WR_DATA_CRC_WR_DATA_SHIFT            (0U)
/*! CRC_WR_DATA - Data written to this register will be taken to perform CRC calculation with
 *    selected bit order and 1's complement pre-process. Any write size 8, 16 or 32-bit are allowed and
 *    accept back-to-back transactions.
 */
#define CRC_WR_DATA_CRC_WR_DATA(x)               (((uint32_t)(((uint32_t)(x)) << CRC_WR_DATA_CRC_WR_DATA_SHIFT)) & CRC_WR_DATA_CRC_WR_DATA_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group CRC_Register_Masks */


/* CRC - Peripheral instance base addresses */
#if (__ARM_FEATURE_CMSE & 0x2)
  /** Peripheral CRC_ENGINE base address */
  #define CRC_ENGINE_BASE                          (0x50095000u)
  /** Peripheral CRC_ENGINE base address */
  #define CRC_ENGINE_BASE_NS                       (0x40095000u)
  /** Peripheral CRC_ENGINE base pointer */
  #define CRC_ENGINE                               ((CRC_Type *)CRC_ENGINE_BASE)
  /** Peripheral CRC_ENGINE base pointer */
  #define CRC_ENGINE_NS                            ((CRC_Type *)CRC_ENGINE_BASE_NS)
  /** Array initializer of CRC peripheral base addresses */
  #define CRC_BASE_ADDRS                           { CRC_ENGINE_BASE }
  /** Array initializer of CRC peripheral base pointers */
  #define CRC_BASE_PTRS                            { CRC_ENGINE }
  /** Array initializer of CRC peripheral base addresses */
  #define CRC_BASE_ADDRS_NS                        { CRC_ENGINE_BASE_NS }
  /** Array initializer of CRC peripheral base pointers */
  #define CRC_BASE_PTRS_NS                         { CRC_ENGINE_NS }
#else
  /** Peripheral CRC_ENGINE base address */
  #define CRC_ENGINE_BASE                          (0x40095000u)
  /** Peripheral CRC_ENGINE base pointer */
  #define CRC_ENGINE                               ((CRC_Type *)CRC_ENGINE_BASE)
  /** Array initializer of CRC peripheral base addresses */
  #define CRC_BASE_ADDRS                           { CRC_ENGINE_BASE }
  /** Array initializer of CRC peripheral base pointers */
  #define CRC_BASE_PTRS                            { CRC_ENGINE }
#endif

/*!
 * @}
 */ /* end of group CRC_Peripheral_Access_Layer */


/* ----------------------------------------------------------------------------
   -- CTIMER Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup CTIMER_Peripheral_Access_Layer CTIMER Peripheral Access Layer
 * @{
 */

/** CTIMER - Register Layout Typedef */
typedef struct {
  __IO uint32_t IR;                                /**< Interrupt Register. The IR can be written to clear interrupts. The IR can be read to identify which of eight possible interrupt sources are pending., offset: 0x0 */
  __IO uint32_t TCR;                               /**< Timer Control Register. The TCR is used to control the Timer Counter functions. The Timer Counter can be disabled or reset through the TCR., offset: 0x4 */
  __IO uint32_t TC;                                /**< Timer Counter, offset: 0x8 */
  __IO uint32_t PR;                                /**< Prescale Register, offset: 0xC */
  __IO uint32_t PC;                                /**< Prescale Counter, offset: 0x10 */
  __IO uint32_t MCR;                               /**< Match Control Register, offset: 0x14 */
  __IO uint32_t MR[4];                             /**< Match Register . MR can be enabled through the MCR to reset the TC, stop both the TC and PC, and/or generate an interrupt every time MR matches the TC., array offset: 0x18, array step: 0x4 */
  __IO uint32_t CCR;                               /**< Capture Control Register. The CCR controls which edges of the capture inputs are used to load the Capture Registers and whether or not an interrupt is generated when a capture takes place., offset: 0x28 */
  __I  uint32_t CR[4];                             /**< Capture Register . CR is loaded with the value of TC when there is an event on the CAPn. input., array offset: 0x2C, array step: 0x4 */
  __IO uint32_t EMR;                               /**< External Match Register. The EMR controls the match function and the external match pins., offset: 0x3C */
       uint8_t RESERVED_0[48];
  __IO uint32_t CTCR;                              /**< Count Control Register. The CTCR selects between Timer and Counter mode, and in Counter mode selects the signal and edge(s) for counting., offset: 0x70 */
  __IO uint32_t PWMC;                              /**< PWM Control Register. This register enables PWM mode for the external match pins., offset: 0x74 */
  __IO uint32_t MSR[4];                            /**< Match Shadow Register, array offset: 0x78, array step: 0x4 */
} CTIMER_Type;

/* ----------------------------------------------------------------------------
   -- CTIMER Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup CTIMER_Register_Masks CTIMER Register Masks
 * @{
 */

/*! @name IR - Interrupt Register. The IR can be written to clear interrupts. The IR can be read to identify which of eight possible interrupt sources are pending. */
/*! @{ */
#define CTIMER_IR_MR0INT_MASK                    (0x1U)
#define CTIMER_IR_MR0INT_SHIFT                   (0U)
/*! MR0INT - Interrupt flag for match channel 0.
 */
#define CTIMER_IR_MR0INT(x)                      (((uint32_t)(((uint32_t)(x)) << CTIMER_IR_MR0INT_SHIFT)) & CTIMER_IR_MR0INT_MASK)
#define CTIMER_IR_MR1INT_MASK                    (0x2U)
#define CTIMER_IR_MR1INT_SHIFT                   (1U)
/*! MR1INT - Interrupt flag for match channel 1.
 */
#define CTIMER_IR_MR1INT(x)                      (((uint32_t)(((uint32_t)(x)) << CTIMER_IR_MR1INT_SHIFT)) & CTIMER_IR_MR1INT_MASK)
#define CTIMER_IR_MR2INT_MASK                    (0x4U)
#define CTIMER_IR_MR2INT_SHIFT                   (2U)
/*! MR2INT - Interrupt flag for match channel 2.
 */
#define CTIMER_IR_MR2INT(x)                      (((uint32_t)(((uint32_t)(x)) << CTIMER_IR_MR2INT_SHIFT)) & CTIMER_IR_MR2INT_MASK)
#define CTIMER_IR_MR3INT_MASK                    (0x8U)
#define CTIMER_IR_MR3INT_SHIFT                   (3U)
/*! MR3INT - Interrupt flag for match channel 3.
 */
#define CTIMER_IR_MR3INT(x)                      (((uint32_t)(((uint32_t)(x)) << CTIMER_IR_MR3INT_SHIFT)) & CTIMER_IR_MR3INT_MASK)
#define CTIMER_IR_CR0INT_MASK                    (0x10U)
#define CTIMER_IR_CR0INT_SHIFT                   (4U)
/*! CR0INT - Interrupt flag for capture channel 0 event.
 */
#define CTIMER_IR_CR0INT(x)                      (((uint32_t)(((uint32_t)(x)) << CTIMER_IR_CR0INT_SHIFT)) & CTIMER_IR_CR0INT_MASK)
#define CTIMER_IR_CR1INT_MASK                    (0x20U)
#define CTIMER_IR_CR1INT_SHIFT                   (5U)
/*! CR1INT - Interrupt flag for capture channel 1 event.
 */
#define CTIMER_IR_CR1INT(x)                      (((uint32_t)(((uint32_t)(x)) << CTIMER_IR_CR1INT_SHIFT)) & CTIMER_IR_CR1INT_MASK)
#define CTIMER_IR_CR2INT_MASK                    (0x40U)
#define CTIMER_IR_CR2INT_SHIFT                   (6U)
/*! CR2INT - Interrupt flag for capture channel 2 event.
 */
#define CTIMER_IR_CR2INT(x)                      (((uint32_t)(((uint32_t)(x)) << CTIMER_IR_CR2INT_SHIFT)) & CTIMER_IR_CR2INT_MASK)
#define CTIMER_IR_CR3INT_MASK                    (0x80U)
#define CTIMER_IR_CR3INT_SHIFT                   (7U)
/*! CR3INT - Interrupt flag for capture channel 3 event.
 */
#define CTIMER_IR_CR3INT(x)                      (((uint32_t)(((uint32_t)(x)) << CTIMER_IR_CR3INT_SHIFT)) & CTIMER_IR_CR3INT_MASK)
/*! @} */

/*! @name TCR - Timer Control Register. The TCR is used to control the Timer Counter functions. The Timer Counter can be disabled or reset through the TCR. */
/*! @{ */
#define CTIMER_TCR_CEN_MASK                      (0x1U)
#define CTIMER_TCR_CEN_SHIFT                     (0U)
/*! CEN - Counter enable.
 *  0b0..Disabled.The counters are disabled.
 *  0b1..Enabled. The Timer Counter and Prescale Counter are enabled.
 */
#define CTIMER_TCR_CEN(x)                        (((uint32_t)(((uint32_t)(x)) << CTIMER_TCR_CEN_SHIFT)) & CTIMER_TCR_CEN_MASK)
#define CTIMER_TCR_CRST_MASK                     (0x2U)
#define CTIMER_TCR_CRST_SHIFT                    (1U)
/*! CRST - Counter reset.
 *  0b0..Disabled. Do nothing.
 *  0b1..Enabled. The Timer Counter and the Prescale Counter are synchronously reset on the next positive edge of
 *       the APB bus clock. The counters remain reset until TCR[1] is returned to zero.
 */
#define CTIMER_TCR_CRST(x)                       (((uint32_t)(((uint32_t)(x)) << CTIMER_TCR_CRST_SHIFT)) & CTIMER_TCR_CRST_MASK)
/*! @} */

/*! @name TC - Timer Counter */
/*! @{ */
#define CTIMER_TC_TCVAL_MASK                     (0xFFFFFFFFU)
#define CTIMER_TC_TCVAL_SHIFT                    (0U)
/*! TCVAL - Timer counter value.
 */
#define CTIMER_TC_TCVAL(x)                       (((uint32_t)(((uint32_t)(x)) << CTIMER_TC_TCVAL_SHIFT)) & CTIMER_TC_TCVAL_MASK)
/*! @} */

/*! @name PR - Prescale Register */
/*! @{ */
#define CTIMER_PR_PRVAL_MASK                     (0xFFFFFFFFU)
#define CTIMER_PR_PRVAL_SHIFT                    (0U)
/*! PRVAL - Prescale counter value.
 */
#define CTIMER_PR_PRVAL(x)                       (((uint32_t)(((uint32_t)(x)) << CTIMER_PR_PRVAL_SHIFT)) & CTIMER_PR_PRVAL_MASK)
/*! @} */

/*! @name PC - Prescale Counter */
/*! @{ */
#define CTIMER_PC_PCVAL_MASK                     (0xFFFFFFFFU)
#define CTIMER_PC_PCVAL_SHIFT                    (0U)
/*! PCVAL - Prescale counter value.
 */
#define CTIMER_PC_PCVAL(x)                       (((uint32_t)(((uint32_t)(x)) << CTIMER_PC_PCVAL_SHIFT)) & CTIMER_PC_PCVAL_MASK)
/*! @} */

/*! @name MCR - Match Control Register */
/*! @{ */
#define CTIMER_MCR_MR0I_MASK                     (0x1U)
#define CTIMER_MCR_MR0I_SHIFT                    (0U)
/*! MR0I - Interrupt on MR0: an interrupt is generated when MR0 matches the value in the TC.
 */
#define CTIMER_MCR_MR0I(x)                       (((uint32_t)(((uint32_t)(x)) << CTIMER_MCR_MR0I_SHIFT)) & CTIMER_MCR_MR0I_MASK)
#define CTIMER_MCR_MR0R_MASK                     (0x2U)
#define CTIMER_MCR_MR0R_SHIFT                    (1U)
/*! MR0R - Reset on MR0: the TC will be reset if MR0 matches it.
 */
#define CTIMER_MCR_MR0R(x)                       (((uint32_t)(((uint32_t)(x)) << CTIMER_MCR_MR0R_SHIFT)) & CTIMER_MCR_MR0R_MASK)
#define CTIMER_MCR_MR0S_MASK                     (0x4U)
#define CTIMER_MCR_MR0S_SHIFT                    (2U)
/*! MR0S - Stop on MR0: the TC and PC will be stopped and TCR[0] will be set to 0 if MR0 matches the TC.
 */
#define CTIMER_MCR_MR0S(x)                       (((uint32_t)(((uint32_t)(x)) << CTIMER_MCR_MR0S_SHIFT)) & CTIMER_MCR_MR0S_MASK)
#define CTIMER_MCR_MR1I_MASK                     (0x8U)
#define CTIMER_MCR_MR1I_SHIFT                    (3U)
/*! MR1I - Interrupt on MR1: an interrupt is generated when MR1 matches the value in the TC.
 */
#define CTIMER_MCR_MR1I(x)                       (((uint32_t)(((uint32_t)(x)) << CTIMER_MCR_MR1I_SHIFT)) & CTIMER_MCR_MR1I_MASK)
#define CTIMER_MCR_MR1R_MASK                     (0x10U)
#define CTIMER_MCR_MR1R_SHIFT                    (4U)
/*! MR1R - Reset on MR1: the TC will be reset if MR1 matches it.
 */
#define CTIMER_MCR_MR1R(x)                       (((uint32_t)(((uint32_t)(x)) << CTIMER_MCR_MR1R_SHIFT)) & CTIMER_MCR_MR1R_MASK)
#define CTIMER_MCR_MR1S_MASK                     (0x20U)
#define CTIMER_MCR_MR1S_SHIFT                    (5U)
/*! MR1S - Stop on MR1: the TC and PC will be stopped and TCR[0] will be set to 0 if MR1 matches the TC.
 */
#define CTIMER_MCR_MR1S(x)                       (((uint32_t)(((uint32_t)(x)) << CTIMER_MCR_MR1S_SHIFT)) & CTIMER_MCR_MR1S_MASK)
#define CTIMER_MCR_MR2I_MASK                     (0x40U)
#define CTIMER_MCR_MR2I_SHIFT                    (6U)
/*! MR2I - Interrupt on MR2: an interrupt is generated when MR2 matches the value in the TC.
 */
#define CTIMER_MCR_MR2I(x)                       (((uint32_t)(((uint32_t)(x)) << CTIMER_MCR_MR2I_SHIFT)) & CTIMER_MCR_MR2I_MASK)
#define CTIMER_MCR_MR2R_MASK                     (0x80U)
#define CTIMER_MCR_MR2R_SHIFT                    (7U)
/*! MR2R - Reset on MR2: the TC will be reset if MR2 matches it.
 */
#define CTIMER_MCR_MR2R(x)                       (((uint32_t)(((uint32_t)(x)) << CTIMER_MCR_MR2R_SHIFT)) & CTIMER_MCR_MR2R_MASK)
#define CTIMER_MCR_MR2S_MASK                     (0x100U)
#define CTIMER_MCR_MR2S_SHIFT                    (8U)
/*! MR2S - Stop on MR2: the TC and PC will be stopped and TCR[0] will be set to 0 if MR2 matches the TC.
 */
#define CTIMER_MCR_MR2S(x)                       (((uint32_t)(((uint32_t)(x)) << CTIMER_MCR_MR2S_SHIFT)) & CTIMER_MCR_MR2S_MASK)
#define CTIMER_MCR_MR3I_MASK                     (0x200U)
#define CTIMER_MCR_MR3I_SHIFT                    (9U)
/*! MR3I - Interrupt on MR3: an interrupt is generated when MR3 matches the value in the TC.
 */
#define CTIMER_MCR_MR3I(x)                       (((uint32_t)(((uint32_t)(x)) << CTIMER_MCR_MR3I_SHIFT)) & CTIMER_MCR_MR3I_MASK)
#define CTIMER_MCR_MR3R_MASK                     (0x400U)
#define CTIMER_MCR_MR3R_SHIFT                    (10U)
/*! MR3R - Reset on MR3: the TC will be reset if MR3 matches it.
 */
#define CTIMER_MCR_MR3R(x)                       (((uint32_t)(((uint32_t)(x)) << CTIMER_MCR_MR3R_SHIFT)) & CTIMER_MCR_MR3R_MASK)
#define CTIMER_MCR_MR3S_MASK                     (0x800U)
#define CTIMER_MCR_MR3S_SHIFT                    (11U)
/*! MR3S - Stop on MR3: the TC and PC will be stopped and TCR[0] will be set to 0 if MR3 matches the TC.
 */
#define CTIMER_MCR_MR3S(x)                       (((uint32_t)(((uint32_t)(x)) << CTIMER_MCR_MR3S_SHIFT)) & CTIMER_MCR_MR3S_MASK)
#define CTIMER_MCR_MR0RL_MASK                    (0x1000000U)
#define CTIMER_MCR_MR0RL_SHIFT                   (24U)
/*! MR0RL - Reload MR0 with the contents of the Match 0 Shadow Register when the TC is reset to zero
 *    (either via a match event or a write to bit 1 of the TCR).
 */
#define CTIMER_MCR_MR0RL(x)                      (((uint32_t)(((uint32_t)(x)) << CTIMER_MCR_MR0RL_SHIFT)) & CTIMER_MCR_MR0RL_MASK)
#define CTIMER_MCR_MR1RL_MASK                    (0x2000000U)
#define CTIMER_MCR_MR1RL_SHIFT                   (25U)
/*! MR1RL - Reload MR1 with the contents of the Match 1 Shadow Register when the TC is reset to zero
 *    (either via a match event or a write to bit 1 of the TCR).
 */
#define CTIMER_MCR_MR1RL(x)                      (((uint32_t)(((uint32_t)(x)) << CTIMER_MCR_MR1RL_SHIFT)) & CTIMER_MCR_MR1RL_MASK)
#define CTIMER_MCR_MR2RL_MASK                    (0x4000000U)
#define CTIMER_MCR_MR2RL_SHIFT                   (26U)
/*! MR2RL - Reload MR2 with the contents of the Match 2 Shadow Register when the TC is reset to zero
 *    (either via a match event or a write to bit 1 of the TCR).
 */
#define CTIMER_MCR_MR2RL(x)                      (((uint32_t)(((uint32_t)(x)) << CTIMER_MCR_MR2RL_SHIFT)) & CTIMER_MCR_MR2RL_MASK)
#define CTIMER_MCR_MR3RL_MASK                    (0x8000000U)
#define CTIMER_MCR_MR3RL_SHIFT                   (27U)
/*! MR3RL - Reload MR3 with the contents of the Match 3 Shadow Register when the TC is reset to zero
 *    (either via a match event or a write to bit 1 of the TCR).
 */
#define CTIMER_MCR_MR3RL(x)                      (((uint32_t)(((uint32_t)(x)) << CTIMER_MCR_MR3RL_SHIFT)) & CTIMER_MCR_MR3RL_MASK)
/*! @} */

/*! @name MR - Match Register . MR can be enabled through the MCR to reset the TC, stop both the TC and PC, and/or generate an interrupt every time MR matches the TC. */
/*! @{ */
#define CTIMER_MR_MATCH_MASK                     (0xFFFFFFFFU)
#define CTIMER_MR_MATCH_SHIFT                    (0U)
/*! MATCH - Timer counter match value.
 */
#define CTIMER_MR_MATCH(x)                       (((uint32_t)(((uint32_t)(x)) << CTIMER_MR_MATCH_SHIFT)) & CTIMER_MR_MATCH_MASK)
/*! @} */

/* The count of CTIMER_MR */
#define CTIMER_MR_COUNT                          (4U)

/*! @name CCR - Capture Control Register. The CCR controls which edges of the capture inputs are used to load the Capture Registers and whether or not an interrupt is generated when a capture takes place. */
/*! @{ */
#define CTIMER_CCR_CAP0RE_MASK                   (0x1U)
#define CTIMER_CCR_CAP0RE_SHIFT                  (0U)
/*! CAP0RE - Rising edge of capture channel 0: a sequence of 0 then 1 causes CR0 to be loaded with
 *    the contents of TC. 0 = disabled. 1 = enabled.
 */
#define CTIMER_CCR_CAP0RE(x)                     (((uint32_t)(((uint32_t)(x)) << CTIMER_CCR_CAP0RE_SHIFT)) & CTIMER_CCR_CAP0RE_MASK)
#define CTIMER_CCR_CAP0FE_MASK                   (0x2U)
#define CTIMER_CCR_CAP0FE_SHIFT                  (1U)
/*! CAP0FE - Falling edge of capture channel 0: a sequence of 1 then 0 causes CR0 to be loaded with
 *    the contents of TC. 0 = disabled. 1 = enabled.
 */
#define CTIMER_CCR_CAP0FE(x)                     (((uint32_t)(((uint32_t)(x)) << CTIMER_CCR_CAP0FE_SHIFT)) & CTIMER_CCR_CAP0FE_MASK)
#define CTIMER_CCR_CAP0I_MASK                    (0x4U)
#define CTIMER_CCR_CAP0I_SHIFT                   (2U)
/*! CAP0I - Generate interrupt on channel 0 capture event: a CR0 load generates an interrupt.
 */
#define CTIMER_CCR_CAP0I(x)                      (((uint32_t)(((uint32_t)(x)) << CTIMER_CCR_CAP0I_SHIFT)) & CTIMER_CCR_CAP0I_MASK)
#define CTIMER_CCR_CAP1RE_MASK                   (0x8U)
#define CTIMER_CCR_CAP1RE_SHIFT                  (3U)
/*! CAP1RE - Rising edge of capture channel 1: a sequence of 0 then 1 causes CR1 to be loaded with
 *    the contents of TC. 0 = disabled. 1 = enabled.
 */
#define CTIMER_CCR_CAP1RE(x)                     (((uint32_t)(((uint32_t)(x)) << CTIMER_CCR_CAP1RE_SHIFT)) & CTIMER_CCR_CAP1RE_MASK)
#define CTIMER_CCR_CAP1FE_MASK                   (0x10U)
#define CTIMER_CCR_CAP1FE_SHIFT                  (4U)
/*! CAP1FE - Falling edge of capture channel 1: a sequence of 1 then 0 causes CR1 to be loaded with
 *    the contents of TC. 0 = disabled. 1 = enabled.
 */
#define CTIMER_CCR_CAP1FE(x)                     (((uint32_t)(((uint32_t)(x)) << CTIMER_CCR_CAP1FE_SHIFT)) & CTIMER_CCR_CAP1FE_MASK)
#define CTIMER_CCR_CAP1I_MASK                    (0x20U)
#define CTIMER_CCR_CAP1I_SHIFT                   (5U)
/*! CAP1I - Generate interrupt on channel 1 capture event: a CR1 load generates an interrupt.
 */
#define CTIMER_CCR_CAP1I(x)                      (((uint32_t)(((uint32_t)(x)) << CTIMER_CCR_CAP1I_SHIFT)) & CTIMER_CCR_CAP1I_MASK)
#define CTIMER_CCR_CAP2RE_MASK                   (0x40U)
#define CTIMER_CCR_CAP2RE_SHIFT                  (6U)
/*! CAP2RE - Rising edge of capture channel 2: a sequence of 0 then 1 causes CR2 to be loaded with
 *    the contents of TC. 0 = disabled. 1 = enabled.
 */
#define CTIMER_CCR_CAP2RE(x)                     (((uint32_t)(((uint32_t)(x)) << CTIMER_CCR_CAP2RE_SHIFT)) & CTIMER_CCR_CAP2RE_MASK)
#define CTIMER_CCR_CAP2FE_MASK                   (0x80U)
#define CTIMER_CCR_CAP2FE_SHIFT                  (7U)
/*! CAP2FE - Falling edge of capture channel 2: a sequence of 1 then 0 causes CR2 to be loaded with
 *    the contents of TC. 0 = disabled. 1 = enabled.
 */
#define CTIMER_CCR_CAP2FE(x)                     (((uint32_t)(((uint32_t)(x)) << CTIMER_CCR_CAP2FE_SHIFT)) & CTIMER_CCR_CAP2FE_MASK)
#define CTIMER_CCR_CAP2I_MASK                    (0x100U)
#define CTIMER_CCR_CAP2I_SHIFT                   (8U)
/*! CAP2I - Generate interrupt on channel 2 capture event: a CR2 load generates an interrupt.
 */
#define CTIMER_CCR_CAP2I(x)                      (((uint32_t)(((uint32_t)(x)) << CTIMER_CCR_CAP2I_SHIFT)) & CTIMER_CCR_CAP2I_MASK)
#define CTIMER_CCR_CAP3RE_MASK                   (0x200U)
#define CTIMER_CCR_CAP3RE_SHIFT                  (9U)
/*! CAP3RE - Rising edge of capture channel 3: a sequence of 0 then 1 causes CR3 to be loaded with
 *    the contents of TC. 0 = disabled. 1 = enabled.
 */
#define CTIMER_CCR_CAP3RE(x)                     (((uint32_t)(((uint32_t)(x)) << CTIMER_CCR_CAP3RE_SHIFT)) & CTIMER_CCR_CAP3RE_MASK)
#define CTIMER_CCR_CAP3FE_MASK                   (0x400U)
#define CTIMER_CCR_CAP3FE_SHIFT                  (10U)
/*! CAP3FE - Falling edge of capture channel 3: a sequence of 1 then 0 causes CR3 to be loaded with
 *    the contents of TC. 0 = disabled. 1 = enabled.
 */
#define CTIMER_CCR_CAP3FE(x)                     (((uint32_t)(((uint32_t)(x)) << CTIMER_CCR_CAP3FE_SHIFT)) & CTIMER_CCR_CAP3FE_MASK)
#define CTIMER_CCR_CAP3I_MASK                    (0x800U)
#define CTIMER_CCR_CAP3I_SHIFT                   (11U)
/*! CAP3I - Generate interrupt on channel 3 capture event: a CR3 load generates an interrupt.
 */
#define CTIMER_CCR_CAP3I(x)                      (((uint32_t)(((uint32_t)(x)) << CTIMER_CCR_CAP3I_SHIFT)) & CTIMER_CCR_CAP3I_MASK)
/*! @} */

/*! @name CR - Capture Register . CR is loaded with the value of TC when there is an event on the CAPn. input. */
/*! @{ */
#define CTIMER_CR_CAP_MASK                       (0xFFFFFFFFU)
#define CTIMER_CR_CAP_SHIFT                      (0U)
/*! CAP - Timer counter capture value.
 */
#define CTIMER_CR_CAP(x)                         (((uint32_t)(((uint32_t)(x)) << CTIMER_CR_CAP_SHIFT)) & CTIMER_CR_CAP_MASK)
/*! @} */

/* The count of CTIMER_CR */
#define CTIMER_CR_COUNT                          (4U)

/*! @name EMR - External Match Register. The EMR controls the match function and the external match pins. */
/*! @{ */
#define CTIMER_EMR_EM0_MASK                      (0x1U)
#define CTIMER_EMR_EM0_SHIFT                     (0U)
/*! EM0 - External Match 0. This bit reflects the state of output MAT0, whether or not this output
 *    is connected to a pin. When a match occurs between the TC and MR0, this bit can either toggle,
 *    go LOW, go HIGH, or do nothing, as selected by EMR[5:4]. This bit is driven to the MAT pins if
 *    the match function is selected via IOCON. 0 = LOW. 1 = HIGH.
 */
#define CTIMER_EMR_EM0(x)                        (((uint32_t)(((uint32_t)(x)) << CTIMER_EMR_EM0_SHIFT)) & CTIMER_EMR_EM0_MASK)
#define CTIMER_EMR_EM1_MASK                      (0x2U)
#define CTIMER_EMR_EM1_SHIFT                     (1U)
/*! EM1 - External Match 1. This bit reflects the state of output MAT1, whether or not this output
 *    is connected to a pin. When a match occurs between the TC and MR1, this bit can either toggle,
 *    go LOW, go HIGH, or do nothing, as selected by EMR[7:6]. This bit is driven to the MAT pins if
 *    the match function is selected via IOCON. 0 = LOW. 1 = HIGH.
 */
#define CTIMER_EMR_EM1(x)                        (((uint32_t)(((uint32_t)(x)) << CTIMER_EMR_EM1_SHIFT)) & CTIMER_EMR_EM1_MASK)
#define CTIMER_EMR_EM2_MASK                      (0x4U)
#define CTIMER_EMR_EM2_SHIFT                     (2U)
/*! EM2 - External Match 2. This bit reflects the state of output MAT2, whether or not this output
 *    is connected to a pin. When a match occurs between the TC and MR2, this bit can either toggle,
 *    go LOW, go HIGH, or do nothing, as selected by EMR[9:8]. This bit is driven to the MAT pins if
 *    the match function is selected via IOCON. 0 = LOW. 1 = HIGH.
 */
#define CTIMER_EMR_EM2(x)                        (((uint32_t)(((uint32_t)(x)) << CTIMER_EMR_EM2_SHIFT)) & CTIMER_EMR_EM2_MASK)
#define CTIMER_EMR_EM3_MASK                      (0x8U)
#define CTIMER_EMR_EM3_SHIFT                     (3U)
/*! EM3 - External Match 3. This bit reflects the state of output MAT3, whether or not this output
 *    is connected to a pin. When a match occurs between the TC and MR3, this bit can either toggle,
 *    go LOW, go HIGH, or do nothing, as selected by MR[11:10]. This bit is driven to the MAT pins
 *    if the match function is selected via IOCON. 0 = LOW. 1 = HIGH.
 */
#define CTIMER_EMR_EM3(x)                        (((uint32_t)(((uint32_t)(x)) << CTIMER_EMR_EM3_SHIFT)) & CTIMER_EMR_EM3_MASK)
#define CTIMER_EMR_EMC0_MASK                     (0x30U)
#define CTIMER_EMR_EMC0_SHIFT                    (4U)
/*! EMC0 - External Match Control 0. Determines the functionality of External Match 0.
 *  0b00..Do Nothing.
 *  0b01..Clear. Clear the corresponding External Match bit/output to 0 (MAT0 pin is LOW if pinned out).
 *  0b10..Set. Set the corresponding External Match bit/output to 1 (MAT0 pin is HIGH if pinned out).
 *  0b11..Toggle. Toggle the corresponding External Match bit/output.
 */
#define CTIMER_EMR_EMC0(x)                       (((uint32_t)(((uint32_t)(x)) << CTIMER_EMR_EMC0_SHIFT)) & CTIMER_EMR_EMC0_MASK)
#define CTIMER_EMR_EMC1_MASK                     (0xC0U)
#define CTIMER_EMR_EMC1_SHIFT                    (6U)
/*! EMC1 - External Match Control 1. Determines the functionality of External Match 1.
 *  0b00..Do Nothing.
 *  0b01..Clear. Clear the corresponding External Match bit/output to 0 (MAT1 pin is LOW if pinned out).
 *  0b10..Set. Set the corresponding External Match bit/output to 1 (MAT1 pin is HIGH if pinned out).
 *  0b11..Toggle. Toggle the corresponding External Match bit/output.
 */
#define CTIMER_EMR_EMC1(x)                       (((uint32_t)(((uint32_t)(x)) << CTIMER_EMR_EMC1_SHIFT)) & CTIMER_EMR_EMC1_MASK)
#define CTIMER_EMR_EMC2_MASK                     (0x300U)
#define CTIMER_EMR_EMC2_SHIFT                    (8U)
/*! EMC2 - External Match Control 2. Determines the functionality of External Match 2.
 *  0b00..Do Nothing.
 *  0b01..Clear. Clear the corresponding External Match bit/output to 0 (MAT2 pin is LOW if pinned out).
 *  0b10..Set. Set the corresponding External Match bit/output to 1 (MAT2 pin is HIGH if pinned out).
 *  0b11..Toggle. Toggle the corresponding External Match bit/output.
 */
#define CTIMER_EMR_EMC2(x)                       (((uint32_t)(((uint32_t)(x)) << CTIMER_EMR_EMC2_SHIFT)) & CTIMER_EMR_EMC2_MASK)
#define CTIMER_EMR_EMC3_MASK                     (0xC00U)
#define CTIMER_EMR_EMC3_SHIFT                    (10U)
/*! EMC3 - External Match Control 3. Determines the functionality of External Match 3.
 *  0b00..Do Nothing.
 *  0b01..Clear. Clear the corresponding External Match bit/output to 0 (MAT3 pin is LOW if pinned out).
 *  0b10..Set. Set the corresponding External Match bit/output to 1 (MAT3 pin is HIGH if pinned out).
 *  0b11..Toggle. Toggle the corresponding External Match bit/output.
 */
#define CTIMER_EMR_EMC3(x)                       (((uint32_t)(((uint32_t)(x)) << CTIMER_EMR_EMC3_SHIFT)) & CTIMER_EMR_EMC3_MASK)
/*! @} */

/*! @name CTCR - Count Control Register. The CTCR selects between Timer and Counter mode, and in Counter mode selects the signal and edge(s) for counting. */
/*! @{ */
#define CTIMER_CTCR_CTMODE_MASK                  (0x3U)
#define CTIMER_CTCR_CTMODE_SHIFT                 (0U)
/*! CTMODE - Counter/Timer Mode This field selects which rising APB bus clock edges can increment
 *    Timer's Prescale Counter (PC), or clear PC and increment Timer Counter (TC). Timer Mode: the TC
 *    is incremented when the Prescale Counter matches the Prescale Register.
 *  0b00..Timer Mode. Incremented every rising APB bus clock edge.
 *  0b01..Counter Mode rising edge. TC is incremented on rising edges on the CAP input selected by bits 3:2.
 *  0b10..Counter Mode falling edge. TC is incremented on falling edges on the CAP input selected by bits 3:2.
 *  0b11..Counter Mode dual edge. TC is incremented on both edges on the CAP input selected by bits 3:2.
 */
#define CTIMER_CTCR_CTMODE(x)                    (((uint32_t)(((uint32_t)(x)) << CTIMER_CTCR_CTMODE_SHIFT)) & CTIMER_CTCR_CTMODE_MASK)
#define CTIMER_CTCR_CINSEL_MASK                  (0xCU)
#define CTIMER_CTCR_CINSEL_SHIFT                 (2U)
/*! CINSEL - Count Input Select When bits 1:0 in this register are not 00, these bits select which
 *    CAP pin is sampled for clocking. Note: If Counter mode is selected for a particular CAPn input
 *    in the CTCR, the 3 bits for that input in the Capture Control Register (CCR) must be
 *    programmed as 000. However, capture and/or interrupt can be selected for the other 3 CAPn inputs in the
 *    same timer.
 *  0b00..Channel 0. CAPn.0 for CTIMERn
 *  0b01..Channel 1. CAPn.1 for CTIMERn
 *  0b10..Channel 2. CAPn.2 for CTIMERn
 *  0b11..Channel 3. CAPn.3 for CTIMERn
 */
#define CTIMER_CTCR_CINSEL(x)                    (((uint32_t)(((uint32_t)(x)) << CTIMER_CTCR_CINSEL_SHIFT)) & CTIMER_CTCR_CINSEL_MASK)
#define CTIMER_CTCR_ENCC_MASK                    (0x10U)
#define CTIMER_CTCR_ENCC_SHIFT                   (4U)
/*! ENCC - Setting this bit to 1 enables clearing of the timer and the prescaler when the
 *    capture-edge event specified in bits 7:5 occurs.
 */
#define CTIMER_CTCR_ENCC(x)                      (((uint32_t)(((uint32_t)(x)) << CTIMER_CTCR_ENCC_SHIFT)) & CTIMER_CTCR_ENCC_MASK)
#define CTIMER_CTCR_SELCC_MASK                   (0xE0U)
#define CTIMER_CTCR_SELCC_SHIFT                  (5U)
/*! SELCC - Edge select. When bit 4 is 1, these bits select which capture input edge will cause the
 *    timer and prescaler to be cleared. These bits have no effect when bit 4 is low. Values 0x2 to
 *    0x3 and 0x6 to 0x7 are reserved.
 *  0b000..Channel 0 Rising Edge. Rising edge of the signal on capture channel 0 clears the timer (if bit 4 is set).
 *  0b001..Channel 0 Falling Edge. Falling edge of the signal on capture channel 0 clears the timer (if bit 4 is set).
 *  0b010..Channel 1 Rising Edge. Rising edge of the signal on capture channel 1 clears the timer (if bit 4 is set).
 *  0b011..Channel 1 Falling Edge. Falling edge of the signal on capture channel 1 clears the timer (if bit 4 is set).
 *  0b100..Channel 2 Rising Edge. Rising edge of the signal on capture channel 2 clears the timer (if bit 4 is set).
 *  0b101..Channel 2 Falling Edge. Falling edge of the signal on capture channel 2 clears the timer (if bit 4 is set).
 */
#define CTIMER_CTCR_SELCC(x)                     (((uint32_t)(((uint32_t)(x)) << CTIMER_CTCR_SELCC_SHIFT)) & CTIMER_CTCR_SELCC_MASK)
/*! @} */

/*! @name PWMC - PWM Control Register. This register enables PWM mode for the external match pins. */
/*! @{ */
#define CTIMER_PWMC_PWMEN0_MASK                  (0x1U)
#define CTIMER_PWMC_PWMEN0_SHIFT                 (0U)
/*! PWMEN0 - PWM mode enable for channel0.
 *  0b0..Match. CTIMERn_MAT0 is controlled by EM0.
 *  0b1..PWM. PWM mode is enabled for CTIMERn_MAT0.
 */
#define CTIMER_PWMC_PWMEN0(x)                    (((uint32_t)(((uint32_t)(x)) << CTIMER_PWMC_PWMEN0_SHIFT)) & CTIMER_PWMC_PWMEN0_MASK)
#define CTIMER_PWMC_PWMEN1_MASK                  (0x2U)
#define CTIMER_PWMC_PWMEN1_SHIFT                 (1U)
/*! PWMEN1 - PWM mode enable for channel1.
 *  0b0..Match. CTIMERn_MAT01 is controlled by EM1.
 *  0b1..PWM. PWM mode is enabled for CTIMERn_MAT1.
 */
#define CTIMER_PWMC_PWMEN1(x)                    (((uint32_t)(((uint32_t)(x)) << CTIMER_PWMC_PWMEN1_SHIFT)) & CTIMER_PWMC_PWMEN1_MASK)
#define CTIMER_PWMC_PWMEN2_MASK                  (0x4U)
#define CTIMER_PWMC_PWMEN2_SHIFT                 (2U)
/*! PWMEN2 - PWM mode enable for channel2.
 *  0b0..Match. CTIMERn_MAT2 is controlled by EM2.
 *  0b1..PWM. PWM mode is enabled for CTIMERn_MAT2.
 */
#define CTIMER_PWMC_PWMEN2(x)                    (((uint32_t)(((uint32_t)(x)) << CTIMER_PWMC_PWMEN2_SHIFT)) & CTIMER_PWMC_PWMEN2_MASK)
#define CTIMER_PWMC_PWMEN3_MASK                  (0x8U)
#define CTIMER_PWMC_PWMEN3_SHIFT                 (3U)
/*! PWMEN3 - PWM mode enable for channel3. Note: It is recommended to use match channel 3 to set the PWM cycle.
 *  0b0..Match. CTIMERn_MAT3 is controlled by EM3.
 *  0b1..PWM. PWM mode is enabled for CT132Bn_MAT3.
 */
#define CTIMER_PWMC_PWMEN3(x)                    (((uint32_t)(((uint32_t)(x)) << CTIMER_PWMC_PWMEN3_SHIFT)) & CTIMER_PWMC_PWMEN3_MASK)
/*! @} */

/*! @name MSR - Match Shadow Register */
/*! @{ */
#define CTIMER_MSR_SHADOW_MASK                   (0xFFFFFFFFU)
#define CTIMER_MSR_SHADOW_SHIFT                  (0U)
/*! SHADOW - Timer counter match shadow value.
 */
#define CTIMER_MSR_SHADOW(x)                     (((uint32_t)(((uint32_t)(x)) << CTIMER_MSR_SHADOW_SHIFT)) & CTIMER_MSR_SHADOW_MASK)
/*! @} */

/* The count of CTIMER_MSR */
#define CTIMER_MSR_COUNT                         (4U)


/*!
 * @}
 */ /* end of group CTIMER_Register_Masks */


/* CTIMER - Peripheral instance base addresses */
#if (__ARM_FEATURE_CMSE & 0x2)
  /** Peripheral CTIMER0 base address */
  #define CTIMER0_BASE                             (0x50008000u)
  /** Peripheral CTIMER0 base address */
  #define CTIMER0_BASE_NS                          (0x40008000u)
  /** Peripheral CTIMER0 base pointer */
  #define CTIMER0                                  ((CTIMER_Type *)CTIMER0_BASE)
  /** Peripheral CTIMER0 base pointer */
  #define CTIMER0_NS                               ((CTIMER_Type *)CTIMER0_BASE_NS)
  /** Peripheral CTIMER1 base address */
  #define CTIMER1_BASE                             (0x50009000u)
  /** Peripheral CTIMER1 base address */
  #define CTIMER1_BASE_NS                          (0x40009000u)
  /** Peripheral CTIMER1 base pointer */
  #define CTIMER1                                  ((CTIMER_Type *)CTIMER1_BASE)
  /** Peripheral CTIMER1 base pointer */
  #define CTIMER1_NS                               ((CTIMER_Type *)CTIMER1_BASE_NS)
  /** Peripheral CTIMER2 base address */
  #define CTIMER2_BASE                             (0x50028000u)
  /** Peripheral CTIMER2 base address */
  #define CTIMER2_BASE_NS                          (0x40028000u)
  /** Peripheral CTIMER2 base pointer */
  #define CTIMER2                                  ((CTIMER_Type *)CTIMER2_BASE)
  /** Peripheral CTIMER2 base pointer */
  #define CTIMER2_NS                               ((CTIMER_Type *)CTIMER2_BASE_NS)
  /** Peripheral CTIMER3 base address */
  #define CTIMER3_BASE                             (0x50029000u)
  /** Peripheral CTIMER3 base address */
  #define CTIMER3_BASE_NS                          (0x40029000u)
  /** Peripheral CTIMER3 base pointer */
  #define CTIMER3                                  ((CTIMER_Type *)CTIMER3_BASE)
  /** Peripheral CTIMER3 base pointer */
  #define CTIMER3_NS                               ((CTIMER_Type *)CTIMER3_BASE_NS)
  /** Peripheral CTIMER4 base address */
  #define CTIMER4_BASE                             (0x5002A000u)
  /** Peripheral CTIMER4 base address */
  #define CTIMER4_BASE_NS                          (0x4002A000u)
  /** Peripheral CTIMER4 base pointer */
  #define CTIMER4                                  ((CTIMER_Type *)CTIMER4_BASE)
  /** Peripheral CTIMER4 base pointer */
  #define CTIMER4_NS                               ((CTIMER_Type *)CTIMER4_BASE_NS)
  /** Array initializer of CTIMER peripheral base addresses */
  #define CTIMER_BASE_ADDRS                        { CTIMER0_BASE, CTIMER1_BASE, CTIMER2_BASE, CTIMER3_BASE, CTIMER4_BASE }
  /** Array initializer of CTIMER peripheral base pointers */
  #define CTIMER_BASE_PTRS                         { CTIMER0, CTIMER1, CTIMER2, CTIMER3, CTIMER4 }
  /** Array initializer of CTIMER peripheral base addresses */
  #define CTIMER_BASE_ADDRS_NS                     { CTIMER0_BASE_NS, CTIMER1_BASE_NS, CTIMER2_BASE_NS, CTIMER3_BASE_NS, CTIMER4_BASE_NS }
  /** Array initializer of CTIMER peripheral base pointers */
  #define CTIMER_BASE_PTRS_NS                      { CTIMER0_NS, CTIMER1_NS, CTIMER2_NS, CTIMER3_NS, CTIMER4_NS }
#else
  /** Peripheral CTIMER0 base address */
  #define CTIMER0_BASE                             (0x40008000u)
  /** Peripheral CTIMER0 base pointer */
  #define CTIMER0                                  ((CTIMER_Type *)CTIMER0_BASE)
  /** Peripheral CTIMER1 base address */
  #define CTIMER1_BASE                             (0x40009000u)
  /** Peripheral CTIMER1 base pointer */
  #define CTIMER1                                  ((CTIMER_Type *)CTIMER1_BASE)
  /** Peripheral CTIMER2 base address */
  #define CTIMER2_BASE                             (0x40028000u)
  /** Peripheral CTIMER2 base pointer */
  #define CTIMER2                                  ((CTIMER_Type *)CTIMER2_BASE)
  /** Peripheral CTIMER3 base address */
  #define CTIMER3_BASE                             (0x40029000u)
  /** Peripheral CTIMER3 base pointer */
  #define CTIMER3                                  ((CTIMER_Type *)CTIMER3_BASE)
  /** Peripheral CTIMER4 base address */
  #define CTIMER4_BASE                             (0x4002A000u)
  /** Peripheral CTIMER4 base pointer */
  #define CTIMER4                                  ((CTIMER_Type *)CTIMER4_BASE)
  /** Array initializer of CTIMER peripheral base addresses */
  #define CTIMER_BASE_ADDRS                        { CTIMER0_BASE, CTIMER1_BASE, CTIMER2_BASE, CTIMER3_BASE, CTIMER4_BASE }
  /** Array initializer of CTIMER peripheral base pointers */
  #define CTIMER_BASE_PTRS                         { CTIMER0, CTIMER1, CTIMER2, CTIMER3, CTIMER4 }
#endif
/** Interrupt vectors for the CTIMER peripheral type */
#define CTIMER_IRQS                              { CTIMER0_IRQn, CTIMER1_IRQn, CTIMER2_IRQn, CTIMER3_IRQn, CTIMER4_IRQn }

/*!
 * @}
 */ /* end of group CTIMER_Peripheral_Access_Layer */


/* ----------------------------------------------------------------------------
   -- DBGMAILBOX Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup DBGMAILBOX_Peripheral_Access_Layer DBGMAILBOX Peripheral Access Layer
 * @{
 */

/** DBGMAILBOX - Register Layout Typedef */
typedef struct {
  __IO uint32_t CSW;                               /**< CRC mode register, offset: 0x0 */
  __IO uint32_t REQUEST;                           /**< CRC seed register, offset: 0x4 */
  __IO uint32_t RETURN;                            /**< Return value from ROM., offset: 0x8 */
       uint8_t RESERVED_0[240];
  __I  uint32_t ID;                                /**< Identification register, offset: 0xFC */
} DBGMAILBOX_Type;

/* ----------------------------------------------------------------------------
   -- DBGMAILBOX Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup DBGMAILBOX_Register_Masks DBGMAILBOX Register Masks
 * @{
 */

/*! @name CSW - CRC mode register */
/*! @{ */
#define DBGMAILBOX_CSW_RESYNCH_REQ_MASK          (0x1U)
#define DBGMAILBOX_CSW_RESYNCH_REQ_SHIFT         (0U)
/*! RESYNCH_REQ - Debugger will set this bit to 1 to request a resynchronrisation
 */
#define DBGMAILBOX_CSW_RESYNCH_REQ(x)            (((uint32_t)(((uint32_t)(x)) << DBGMAILBOX_CSW_RESYNCH_REQ_SHIFT)) & DBGMAILBOX_CSW_RESYNCH_REQ_MASK)
#define DBGMAILBOX_CSW_REQ_PENDING_MASK          (0x2U)
#define DBGMAILBOX_CSW_REQ_PENDING_SHIFT         (1U)
/*! REQ_PENDING - Request is pending from debugger (i.e unread value in REQUEST)
 */
#define DBGMAILBOX_CSW_REQ_PENDING(x)            (((uint32_t)(((uint32_t)(x)) << DBGMAILBOX_CSW_REQ_PENDING_SHIFT)) & DBGMAILBOX_CSW_REQ_PENDING_MASK)
#define DBGMAILBOX_CSW_DBG_OR_ERR_MASK           (0x4U)
#define DBGMAILBOX_CSW_DBG_OR_ERR_SHIFT          (2U)
/*! DBG_OR_ERR - Debugger overrun error (previous REQUEST overwritten before being picked up by ROM)
 */
#define DBGMAILBOX_CSW_DBG_OR_ERR(x)             (((uint32_t)(((uint32_t)(x)) << DBGMAILBOX_CSW_DBG_OR_ERR_SHIFT)) & DBGMAILBOX_CSW_DBG_OR_ERR_MASK)
#define DBGMAILBOX_CSW_AHB_OR_ERR_MASK           (0x8U)
#define DBGMAILBOX_CSW_AHB_OR_ERR_SHIFT          (3U)
/*! AHB_OR_ERR - AHB overrun Error (Return value overwritten by ROM)
 */
#define DBGMAILBOX_CSW_AHB_OR_ERR(x)             (((uint32_t)(((uint32_t)(x)) << DBGMAILBOX_CSW_AHB_OR_ERR_SHIFT)) & DBGMAILBOX_CSW_AHB_OR_ERR_MASK)
#define DBGMAILBOX_CSW_SOFT_RESET_MASK           (0x10U)
#define DBGMAILBOX_CSW_SOFT_RESET_SHIFT          (4U)
/*! SOFT_RESET - Soft Reset for DM (write-only from AHB, not readable and selfclearing). A write to
 *    this bit will cause a soft reset for DM.
 */
#define DBGMAILBOX_CSW_SOFT_RESET(x)             (((uint32_t)(((uint32_t)(x)) << DBGMAILBOX_CSW_SOFT_RESET_SHIFT)) & DBGMAILBOX_CSW_SOFT_RESET_MASK)
#define DBGMAILBOX_CSW_CHIP_RESET_REQ_MASK       (0x20U)
#define DBGMAILBOX_CSW_CHIP_RESET_REQ_SHIFT      (5U)
/*! CHIP_RESET_REQ - Write only bit. Once written will cause the chip to reset (note that the DM is
 *    not reset by this reset as it is only resettable by a SOFT reset or a POR/BOD event)
 */
#define DBGMAILBOX_CSW_CHIP_RESET_REQ(x)         (((uint32_t)(((uint32_t)(x)) << DBGMAILBOX_CSW_CHIP_RESET_REQ_SHIFT)) & DBGMAILBOX_CSW_CHIP_RESET_REQ_MASK)
/*! @} */

/*! @name REQUEST - CRC seed register */
/*! @{ */
#define DBGMAILBOX_REQUEST_REQ_MASK              (0xFFFFFFFFU)
#define DBGMAILBOX_REQUEST_REQ_SHIFT             (0U)
/*! REQ - Request Value
 */
#define DBGMAILBOX_REQUEST_REQ(x)                (((uint32_t)(((uint32_t)(x)) << DBGMAILBOX_REQUEST_REQ_SHIFT)) & DBGMAILBOX_REQUEST_REQ_MASK)
/*! @} */

/*! @name RETURN - Return value from ROM. */
/*! @{ */
#define DBGMAILBOX_RETURN_RET_MASK               (0xFFFFFFFFU)
#define DBGMAILBOX_RETURN_RET_SHIFT              (0U)
/*! RET - The Return value from ROM.
 */
#define DBGMAILBOX_RETURN_RET(x)                 (((uint32_t)(((uint32_t)(x)) << DBGMAILBOX_RETURN_RET_SHIFT)) & DBGMAILBOX_RETURN_RET_MASK)
/*! @} */

/*! @name ID - Identification register */
/*! @{ */
#define DBGMAILBOX_ID_ID_MASK                    (0xFFFFFFFFU)
#define DBGMAILBOX_ID_ID_SHIFT                   (0U)
/*! ID - Identification value.
 */
#define DBGMAILBOX_ID_ID(x)                      (((uint32_t)(((uint32_t)(x)) << DBGMAILBOX_ID_ID_SHIFT)) & DBGMAILBOX_ID_ID_MASK)
/*! @} */


/*!
 * @}
 */ /* end of group DBGMAILBOX_Register_Masks */


/* DBGMAILBOX - Peripheral instance base addresses */
#if (__ARM_FEATURE_CMSE & 0x2)
  /** Peripheral DBGMAILBOX base address */
  #define DBGMAILBOX_BASE                          (0x5009C000u)
  /** Peripheral DBGMAILBOX base address */
  #define DBGMAILBOX_BASE_NS                       (0x4009C000u)
  /** Peripheral DBGMAILBOX base pointer */
  #define DBGMAILBOX                               ((DBGMAILBOX_Type *)DBGMAILBOX_BASE)
  /** Peripheral DBGMAILBOX base pointer */
  #define DBGMAILBOX_NS                            ((DBGMAILBOX_Type *)DBGMAILBOX_BASE_NS)
  /** Array initializer of DBGMAILBOX peripheral base addresses */
  #define DBGMAILBOX_BASE_ADDRS                    { DBGMAILBOX_BASE }
  /** Array initializer of DBGMAILBOX peripheral base pointers */
  #define DBGMAILBOX_BASE_PTRS                     { DBGMAILBOX }
  /** Array initializer of DBGMAILBOX peripheral base addresses */
  #define DBGMAILBOX_BASE_ADDRS_NS                 { DBGMAILBOX_BASE_NS }
  /** Array initializer of DBGMAILBOX peripheral base pointers */
  #define DBGMAILBOX_BASE_PTRS_NS                  { DBGMAILBOX_NS }
#else
  /** Peripheral DBGMAILBOX base address */
  #define DBGMAILBOX_BASE                          (0x4009C000u)
  /** Peripheral DBGMAILBOX base pointer */
  #define DBGMAILBOX                               ((DBGMAILBOX_Type *)DBGMAILBOX_BASE)
  /** Array initializer of DBGMAILBOX peripheral base addresses */
  #define DBGMAILBOX_BASE_ADDRS                    { DBGMAILBOX_BASE }
  /** Array initializer of DBGMAILBOX peripheral base pointers */
  #define DBGMAILBOX_BASE_PTRS                     { DBGMAILBOX }
#endif

/*!
 * @}
 */ /* end of group DBGMAILBOX_Peripheral_Access_Layer */


/* ----------------------------------------------------------------------------
   -- DMA Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup DMA_Peripheral_Access_Layer DMA Peripheral Access Layer
 * @{
 */

/** DMA - Register Layout Typedef */
typedef struct {
  __IO uint32_t CTRL;                              /**< DMA control., offset: 0x0 */
  __I  uint32_t INTSTAT;                           /**< Interrupt status., offset: 0x4 */
  __IO uint32_t SRAMBASE;                          /**< SRAM address of the channel configuration table., offset: 0x8 */
       uint8_t RESERVED_0[20];
  struct {                                         /* offset: 0x20, array step: 0x5C */
    __IO uint32_t ENABLESET;                         /**< Channel Enable read and Set for all DMA channels., array offset: 0x20, array step: 0x5C */
         uint8_t RESERVED_0[4];
    __O  uint32_t ENABLECLR;                         /**< Channel Enable Clear for all DMA channels., array offset: 0x28, array step: 0x5C */
         uint8_t RESERVED_1[4];
    __I  uint32_t ACTIVE;                            /**< Channel Active status for all DMA channels., array offset: 0x30, array step: 0x5C */
         uint8_t RESERVED_2[4];
    __I  uint32_t BUSY;                              /**< Channel Busy status for all DMA channels., array offset: 0x38, array step: 0x5C */
         uint8_t RESERVED_3[4];
    __IO uint32_t ERRINT;                            /**< Error Interrupt status for all DMA channels., array offset: 0x40, array step: 0x5C */
         uint8_t RESERVED_4[4];
    __IO uint32_t INTENSET;                          /**< Interrupt Enable read and Set for all DMA channels., array offset: 0x48, array step: 0x5C */
         uint8_t RESERVED_5[4];
    __O  uint32_t INTENCLR;                          /**< Interrupt Enable Clear for all DMA channels., array offset: 0x50, array step: 0x5C */
         uint8_t RESERVED_6[4];
    __IO uint32_t INTA;                              /**< Interrupt A status for all DMA channels., array offset: 0x58, array step: 0x5C */
         uint8_t RESERVED_7[4];
    __IO uint32_t INTB;                              /**< Interrupt B status for all DMA channels., array offset: 0x60, array step: 0x5C */
         uint8_t RESERVED_8[4];
    __O  uint32_t SETVALID;                          /**< Set ValidPending control bits for all DMA channels., array offset: 0x68, array step: 0x5C */
         uint8_t RESERVED_9[4];
    __O  uint32_t SETTRIG;                           /**< Set Trigger control bits for all DMA channels., array offset: 0x70, array step: 0x5C */
         uint8_t RESERVED_10[4];
    __O  uint32_t ABORT;                             /**< Channel Abort control for all DMA channels., array offset: 0x78, array step: 0x5C */
  } COMMON[1];
       uint8_t RESERVED_1[900];
  struct {                                         /* offset: 0x400, array step: 0x10 */
    __IO uint32_t CFG;                               /**< Configuration register for DMA channel ., array offset: 0x400, array step: 0x10 */
    __I  uint32_t CTLSTAT;                           /**< Control and status register for DMA channel ., array offset: 0x404, array step: 0x10 */
    __IO uint32_t XFERCFG;                           /**< Transfer configuration register for DMA channel ., array offset: 0x408, array step: 0x10 */
         uint8_t RESERVED_0[4];
  } CHANNEL[23];
} DMA_Type;

/* ----------------------------------------------------------------------------
   -- DMA Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup DMA_Register_Masks DMA Register Masks
 * @{
 */

/*! @name CTRL - DMA control. */
/*! @{ */
#define DMA_CTRL_ENABLE_MASK                     (0x1U)
#define DMA_CTRL_ENABLE_SHIFT                    (0U)
/*! ENABLE - DMA controller master enable.
 *  0b0..Disabled. The DMA controller is disabled. This clears any triggers that were asserted at the point when
 *       disabled, but does not prevent re-triggering when the DMA controller is re-enabled.
 *  0b1..Enabled. The DMA controller is enabled.
 */
#define DMA_CTRL_ENABLE(x)                       (((uint32_t)(((uint32_t)(x)) << DMA_CTRL_ENABLE_SHIFT)) & DMA_CTRL_ENABLE_MASK)
/*! @} */

/*! @name INTSTAT - Interrupt status. */
/*! @{ */
#define DMA_INTSTAT_ACTIVEINT_MASK               (0x2U)
#define DMA_INTSTAT_ACTIVEINT_SHIFT              (1U)
/*! ACTIVEINT - Summarizes whether any enabled interrupts (other than error interrupts) are pending.
 *  0b0..Not pending. No enabled interrupts are pending.
 *  0b1..Pending. At least one enabled interrupt is pending.
 */
#define DMA_INTSTAT_ACTIVEINT(x)                 (((uint32_t)(((uint32_t)(x)) << DMA_INTSTAT_ACTIVEINT_SHIFT)) & DMA_INTSTAT_ACTIVEINT_MASK)
#define DMA_INTSTAT_ACTIVEERRINT_MASK            (0x4U)
#define DMA_INTSTAT_ACTIVEERRINT_SHIFT           (2U)
/*! ACTIVEERRINT - Summarizes whether any error interrupts are pending.
 *  0b0..Not pending. No error interrupts are pending.
 *  0b1..Pending. At least one error interrupt is pending.
 */
#define DMA_INTSTAT_ACTIVEERRINT(x)              (((uint32_t)(((uint32_t)(x)) << DMA_INTSTAT_ACTIVEERRINT_SHIFT)) & DMA_INTSTAT_ACTIVEERRINT_MASK)
/*! @} */

/*! @name SRAMBASE - SRAM address of the channel configuration table. */
/*! @{ */
#define DMA_SRAMBASE_OFFSET_MASK                 (0xFFFFFE00U)
#define DMA_SRAMBASE_OFFSET_SHIFT                (9U)
/*! OFFSET - Address bits 31:9 of the beginning of the DMA descriptor table. For 18 channels, the
 *    table must begin on a 512 byte boundary.
 */
#define DMA_SRAMBASE_OFFSET(x)                   (((uint32_t)(((uint32_t)(x)) << DMA_SRAMBASE_OFFSET_SHIFT)) & DMA_SRAMBASE_OFFSET_MASK)
/*! @} */

/*! @name COMMON_ENABLESET - Channel Enable read and Set for all DMA channels. */
/*! @{ */
#define DMA_COMMON_ENABLESET_ENA_MASK            (0xFFFFFFFFU)
#define DMA_COMMON_ENABLESET_ENA_SHIFT           (0U)
/*! ENA - Enable for DMA channels. Bit n enables or disables DMA channel n. The number of bits =
 *    number of DMA channels in this device. Other bits are reserved. 0 = disabled. 1 = enabled.
 */
#define DMA_COMMON_ENABLESET_ENA(x)              (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ENABLESET_ENA_SHIFT)) & DMA_COMMON_ENABLESET_ENA_MASK)
/*! @} */

/* The count of DMA_COMMON_ENABLESET */
#define DMA_COMMON_ENABLESET_COUNT               (1U)

/*! @name COMMON_ENABLECLR - Channel Enable Clear for all DMA channels. */
/*! @{ */
#define DMA_COMMON_ENABLECLR_CLR_MASK            (0xFFFFFFFFU)
#define DMA_COMMON_ENABLECLR_CLR_SHIFT           (0U)
/*! CLR - Writing ones to this register clears the corresponding bits in ENABLESET0. Bit n clears
 *    the channel enable bit n. The number of bits = number of DMA channels in this device. Other bits
 *    are reserved.
 */
#define DMA_COMMON_ENABLECLR_CLR(x)              (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ENABLECLR_CLR_SHIFT)) & DMA_COMMON_ENABLECLR_CLR_MASK)
/*! @} */

/* The count of DMA_COMMON_ENABLECLR */
#define DMA_COMMON_ENABLECLR_COUNT               (1U)

/*! @name COMMON_ACTIVE - Channel Active status for all DMA channels. */
/*! @{ */
#define DMA_COMMON_ACTIVE_ACT_MASK               (0xFFFFFFFFU)
#define DMA_COMMON_ACTIVE_ACT_SHIFT              (0U)
/*! ACT - Active flag for DMA channel n. Bit n corresponds to DMA channel n. The number of bits =
 *    number of DMA channels in this device. Other bits are reserved. 0 = not active. 1 = active.
 */
#define DMA_COMMON_ACTIVE_ACT(x)                 (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ACTIVE_ACT_SHIFT)) & DMA_COMMON_ACTIVE_ACT_MASK)
/*! @} */

/* The count of DMA_COMMON_ACTIVE */
#define DMA_COMMON_ACTIVE_COUNT                  (1U)

/*! @name COMMON_BUSY - Channel Busy status for all DMA channels. */
/*! @{ */
#define DMA_COMMON_BUSY_BSY_MASK                 (0xFFFFFFFFU)
#define DMA_COMMON_BUSY_BSY_SHIFT                (0U)
/*! BSY - Busy flag for DMA channel n. Bit n corresponds to DMA channel n. The number of bits =
 *    number of DMA channels in this device. Other bits are reserved. 0 = not busy. 1 = busy.
 */
#define DMA_COMMON_BUSY_BSY(x)                   (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_BUSY_BSY_SHIFT)) & DMA_COMMON_BUSY_BSY_MASK)
/*! @} */

/* The count of DMA_COMMON_BUSY */
#define DMA_COMMON_BUSY_COUNT                    (1U)

/*! @name COMMON_ERRINT - Error Interrupt status for all DMA channels. */
/*! @{ */
#define DMA_COMMON_ERRINT_ERR_MASK               (0xFFFFFFFFU)
#define DMA_COMMON_ERRINT_ERR_SHIFT              (0U)
/*! ERR - Error Interrupt flag for DMA channel n. Bit n corresponds to DMA channel n. The number of
 *    bits = number of DMA channels in this device. Other bits are reserved. 0 = error interrupt is
 *    not active. 1 = error interrupt is active.
 */
#define DMA_COMMON_ERRINT_ERR(x)                 (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ERRINT_ERR_SHIFT)) & DMA_COMMON_ERRINT_ERR_MASK)
/*! @} */

/* The count of DMA_COMMON_ERRINT */
#define DMA_COMMON_ERRINT_COUNT                  (1U)

/*! @name COMMON_INTENSET - Interrupt Enable read and Set for all DMA channels. */
/*! @{ */
#define DMA_COMMON_INTENSET_INTEN_MASK           (0xFFFFFFFFU)
#define DMA_COMMON_INTENSET_INTEN_SHIFT          (0U)
/*! INTEN - Interrupt Enable read and set for DMA channel n. Bit n corresponds to DMA channel n. The
 *    number of bits = number of DMA channels in this device. Other bits are reserved. 0 =
 *    interrupt for DMA channel is disabled. 1 = interrupt for DMA channel is enabled.
 */
#define DMA_COMMON_INTENSET_INTEN(x)             (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTENSET_INTEN_SHIFT)) & DMA_COMMON_INTENSET_INTEN_MASK)
/*! @} */

/* The count of DMA_COMMON_INTENSET */
#define DMA_COMMON_INTENSET_COUNT                (1U)

/*! @name COMMON_INTENCLR - Interrupt Enable Clear for all DMA channels. */
/*! @{ */
#define DMA_COMMON_INTENCLR_CLR_MASK             (0xFFFFFFFFU)
#define DMA_COMMON_INTENCLR_CLR_SHIFT            (0U)
/*! CLR - Writing ones to this register clears corresponding bits in the INTENSET0. Bit n
 *    corresponds to DMA channel n. The number of bits = number of DMA channels in this device. Other bits are
 *    reserved.
 */
#define DMA_COMMON_INTENCLR_CLR(x)               (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTENCLR_CLR_SHIFT)) & DMA_COMMON_INTENCLR_CLR_MASK)
/*! @} */

/* The count of DMA_COMMON_INTENCLR */
#define DMA_COMMON_INTENCLR_COUNT                (1U)

/*! @name COMMON_INTA - Interrupt A status for all DMA channels. */
/*! @{ */
#define DMA_COMMON_INTA_IA_MASK                  (0xFFFFFFFFU)
#define DMA_COMMON_INTA_IA_SHIFT                 (0U)
/*! IA - Interrupt A status for DMA channel n. Bit n corresponds to DMA channel n. The number of
 *    bits = number of DMA channels in this device. Other bits are reserved. 0 = the DMA channel
 *    interrupt A is not active. 1 = the DMA channel interrupt A is active.
 */
#define DMA_COMMON_INTA_IA(x)                    (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTA_IA_SHIFT)) & DMA_COMMON_INTA_IA_MASK)
/*! @} */

/* The count of DMA_COMMON_INTA */
#define DMA_COMMON_INTA_COUNT                    (1U)

/*! @name COMMON_INTB - Interrupt B status for all DMA channels. */
/*! @{ */
#define DMA_COMMON_INTB_IB_MASK                  (0xFFFFFFFFU)
#define DMA_COMMON_INTB_IB_SHIFT                 (0U)
/*! IB - Interrupt B status for DMA channel n. Bit n corresponds to DMA channel n. The number of
 *    bits = number of DMA channels in this device. Other bits are reserved. 0 = the DMA channel
 *    interrupt B is not active. 1 = the DMA channel interrupt B is active.
 */
#define DMA_COMMON_INTB_IB(x)                    (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_INTB_IB_SHIFT)) & DMA_COMMON_INTB_IB_MASK)
/*! @} */

/* The count of DMA_COMMON_INTB */
#define DMA_COMMON_INTB_COUNT                    (1U)

/*! @name COMMON_SETVALID - Set ValidPending control bits for all DMA channels. */
/*! @{ */
#define DMA_COMMON_SETVALID_SV_MASK              (0xFFFFFFFFU)
#define DMA_COMMON_SETVALID_SV_SHIFT             (0U)
/*! SV - SETVALID control for DMA channel n. Bit n corresponds to DMA channel n. The number of bits
 *    = number of DMA channels in this device. Other bits are reserved. 0 = no effect. 1 = sets the
 *    VALIDPENDING control bit for DMA channel n
 */
#define DMA_COMMON_SETVALID_SV(x)                (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_SETVALID_SV_SHIFT)) & DMA_COMMON_SETVALID_SV_MASK)
/*! @} */

/* The count of DMA_COMMON_SETVALID */
#define DMA_COMMON_SETVALID_COUNT                (1U)

/*! @name COMMON_SETTRIG - Set Trigger control bits for all DMA channels. */
/*! @{ */
#define DMA_COMMON_SETTRIG_TRIG_MASK             (0xFFFFFFFFU)
#define DMA_COMMON_SETTRIG_TRIG_SHIFT            (0U)
/*! TRIG - Set Trigger control bit for DMA channel 0. Bit n corresponds to DMA channel n. The number
 *    of bits = number of DMA channels in this device. Other bits are reserved. 0 = no effect. 1 =
 *    sets the TRIG bit for DMA channel n.
 */
#define DMA_COMMON_SETTRIG_TRIG(x)               (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_SETTRIG_TRIG_SHIFT)) & DMA_COMMON_SETTRIG_TRIG_MASK)
/*! @} */

/* The count of DMA_COMMON_SETTRIG */
#define DMA_COMMON_SETTRIG_COUNT                 (1U)

/*! @name COMMON_ABORT - Channel Abort control for all DMA channels. */
/*! @{ */
#define DMA_COMMON_ABORT_ABORTCTRL_MASK          (0xFFFFFFFFU)
#define DMA_COMMON_ABORT_ABORTCTRL_SHIFT         (0U)
/*! ABORTCTRL - Abort control for DMA channel 0. Bit n corresponds to DMA channel n. 0 = no effect.
 *    1 = aborts DMA operations on channel n.
 */
#define DMA_COMMON_ABORT_ABORTCTRL(x)            (((uint32_t)(((uint32_t)(x)) << DMA_COMMON_ABORT_ABORTCTRL_SHIFT)) & DMA_COMMON_ABORT_ABORTCTRL_MASK)
/*! @} */

/* The count of DMA_COMMON_ABORT */
#define DMA_COMMON_ABORT_COUNT                   (1U)

/*! @name CHANNEL_CFG - Configuration register for DMA channel . */
/*! @{ */
#define DMA_CHANNEL_CFG_PERIPHREQEN_MASK         (0x1U)
#define DMA_CHANNEL_CFG_PERIPHREQEN_SHIFT        (0U)
/*! PERIPHREQEN - Peripheral request Enable. If a DMA channel is used to perform a memory-to-memory
 *    move, any peripheral DMA request associated with that channel can be disabled to prevent any
 *    interaction between the peripheral and the DMA controller.
 *  0b0..Disabled. Peripheral DMA requests are disabled.
 *  0b1..Enabled. Peripheral DMA requests are enabled.
 */
#define DMA_CHANNEL_CFG_PERIPHREQEN(x)           (((uint32_t)(((uint32_t)(x)) << DMA_CHANNEL_CFG_PERIPHREQEN_SHIFT)) & DMA_CHANNEL_CFG_PERIPHREQEN_MASK)
#define DMA_CHANNEL_CFG_HWTRIGEN_MASK            (0x2U)
#define DMA_CHANNEL_CFG_HWTRIGEN_SHIFT           (1U)
/*! HWTRIGEN - Hardware Triggering Enable for this channel.
 *  0b0..Disabled. Hardware triggering is not used.
 *  0b1..Enabled. Use hardware triggering.
 */
#define DMA_CHANNEL_CFG_HWTRIGEN(x)              (((uint32_t)(((uint32_t)(x)) << DMA_CHANNEL_CFG_HWTRIGEN_SHIFT)) & DMA_CHANNEL_CFG_HWTRIGEN_MASK)
#define DMA_CHANNEL_CFG_TRIGPOL_MASK             (0x10U)
#define DMA_CHANNEL_CFG_TRIGPOL_SHIFT            (4U)
/*! TRIGPOL - Trigger Polarity. Selects the polarity of a hardware trigger for this channel.
 *  0b0..Active low - falling edge. Hardware trigger is active low or falling edge triggered, based on TRIGTYPE.
 *  0b1..Active high - rising edge. Hardware trigger is active high or rising edge triggered, based on TRIGTYPE.
 */
#define DMA_CHANNEL_CFG_TRIGPOL(x)               (((uint32_t)(((uint32_t)(x)) << DMA_CHANNEL_CFG_TRIGPOL_SHIFT)) & DMA_CHANNEL_CFG_TRIGPOL_MASK)
#define DMA_CHANNEL_CFG_TRIGTYPE_MASK            (0x20U)
#define DMA_CHANNEL_CFG_TRIGTYPE_SHIFT           (5U)
/*! TRIGTYPE - Trigger Type. Selects hardware trigger as edge triggered or level triggered.
 *  0b0..Edge. Hardware trigger is edge triggered. Transfers will be initiated and completed, as specified for a single trigger.
 *  0b1..Level. Hardware trigger is level triggered. Note that when level triggering without burst (BURSTPOWER =
 *       0) is selected, only hardware triggers should be used on that channel. Transfers continue as long as the
 *       trigger level is asserted. Once the trigger is de-asserted, the transfer will be paused until the trigger
 *       is, again, asserted. However, the transfer will not be paused until any remaining transfers within the
 *       current BURSTPOWER length are completed.
 */
#define DMA_CHANNEL_CFG_TRIGTYPE(x)              (((uint32_t)(((uint32_t)(x)) << DMA_CHANNEL_CFG_TRIGTYPE_SHIFT)) & DMA_CHANNEL_CFG_TRIGTYPE_MASK)
#define DMA_CHANNEL_CFG_TRIGBURST_MASK           (0x40U)
#define DMA_CHANNEL_CFG_TRIGBURST_SHIFT          (6U)
/*! TRIGBURST - Trigger Burst. Selects whether hardware triggers cause a single or burst transfer.
 *  0b0..Single transfer. Hardware trigger causes a single transfer.
 *  0b1..Burst transfer. When the trigger for this channel is set to edge triggered, a hardware trigger causes a
 *       burst transfer, as defined by BURSTPOWER. When the trigger for this channel is set to level triggered, a
 *       hardware trigger causes transfers to continue as long as the trigger is asserted, unless the transfer is
 *       complete.
 */
#define DMA_CHANNEL_CFG_TRIGBURST(x)             (((uint32_t)(((uint32_t)(x)) << DMA_CHANNEL_CFG_TRIGBURST_SHIFT)) & DMA_CHANNEL_CFG_TRIGBURST_MASK)
#define DMA_CHANNEL_CFG_BURSTPOWER_MASK          (0xF00U)
#define DMA_CHANNEL_CFG_BURSTPOWER_SHIFT         (8U)
/*! BURSTPOWER - Burst Power is used in two ways. It always selects the address wrap size when
 *    SRCBURSTWRAP and/or DSTBURSTWRAP modes are selected (see descriptions elsewhere in this register).
 *    When the TRIGBURST field elsewhere in this register = 1, Burst Power selects how many
 *    transfers are performed for each DMA trigger. This can be used, for example, with peripherals that
 *    contain a FIFO that can initiate a DMA operation when the FIFO reaches a certain level. 0000:
 *    Burst size = 1 (20). 0001: Burst size = 2 (21). 0010: Burst size = 4 (22). 1010: Burst size =
 *    1024 (210). This corresponds to the maximum supported transfer count. others: not supported. The
 *    total transfer length as defined in the XFERCOUNT bits in the XFERCFG register must be an even
 *    multiple of the burst size.
 */
#define DMA_CHANNEL_CFG_BURSTPOW×]¹ç^›Ê×¬¢h­µçSPÓÑU—Ô‘TQ“Q×ÔÒQ•
ÌUJCB‹ÊˆH‘TQ“QÈH]šY\ˆÝ]\È›YËƒBˆ
ˆŒK‹ÛØÚÈœ™\]Y[˜ÞH\È›ÝÝX›KƒBˆ
ˆŒ‹‘]šY\ˆÛØÚÈ\ÈÝX›KƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÓPÓÑU—Ô‘TQ“QÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÓPÓÑU—Ô‘TQ“Q×ÔÒQ•
JH	ˆÖTÐÓÓ—ÓPÓÑU—Ô‘TQ“Q×ÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHÐÕÓÑUˆHÐÕÔÓHÛØÚÈ]šY\ˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÔÐÕÓÑU—ÑU—ÓPTÒÈ
‘•JCBˆÙYš[™HÖTÐÓÓ—ÔÐÕÓÑU—ÑU—ÔÒQ•
JCB‹ÊˆHUˆHÛØÚÈ]šY\ˆ˜[YKƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÔÐÕÓÑU—ÑUŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÔÐÕÓÑU—ÑU—ÔÒQ•
JH	ˆÖTÐÓÓ—ÔÐÕÓÑU—ÑU—ÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÔÐÕÓÑU—Ô‘TÑUÓPTÒÈ
ŒJCBˆÙYš[™HÖTÐÓÓ—ÔÐÕÓÑU—Ô‘TÑUÔÒQ•
ŽUJCB‹ÊˆH‘TÑUH™\Ù]ÈH]šY\ˆÛÝ[\‹ƒBˆ
ˆŒK‹‘]šY\ˆ\È™\Ù]ƒBˆ
ˆŒ‹‘]šY\ˆ\È›Ý™\Ù]ƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÔÐÕÓÑU—Ô‘TÑU

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÔÐÕÓÑU—Ô‘TÑUÔÒQ•
JH	ˆÖTÐÓÓ—ÔÐÕÓÑU—Ô‘TÑUÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÔÐÕÓÑU—ÒSÓPTÒÈ
JCBˆÙYš[™HÖTÐÓÓ—ÔÐÕÓÑU—ÒSÔÒQ•
ÌJCB‹ÊˆHSH[ÈH]šY\ˆÛÝ[\‹ƒBˆ
ˆŒK‹‘]šY\ˆÛØÚÈ\ÈÝÜYƒBˆ
ˆŒ‹‘]šY\ˆÛØÚÈ\È[›š[™ËƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÔÐÕÓÑU—ÒS

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÔÐÕÓÑU—ÒSÔÒQ•
JH	ˆÖTÐÓÓ—ÔÐÕÓÑU—ÒSÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÔÐÕÓÑU—Ô‘TQ“Q×ÓPTÒÈ
JCBˆÙYš[™HÖTÐÓÓ—ÔÐÕÓÑU—Ô‘TQ“Q×ÔÒQ•
ÌUJCB‹ÊˆH‘TQ“QÈH]šY\ˆÝ]\È›YËƒBˆ
ˆŒK‹ÛØÚÈœ™\]Y[˜ÞH\È›ÝÝX›KƒBˆ
ˆŒ‹‘]šY\ˆÛØÚÈ\ÈÝX›KƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÔÐÕÓÑU—Ô‘TQ“QÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÔÐÕÓÑU—Ô‘TQ“Q×ÔÒQ•
JH	ˆÖTÐÓÓ—ÔÐÕÓÑU—Ô‘TQ“Q×ÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHÑSÐÓÑUˆHÑSÈÛØÚÈ]šY\ˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÔÑSÐÓÑU—ÑU—ÓPTÒÈ
‘•JCBˆÙYš[™HÖTÐÓÓ—ÔÑSÐÓÑU—ÑU—ÔÒQ•
JCB‹ÊˆHUˆHÛØÚÈ]šY\ˆ˜[YKƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÔÑSÐÓÑU—ÑUŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÔÑSÐÓÑU—ÑU—ÔÒQ•
JH	ˆÖTÐÓÓ—ÔÑSÐÓÑU—ÑU—ÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÔÑSÐÓÑU—Ô‘TÑUÓPTÒÈ
ŒJCBˆÙYš[™HÖTÐÓÓ—ÔÑSÐÓÑU—Ô‘TÑUÔÒQ•
ŽUJCB‹ÊˆH‘TÑUH™\Ù]ÈH]šY\ˆÛÝ[\‹ƒBˆ
ˆŒK‹‘]šY\ˆ\È™\Ù]ƒBˆ
ˆŒ‹‘]šY\ˆ\È›Ý™\Ù]ƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÔÑSÐÓÑU—Ô‘TÑU

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÔÑSÐÓÑU—Ô‘TÑUÔÒQ•
JH	ˆÖTÐÓÓ—ÔÑSÐÓÑU—Ô‘TÑUÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÔÑSÐÓÑU—ÒSÓPTÒÈ
JCBˆÙYš[™HÖTÐÓÓ—ÔÑSÐÓÑU—ÒSÔÒQ•
ÌJCB‹ÊˆHSH[ÈH]šY\ˆÛÝ[\‹ƒBˆ
ˆŒK‹‘]šY\ˆÛØÚÈ\ÈÝÜYƒBˆ
ˆŒ‹‘]šY\ˆÛØÚÈ\È[›š[™ËƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÔÑSÐÓÑU—ÒS

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÔÑSÐÓÑU—ÒSÔÒQ•
JH	ˆÖTÐÓÓ—ÔÑSÐÓÑU—ÒSÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÔÑSÐÓÑU—Ô‘TQ“Q×ÓPTÒÈ
JCBˆÙYš[™HÖTÐÓÓ—ÔÑSÐÓÑU—Ô‘TQ“Q×ÔÒQ•
ÌUJCB‹ÊˆH‘TQ“QÈH]šY\ˆÝ]\È›YËƒBˆ
ˆŒK‹ÛØÚÈœ™\]Y[˜ÞH\È›ÝÝX›KƒBˆ
ˆŒ‹‘]šY\ˆÛØÚÈ\ÈÝX›KƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÔÑSÐÓÑU—Ô‘TQ“QÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÔÑSÐÓÑU—Ô‘TQ“Q×ÔÒQ•
JH	ˆÖTÐÓÓ—ÔÑSÐÓÑU—Ô‘TQ“Q×ÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHÓÑUˆHÛØÚÈ]šY\ˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÔÓÑU—ÑU—ÓPTÒÈ
‘•JCBˆÙYš[™HÖTÐÓÓ—ÔÓÑU—ÑU—ÔÒQ•
JCB‹ÊˆHUˆHÛØÚÈ]šY\ˆ˜[YKƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÔÓÑU—ÑUŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÔÓÑU—ÑU—ÔÒQ•
JH	ˆÖTÐÓÓ—ÔÓÑU—ÑU—ÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÔÓÑU—Ô‘TÑUÓPTÒÈ
ŒJCBˆÙYš[™HÖTÐÓÓ—ÔÓÑU—Ô‘TÑUÔÒQ•
ŽUJCB‹ÊˆH‘TÑUH™\Ù]ÈH]šY\ˆÛÝ[\‹ƒBˆ
ˆŒK‹‘]šY\ˆ\È™\Ù]ƒBˆ
ˆŒ‹‘]šY\ˆ\È›Ý™\Ù]ƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÔÓÑU—Ô‘TÑU

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÔÓÑU—Ô‘TÑUÔÒQ•
JH	ˆÖTÐÓÓ—ÔÓÑU—Ô‘TÑUÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÔÓÑU—ÒSÓPTÒÈ
JCBˆÙYš[™HÖTÐÓÓ—ÔÓÑU—ÒSÔÒQ•
ÌJCB‹ÊˆHSH[ÈH]šY\ˆÛÝ[\‹ƒBˆ
ˆŒK‹‘]šY\ˆÛØÚÈ\ÈÝÜYƒBˆ
ˆŒ‹‘]šY\ˆÛØÚÈ\È[›š[™ËƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÔÓÑU—ÒS

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÔÓÑU—ÒSÔÒQ•
JH	ˆÖTÐÓÓ—ÔÓÑU—ÒSÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÔÓÑU—Ô‘TQ“Q×ÓPTÒÈ
JCBˆÙYš[™HÖTÐÓÓ—ÔÓÑU—Ô‘TQ“Q×ÔÒQ•
ÌUJCB‹ÊˆH‘TQ“QÈH]šY\ˆÝ]\È›YËƒBˆ
ˆŒK‹ÛØÚÈœ™\]Y[˜ÞH\È›ÝÝX›KƒBˆ
ˆŒ‹‘]šY\ˆÛØÚÈ\ÈÝX›KƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÔÓÑU—Ô‘TQ“QÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÔÓÑU—Ô‘TQ“Q×ÔÒQ•
JH	ˆÖTÐÓÓ—ÔÓÑU—Ô‘TQ“Q×ÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHÓÐÒÑÑS•TUSÐÒÓÕUHÛÛ›ÛÛØÚÈÛÛ™šYÝ\˜][Ûˆ™YÚ\Ý\œÈXØÙ\ÜÈ
ZÙHU‹ÑS
H
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÐÓÐÒÑÑS•TUSÐÒÓÕUÐÓÐÒÑÑS•TUSÐÒÓÕUÓPTÒÈ
‘‘‘‘‘‘‘•JCBˆÙYš[™HÖTÐÓÓ—ÐÓÐÒÑÑS•TUSÐÒÓÕUÐÓÐÒÑÑS•TUSÐÒÓÕUÔÒQ•
JCB‹ÊˆHÓÐÒÑÑS•TUSÐÒÓÕUHÛÛ›ÛÛØÚÈÛÛ™šYÝ\˜][Ûˆ™YÚ\Ý\œÈXØÙ\ÜÈ
ZÙHU‹ÑS
KƒBˆ
ˆŒK‹\]H[ÛØÚÈÛÛ™šYÝ\˜][Û‹ƒBˆ
ˆŒ‹˜[\™Ø\™HÛØÚÈÛÛ™šYÜ\˜][Ûˆ\™Hœ™Y^™KƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÐÓÐÒÑÑS•TUSÐÒÓÕUÐÓÐÒÑÑS•TUSÐÒÓÕU

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÐÓÐÒÑÑS•TUSÐÒÓÕUÐÓÐÒÑÑS•TUSÐÒÓÕUÔÒQ•
JH	ˆÖTÐÓÓ—ÐÓÐÒÑÑS•TUSÐÒÓÕUÐÓÐÒÑÑS•TUSÐÒÓÕUÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YH“PÐÔˆH“PÈÛÛ™šYÝ\˜][Ûˆ™YÚ\Ý\ˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HÖTÐÓÓ—Ñ“PÐÔ—Ñ“TÒSWÓPTÒÈ
ŒJCBˆÙYš[™HÖTÐÓÓ—Ñ“PÐÔ—Ñ“TÒSWÔÒQ•
L•JCB‹ÊˆH“TÒSHH›\ÚY[[ÜžHXØÙ\ÜÈ[YKƒBˆ
ˆŒ‹ŒHÞ\Ý[HÛØÚÈ›\ÚXØÙ\ÜÈ[YH
›ÜˆÞ\Ý[HÛØÚÈ˜]\È\ÈLHRŠKƒBˆ
ˆŒK‹ŒˆÞ\Ý[HÛØÚÜÈ›\ÚXØÙ\ÜÈ[YH
›ÜˆÞ\Ý[HÛØÚÈ˜]\È\ÈŒˆRŠKƒBˆ
ˆŒL‹ŒÈÞ\Ý[HÛØÚÜÈ›\ÚXØÙ\ÜÈ[YH
›ÜˆÞ\Ý[HÛØÚÈ˜]\È\ÈÌÈRŠKƒBˆ
ˆŒLK‹Þ\Ý[HÛØÚÜÈ›\ÚXØÙ\ÜÈ[YH
›ÜˆÞ\Ý[HÛØÚÈ˜]\È\ÈRŠKƒBˆ
ˆŒL‹HÞ\Ý[HÛØÚÜÈ›\ÚXØÙ\ÜÈ[YH
›ÜˆÞ\Ý[HÛØÚÈ˜]\È\ÈMHRŠKƒBˆ
ˆŒLK‹ˆÞ\Ý[HÛØÚÜÈ›\ÚXØÙ\ÜÈ[YH
›ÜˆÞ\Ý[HÛØÚÈ˜]\È\ÈˆRŠKƒBˆ
ˆŒLL‹ÈÞ\Ý[HÛØÚÜÈ›\ÚXØÙ\ÜÈ[YH
›ÜˆÞ\Ý[HÛØÚÈ˜]\È\ÈÍÈRŠKƒBˆ
ˆŒLLK‹ŽÞ\Ý[HÛØÚÜÈ›\ÚXØÙ\ÜÈ[YH
›ÜˆÞ\Ý[HÛØÚÈ˜]\È\ÈRŠKƒBˆ
ˆŒL‹ŽHÞ\Ý[HÛØÚÜÈ›\ÚXØÙ\ÜÈ[YH
›ÜˆÞ\Ý[HÛØÚÈ˜]\È\ÈLRŠKƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—Ñ“PÐÔ—Ñ“TÒSJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—Ñ“PÐÔ—Ñ“TÒSWÔÒQ•
JH	ˆÖTÐÓÓ—Ñ“PÐÔ—Ñ“TÒSWÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHTÐŒ‘QQÓÐÕ“HTÐŒ™YYÛØÚÈÛÛ›Û
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÕTÐŒ‘QQÓÐÕ“ÐTÑ”×ÑU—Ó‘QQÓ×ÓPTÒÈ
UJCBˆÙYš[™HÖTÐÓÓ—ÕTÐŒ‘QQÓÐÕ“ÐTÑ”×ÑU—Ó‘QQÓ×ÔÒQ•
JCB‹ÊˆHTÑ”×ÑU—Ó‘QQÓÈHTÐŒ]šXÙHTÐŒÓ‘QQÓÈÚYÛ˜[ÛÛ›Û‹ƒBˆ
ˆŒ‹•[™\ˆ\™Ø\™HÛÛ›ÛƒBˆ
ˆŒK‹‘›Ü˜ÙYYÚƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÕTÐŒ‘QQÓÐÕ“ÐTÑ”×ÑU—Ó‘QQÓÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÕTÐŒ‘QQÓÐÕ“ÐTÑ”×ÑU—Ó‘QQÓ×ÔÒQ•
JH	ˆÖTÐÓÓ—ÕTÐŒ‘QQÓÐÕ“ÐTÑ”×ÑU—Ó‘QQÓ×ÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÕTÐŒ‘QQÓÐÕ“ÔÓÑ”×ÑU—Ó‘QQÓ×ÓPTÒÈ
•JCBˆÙYš[™HÖTÐÓÓ—ÕTÐŒ‘QQÓÐÕ“ÔÓÑ”×ÑU—Ó‘QQÓ×ÔÒQ•
UJCB‹ÊˆHÓÑ”×ÑU—Ó‘QQÓÈHTÐŒ]šXÙHTÐŒÓ‘QQÓÈÛ\š]H›ÜˆšYÙÙ\š[™ÈHTÐŒØZÙK]\[\œ\‹ƒBˆ
ˆŒ‹‘˜[[™ÈYÙHÙˆ]šXÙHTÐŒÓ‘QQÓÈšYÙÙ\œÈØZÙK]\ƒBˆ
ˆŒK‹”š\Ú[™ÈYÙHÙˆ]šXÙHTÐŒÓ‘QQÓÈšYÙÙ\œÈØZÙK]\ƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÕTÐŒ‘QQÓÐÕ“ÔÓÑ”×ÑU—Ó‘QQÓÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÕTÐŒ‘QQÓÐÕ“ÔÓÑ”×ÑU—Ó‘QQÓ×ÔÒQ•
JH	ˆÖTÐÓÓ—ÕTÐŒ‘QQÓÐÕ“ÔÓÑ”×ÑU—Ó‘QQÓ×ÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÕTÐŒ‘QQÓÐÕ“ÐTÑ”×ÒÔÕÓ‘QQÓ×ÓPTÒÈ
JCBˆÙYš[™HÖTÐÓÓ—ÕTÐŒ‘QQÓÐÕ“ÐTÑ”×ÒÔÕÓ‘QQÓ×ÔÒQ•
•JCB‹ÊˆHTÑ”×ÒÔÕÓ‘QQÓÈHTÐŒÜÝTÐŒÓ‘QQÓÈÚYÛ˜[ÛÛ›Û‹ƒBˆ
ˆŒ‹•[™\ˆ\™Ø\™HÛÛ›ÛƒBˆ
ˆŒK‹‘›Ü˜ÙYYÚƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÕTÐŒ‘QQÓÐÕ“ÐTÑ”×ÒÔÕÓ‘QQÓÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÕTÐŒ‘QQÓÐÕ“ÐTÑ”×ÒÔÕÓ‘QQÓ×ÔÒQ•
JH	ˆÖTÐÓÓ—ÕTÐŒ‘QQÓÐÕ“ÐTÑ”×ÒÔÕÓ‘QQÓ×ÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÕTÐŒ‘QQÓÐÕ“ÔÓÑ”×ÒÔÕÓ‘QQÓ×ÓPTÒÈ
JCBˆÙYš[™HÖTÐÓÓ—ÕTÐŒ‘QQÓÐÕ“ÔÓÑ”×ÒÔÕÓ‘QQÓ×ÔÒQ•
ÕJCB‹ÊˆHÓÑ”×ÒÔÕÓ‘QQÓÈHTÐŒÜÝTÐŒÓ‘QQÓÈÛ\š]H›ÜˆšYÙÙ\š[™ÈHTÐŒØZÙK]\[\œ\‹ƒBˆ
ˆŒ‹‘˜[[™ÈYÙHÙˆ]šXÙHTÐŒÓ‘QQÓÈšYÙÙ\œÈØZÙK]\ƒBˆ
ˆŒK‹”š\Ú[™ÈYÙHÙˆ]šXÙHTÐŒÓ‘QQÓÈšYÙÙ\œÈØZÙK]\ƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÕTÐŒ‘QQÓÐÕ“ÔÓÑ”×ÒÔÕÓ‘QQÓÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÕTÐŒ‘QQÓÐÕ“ÔÓÑ”×ÒÔÕÓ‘QQÓ×ÔÒQ•
JH	ˆÖTÐÓÓ—ÕTÐŒ‘QQÓÐÕ“ÔÓÑ”×ÒÔÕÓ‘QQÓ×ÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHTÐŒ‘QQÓÔÕUHTÐŒ™YYÛØÚÈÝ]\È
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÕTÐŒ‘QQÓÔÕUÑU—Ó‘QQÓ×ÓPTÒÈ
UJCBˆÙYš[™HÖTÐÓÓ—ÕTÐŒ‘QQÓÔÕUÑU—Ó‘QQÓ×ÔÒQ•
JCB‹ÊˆHU—Ó‘QQÓÈHTÐŒ]šXÙHTÐŒÓ‘QQÓÈÚYÛ˜[Ý]\Î‹ƒBˆ
ˆŒK‹•TÐŒ]šXÙHÛØÚÈ\ÈYÚƒBˆ
ˆŒ‹•TÐŒ]šXÙHÛØÚÈ\ÈÝËƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÕTÐŒ‘QQÓÔÕUÑU—Ó‘QQÓÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÕTÐŒ‘QQÓÔÕUÑU—Ó‘QQÓ×ÔÒQ•
JH	ˆÖTÐÓÓ—ÕTÐŒ‘QQÓÔÕUÑU—Ó‘QQÓ×ÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÕTÐŒ‘QQÓÔÕUÒÔÕÓ‘QQÓ×ÓPTÒÈ
•JCBˆÙYš[™HÖTÐÓÓ—ÕTÐŒ‘QQÓÔÕUÒÔÕÓ‘QQÓ×ÔÒQ•
UJCB‹ÊˆHÔÕÓ‘QQÓÈHTÐŒÜÝTÐŒÓ‘QQÓÈÚYÛ˜[Ý]\Î‹ƒBˆ
ˆŒK‹•TÐŒÜÝÛØÚÈ\ÈYÚƒBˆ
ˆŒ‹•TÐŒÜÝÛØÚÈ\ÈÝËƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÕTÐŒ‘QQÓÔÕUÒÔÕÓ‘QQÓÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÕTÐŒ‘QQÓÔÕUÒÔÕÓ‘QQÓ×ÔÒQ•
JH	ˆÖTÐÓÓ—ÕTÐŒ‘QQÓÔÕUÒÔÕÓ‘QQÓ×ÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YH“PÑ“TÒH“PÙ›\ÚÛÛ›Û
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HÖTÐÓÓ—Ñ“PÑ“TÒÑ“TÒÓPTÒÈ
UJCBˆÙYš[™HÖTÐÓÓ—Ñ“PÑ“TÒÑ“TÒÔÒQ•
JCB‹ÊˆH“TÒH›\ÚÛÛ›ÛBˆ
ˆŒK‹‘›\ÚH“PÈY™™\ˆÛÛ[ËƒBˆ
ˆŒ‹“›ÈXÝ[Ûˆ\È\™›Ü›YYƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—Ñ“PÑ“TÒÑ“TÒ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—Ñ“PÑ“TÒÑ“TÒÔÒQ•
JH	ˆÖTÐÓÓ—Ñ“PÑ“TÒÑ“TÒÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHPÓÒSÈHPÓÈÛÛ›Û
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÓPÓÒS×ÓPÓÒS×ÓPTÒÈ
UJCBˆÙYš[™HÖTÐÓÓ—ÓPÓÒS×ÓPÓÒS×ÔÒQ•
JCB‹ÊˆHPÓÒSÈHPÓÈÛÛ›ÛƒBˆ
ˆŒ‹š[œ][ÙKƒBˆ
ˆŒK‹›Ý]][ÙKƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÓPÓÒS×ÓPÓÒSÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÓPÓÒS×ÓPÓÒS×ÔÒQ•
JH	ˆÖTÐÓÓ—ÓPÓÒS×ÓPÓÒS×ÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHTÐŒS‘QQÓÐÕ“HTÐŒH™YYÛØÚÈÛÛ›Û
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÕTÐŒS‘QQÓÐÕ“ÐTÒ×ÑU—Ó‘QQÓ×ÓPTÒÈ
UJCBˆÙYš[™HÖTÐÓÓ—ÕTÐŒS‘QQÓÐÕ“ÐTÒ×ÑU—Ó‘QQÓ×ÔÒQ•
JCB‹ÊˆHTÒ×ÑU—Ó‘QQÓÈHTÐŒH]šXÙH™YYØÛØÚÈÚYÛ˜[ÛÛ›ÛƒBˆ
ˆŒ‹’ÔÕÓ‘QQÓÈ\È[™\ˆ\™Ø\™HÛÛ›ÛƒBˆ
ˆŒK‹’ÔÕÓ‘QQÓÈ\È›Ü˜ÙYYÚƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÕTÐŒS‘QQÓÐÕ“ÐTÒ×ÑU—Ó‘QQÓÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÕTÐŒS‘QQÓÐÕ“ÐTÒ×ÑU—Ó‘QQÓ×ÔÒQ•
JH	ˆÖTÐÓÓ—ÕTÐŒS‘QQÓÐÕ“ÐTÒ×ÑU—Ó‘QQÓ×ÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÕTÐŒS‘QQÓÐÕ“ÔÓÒ×ÑU—Ó‘QQÓ×ÓPTÒÈ
•JCBˆÙYš[™HÖTÐÓÓ—ÕTÐŒS‘QQÓÐÕ“ÔÓÒ×ÑU—Ó‘QQÓ×ÔÒQ•
UJCB‹ÊˆHÓÒ×ÑU—Ó‘QQÓÈHTÐŒH]šXÙH™YYÛØÚÈÛ\š]H›ÜˆšYÙÙ\š[™ÈHTÐŒWÓ‘QQÓÈØZÙK]\[\œ\ƒBˆ
ˆŒ‹‘˜[[™ÈYÙHÙˆU—Ó‘QQÓÈšYÙÙ\œÈØZÙK]\ƒBˆ
ˆŒK‹”š\Ú[™ÈYÙHÙˆU—Ó‘QQÓÈšYÙÙ\œÈØZÙK]\ƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÕTÐŒS‘QQÓÐÕ“ÔÓÒ×ÑU—Ó‘QQÓÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÕTÐŒS‘QQÓÐÕ“ÔÓÒ×ÑU—Ó‘QQÓ×ÔÒQ•
JH	ˆÖTÐÓÓ—ÕTÐŒS‘QQÓÐÕ“ÔÓÒ×ÑU—Ó‘QQÓ×ÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÕTÐŒS‘QQÓÐÕ“ÐTÒ×ÒÔÕÓ‘QQÓ×ÓPTÒÈ
JCBˆÙYš[™HÖTÐÓÓ—ÕTÐŒS‘QQÓÐÕ“ÐTÒ×ÒÔÕÓ‘QQÓ×ÔÒQ•
•JCB‹ÊˆHTÒ×ÒÔÕÓ‘QQÓÈHTÐŒHÜÝ™YYÛØÚÈÚYÛ˜[ÛÛ›ÛƒBˆ
ˆŒ‹’ÔÕÓ‘QQÓÈ\È[™\ˆ\™Ø\™HÛÛ›ÛƒBˆ
ˆŒK‹’ÔÕÓ‘QQÓÈ\È›Ü˜ÙYYÚƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÕTÐŒS‘QQÓÐÕ“ÐTÒ×ÒÔÕÓ‘QQÓÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÕTÐŒS‘QQÓÐÕ“ÐTÒ×ÒÔÕÓ‘QQÓ×ÔÒQ•
JH	ˆÖTÐÓÓ—ÕTÐŒS‘QQÓÐÕ“ÐTÒ×ÒÔÕÓ‘QQÓ×ÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÕTÐŒS‘QQÓÐÕ“ÔÓÒ×ÒÔÕÓ‘QQÓ×ÓPTÒÈ
JCBˆÙYš[™HÖTÐÓÓ—ÕTÐŒS‘QQÓÐÕ“ÔÓÒ×ÒÔÕÓ‘QQÓ×ÔÒQ•
ÕJCB‹ÊˆHÓÒ×ÒÔÕÓ‘QQÓÈHTÐŒHÜÝ™YYÛØÚÈÛ\š]H›ÜˆšYÙÙ\š[™ÈHTÐŒWÓ‘QQÓÈØZÙK]\[\œ\ƒBˆ
ˆŒ‹‘˜[[™ÈYÙHÙˆÔÕÓ‘QQÓÈšYÙÙ\œÈØZÙK]\ƒBˆ
ˆŒK‹”š\Ú[™ÈYÙHÙˆÔÕÓ‘QQÓÈšYÙÙ\œÈØZÙK]\ƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÕTÐŒS‘QQÓÐÕ“ÔÓÒ×ÒÔÕÓ‘QQÓÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÕTÐŒS‘QQÓÐÕ“ÔÓÒ×ÒÔÕÓ‘QQÓ×ÔÒQ•
JH	ˆÖTÐÓÓ—ÕTÐŒS‘QQÓÐÕ“ÔÓÒ×ÒÔÕÓ‘QQÓ×ÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÕTÐŒS‘QQÓÐÕ“Ò×ÑU—ÕÐRÑUTÓ—ÓPTÒÈ
LJCBˆÙYš[™HÖTÐÓÓ—ÕTÐŒS‘QQÓÐÕ“Ò×ÑU—ÕÐRÑUTÓ—ÔÒQ•
JCB‹ÊˆH×ÑU—ÕÐRÑUTÓˆHÛÙØ\™HÝ™\œšYHÙˆ]šXÙHÛÛ›Û\ˆHØZÙH\ÙÚXËƒBˆ
ˆŒ‹‘›Ü˜Ù\ÈTÐŒWÔHÈØZÙK]\ƒBˆ
ˆŒK‹“›Ü›X[TÐŒWÔH™Z]š[Ü‹ƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÕTÐŒS‘QQÓÐÕ“Ò×ÑU—ÕÐRÑUTÓŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÕTÐŒS‘QQÓÐÕ“Ò×ÑU—ÕÐRÑUTÓ—ÔÒQ•
JH	ˆÖTÐÓÓ—ÕTÐŒS‘QQÓÐÕ“Ò×ÑU—ÕÐRÑUTÓ—ÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHTÐŒS‘QQÓÔÕUHTÐŒH™YYÛØÚÈÝ]\È
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÕTÐŒS‘QQÓÔÕUÑU—Ó‘QQÓ×ÓPTÒÈ
UJCBˆÙYš[™HÖTÐÓÓ—ÕTÐŒS‘QQÓÔÕUÑU—Ó‘QQÓ×ÔÒQ•
JCB‹ÊˆHU—Ó‘QQÓÈHTÐŒH]šXÙH™YYØÛØÚÈÚYÛ˜[Ý]\Î‹ƒBˆ
ˆŒK‹‘U—Ó‘QQÓÈ\ÈYÚƒBˆ
ˆŒ‹‘U—Ó‘QQÓÈ\ÈÝËƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÕTÐŒS‘QQÓÔÕUÑU—Ó‘QQÓÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÕTÐŒS‘QQÓÔÕUÑU—Ó‘QQÓ×ÔÒQ•
JH	ˆÖTÐÓÓ—ÕTÐŒS‘QQÓÔÕUÑU—Ó‘QQÓ×ÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÕTÐŒS‘QQÓÔÕUÒÔÕÓ‘QQÓ×ÓPTÒÈ
•JCBˆÙYš[™HÖTÐÓÓ—ÕTÐŒS‘QQÓÔÕUÒÔÕÓ‘QQÓ×ÔÒQ•
UJCB‹ÊˆHÔÕÓ‘QQÓÈHTÐŒHÜÝ™YYØÛØÚÈÚYÛ˜[Ý]\Î‹ƒBˆ
ˆŒK‹’ÔÕÓ‘QQÓÈ\ÈYÚƒBˆ
ˆŒ‹’ÔÕÓ‘QQÓÈ\ÈÝËƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÕTÐŒS‘QQÓÔÕUÒÔÕÓ‘QQÓÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÕTÐŒS‘QQÓÔÕUÒÔÕÓ‘QQÓ×ÔÒQ•
JH	ˆÖTÐÓÓ—ÕTÐŒS‘QQÓÔÕUÒÔÕÓ‘QQÓ×ÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHÑSÐÓÐÕ“HÑSÈÐÓÒSˆ\ÙH[™[^HÛÛ›Û
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÔÑSÐÓÐÕ“ÐÐÓ×Ñ•—ÔTÑWÓPTÒÈ
ÕJCBˆÙYš[™HÖTÐÓÓ—ÔÑSÐÓÐÕ“ÐÐÓ×Ñ•—ÔTÑWÔÒQ•
JCB‹ÊˆHÐÓ×Ñ•—ÔTÑHH›ÙÜ˜[[XX›H[^H˜[YHžHÚXÚØÛ×Ú[—Ùˆ\È\ÙK\ÚYYÚ]™YØ\™ÈØÛ×Ú[‹ƒBˆ
ˆŒ‹ŒYÜ™YHÚYƒBˆ
ˆŒK‹ŽLYÜ™YHÚYƒBˆ
ˆŒL‹ŒNYÜ™YHÚYƒBˆ
ˆŒLK‹ŒÌYÜ™YHÚYƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÔÑSÐÓÐÕ“ÐÐÓ×Ñ•—ÔTÑJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÔÑSÐÓÐÕ“ÐÐÓ×Ñ•—ÔTÑWÔÒQ•
JH	ˆÖTÐÓÓ—ÔÑSÐÓÐÕ“ÐÐÓ×Ñ•—ÔTÑWÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÔÑSÐÓÐÕ“ÐÐÓ×ÔÐSTWÔTÑWÓPTÒÈ
ÕJCBˆÙYš[™HÖTÐÓÓ—ÔÑSÐÓÐÕ“ÐÐÓ×ÔÐSTWÔTÑWÔÒQ•
•JCB‹ÊˆHÐÓ×ÔÐSTWÔTÑHH›ÙÜ˜[[XX›H[^H˜[YHžHÚXÚØÛ×Ú[—ÜØ[\H\È[^YYÚ]™YØ\™ÈØÛ×Ú[‹ƒBˆ
ˆŒ‹ŒYÜ™YHÚYƒBˆ
ˆŒK‹ŽLYÜ™YHÚYƒBˆ
ˆŒL‹ŒNYÜ™YHÚYƒBˆ
ˆŒLK‹ŒÌYÜ™YHÚYƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÔÑSÐÓÐÕ“ÐÐÓ×ÔÐSTWÔTÑJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÔÑSÐÓÐÕ“ÐÐÓ×ÔÐSTWÔTÑWÔÒQ•
JH	ˆÖTÐÓÓ—ÔÑSÐÓÐÕ“ÐÐÓ×ÔÐSTWÔTÑWÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÔÑSÐÓÐÕ“ÔTÑWÐPÕU‘WÓPTÒÈ
JCBˆÙYš[™HÖTÐÓÓ—ÔÑSÐÓÐÕ“ÔTÑWÐPÕU‘WÔÒQ•
ÕJCB‹ÊˆHTÑWÐPÕU‘HH[˜X›\ÈH[^\ÈÐÓ×Ñ•—ÔTÑH[™ÐÓ×ÔÐSTWÔTÑKƒBˆ
ˆŒ‹ž\\ÜÙYƒBˆ
ˆŒK‹XÝ]˜]\È\ÙHÚYÙÚXËˆÚ[ˆXÝ]™KHÛØÚÈ]šY\ˆ\ÈXÝ]™H[™\ÙH[^\È\™H[˜X›YƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÔÑSÐÓÐÕ“ÔTÑWÐPÕU‘J
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÔÑSÐÓÐÕ“ÔTÑWÐPÕU‘WÔÒQ•
JH	ˆÖTÐÓÓ—ÔÑSÐÓÐÕ“ÔTÑWÐPÕU‘WÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÔÑSÐÓÐÕ“ÐÐÓ×Ñ•—ÑSVWÓPTÒÈ
QŒJCBˆÙYš[™HÖTÐÓÓ—ÔÑSÐÓÐÕ“ÐÐÓ×Ñ•—ÑSVWÔÒQ•
M•JCB‹ÊˆHÐÓ×Ñ•—ÑSVHH›ÙÜ˜[[XX›H[^H˜[YHžHÚXÚØÛ×Ú[—Ùˆ\È[^YYÚ]™YØ\™ÈØÛ×Ú[‹ƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÔÑSÐÓÐÕ“ÐÐÓ×Ñ•—ÑSVJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÔÑSÐÓÐÕ“ÐÐÓ×Ñ•—ÑSVWÔÒQ•
JH	ˆÖTÐÓÓ—ÔÑSÐÓÐÕ“ÐÐÓ×Ñ•—ÑSVWÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÔÑSÐÓÐÕ“ÐÐÓ×Ñ•—ÑSVWÐPÕU‘WÓPTÒÈ
JCBˆÙYš[™HÖTÐÓÓ—ÔÑSÐÓÐÕ“ÐÐÓ×Ñ•—ÑSVWÐPÕU‘WÔÒQ•
ŒÕJCB‹ÊˆHÐÓ×Ñ•—ÑSVWÐPÕU‘HH[˜X›\Èš]™H[^K\ÈÛÛ›ÛYžHHÐÓ×Ñ•—ÑSVHšY[ƒBˆ
ˆŒK‹‘[˜X›Hš]™H[^KƒBˆ
ˆŒ‹‘\ØX›Hš]™H[^KƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÔÑSÐÓÐÕ“ÐÐÓ×Ñ•—ÑSVWÐPÕU‘J
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÔÑSÐÓÐÕ“ÐÐÓ×Ñ•—ÑSVWÐPÕU‘WÔÒQ•
JH	ˆÖTÐÓÓ—ÔÑSÐÓÐÕ“ÐÐÓ×Ñ•—ÑSVWÐPÕU‘WÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÔÑSÐÓÐÕ“ÐÐÓ×ÔÐSTWÑSVWÓPTÒÈ
QŒJCBˆÙYš[™HÖTÐÓÓ—ÔÑSÐÓÐÕ“ÐÐÓ×ÔÐSTWÑSVWÔÒQ•
JCB‹ÊˆHÐÓ×ÔÐSTWÑSVHH›ÙÜ˜[[XX›H[^H˜[YHžHÚXÚØÛ×Ú[—ÜØ[\H\È[^YYÚ]™YØ\™ÈØÛ×Ú[‹ƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÔÑSÐÓÐÕ“ÐÐÓ×ÔÐSTWÑSVJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÔÑSÐÓÐÕ“ÐÐÓ×ÔÐSTWÑSVWÔÒQ•
JH	ˆÖTÐÓÓ—ÔÑSÐÓÐÕ“ÐÐÓ×ÔÐSTWÑSVWÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÔÑSÐÓÐÕ“ÐÐÓ×ÔÐSTWÑSVWÐPÕU‘WÓPTÒÈ
JCBˆÙYš[™HÖTÐÓÓ—ÔÑSÐÓÐÕ“ÐÐÓ×ÔÐSTWÑSVWÐPÕU‘WÔÒQ•
ÌUJCB‹ÊˆHÐÓ×ÔÐSTWÑSVWÐPÕU‘HH[˜X›\ÈØ[\H[^K\ÈÛÛ›ÛYžHHÐÓ×ÔÐSTWÑSVHšY[ƒBˆ
ˆŒK‹‘[˜X›\ÈØ[\H[^KƒBˆ
ˆŒ‹‘\ØX›\ÈØ[\H[^KƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÔÑSÐÓÐÕ“ÐÐÓ×ÔÐSTWÑSVWÐPÕU‘J
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÔÑSÐÓÐÕ“ÐÐÓ×ÔÐSTWÑSVWÐPÕU‘WÔÒQ•
JH	ˆÖTÐÓÓ—ÔÑSÐÓÐÕ“ÐÐÓ×ÔÐSTWÑSVWÐPÕU‘WÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHPÕ“HHMLHÛÛ›Û
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÔPÕ“ÔÑS—ÓPTÒÈ
•JCBˆÙYš[™HÖTÐÓÓ—ÔPÕ“ÔÑS—ÔÒQ•
JCB‹ÊˆHÑSˆH˜[™ÚYÙ[XÝˆ˜[YKƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÔPÕ“ÔÑSŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÔPÕ“ÔÑS—ÔÒQ•
JH	ˆÖTÐÓÓ—ÔPÕ“ÔÑS—ÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÔPÕ“ÔÑSWÓPTÒÈ
ÑŒJCBˆÙYš[™HÖTÐÓÓ—ÔPÕ“ÔÑSWÔÒQ•
JCB‹ÊˆHÑSHH˜[™ÚYÙ[XÝH˜[YKƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÔPÕ“ÔÑSJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÔPÕ“ÔÑSWÔÒQ•
JH	ˆÖTÐÓÓ—ÔPÕ“ÔÑSWÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÔPÕ“ÔÑSÓPTÒÈ
ÐÌJCBˆÙYš[™HÖTÐÓÓ—ÔPÕ“ÔÑSÔÒQ•
LJCB‹ÊˆHÑSH˜[™ÚYÙ[XÝ˜[YKƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÔPÕ“ÔÑS

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÔPÕ“ÔÑSÔÒQ•
JH	ˆÖTÐÓÓ—ÔPÕ“ÔÑSÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÔPÕ“Ð–TTÔÔÓPTÒÈ
JCBˆÙYš[™HÖTÐÓÓ—ÔPÕ“Ð–TTÔÔÔÒQ•
MUJCB‹ÊˆH–TTÔÔHž\\ÜÈ[œ]ÛØÚÈ\ÈÙ[\™XÝHÈHÝ]]
Y˜][
KƒBˆ
ˆŒK‹”[œ]ÛØÚÈ\ÈÙ[\™XÝHÈHÝ]]ƒBˆ
ˆŒ‹\ÙHƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÔPÕ“Ð–TTÔÔ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÔPÕ“Ð–TTÔÔÔÒQ•
JH	ˆÖTÐÓÓ—ÔPÕ“Ð–TTÔÔÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÔPÕ“Ð–TTÔÔÔÕUŒ—ÓPTÒÈ
LJCBˆÙYš[™HÖTÐÓÓ—ÔPÕ“Ð–TTÔÔÔÕUŒ—ÔÒQ•
M•JCB‹ÊˆH–TTÔÔÔÕUŒˆHž\\ÜÈÙˆH]šYKXžKLˆ]šY\ˆ[ˆHÜÝY]šY\‹ƒBˆ
ˆŒK‹˜ž\\ÜÈÙˆH]šYKXžKLˆ]šY\ˆ[ˆHÜÝY]šY\‹ƒBˆ
ˆŒ‹\ÙHH]šYKXžKLˆ]šY\ˆ[ˆHÜÝY]šY\‹ƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÔPÕ“Ð–TTÔÔÔÕUŒŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÔPÕ“Ð–TTÔÔÔÕUŒ—ÔÒQ•
JH	ˆÖTÐÓÓ—ÔPÕ“Ð–TTÔÔÔÕUŒ—ÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÔPÕ“ÓSUTÑ‘—ÓPTÒÈ
ŒJCBˆÙYš[™HÖTÐÓÓ—ÔPÕ“ÓSUTÑ‘—ÔÒQ•
MÕJCB‹ÊˆHSUTÑ‘ˆH[]\ÛÙ™ˆHH[ˆÜ™XYÜXÝ[H[™œ˜XÝ[Û˜[\XØ][ÛœËƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÔPÕ“ÓSUTÑ‘Š
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÔPÕ“ÓSUTÑ‘—ÔÒQ•
JH	ˆÖTÐÓÓ—ÔPÕ“ÓSUTÑ‘—ÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÔPÕ“Ð•ÑT‘PÕÓPTÒÈ
JCBˆÙYš[™HÖTÐÓÓ—ÔPÕ“Ð•ÑT‘PÕÔÒQ•
NJCB‹ÊˆH•ÑT‘PÕHÛÛ›ÛÙˆH˜[™ÚYÙˆHƒBˆ
ˆŒK‹›[ÙYžHH˜[™ÚYÙˆH\™XÝKƒBˆ
ˆŒ‹H˜[™ÚY\ÈÚ[™ÙYÞ[˜Ú›Û›Ý\ÛHÚ]H™YY˜XÚËY]šY\‹ƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÔPÕ“Ð•ÑT‘PÕ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÔPÕ“Ð•ÑT‘PÕÔÒQ•
JH	ˆÖTÐÓÓ—ÔPÕ“Ð•ÑT‘PÕÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÔPÕ“Ð–TTÔÔ‘QU—ÓPTÒÈ
JCBˆÙYš[™HÖTÐÓÓ—ÔPÕ“Ð–TTÔÔ‘QU—ÔÒQ•
NUJCB‹ÊˆH–TTÔÔ‘QUˆHž\\ÜÈÙˆH™KY]šY\‹ƒBˆ
ˆŒK‹˜ž\\ÜÈÙˆH™KY]šY\‹ƒBˆ
ˆŒ‹\ÙHH™KY]šY\‹ƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÔPÕ“Ð–TTÔÔ‘QUŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÔPÕ“Ð–TTÔÔ‘QU—ÔÒQ•
JH	ˆÖTÐÓÓ—ÔPÕ“Ð–TTÔÔ‘QU—ÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÔPÕ“Ð–TTÔÔÔÕU—ÓPTÒÈ
LJCBˆÙYš[™HÖTÐÓÓ—ÔPÕ“Ð–TTÔÔÔÕU—ÔÒQ•
ŒJCB‹ÊˆH–TTÔÔÔÕUˆHž\\ÜÈÙˆHÜÝY]šY\‹ƒBˆ
ˆŒK‹˜ž\\ÜÈÙˆHÜÝY]šY\‹ƒBˆ
ˆŒ‹\ÙHHÜÝY]šY\‹ƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÔPÕ“Ð–TTÔÔÔÕUŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÔPÕ“Ð–TTÔÔÔÕU—ÔÒQ•
JH	ˆÖTÐÓÓ—ÔPÕ“Ð–TTÔÔÔÕU—ÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÔPÕ“ÐÓÑS—ÓPTÒÈ
ŒJCBˆÙYš[™HÖTÐÓÓ—ÔPÕ“ÐÓÑS—ÔÒQ•
ŒUJCB‹ÊˆHÓÑSˆH[˜X›HHÝ]]ÛØÚËƒBˆ
ˆŒK‹‘[˜X›HHÝ]]ÛØÚËƒBˆ
ˆŒ‹‘\ØX›HHÝ]]ÛØÚËƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÔPÕ“ÐÓÑSŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÔPÕ“ÐÓÑS—ÔÒQ•
JH	ˆÖTÐÓÓ—ÔPÕ“ÐÓÑS—ÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÔPÕ“Ñ”“QS—ÓPTÒÈ
JCBˆÙYš[™HÖTÐÓÓ—ÔPÕ“Ñ”“QS—ÔÒQ•
Œ•JCB‹ÊˆH”“QSˆHNˆœ™YH[›š[™È[ÙKƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÔPÕ“Ñ”“QSŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÔPÕ“Ñ”“QS—ÔÒQ•
JH	ˆÖTÐÓÓ—ÔPÕ“Ñ”“QS—ÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÔPÕ“Ñ”“PÓÔÕP“WÓPTÒÈ
JCBˆÙYš[™HÖTÐÓÓ—ÔPÕ“Ñ”“PÓÔÕP“WÔÒQ•
ŒÕJCB‹ÊˆH”“PÓÔÕP“HHœ™YH[›š[™È[ÙHÛØÚÜÝX›NˆØ\›š[™ÎˆÛ›HXZÙHœ›WØÛØÚÜÝX›HHHY\ˆHÝ]]œ™\]Y[˜ÞH\ÈÝX›KƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÔPÕ“Ñ”“PÓÔÕP“J
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÔPÕ“Ñ”“PÓÔÕP“WÔÒQ•
JH	ˆÖTÐÓÓ—ÔPÕ“Ñ”“PÓÔÕP“WÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÔPÕ“ÔÒÑUÑS—ÓPTÒÈ
LJCBˆÙYš[™HÖTÐÓÓ—ÔPÕ“ÔÒÑUÑS—ÔÒQ•
JCB‹ÊˆHÒÑUÑSˆHÚÙ]È[ÙKƒBˆ
ˆŒK‹œÚÙ]Û[ÙH\È[˜X›KƒBˆ
ˆŒ‹œÚÙ]Û[ÙH\È\ØX›KƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÔPÕ“ÔÒÑUÑSŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÔPÕ“ÔÒÑUÑS—ÔÒQ•
JH	ˆÖTÐÓÓ—ÔPÕ“ÔÒÑUÑS—ÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHTÕUHHMLHÝ]\È
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÔTÕUÓÐÒ×ÓPTÒÈ
UJCBˆÙYš[™HÖTÐÓÓ—ÔTÕUÓÐÒ×ÔÒQ•
JCB‹ÊˆHÐÒÈHØÚÈ]XÝÜˆÝ]]
XÝ]™HYÚ
HØ\›š[™ÎˆHØÚÈÚYÛ˜[\ÈÛ›H™[XX›H™]ÙY[ˆœ™Y–Ì—HŒLÒˆÈŒR‹ƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÔTÕUÓÐÒÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÔTÕUÓÐÒ×ÔÒQ•
JH	ˆÖTÐÓÓ—ÔTÕUÓÐÒ×ÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÔTÕUÔ‘QUPÒ×ÓPTÒÈ
•JCBˆÙYš[™HÖTÐÓÓ—ÔTÕUÔ‘QUPÒ×ÔÒQ•
UJCB‹ÊˆH‘QUPÒÈH™KY]šY\ˆ˜][ÈÚ[™ÙHXÚÛ›ÝÛYÙKƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÔTÕUÔ‘QUPÒÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÔTÕUÔ‘QUPÒ×ÔÒQ•
JH	ˆÖTÐÓÓ—ÔTÕUÔ‘QUPÒ×ÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÔTÕUÑ‘QQUPÒ×ÓPTÒÈ
JCBˆÙYš[™HÖTÐÓÓ—ÔTÕUÑ‘QQUPÒ×ÔÒQ•
•JCB‹ÊˆH‘QQUPÒÈH™YY˜XÚÈ]šY\ˆ˜][ÈÚ[™ÙHXÚÛ›ÝÛYÙKƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÔTÕUÑ‘QQUPÒÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÔTÕUÑ‘QQUPÒ×ÔÒQ•
JH	ˆÖTÐÓÓ—ÔTÕUÑ‘QQUPÒ×ÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÔTÕUÔÔÕUPÒ×ÓPTÒÈ
JCBˆÙYš[™HÖTÐÓÓ—ÔTÕUÔÔÕUPÒ×ÔÒQ•
ÕJCB‹ÊˆHÔÕUPÒÈHÜÝY]šY\ˆ˜][ÈÚ[™ÙHXÚÛ›ÝÛYÙKƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÔTÕUÔÔÕUPÒÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÔTÕUÔÔÕUPÒ×ÔÒQ•
JH	ˆÖTÐÓÓ—ÔTÕUÔÔÕUPÒ×ÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÔTÕUÑ”“QUÓPTÒÈ
LJCBˆÙYš[™HÖTÐÓÓ—ÔTÕUÑ”“QUÔÒQ•
JCB‹ÊˆH”“QUHœ™YH[›š[™È]XÝÜˆÝ]]
XÝ]™HYÚ
KƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÔTÕUÑ”“QU

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÔTÕUÑ”“QUÔÒQ•
JH	ˆÖTÐÓÓ—ÔTÕUÑ”“QUÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHS‘PÈHHMLHˆ]šY\ˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÔS‘P×Ó‘U—ÓPTÒÈ
‘•JCBˆÙYš[™HÖTÐÓÓ—ÔS‘P×Ó‘U—ÔÒQ•
JCB‹ÊˆH‘UˆH™KY]šY\ˆ]šY\ˆ˜][È
‹Y]šY\ŠKƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÔS‘P×Ó‘UŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÔS‘P×Ó‘U—ÔÒQ•
JH	ˆÖTÐÓÓ—ÔS‘P×Ó‘U—ÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÔS‘P×Ó”‘TWÓPTÒÈ
LJCBˆÙYš[™HÖTÐÓÓ—ÔS‘P×Ó”‘TWÔÒQ•
JCB‹ÊˆH”‘THH™KY]šY\ˆ˜][ÈÚ[™ÙH™\]Y\ÝƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÔS‘P×Ó”‘TJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÔS‘P×Ó”‘TWÔÒQ•
JH	ˆÖTÐÓÓ—ÔS‘P×Ó”‘TWÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHSQPÈHHMLHH]šY\ˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÔSQP×ÓQU—ÓPTÒÈ
‘‘‘•JCBˆÙYš[™HÖTÐÓÓ—ÔSQP×ÓQU—ÔÒQ•
JCB‹ÊˆHQUˆH™YY˜XÚÈ]šY\ˆ]šY\ˆ˜][È
KY]šY\ŠKƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÔSQP×ÓQUŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÔSQP×ÓQU—ÔÒQ•
JH	ˆÖTÐÓÓ—ÔSQP×ÓQU—ÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÔSQP×ÓT‘TWÓPTÒÈ
LJCBˆÙYš[™HÖTÐÓÓ—ÔSQP×ÓT‘TWÔÒQ•
M•JCB‹ÊˆHT‘THH™YY˜XÚÈ˜][ÈÚ[™ÙH™\]Y\ÝƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÔSQP×ÓT‘TJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÔSQP×ÓT‘TWÔÒQ•
JH	ˆÖTÐÓÓ—ÔSQP×ÓT‘TWÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHTPÈHHMLH]šY\ˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÔTP×ÔU—ÓPTÒÈ
Q•JCBˆÙYš[™HÖTÐÓÓ—ÔTP×ÔU—ÔÒQ•
JCB‹ÊˆHUˆHÜÝY]šY\ˆ]šY\ˆ˜][È
Y]šY\ŠCBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÔTP×ÔUŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÔTP×ÔU—ÔÒQ•
JH	ˆÖTÐÓÓ—ÔTP×ÔU—ÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÔTP×Ô‘TWÓPTÒÈ
ŒJCBˆÙYš[™HÖTÐÓÓ—ÔTP×Ô‘TWÔÒQ•
UJCB‹ÊˆH‘THH™YY˜XÚÈ˜][ÈÚ[™ÙH™\]Y\ÝƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÔTP×Ô‘TJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÔTP×Ô‘TWÔÒQ•
JH	ˆÖTÐÓÓ—ÔTP×Ô‘TWÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHÕ“HMLHÛÛ›Û
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÔÕ“ÔÑS—ÓPTÒÈ
•JCBˆÙYš[™HÖTÐÓÓ—ÔÕ“ÔÑS—ÔÒQ•
JCB‹ÊˆHÑSˆH˜[™ÚYÙ[XÝˆ˜[YKƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÔÕ“ÔÑSŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÔÕ“ÔÑS—ÔÒQ•
JH	ˆÖTÐÓÓ—ÔÕ“ÔÑS—ÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÔÕ“ÔÑSWÓPTÒÈ
ÑŒJCBˆÙYš[™HÖTÐÓÓ—ÔÕ“ÔÑSWÔÒQ•
JCB‹ÊˆHÑSHH˜[™ÚYÙ[XÝH˜[YKƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÔÕ“ÔÑSJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÔÕ“ÔÑSWÔÒQ•
JH	ˆÖTÐÓÓ—ÔÕ“ÔÑSWÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÔÕ“ÔÑSÓPTÒÈ
ÐÌJCBˆÙYš[™HÖTÐÓÓ—ÔÕ“ÔÑSÔÒQ•
LJCB‹ÊˆHÑSH˜[™ÚYÙ[XÝ˜[YKƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÔÕ“ÔÑS

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÔÕ“ÔÑSÔÒQ•
JH	ˆÖTÐÓÓ—ÔÕ“ÔÑSÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÔÕ“Ð–TTÔÔÓPTÒÈ
JCBˆÙYš[™HÖTÐÓÓ—ÔÕ“Ð–TTÔÔÔÒQ•
MUJCB‹ÊˆH–TTÔÔHž\\ÜÈ[œ]ÛØÚÈ\ÈÙ[\™XÝHÈHÝ]]
Y˜][
KƒBˆ
ˆŒK‹ž\\ÜÈ[œ]ÛØÚÈ\ÈÙ[\™XÝHÈHÝ]]ƒBˆ
ˆŒ‹\ÙHƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÔÕ“Ð–TTÔÔ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÔÕ“Ð–TTÔÔÔÒQ•
JH	ˆÖTÐÓÓ—ÔÕ“Ð–TTÔÔÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÔÕ“Ð–TTÔÔÔÕUŒ—ÓPTÒÈ
LJCBˆÙYš[™HÖTÐÓÓ—ÔÕ“Ð–TTÔÔÔÕUŒ—ÔÒQ•
M•JCB‹ÊˆH–TTÔÔÔÕUŒˆHž\\ÜÈÙˆH]šYKXžKLˆ]šY\ˆ[ˆHÜÝY]šY\‹ƒBˆ
ˆŒK‹˜ž\\ÜÈÙˆH]šYKXžKLˆ]šY\ˆ[ˆHÜÝY]šY\‹ƒBˆ
ˆŒ‹\ÙHH]šYKXžKLˆ]šY\ˆ[ˆHÜÝY]šY\‹ƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÔÕ“Ð–TTÔÔÔÕUŒŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÔÕ“Ð–TTÔÔÔÕUŒ—ÔÒQ•
JH	ˆÖTÐÓÓ—ÔÕ“Ð–TTÔÔÔÕUŒ—ÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÔÕ“ÓSUTÑ‘—ÓPTÒÈ
ŒJCBˆÙYš[™HÖTÐÓÓ—ÔÕ“ÓSUTÑ‘—ÔÒQ•
MÕJCB‹ÊˆHSUTÑ‘ˆH[]\ÛÙ™ˆHH[ˆÜ™XYÜXÝ[H[™œ˜XÝ[Û˜[\XØ][ÛœËƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÔÕ“ÓSUTÑ‘Š
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÔÕ“ÓSUTÑ‘—ÔÒQ•
JH	ˆÖTÐÓÓ—ÔÕ“ÓSUTÑ‘—ÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÔÕ“Ð•ÑT‘PÕÓPTÒÈ
JCBˆÙYš[™HÖTÐÓÓ—ÔÕ“Ð•ÑT‘PÕÔÒQ•
NJCB‹ÊˆH•ÑT‘PÕHÛÛ›ÛÙˆH˜[™ÚYÙˆHƒBˆ
ˆŒK‹›[ÙYžHH˜[™ÚYÙˆH\™XÝKƒBˆ
ˆŒ‹H˜[™ÚY\ÈÚ[™ÙYÞ[˜Ú›Û›Ý\ÛHÚ]H™YY˜XÚËY]šY\‹ƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÔÕ“Ð•ÑT‘PÕ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÔÕ“Ð•ÑT‘PÕÔÒQ•
JH	ˆÖTÐÓÓ—ÔÕ“Ð•ÑT‘PÕÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÔÕ“Ð–TTÔÔ‘QU—ÓPTÒÈ
JCBˆÙYš[™HÖTÐÓÓ—ÔÕ“Ð–TTÔÔ‘QU—ÔÒQ•
NUJCB‹ÊˆH–TTÔÔ‘QUˆHž\\ÜÈÙˆH™KY]šY\‹ƒBˆ
ˆŒK‹˜ž\\ÜÈÙˆH™KY]šY\‹ƒBˆ
ˆŒ‹\ÙHH™KY]šY\‹ƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÔÕ“Ð–TTÔÔ‘QUŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÔÕ“Ð–TTÔÔ‘QU—ÔÒQ•
JH	ˆÖTÐÓÓ—ÔÕ“Ð–TTÔÔ‘QU—ÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÔÕ“Ð–TTÔÔÔÕU—ÓPTÒÈ
LJCBˆÙYš[™HÖTÐÓÓ—ÔÕ“Ð–TTÔÔÔÕU—ÔÒQ•
ŒJCB‹ÊˆH–TTÔÔÔÕUˆHž\\ÜÈÙˆHÜÝY]šY\‹ƒBˆ
ˆŒK‹˜ž\\ÜÈÙˆHÜÝY]šY\‹ƒBˆ
ˆŒ‹\ÙHHÜÝY]šY\‹ƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÔÕ“Ð–TTÔÔÔÕUŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÔÕ“Ð–TTÔÔÔÕU—ÔÒQ•
JH	ˆÖTÐÓÓ—ÔÕ“Ð–TTÔÔÔÕU—ÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÔÕ“ÐÓÑS—ÓPTÒÈ
ŒJCBˆÙYš[™HÖTÐÓÓ—ÔÕ“ÐÓÑS—ÔÒQ•
ŒUJCB‹ÊˆHÓÑSˆH[˜X›HHÝ]]ÛØÚËƒBˆ
ˆŒK‹™[˜X›HHÝ]]ÛØÚËƒBˆ
ˆŒ‹™\ØX›HHÝ]]ÛØÚËƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÔÕ“ÐÓÑSŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÔÕ“ÐÓÑS—ÔÒQ•
JH	ˆÖTÐÓÓ—ÔÕ“ÐÓÑS—ÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÔÕ“Ñ”“QS—ÓPTÒÈ
JCBˆÙYš[™HÖTÐÓÓ—ÔÕ“Ñ”“QS—ÔÒQ•
Œ•JCB‹ÊˆH”“QSˆHœ™YH[›š[™È[ÙKƒBˆ
ˆŒK‹™œ™YH[›š[™È[ÙH\È[˜X›KƒBˆ
ˆŒ‹™œ™YH[›š[™È[ÙH\È\ØX›KƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÔÕ“Ñ”“QSŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÔÕ“Ñ”“QS—ÔÒQ•
JH	ˆÖTÐÓÓ—ÔÕ“Ñ”“QS—ÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÔÕ“Ñ”“PÓÔÕP“WÓPTÒÈ
JCBˆÙYš[™HÖTÐÓÓ—ÔÕ“Ñ”“PÓÔÕP“WÔÒQ•
ŒÕJCB‹ÊˆH”“PÓÔÕP“HHœ™YH[›š[™È[ÙHÛØÚÜÝX›NˆØ\›š[™ÎˆÛ›HXZÙHœ›WØÛØÚÜÝX›HLHY\ˆHÝ]]œ™\]Y[˜ÞH\ÈÝX›KƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÔÕ“Ñ”“PÓÔÕP“J
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÔÕ“Ñ”“PÓÔÕP“WÔÒQ•
JH	ˆÖTÐÓÓ—ÔÕ“Ñ”“PÓÔÕP“WÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÔÕ“ÔÒÑUÑS—ÓPTÒÈ
LJCBˆÙYš[™HÖTÐÓÓ—ÔÕ“ÔÒÑUÑS—ÔÒQ•
JCB‹ÊˆHÒÑUÑSˆHÚÙ]È[ÙKƒBˆ
ˆŒK‹œÚÙ]È[ÙH\È[˜X›KƒBˆ
ˆŒ‹œÚÙ]È[ÙH\È\ØX›KƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÔÕ“ÔÒÑUÑSŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÔÕ“ÔÒÑUÑS—ÔÒQ•
JH	ˆÖTÐÓÓ—ÔÕ“ÔÒÑUÑS—ÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHÕUHMLHÝ]\È
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÔÕUÓÐÒ×ÓPTÒÈ
UJCBˆÙYš[™HÖTÐÓÓ—ÔÕUÓÐÒ×ÔÒQ•
JCB‹ÊˆHÐÒÈHØÚÈ]XÝÜˆÝ]]
XÝ]™HYÚ
HØ\›š[™ÎˆHØÚÈÚYÛ˜[\ÈÛ›H™[XX›H™]ÙY[ˆœ™Y–Ì—HŒLÒˆÈŒR‹ƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÔÕUÓÐÒÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÔÕUÓÐÒ×ÔÒQ•
JH	ˆÖTÐÓÓ—ÔÕUÓÐÒ×ÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÔÕUÔ‘QUPÒ×ÓPTÒÈ
•JCBˆÙYš[™HÖTÐÓÓ—ÔÕUÔ‘QUPÒ×ÔÒQ•
UJCB‹ÊˆH‘QUPÒÈH™KY]šY\ˆ˜][ÈÚ[™ÙHXÚÛ›ÝÛYÙKƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÔÕUÔ‘QUPÒÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÔÕUÔ‘QUPÒ×ÔÒQ•
JH	ˆÖTÐÓÓ—ÔÕUÔ‘QUPÒ×ÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÔÕUÑ‘QQUPÒ×ÓPTÒÈ
JCBˆÙYš[™HÖTÐÓÓ—ÔÕUÑ‘QQUPÒ×ÔÒQ•
•JCB‹ÊˆH‘QQUPÒÈH™YY˜XÚÈ]šY\ˆ˜][ÈÚ[™ÙHXÚÛ›ÝÛYÙKƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÔÕUÑ‘QQUPÒÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÔÕUÑ‘QQUPÒ×ÔÒQ•
JH	ˆÖTÐÓÓ—ÔÕUÑ‘QQUPÒ×ÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÔÕUÔÔÕUPÒ×ÓPTÒÈ
JCBˆÙYš[™HÖTÐÓÓ—ÔÕUÔÔÕUPÒ×ÔÒQ•
ÕJCB‹ÊˆHÔÕUPÒÈHÜÝY]šY\ˆ˜][ÈÚ[™ÙHXÚÛ›ÝÛYÙKƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÔÕUÔÔÕUPÒÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÔÕUÔÔÕUPÒ×ÔÒQ•
JH	ˆÖTÐÓÓ—ÔÕUÔÔÕUPÒ×ÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÔÕUÑ”“QUÓPTÒÈ
LJCBˆÙYš[™HÖTÐÓÓ—ÔÕUÑ”“QUÔÒQ•
JCB‹ÊˆH”“QUHœ™YH[›š[™È]XÝÜˆÝ]]
XÝ]™HYÚ
KƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÔÕUÑ”“QU

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÔÕUÑ”“QUÔÒQ•
JH	ˆÖTÐÓÓ—ÔÕUÑ”“QUÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YH‘PÈHMLHˆ]šY\ˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HÖTÐÓÓ—Ô‘P×Ó‘U—ÓPTÒÈ
‘•JCBˆÙYš[™HÖTÐÓÓ—Ô‘P×Ó‘U—ÔÒQ•
JCB‹ÊˆH‘UˆH™KY]šY\ˆ]šY\ˆ˜][È
‹Y]šY\ŠKƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—Ô‘P×Ó‘UŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—Ô‘P×Ó‘U—ÔÒQ•
JH	ˆÖTÐÓÓ—Ô‘P×Ó‘U—ÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—Ô‘P×Ó”‘TWÓPTÒÈ
LJCBˆÙYš[™HÖTÐÓÓ—Ô‘P×Ó”‘TWÔÒQ•
JCB‹ÊˆH”‘THH™KY]šY\ˆ˜][ÈÚ[™ÙH™\]Y\ÝƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—Ô‘P×Ó”‘TJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—Ô‘P×Ó”‘TWÔÒQ•
JH	ˆÖTÐÓÓ—Ô‘P×Ó”‘TWÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHPÈHMLH]šY\ˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÔP×ÔU—ÓPTÒÈ
Q•JCBˆÙYš[™HÖTÐÓÓ—ÔP×ÔU—ÔÒQ•
JCB‹ÊˆHUˆHÜÝY]šY\ˆ]šY\ˆ˜][È
Y]šY\ŠCBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÔP×ÔUŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÔP×ÔU—ÔÒQ•
JH	ˆÖTÐÓÓ—ÔP×ÔU—ÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÔP×Ô‘TWÓPTÒÈ
ŒJCBˆÙYš[™HÖTÐÓÓ—ÔP×Ô‘TWÔÒQ•
UJCB‹ÊˆH‘THH™YY˜XÚÈ˜][ÈÚ[™ÙH™\]Y\ÝƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÔP×Ô‘TJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÔP×Ô‘TWÔÒQ•
JH	ˆÖTÐÓÓ—ÔP×Ô‘TWÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHÔÐÑÌHÜ™XYÜXÝ[HÜ˜\\ˆÛÛ›Û™YÚ\Ý\ˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÔÔÐÑÌÓQÓ”×ÓPTÒÈ
‘‘‘‘‘‘‘•JCBˆÙYš[™HÖTÐÓÓ—ÔÔÐÑÌÓQÓ”×ÔÒQ•
JCB‹ÊˆHQÓ”ÈH[œ]ÛÜ™ÙˆHÜ˜\\ˆš]ÌHÈƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÔÔÐÑÌÓQÓ”Ê
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÔÔÐÑÌÓQÓ”×ÔÒQ•
JH	ˆÖTÐÓÓ—ÔÔÐÑÌÓQÓ”×ÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHÔÐÑÌHHÜ™XYÜXÝ[HÜ˜\\ˆÛÛ›Û™YÚ\Ý\ˆH
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÔÔÐÑÌWÓQÓP”×ÓPTÒÈ
UJCBˆÙYš[™HÖTÐÓÓ—ÔÔÐÑÌWÓQÓP”×ÔÒQ•
JCB‹ÊˆHQÓP”ÈH[œ]ÛÜ™ÙˆHÜ˜\\ˆš]Ì‹ƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÔÔÐÑÌWÓQÓP”Ê
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÔÔÐÑÌWÓQÓP”×ÔÒQ•
JH	ˆÖTÐÓÓ—ÔÔÐÑÌWÓQÓP”×ÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÔÔÐÑÌWÓQÔ‘TWÓPTÒÈ
•JCBˆÙYš[™HÖTÐÓÓ—ÔÔÐÑÌWÓQÔ‘TWÔÒQ•
UJCB‹ÊˆHQÔ‘THHYÚ[™ÙH™\]Y\ÝƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÔÔÐÑÌWÓQÔ‘TJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÔÔÐÑÌWÓQÔ‘TWÔÒQ•
JH	ˆÖTÐÓÓ—ÔÔÐÑÌWÓQÔ‘TWÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÔÔÐÑÌWÓQ—ÓPTÒÈ
PÕJCBˆÙYš[™HÖTÐÓÓ—ÔÔÐÑÌWÓQ—ÔÒQ•
•JCB‹ÊˆHQˆH›ÙÜ˜[[XX›H[Ù[][Ûˆœ™\]Y[˜ÞH›HHœ™Y‹ÓœÜÈY–ÌŽŒHHOˆœÜÏMLLˆ
›HˆËƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÔÔÐÑÌWÓQŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÔÔÐÑÌWÓQ—ÔÒQ•
JH	ˆÖTÐÓÓ—ÔÔÐÑÌWÓQ—ÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÔÔÐÑÌWÓT—ÓPTÒÈ
LJCBˆÙYš[™HÖTÐÓÓ—ÔÔÐÑÌWÓT—ÔÒQ•
UJCB‹ÊˆHTˆH›ÙÜ˜[[XX›Hœ™\]Y[˜ÞH[Ù[][Ûˆ\›[ÙË\ÈHœ™YŠšÜÜËÑ˜ØÛÈHÜÜËÊŠ›YÌÌŽŒWYXÊCBˆ
ˆ\–ÌŽŒHHOˆÜÜÈH
›ÈÜ™XYÜXÝ[JH\–ÌŽŒHHHOˆÜÜÈˆH\–ÌŽŒHHLOˆÜÜÈˆKƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÔÔÐÑÌWÓTŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÔÔÐÑÌWÓT—ÔÒQ•
JH	ˆÖTÐÓÓ—ÔÔÐÑÌWÓT—ÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÔÔÐÑÌWÓP×ÓPTÒÈ
ÌJCBˆÙYš[™HÖTÐÓÓ—ÔÔÐÑÌWÓP×ÔÒQ•
JCB‹ÊˆHPÈH[Ù[][ÛˆØ]™Y›Ü›HÛÛ›ÛÛÛ\[œØ][Ûˆ›ÜˆÝÈ\ÜÈš[\š[™ÈÙˆHÈÙ]CBˆ
ˆšX[™Ý[\ˆ[Ù[][Ûˆ]HÝ]]ÙˆHÚ]š[™ÈH›]œ™\]Y[˜ÞHÜXÝ[KƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÔÔÐÑÌWÓPÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÔÔÐÑÌWÓP×ÔÒQ•
JH	ˆÖTÐÓÓ—ÔÔÐÑÌWÓP×ÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÔÔÐÑÌWÓQU—ÑVÓPTÒÈ
Ñ‘‘ÌJCBˆÙYš[™HÖTÐÓÓ—ÔÔÐÑÌWÓQU—ÑVÔÒQ•
LJCB‹ÊˆHQU—ÑVHÈÙ[XÝ[ˆ^\›˜[Y]ˆ˜[YKƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÔÔÐÑÌWÓQU—ÑV

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÔÔÐÑÌWÓQU—ÑVÔÒQ•
JH	ˆÖTÐÓÓ—ÔÔÐÑÌWÓQU—ÑVÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÔÔÐÑÌWÓT‘TWÓPTÒÈ
JCBˆÙYš[™HÖTÐÓÓ—ÔÔÐÑÌWÓT‘TWÔÒQ•
•JCB‹ÊˆHT‘THHÈÙ[XÝ[ˆ^\›˜[\™\H˜[YKƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÔÔÐÑÌWÓT‘TJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÔÔÐÑÌWÓT‘TWÔÒQ•
JH	ˆÖTÐÓÓ—ÔÔÐÑÌWÓT‘TWÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÔÔÐÑÌWÑUT—ÓPTÒÈ
JCBˆÙYš[™HÖTÐÓÓ—ÔÔÐÑÌWÑUT—ÔÒQ•
ÕJCB‹ÊˆHUTˆH]\š[™È™]ÙY[ˆÛÈ[Ù[][Ûˆœ™\]Y[˜ÚY\È[ˆH˜[™ÛHØ^HÜˆ[ˆHÙ]YÈ˜[™ÛHØ^CBˆ
ˆ
Ú]H›Ú\ÙJK[ˆÜ™\ˆÈXÜ™X\ÙHH›Ø˜Xš[]H]H[Ù[]YØ]™Y›Ü›HÚ[ØØÝ\ƒBˆ
ˆÚ]HØ[YH\ÙHÛˆH\XÝ[\ˆÚ[ÛˆHØÜ™Y[‹ƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÔÔÐÑÌWÑUTŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÔÔÐÑÌWÑUT—ÔÒQ•
JH	ˆÖTÐÓÓ—ÔÔÐÑÌWÑUT—ÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÔÔÐÑÌWÔÑSÑVÓPTÒÈ
LJCBˆÙYš[™HÖTÐÓÓ—ÔÔÐÑÌWÔÑSÑVÔÒQ•
ŽJCB‹ÊˆHÑSÑVHÈÙ[XÝY]—Ù^[™\™\WÙ^Ù[Ù^HˆY]ˆˆYÌÌŽŒK\™\HHHÙ[Ù^HHˆY]ˆHY]—Ù^\™\HH\™\WÙ^ƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÔÔÐÑÌWÔÑSÑV

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÔÔÐÑÌWÔÑSÑVÔÒQ•
JH	ˆÖTÐÓÓ—ÔÔÐÑÌWÔÑSÑVÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHÔPÕ“HÔHÛÛ›Û›Üˆ][\H›ØÙ\ÜÛÜœÈ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÐÔPÕ“ÐÔLPÓÑS—ÓPTÒÈ
JCBˆÙYš[™HÖTÐÓÓ—ÐÔPÕ“ÐÔLPÓÑS—ÔÒQ•
ÕJCB‹ÊˆHÔLPÓÑSˆHÔLHÛØÚÈ[˜X›KƒBˆ
ˆŒK‹•HÔLHÛØÚÈ\È[˜X›YƒBˆ
ˆŒ‹•HÔLHÛØÚÈ\È›Ý[˜X›YƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÐÔPÕ“ÐÔLPÓÑSŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÐÔPÕ“ÐÔLPÓÑS—ÔÒQ•
JH	ˆÖTÐÓÓ—ÐÔPÕ“ÐÔLPÓÑS—ÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÐÔPÕ“ÐÔLT”ÕS—ÓPTÒÈ
ŒJCBˆÙYš[™HÖTÐÓÓ—ÐÔPÕ“ÐÔLT”ÕS—ÔÒQ•
UJCB‹ÊˆHÔLT”ÕSˆHÔLH™\Ù]ƒBˆ
ˆŒK‹•HÔLH\È™Z[™È™\Ù]ƒBˆ
ˆŒ‹•HÔLH\È›Ý™Z[™È™\Ù]ƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÐÔPÕ“ÐÔLT”ÕSŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÐÔPÕ“ÐÔLT”ÕS—ÔÒQ•
JH	ˆÖTÐÓÓ—ÐÔPÕ“ÐÔLT”ÕS—ÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHÔ“ÓÕHÛÜ›ØÙ\ÜÛÜˆ›ÛÝY™\ÜÈ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÐÔ“ÓÕÐÔ“ÓÕÓPTÒÈ
‘‘‘‘‘‘‘•JCBˆÙYš[™HÖTÐÓÓ—ÐÔ“ÓÕÐÔ“ÓÕÔÒQ•
JCB‹ÊˆHÔ“ÓÕHÛÜ›ØÙ\ÜÛÜˆ›ÛÝY™\ÜÈ›ÜˆÔLKƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÐÔ“ÓÕÐÔ“ÓÕ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÐÔ“ÓÕÐÔ“ÓÕÔÒQ•
JH	ˆÖTÐÓÓ—ÐÔ“ÓÕÐÔ“ÓÕÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHÔÕUHÔHÝ]\È
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÐÔÕUÐÔLÓQTS‘×ÓPTÒÈ
UJCBˆÙYš[™HÖTÐÓÓ—ÐÔÕUÐÔLÓQTS‘×ÔÒQ•
JCB‹ÊˆHÔLÓQTS‘ÈHHÔLÛY\[™ÈÝ]KƒBˆ
ˆŒK‹HÔH\ÈÛY\[™ËƒBˆ
ˆŒ‹HÔH\È›ÝÛY\[™ËƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÐÔÕUÐÔLÓQTS‘Ê
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÐÔÕUÐÔLÓQTS‘×ÔÒQ•
JH	ˆÖTÐÓÓ—ÐÔÕUÐÔLÓQTS‘×ÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÐÔÕUÐÔLTÓQTS‘×ÓPTÒÈ
•JCBˆÙYš[™HÖTÐÓÓ—ÐÔÕUÐÔLTÓQTS‘×ÔÒQ•
UJCB‹ÊˆHÔLTÓQTS‘ÈHHÔLHÛY\[™ÈÝ]KƒBˆ
ˆŒK‹HÔH\ÈÛY\[™ËƒBˆ
ˆŒ‹HÔH\È›ÝÛY\[™ËƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÐÔÕUÐÔLTÓQTS‘Ê
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÐÔÕUÐÔLTÓQTS‘×ÔÒQ•
JH	ˆÖTÐÓÓ—ÐÔÕUÐÔLTÓQTS‘×ÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÐÔÕUÐÔLÐÒÕTÓPTÒÈ
JCBˆÙYš[™HÖTÐÓÓ—ÐÔÕUÐÔLÐÒÕTÔÒQ•
•JCB‹ÊˆHÔLÐÒÕTHHÔLØÚÝ\Ý]KƒBˆ
ˆŒK‹HÔH\È[ˆØÚÝ\ƒBˆ
ˆŒ‹HÔH\È›Ý[ˆØÚÝ\ƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÐÔÕUÐÔLÐÒÕT

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÐÔÕUÐÔLÐÒÕTÔÒQ•
JH	ˆÖTÐÓÓ—ÐÔÕUÐÔLÐÒÕTÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÐÔÕUÐÔLSÐÒÕTÓPTÒÈ
JCBˆÙYš[™HÖTÐÓÓ—ÐÔÕUÐÔLSÐÒÕTÔÒQ•
ÕJCB‹ÊˆHÔLSÐÒÕTHHÔLHØÚÝ\Ý]KƒBˆ
ˆŒK‹HÔH\È[ˆØÚÝ\ƒBˆ
ˆŒ‹HÔH\È›Ý[ˆØÚÝ\ƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÐÔÕUÐÔLSÐÒÕT

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÐÔÕUÐÔLSÐÒÕTÔÒQ•
JH	ˆÖTÐÓÓ—ÐÔÕUÐÔLSÐÒÕTÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHÓÐÒ×ÐÕ“H˜\š[Ý\ÈÞ\Ý[HÛØÚÈÛÛ›ÛÈˆ›\ÚÛØÚÈ
RŠHÛÛ›ÛÛØÚÜÈÈœ™\]Y[˜ÞHYX\Ý\™\È
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÐÓÐÒ×ÐÕ“ÖSÌ“R—Ñ”‘TSWÑSWÓPTÒÈ
•JCBˆÙYš[™HÖTÐÓÓ—ÐÓÐÒ×ÐÕ“ÖSÌ“R—Ñ”‘TSWÑSWÔÒQ•
UJCB‹ÊˆHSÌ“R—Ñ”‘TSWÑSHH[˜X›HSÌ“RˆÛØÚÈ›Üˆœ™\]Y[˜ÞHYX\Ý\™H[Ù[KƒBˆ
ˆŒK‹•HÛØÚÈ\È[˜X›YƒBˆ
ˆŒ‹•HÛØÚÈ\È›Ý[˜X›YƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÐÓÐÒ×ÐÕ“ÖSÌ“R—Ñ”‘TSWÑSJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÐÓÐÒ×ÐÕ“ÖSÌ“R—Ñ”‘TSWÑSWÔÒQ•
JH	ˆÖTÐÓÓ—ÐÓÐÒ×ÐÕ“ÖSÌ“R—Ñ”‘TSWÑSWÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÐÓÐÒ×ÐÕ“Ñ”“ÌSR—ÕUPÒ×ÑSWÓPTÒÈ
JCBˆÙYš[™HÖTÐÓÓ—ÐÓÐÒ×ÐÕ“Ñ”“ÌSR—ÕUPÒ×ÑSWÔÒQ•
•JCB‹ÊˆH”“ÌSR—ÕUPÒ×ÑSHH[˜X›H”“ÈSRˆÛØÚÈ›Üˆœ™\]Y[˜ÞHYX\Ý\™H[Ù[H[™›ÜˆUPÒËƒBˆ
ˆŒK‹•HÛØÚÈ\È[˜X›YƒBˆ
ˆŒ‹•HÛØÚÈ\È›Ý[˜X›YƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÐÓÐÒ×ÐÕ“Ñ”“ÌSR—ÕUPÒ×ÑSJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÐÓÐÒ×ÐÕ“Ñ”“ÌSR—ÕUPÒ×ÑSWÔÒQ•
JH	ˆÖTÐÓÓ—ÐÓÐÒ×ÐÕ“Ñ”“ÌSR—ÕUPÒ×ÑSWÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÐÓÐÒ×ÐÕ“Ñ”“ÌL“R—Ñ”‘TSWÑSWÓPTÒÈ
JCBˆÙYš[™HÖTÐÓÓ—ÐÓÐÒ×ÐÕ“Ñ”“ÌL“R—Ñ”‘TSWÑSWÔÒQ•
ÕJCB‹ÊˆH”“ÌL“R—Ñ”‘TSWÑSHH[˜X›H”“ÈL“RˆÛØÚÈ›Üˆœ™\]Y[˜ÞHYX\Ý\™H[Ù[KƒBˆ
ˆŒK‹•HÛØÚÈ\È[˜X›YƒBˆ
ˆŒ‹•HÛØÚÈ\È›Ý[˜X›YƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÐÓÐÒ×ÐÕ“Ñ”“ÌL“R—Ñ”‘TSWÑSJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÐÓÐÒ×ÐÕ“Ñ”“ÌL“R—Ñ”‘TSWÑSWÔÒQ•
JH	ˆÖTÐÓÓ—ÐÓÐÒ×ÐÕ“Ñ”“ÌL“R—Ñ”‘TSWÑSWÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÐÓÐÒ×ÐÕ“Ñ”“×Ò—Ñ”‘TSWÑSWÓPTÒÈ
LJCBˆÙYš[™HÖTÐÓÓ—ÐÓÐÒ×ÐÕ“Ñ”“×Ò—Ñ”‘TSWÑSWÔÒQ•
JCB‹ÊˆH”“×Ò—Ñ”‘TSWÑSHH[˜X›H”“ÈM“RˆÛØÚÈ›Üˆœ™\]Y[˜ÞHYX\Ý\™H[Ù[KƒBˆ
ˆŒK‹•HÛØÚÈ\È[˜X›YƒBˆ
ˆŒ‹•HÛØÚÈ\È›Ý[˜X›YƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÐÓÐÒ×ÐÕ“Ñ”“×Ò—Ñ”‘TSWÑSJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÐÓÐÒ×ÐÕ“Ñ”“×Ò—Ñ”‘TSWÑSWÔÒQ•
JH	ˆÖTÐÓÓ—ÐÓÐÒ×ÐÕ“Ñ”“×Ò—Ñ”‘TSWÑSWÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÐÓÐÒ×ÐÕ“ÐÓÒS—ÑSWÓPTÒÈ
ŒJCBˆÙYš[™HÖTÐÓÓ—ÐÓÐÒ×ÐÕ“ÐÓÒS—ÑSWÔÒQ•
UJCB‹ÊˆHÓÒS—ÑSHH[˜X›HÛØÚ×Ú[ˆÛØÚÈ›ÜˆÛØÚÈ[Ù[KƒBˆ
ˆŒK‹•HÛØÚÈ\È[˜X›YƒBˆ
ˆŒ‹•HÛØÚÈ\È›Ý[˜X›YƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÐÓÐÒ×ÐÕ“ÐÓÒS—ÑSJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÐÓÐÒ×ÐÕ“ÐÓÒS—ÑSWÔÒQ•
JH	ˆÖTÐÓÓ—ÐÓÐÒ×ÐÕ“ÐÓÒS—ÑSWÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÐÓÐÒ×ÐÕ“Ñ”“ÌSR—ÐÓ×ÑSWÓPTÒÈ
JCBˆÙYš[™HÖTÐÓÓ—ÐÓÐÒ×ÐÕ“Ñ”“ÌSR—ÐÓ×ÑSWÔÒQ•
•JCB‹ÊˆH”“ÌSR—ÐÓ×ÑSHH[˜X›H”“ÈSRˆÛØÚÈ›ÜˆÛØÚÈ]^[™È[ˆÛØÚÈÙ[‹ƒBˆ
ˆŒK‹•HÛØÚÈ\È[˜X›YƒBˆ
ˆŒ‹•HÛØÚÈ\È›Ý[˜X›YƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÐÓÐÒ×ÐÕ“Ñ”“ÌSR—ÐÓ×ÑSJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÐÓÐÒ×ÐÕ“Ñ”“ÌSR—ÐÓ×ÑSWÔÒQ•
JH	ˆÖTÐÓÓ—ÐÓÐÒ×ÐÕ“Ñ”“ÌSR—ÐÓ×ÑSWÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÐÓÐÒ×ÐÕ“ÐSWÑ”“ÌL“WÐÓ×ÑSWÓPTÒÈ
JCBˆÙYš[™HÖTÐÓÓ—ÐÓÐÒ×ÐÕ“ÐSWÑ”“ÌL“WÐÓ×ÑSWÔÒQ•
ÕJCB‹ÊˆHSWÑ”“ÌL“WÐÓ×ÑSHH[˜X›H”“ÈL“RˆÛØÚÈ›Üˆ[˜[ÙÈÛÛ›ÛÙˆH”“ÈNL“R‹ƒBˆ
ˆŒK‹•HÛØÚÈ\È[˜X›YƒBˆ
ˆŒ‹•HÛØÚÈ\È›Ý[˜X›YƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÐÓÐÒ×ÐÕ“ÐSWÑ”“ÌL“WÐÓ×ÑSJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÐÓÐÒ×ÐÕ“ÐSWÑ”“ÌL“WÐÓ×ÑSWÔÒQ•
JH	ˆÖTÐÓÓ—ÐÓÐÒ×ÐÕ“ÐSWÑ”“ÌL“WÐÓ×ÑSWÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÐÓÐÒ×ÐÕ“Ö×ÐÐSÐÓ×ÑSWÓPTÒÈ
LJCBˆÙYš[™HÖTÐÓÓ—ÐÓÐÒ×ÐÕ“Ö×ÐÐSÐÓ×ÑSWÔÒQ•
JCB‹ÊˆH×ÐÐSÐÓ×ÑSHH[˜X›HÛØÚÈ›ÜˆÜš\Ý[ÜØÚ[]ÜˆØ[Xœ˜][Û‹ƒBˆ
ˆŒK‹•HÛØÚÈ\È[˜X›YƒBˆ
ˆŒ‹•HÛØÚÈ\È›Ý[˜X›YƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÐÓÐÒ×ÐÕ“Ö×ÐÐSÐÓ×ÑSJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÐÓÐÒ×ÐÕ“Ö×ÐÐSÐÓ×ÑSWÔÒQ•
JH	ˆÖTÐÓÓ—ÐÓÐÒ×ÐÕ“Ö×ÐÐSÐÓ×ÑSWÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÐÓÐÒ×ÐÕ“ÔWÑQÓUÒÐÓ×ÑSWÓPTÒÈ
ŒJCBˆÙYš[™HÖTÐÓÓ—ÐÓÐÒ×ÐÕ“ÔWÑQÓUÒÐÓ×ÑSWÔÒQ•
UJCB‹ÊˆHWÑQÓUÒÐÓ×ÑSHH[˜X›HÛØÚÜÈ”“×ÌSRˆ[™”“×ÌL“Rˆ›ÜˆHYÛ]Ú[™ËƒBˆ
ˆŒK‹•HÛØÚÈ\È[˜X›YƒBˆ
ˆŒ‹•HÛØÚÈ\È›Ý[˜X›YƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÐÓÐÒ×ÐÕ“ÔWÑQÓUÒÐÓ×ÑSJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÐÓÐÒ×ÐÕ“ÔWÑQÓUÒÐÓ×ÑSWÔÒQ•
JH	ˆÖTÐÓÓ—ÐÓÐÒ×ÐÕ“ÔWÑQÓUÒÐÓ×ÑSWÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHÓÓTÒS•ÐÕ“HÛÛ\\˜]Üˆ[\œ\ÛÛ›Û
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÐÓÓTÒS•ÐÕ“ÒS•ÑSP“WÓPTÒÈ
UJCBˆÙYš[™HÖTÐÓÓ—ÐÓÓTÒS•ÐÕ“ÒS•ÑSP“WÔÒQ•
JCB‹ÊˆHS•ÑSP“HH[˜[ÙÈÛÛ\\˜]Üˆ[\œ\[˜X›HÛÛ›Û‹ƒBˆ
ˆŒK‹š[\œ\[˜X›KƒBˆ
ˆŒ‹š[\œ\\ØX›KƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÐÓÓTÒS•ÐÕ“ÒS•ÑSP“J
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÐÓÓTÒS•ÐÕ“ÒS•ÑSP“WÔÒQ•
JH	ˆÖTÐÓÓ—ÐÓÓTÒS•ÐÕ“ÒS•ÑSP“WÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÐÓÓTÒS•ÐÕ“ÒS•ÐÓPT—ÓPTÒÈ
•JCBˆÙYš[™HÖTÐÓÓ—ÐÓÓTÒS•ÐÕ“ÒS•ÐÓPT—ÔÒQ•
UJCB‹ÊˆHS•ÐÓPTˆH[˜[ÙÈÛÛ\\˜]Üˆ[\œ\ÛX\‹ƒBˆ
ˆŒ‹“›ÈY™™XÝƒBˆ
ˆŒK‹ÛX\ˆH[\œ\ˆÙ[‹XÛX\™Yš]ƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÐÓÓTÒS•ÐÕ“ÒS•ÐÓPTŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÐÓÓTÒS•ÐÕ“ÒS•ÐÓPT—ÔÒQ•
JH	ˆÖTÐÓÓ—ÐÓÓTÒS•ÐÕ“ÒS•ÐÓPT—ÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÐÓÓTÒS•ÐÕ“ÒS•ÐÕ“ÓPTÒÈ
PÕJCBˆÙYš[™HÖTÐÓÓ—ÐÓÓTÒS•ÐÕ“ÒS•ÐÕ“ÔÒQ•
•JCB‹ÊˆHS•ÐÕ“HÛÛ\\˜]Üˆ[\œ\\HÙ[XÝÜŽ‹ƒBˆ
ˆŒ‹•H[˜[ÙÈÛÛ\\˜]Üˆ[\œ\YÙHÙ[œÚ]]™H\È\ØX›YƒBˆ
ˆŒL‹˜[˜[ÙÈÛÛ\\˜]Üˆ[\œ\\Èš\Ú[™ÈYÙHÙ[œÚ]]™KƒBˆ
ˆŒL‹˜[˜[ÙÈÛÛ\\˜]Üˆ[\œ\\È˜[[™ÈYÙHÙ[œÚ]]™KƒBˆ
ˆŒLL‹˜[˜[ÙÈÛÛ\\˜]Üˆ[\œ\\Èš\Ú[™È[™˜[[™ÈYÙHÙ[œÚ]]™KƒBˆ
ˆŒK‹•H[˜[ÙÈÛÛ\\˜]Üˆ[\œ\]™[Ù[œÚ]]™H\È\ØX›YƒBˆ
ˆŒLK‹[˜[ÙÈÛÛ\\˜]Üˆ[\œ\\ÈYÚ]™[Ù[œÚ]]™KƒBˆ
ˆŒLK‹[˜[ÙÈÛÛ\\˜]Üˆ[\œ\\ÈÝÈ]™[Ù[œÚ]]™KƒBˆ
ˆŒLLK‹•H[˜[ÙÈÛÛ\\˜]Üˆ[\œ\]™[Ù[œÚ]]™H\È\ØX›YƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÐÓÓTÒS•ÐÕ“ÒS•ÐÕ“

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÐÓÓTÒS•ÐÕ“ÒS•ÐÕ“ÔÒQ•
JH	ˆÖTÐÓÓ—ÐÓÓTÒS•ÐÕ“ÒS•ÐÕ“ÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÐÓÓTÒS•ÐÕ“ÒS•ÔÓÕTÑWÓPTÒÈ
ŒJCBˆÙYš[™HÖTÐÓÓ—ÐÓÓTÒS•ÐÕ“ÒS•ÔÓÕTÑWÔÒQ•
UJCB‹ÊˆHS•ÔÓÕTÑHHÙ[XÝÚXÚ[˜[ÙÈÛÛ\\˜]ÜˆÝ]]
š[\™YÝ\ˆ[‹Yš[\™Y
H\È\ÙY›Üˆ[\œ\]XÝ[Û‹ƒBˆ
ˆŒ‹”Ù[XÝ[˜[ÙÈÛÛ\\˜]Üˆš[\™YÝ]]\È[œ]›Üˆ[\œ\]XÝ[Û‹ƒBˆ
ˆŒK‹”Ù[XÝ[˜[ÙÈÛÛ\\˜]Üˆ˜]ÈÝ]]
[™š[\™Y
H\È[œ]›Üˆ[\œ\]XÝ[Û‹ˆ]\Ý™H\ÙYÚ[ƒBˆ
ˆ[˜[ÙÈÛÛ\\˜]Üˆ\È\ÙY\ÈØZÙH\ÛÝ\˜ÙH[ˆÝÙ\ˆÝÛˆ[ÙKƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÐÓÓTÒS•ÐÕ“ÒS•ÔÓÕTÑJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÐÓÓTÒS•ÐÕ“ÒS•ÔÓÕTÑWÔÒQ•
JH	ˆÖTÐÓÓ—ÐÓÓTÒS•ÐÕ“ÒS•ÔÓÕTÑWÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHÓÓTÒS•ÔÕUTÈHÛÛ\\˜]Üˆ[\œ\Ý]\È
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÐÓÓTÒS•ÔÕUT×ÔÕUT×ÓPTÒÈ
UJCBˆÙYš[™HÖTÐÓÓ—ÐÓÓTÒS•ÔÕUT×ÔÕUT×ÔÒQ•
JCB‹ÊˆHÕUTÈH[\œ\Ý]\È‘Q“Ô‘H[\œ\[˜X›KƒBˆ
ˆŒ‹››È[\œ\[™[™ËƒBˆ
ˆŒK‹š[\œ\[™[™ËƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÐÓÓTÒS•ÔÕUT×ÔÕUTÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÐÓÓTÒS•ÔÕUT×ÔÕUT×ÔÒQ•
JH	ˆÖTÐÓÓ—ÐÓÓTÒS•ÔÕUT×ÔÕUT×ÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÐÓÓTÒS•ÔÕUT×ÒS•ÔÕUT×ÓPTÒÈ
•JCBˆÙYš[™HÖTÐÓÓ—ÐÓÓTÒS•ÔÕUT×ÒS•ÔÕUT×ÔÒQ•
UJCB‹ÊˆHS•ÔÕUTÈH[\œ\Ý]\ÈQ•Tˆ[\œ\[˜X›KƒBˆ
ˆŒ‹››È[\œ\[™[™ËƒBˆ
ˆŒK‹š[\œ\[™[™ËƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÐÓÓTÒS•ÔÕUT×ÒS•ÔÕUTÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÐÓÓTÒS•ÔÕUT×ÒS•ÔÕUT×ÔÒQ•
JH	ˆÖTÐÓÓ—ÐÓÓTÒS•ÔÕUT×ÒS•ÔÕUT×ÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÐÓÓTÒS•ÔÕUT×ÕSÓPTÒÈ
JCBˆÙYš[™HÖTÐÓÓ—ÐÓÓTÒS•ÔÕUT×ÕSÔÒQ•
•JCB‹ÊˆHSHÛÛ\\˜]Üˆ[˜[ÙÈÝ]]ƒBˆ
ˆŒK‹”
È\ÈÜ™X]\ˆ[ˆKƒBˆ
ˆŒ‹”
È\ÈÛX[\ˆ[ˆKƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÐÓÓTÒS•ÔÕUT×ÕS

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÐÓÓTÒS•ÔÕUT×ÕSÔÒQ•
JH	ˆÖTÐÓÓ—ÐÓÓTÒS•ÔÕUT×ÕSÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHUUÐÓÑÐUSÕ‘T”’QHHÛÛ›Û]]ÛX]XÈÛØÚÈØ][™È
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÐUUÐÓÑÐUSÕ‘T”’QWÔ“ÓWÓPTÒÈ
UJCBˆÙYš[™HÖTÐÓÓ—ÐUUÐÓÑÐUSÕ‘T”’QWÔ“ÓWÔÒQ•
JCB‹ÊˆH“ÓHHÛÛ›Û]]ÛX]XÈÛØÚÈØ][™ÈÙˆ“ÓHÛÛ›Û\‹ƒBˆ
ˆŒK‹]]ÛX]XÈÛØÚÈØ][™È\ÈÝ™\œšY[ˆ
ÛØÚÈØ][™È\È\ØX›Y
KƒBˆ
ˆŒ‹]]ÛX]XÈÛØÚÈØ][™È\È›ÝÝ™\œšY[‹ƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÐUUÐÓÑÐUSÕ‘T”’QWÔ“ÓJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÐUUÐÓÑÐUSÕ‘T”’QWÔ“ÓWÔÒQ•
JH	ˆÖTÐÓÓ—ÐUUÐÓÑÐUSÕ‘T”’QWÔ“ÓWÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÐUUÐÓÑÐUSÕ‘T”’QWÔSVÐÕ“ÓPTÒÈ
•JCBˆÙYš[™HÖTÐÓÓ—ÐUUÐÓÑÐUSÕ‘T”’QWÔSVÐÕ“ÔÒQ•
UJCB‹ÊˆHSVÐÕ“HÛÛ›Û]]ÛX]XÈÛØÚÈØ][™ÈÙˆSVÛÛ›Û\‹ƒBˆ
ˆŒK‹]]ÛX]XÈÛØÚÈØ][™È\ÈÝ™\œšY[ˆ
ÛØÚÈØ][™È\È\ØX›Y
KƒBˆ
ˆŒ‹]]ÛX]XÈÛØÚÈØ][™È\È›ÝÝ™\œšY[‹ƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÐUUÐÓÑÐUSÕ‘T”’QWÔSVÐÕ“

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÐUUÐÓÑÐUSÕ‘T”’QWÔSVÐÕ“ÔÒQ•
JH	ˆÖTÐÓÓ—ÐUUÐÓÑÐUSÕ‘T”’QWÔSVÐÕ“ÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÐUUÐÓÑÐUSÕ‘T”’QWÔSLÐÕ“ÓPTÒÈ
JCBˆÙYš[™HÖTÐÓÓ—ÐUUÐÓÑÐUSÕ‘T”’QWÔSLÐÕ“ÔÒQ•
•JCB‹ÊˆHSLÐÕ“HÛÛ›Û]]ÛX]XÈÛØÚÈØ][™ÈÙˆSLÛÛ›Û\‹ƒBˆ
ˆŒK‹]]ÛX]XÈÛØÚÈØ][™È\ÈÝ™\œšY[ˆ
ÛØÚÈØ][™È\È\ØX›Y
KƒBˆ
ˆŒ‹]]ÛX]XÈÛØÚÈØ][™È\È›ÝÝ™\œšY[‹ƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÐUUÐÓÑÐUSÕ‘T”’QWÔSLÐÕ“

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÐUUÐÓÑÐUSÕ‘T”’QWÔSLÐÕ“ÔÒQ•
JH	ˆÖTÐÓÓ—ÐUUÐÓÑÐUSÕ‘T”’QWÔSLÐÕ“ÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÐUUÐÓÑÐUSÕ‘T”’QWÔSLWÐÕ“ÓPTÒÈ
JCBˆÙYš[™HÖTÐÓÓ—ÐUUÐÓÑÐUSÕ‘T”’QWÔSLWÐÕ“ÔÒQ•
ÕJCB‹ÊˆHSLWÐÕ“HÛÛ›Û]]ÛX]XÈÛØÚÈØ][™ÈÙˆSLHÛÛ›Û\‹ƒBˆ
ˆŒK‹]]ÛX]XÈÛØÚÈØ][™È\ÈÝ™\œšY[ˆ
ÛØÚÈØ][™È\È\ØX›Y
KƒBˆ
ˆŒ‹]]ÛX]XÈÛØÚÈØ][™È\È›ÝÝ™\œšY[‹ƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÐUUÐÓÑÐUSÕ‘T”’QWÔSLWÐÕ“

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÐUUÐÓÑÐUSÕ‘T”’QWÔSLWÐÕ“ÔÒQ•
JH	ˆÖTÐÓÓ—ÐUUÐÓÑÐUSÕ‘T”’QWÔSLWÐÕ“ÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÐUUÐÓÑÐUSÕ‘T”’QWÔSL—ÐÕ“ÓPTÒÈ
LJCBˆÙYš[™HÖTÐÓÓ—ÐUUÐÓÑÐUSÕ‘T”’QWÔSL—ÐÕ“ÔÒQ•
JCB‹ÊˆHSL—ÐÕ“HÛÛ›Û]]ÛX]XÈÛØÚÈØ][™ÈÙˆSLˆÛÛ›Û\‹ƒBˆ
ˆŒK‹]]ÛX]XÈÛØÚÈØ][™È\ÈÝ™\œšY[ˆ
ÛØÚÈØ][™È\È\ØX›Y
KƒBˆ
ˆŒ‹]]ÛX]XÈÛØÚÈØ][™È\È›ÝÝ™\œšY[‹ƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÐUUÐÓÑÐUSÕ‘T”’QWÔSL—ÐÕ“

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÐUUÐÓÑÐUSÕ‘T”’QWÔSL—ÐÕ“ÔÒQ•
JH	ˆÖTÐÓÓ—ÐUUÐÓÑÐUSÕ‘T”’QWÔSL—ÐÕ“ÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÐUUÐÓÑÐUSÕ‘T”’QWÔSL×ÐÕ“ÓPTÒÈ
ŒJCBˆÙYš[™HÖTÐÓÓ—ÐUUÐÓÑÐUSÕ‘T”’QWÔSL×ÐÕ“ÔÒQ•
UJCB‹ÊˆHSL×ÐÕ“HÛÛ›Û]]ÛX]XÈÛØÚÈØ][™ÈÙˆSLÈÛÛ›Û\‹ƒBˆ
ˆŒK‹]]ÛX]XÈÛØÚÈØ][™È\ÈÝ™\œšY[ˆ
ÛØÚÈØ][™È\È\ØX›Y
KƒBˆ
ˆŒ‹]]ÛX]XÈÛØÚÈØ][™È\È›ÝÝ™\œšY[‹ƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÐUUÐÓÑÐUSÕ‘T”’QWÔSL×ÐÕ“

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÐUUÐÓÑÐUSÕ‘T”’QWÔSL×ÐÕ“ÔÒQ•
JH	ˆÖTÐÓÓ—ÐUUÐÓÑÐUSÕ‘T”’QWÔSL×ÐÕ“ÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÐUUÐÓÑÐUSÕ‘T”’QWÔSMÐÕ“ÓPTÒÈ
JCBˆÙYš[™HÖTÐÓÓ—ÐUUÐÓÑÐUSÕ‘T”’QWÔSMÐÕ“ÔÒQ•
•JCB‹ÊˆHSMÐÕ“HÛÛ›Û]]ÛX]XÈÛØÚÈØ][™ÈÙˆSMÛÛ›Û\‹ƒBˆ
ˆŒK‹]]ÛX]XÈÛØÚÈØ][™È\ÈÝ™\œšY[ˆ
ÛØÚÈØ][™È\È\ØX›Y
KƒBˆ
ˆŒ‹]]ÛX]XÈÛØÚÈØ][™È\È›ÝÝ™\œšY[‹ƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÐUUÐÓÑÐUSÕ‘T”’QWÔSMÐÕ“

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÐUUÐÓÑÐUSÕ‘T”’QWÔSMÐÕ“ÔÒQ•
JH	ˆÖTÐÓÓ—ÐUUÐÓÑÐUSÕ‘T”’QWÔSMÐÕ“ÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÐUUÐÓÑÐUSÕ‘T”’QWÔÖSÌÐT—ÓPTÒÈ
JCBˆÙYš[™HÖTÐÓÓ—ÐUUÐÓÑÐUSÕ‘T”’QWÔÖSÌÐT—ÔÒQ•
ÕJCB‹ÊˆHÖSÌÐTˆHÛÛ›Û]]ÛX]XÈÛØÚÈØ][™ÈÙˆÞ[˜Ú›Û›Ý\ÈœšYÙHÛÛ›Û\ˆƒBˆ
ˆŒK‹]]ÛX]XÈÛØÚÈØ][™È\ÈÝ™\œšY[ˆ
ÛØÚÈØ][™È\È\ØX›Y
KƒBˆ
ˆŒ‹]]ÛX]XÈÛØÚÈØ][™È\È›ÝÝ™\œšY[‹ƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÐUUÐÓÑÐUSÕ‘T”’QWÔÖSÌÐTŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÐUUÐÓÑÐUSÕ‘T”’QWÔÖSÌÐT—ÔÒQ•
JH	ˆÖTÐÓÓ—ÐUUÐÓÑÐUSÕ‘T”’QWÔÖSÌÐT—ÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÐUUÐÓÑÐUSÕ‘T”’QWÔÖSÌWÐT—ÓPTÒÈ
LJCBˆÙYš[™HÖTÐÓÓ—ÐUUÐÓÑÐUSÕ‘T”’QWÔÖSÌWÐT—ÔÒQ•
JCB‹ÊˆHÖSÌWÐTˆHÛÛ›Û]]ÛX]XÈÛØÚÈØ][™ÈÙˆÞ[˜Ú›Û›Ý\ÈœšYÙHÛÛ›Û\ˆKƒBˆ
ˆŒK‹]]ÛX]XÈÛØÚÈØ][™È\ÈÝ™\œšY[ˆ
ÛØÚÈØ][™È\È\ØX›Y
KƒBˆ
ˆŒ‹]]ÛX]XÈÛØÚÈØ][™È\È›ÝÝ™\œšY[‹ƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÐUUÐÓÑÐUSÕ‘T”’QWÔÖSÌWÐTŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÐUUÐÓÑÐUSÕ‘T”’QWÔÖSÌWÐT—ÔÒQ•
JH	ˆÖTÐÓÓ—ÐUUÐÓÑÐUSÕ‘T”’QWÔÖSÌWÐT—ÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÐUUÐÓÑÐUSÕ‘T”’QWÐÔÑÑS—ÓPTÒÈ
JCBˆÙYš[™HÖTÐÓÓ—ÐUUÐÓÑÐUSÕ‘T”’QWÐÔÑÑS—ÔÒQ•
LUJCB‹ÊˆHÔÑÑSˆHÛÛ›Û]]ÛX]XÈÛØÚÈØ][™ÈÙˆÔÑÑSˆÛÛ›Û\‹ƒBˆ
ˆŒK‹]]ÛX]XÈÛØÚÈØ][™È\ÈÝ™\œšY[ˆ
ÛØÚÈØ][™È\È\ØX›Y
KƒBˆ
ˆŒ‹]]ÛX]XÈÛØÚÈØ][™È\È›ÝÝ™\œšY[‹ƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÐUUÐÓÑÐUSÕ‘T”’QWÐÔÑÑSŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÐUUÐÓÑÐUSÕ‘T”’QWÐÔÑÑS—ÔÒQ•
JH	ˆÖTÐÓÓ—ÐUUÐÓÑÐUSÕ‘T”’QWÐÔÑÑS—ÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÐUUÐÓÑÐUSÕ‘T”’QWÔÑPLÓPTÒÈ
LJCBˆÙYš[™HÖTÐÓÓ—ÐUUÐÓÑÐUSÕ‘T”’QWÔÑPLÔÒQ•
L•JCB‹ÊˆHÑPLHÛÛ›Û]]ÛX]XÈÛØÚÈØ][™ÈÙˆPLÛÛ›Û\‹ƒBˆ
ˆŒK‹]]ÛX]XÈÛØÚÈØ][™È\ÈÝ™\œšY[ˆ
ÛØÚÈØ][™È\È\ØX›Y
KƒBˆ
ˆŒ‹]]ÛX]XÈÛØÚÈØ][™È\È›ÝÝ™\œšY[‹ƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÐUUÐÓÑÐUSÕ‘T”’QWÔÑPL

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÐUUÐÓÑÐUSÕ‘T”’QWÔÑPLÔÒQ•
JH	ˆÖTÐÓÓ—ÐUUÐÓÑÐUSÕ‘T”’QWÔÑPLÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÐUUÐÓÑÐUSÕ‘T”’QWÔÑPLWÓPTÒÈ
ŒJCBˆÙYš[™HÖTÐÓÓ—ÐUUÐÓÑÐUSÕ‘T”’QWÔÑPLWÔÒQ•
LÕJCB‹ÊˆHÑPLHHÛÛ›Û]]ÛX]XÈÛØÚÈØ][™ÈÙˆPLHÛÛ›Û\‹ƒBˆ
ˆŒK‹]]ÛX]XÈÛØÚÈØ][™È\ÈÝ™\œšY[ˆ
ÛØÚÈØ][™È\È\ØX›Y
KƒBˆ
ˆŒ‹]]ÛX]XÈÛØÚÈØ][™È\È›ÝÝ™\œšY[‹ƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÐUUÐÓÑÐUSÕ‘T”’QWÔÑPLJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÐUUÐÓÑÐUSÕ‘T”’QWÔÑPLWÔÒQ•
JH	ˆÖTÐÓÓ—ÐUUÐÓÑÐUSÕ‘T”’QWÔÑPLWÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÐUUÐÓÑÐUSÕ‘T”’QWÕTÐŒÓPTÒÈ
JCBˆÙYš[™HÖTÐÓÓ—ÐUUÐÓÑÐUSÕ‘T”’QWÕTÐŒÔÒQ•
MJCB‹ÊˆHTÐŒHÛÛ›Û]]ÛX]XÈÛØÚÈØ][™ÈÙˆTÐˆÛÛ›Û\‹ƒBˆ
ˆŒK‹]]ÛX]XÈÛØÚÈØ][™È\ÈÝ™\œšY[ˆ
ÛØÚÈØ][™È\È\ØX›Y
KƒBˆ
ˆŒ‹]]ÛX]XÈÛØÚÈØ][™È\È›ÝÝ™\œšY[‹ƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÐUUÐÓÑÐUSÕ‘T”’QWÕTÐŒ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÐUUÐÓÑÐUSÕ‘T”’QWÕTÐŒÔÒQ•
JH	ˆÖTÐÓÓ—ÐUUÐÓÑÐUSÕ‘T”’QWÕTÐŒÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÐUUÐÓÑÐUSÕ‘T”’QWÔÖTÐÓÓ—ÓPTÒÈ
JCBˆÙYš[™HÖTÐÓÓ—ÐUUÐÓÑÐUSÕ‘T”’QWÔÖTÐÓÓ—ÔÒQ•
MUJCB‹ÊˆHÖTÐÓÓˆHÛÛ›Û]]ÛX]XÈÛØÚÈØ][™ÈÙˆÞ[˜Ú›Û›Ý\ÈÞ\Ý[HÛÛ›Û\ˆ™YÚ\Ý\œÈ˜[šËƒBˆ
ˆŒK‹]]ÛX]XÈÛØÚÈØ][™È\ÈÝ™\œšY[ˆ
ÛØÚÈØ][™È\È\ØX›Y
KƒBˆ
ˆŒ‹]]ÛX]XÈÛØÚÈØ][™È\È›ÝÝ™\œšY[‹ƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÐUUÐÓÑÐUSÕ‘T”’QWÔÖTÐÓÓŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÐUUÐÓÑÐUSÕ‘T”’QWÔÖTÐÓÓ—ÔÒQ•
JH	ˆÖTÐÓÓ—ÐUUÐÓÑÐUSÕ‘T”’QWÔÖTÐÓÓ—ÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÐUUÐÓÑÐUSÕ‘T”’QWÑSP“UTUWÓPTÒÈ
‘‘‘ŒJCBˆÙYš[™HÖTÐÓÓ—ÐUUÐÓÑÐUSÕ‘T”’QWÑSP“UTUWÔÒQ•
M•JCB‹ÊˆHSP“UTUHHH˜[YHÌH]\Ý™HÜš][ˆ›ÜˆUUÐÓÑÐUSÕ‘T”’QH™YÚ\Ý\œÈšY[È\]\ÈÈ]™HY™™XÝƒBˆ
ˆŒLLLLLLLL‹š]šY[ÈHMHÙˆ\È™YÚ\Ý\ˆ\™H\]YBˆ
ˆŒ‹š]šY[ÈHMHÙˆ\È™YÚ\Ý\ˆ\™H›Ý\]YBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÐUUÐÓÑÐUSÕ‘T”’QWÑSP“UTUJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÐUUÐÓÑÐUSÕ‘T”’QWÑSP“UTUWÔÒQ•
JH	ˆÖTÐÓÓ—ÐUUÐÓÑÐUSÕ‘T”’QWÑSP“UTUWÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHÔSÔÖSÈH[˜X›Hž\\ÜÈÙˆHš\œÝÝYÙHÙˆÞ[˜ÚÛš^˜][Ûˆ[œÚYHÔS×ÒS•[Ù[H
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÑÔSÔÖS×ÔÖS×ÓPTÒÈ
UJCBˆÙYš[™HÖTÐÓÓ—ÑÔSÔÖS×ÔÖS×ÔÒQ•
JCB‹ÊˆHÖSÈH[˜X›Hž\\ÜÈÙˆHš\œÝÝYÙHÙˆÞ[˜ÚÛš^˜][Ûˆ[œÚYHÔS×ÒS•[Ù[KƒBˆ
ˆŒK‹˜ž\\ÜÈÙˆHš\œÝÝYÙHÙˆÞ[˜ÚÛš^˜][Ûˆ[œÚYHÔS×ÒS•[Ù[KƒBˆ
ˆŒ‹\ÙHHš\œÝÝYÙHÙˆÞ[˜ÚÛš^˜][Ûˆ[œÚYHÔS×ÒS•[Ù[KƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÑÔSÔÖS×ÔÖSÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÑÔSÔÖS×ÔÖS×ÔÒQ•
JH	ˆÖTÐÓÓ—ÑÔSÔÖS×ÔÖS×ÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHP•Q×ÓÐÒ×ÑSˆHÛÛ›ÛÜš]HXØÙ\ÜÈÈÙXÝ\š]H™YÚ\Ý\œËˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÑP•Q×ÓÐÒ×ÑS—ÓÐÒ×ÐSÓPTÒÈ
•JCBˆÙYš[™HÖTÐÓÓ—ÑP•Q×ÓÐÒ×ÑS—ÓÐÒ×ÐSÔÒQ•
JCB‹ÊˆHÐÒ×ÐSHÛÛ›ÛÜš]HXØÙ\ÜÈÈÓÑTÑPÕT’UT“ÕTÕÓÑTÑPÕT’UT“ÕÔLBˆ
ˆÓÑTÑPÕT’UT“ÕÔLKÔLÑP•Q×Ñ‘PUT‘TËÔLWÑP•Q×Ñ‘PUT‘TÈ[™‘×ÐUUÔÐÔUÒ™YÚ\Ý\œËƒBˆ
ˆŒLL‹ŒLLˆ[˜X›HÜš]HXØÙ\ÜÈÈ[ˆ™YÚ\Ý\œËƒBˆ
ˆŒ‹[žHÝ\ˆ˜[YH[ˆŒLLˆ\ØX›HÜš]HXØÙ\ÜÈÈ[ˆ™YÚ\Ý\œËƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÑP•Q×ÓÐÒ×ÑS—ÓÐÒ×ÐS

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÑP•Q×ÓÐÒ×ÑS—ÓÐÒ×ÐSÔÒQ•
JH	ˆÖTÐÓÓ—ÑP•Q×ÓÐÒ×ÑS—ÓÐÒ×ÐSÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHP•Q×Ñ‘PUT‘TÈHÛÜ^LÌÈ
ÔL
H[™ZXÜ›ÈÛÜ^LÌÈ
ÔLJHXYÈ™X]\™\ÈÛÛ›Ûˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÑP•Q×Ñ‘PUT‘T×ÐÔLÑ‘ÑS—ÓPTÒÈ
ÕJCBˆÙYš[™HÖTÐÓÓ—ÑP•Q×Ñ‘PUT‘T×ÐÔLÑ‘ÑS—ÔÒQ•
JCB‹ÊˆHÔLÑ‘ÑSˆHÔL[˜\Ú]™HXYÈÛÛ›Û‹ƒBˆ
ˆŒL‹ŒLˆ[˜\Ú]™HXYÈ\È[˜X›YƒBˆ
ˆŒK‹[žHÝ\ˆ˜[YH[ˆŒLˆ[˜\Ú]™HXYÈ\È\ØX›KƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÑP•Q×Ñ‘PUT‘T×ÐÔLÑ‘ÑSŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÑP•Q×Ñ‘PUT‘T×ÐÔLÑ‘ÑS—ÔÒQ•
JH	ˆÖTÐÓÓ—ÑP•Q×Ñ‘PUT‘T×ÐÔLÑ‘ÑS—ÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÑP•Q×Ñ‘PUT‘T×ÐÔLÓ’QS—ÓPTÒÈ
ÕJCBˆÙYš[™HÖTÐÓÓ—ÑP•Q×Ñ‘PUT‘T×ÐÔLÓ’QS—ÔÒQ•
•JCB‹ÊˆHÔLÓ’QSˆHÔL›Ûˆ[˜\Ú]™HXYÈÛÛ›Û‹ƒBˆ
ˆŒL‹ŒLˆ[˜\Ú]™HXYÈ\È[˜X›YƒBˆ
ˆŒK‹[žHÝ\ˆ˜[YH[ˆŒLˆ[˜\Ú]™HXYÈ\È\ØX›KƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÑP•Q×Ñ‘PUT‘T×ÐÔLÓ’QSŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÑP•Q×Ñ‘PUT‘T×ÐÔLÓ’QS—ÔÒQ•
JH	ˆÖTÐÓÓ—ÑP•Q×Ñ‘PUT‘T×ÐÔLÓ’QS—ÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÑP•Q×Ñ‘PUT‘T×ÐÔLÔÔQS—ÓPTÒÈ
ÌJCBˆÙYš[™HÖTÐÓÓ—ÑP•Q×Ñ‘PUT‘T×ÐÔLÔÔQS—ÔÒQ•
JCB‹ÊˆHÔLÔÔQSˆHÔLÙXÝ\™H[˜\Ú]™HXYÈÛÛ›Û‹ƒBˆ
ˆŒL‹ŒLˆ[˜\Ú]™HXYÈ\È[˜X›YƒBˆ
ˆŒK‹[žHÝ\ˆ˜[YH[ˆŒLˆ[˜\Ú]™HXYÈ\È\ØX›KƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÑP•Q×Ñ‘PUT‘T×ÐÔLÔÔQSŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÑP•Q×Ñ‘PUT‘T×ÐÔLÔÔQS—ÔÒQ•
JH	ˆÖTÐÓÓ—ÑP•Q×Ñ‘PUT‘T×ÐÔLÔÔQS—ÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÑP•Q×Ñ‘PUT‘T×ÐÔLÔÔ’QS—ÓPTÒÈ
ÌJCBˆÙYš[™HÖTÐÓÓ—ÑP•Q×Ñ‘PUT‘T×ÐÔLÔÔ’QS—ÔÒQ•
•JCB‹ÊˆHÔLÔÔ’QSˆHÔLÙXÝ\™H›Ûˆ[˜\Ú]™HXYÈÛÛ›Û‹ƒBˆ
ˆŒL‹ŒLˆ[˜\Ú]™HXYÈ\È[˜X›YƒBˆ
ˆŒK‹[žHÝ\ˆ˜[YH[ˆŒLˆ[˜\Ú]™HXYÈ\È\ØX›KƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÑP•Q×Ñ‘PUT‘T×ÐÔLÔÔ’QSŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÑP•Q×Ñ‘PUT‘T×ÐÔLÔÔ’QS—ÔÒQ•
JH	ˆÖTÐÓÓ—ÑP•Q×Ñ‘PUT‘T×ÐÔLÔÔ’QS—ÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÑP•Q×Ñ‘PUT‘T×ÐÔLWÑ‘ÑS—ÓPTÒÈ
ÌJCBˆÙYš[™HÖTÐÓÓ—ÑP•Q×Ñ‘PUT‘T×ÐÔLWÑ‘ÑS—ÔÒQ•
JCB‹ÊˆHÔLWÑ‘ÑSˆHÔLH[˜\Ú]™HXYÈÛÛ›Û‹ƒBˆ
ˆŒL‹ŒLˆ[˜\Ú]™HXYÈ\È[˜X›YƒBˆ
ˆŒK‹[žHÝ\ˆ˜[YH[ˆŒLˆ[˜\Ú]™HXYÈ\È\ØX›KƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÑP•Q×Ñ‘PUT‘T×ÐÔLWÑ‘ÑSŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÑP•Q×Ñ‘PUT‘T×ÐÔLWÑ‘ÑS—ÔÒQ•
JH	ˆÖTÐÓÓ—ÑP•Q×Ñ‘PUT‘T×ÐÔLWÑ‘ÑS—ÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÑP•Q×Ñ‘PUT‘T×ÐÔLWÓ’QS—ÓPTÒÈ
ÌJCBˆÙYš[™HÖTÐÓÓ—ÑP•Q×Ñ‘PUT‘T×ÐÔLWÓ’QS—ÔÒQ•
LJCB‹ÊˆHÔLWÓ’QSˆHÔLH›Ûˆ[˜\Ú]™HXYÈÛÛ›Û‹ƒBˆ
ˆŒL‹ŒLˆ[˜\Ú]™HXYÈ\È[˜X›YƒBˆ
ˆŒK‹[žHÝ\ˆ˜[YH[ˆŒLˆ[˜\Ú]™HXYÈ\È\ØX›KƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÑP•Q×Ñ‘PUT‘T×ÐÔLWÓ’QSŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÑP•Q×Ñ‘PUT‘T×ÐÔLWÓ’QS—ÔÒQ•
JH	ˆÖTÐÓÓ—ÑP•Q×Ñ‘PUT‘T×ÐÔLWÓ’QS—ÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHP•Q×Ñ‘PUT‘T×ÑHÛÜ^LÌÈ
ÔL
H[™ZXÜ›ÈÛÜ^LÌÈ
ÔLJHXYÈ™X]\™\ÈÛÛ›ÛTPÐUH™YÚ\Ý\‹ˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÑP•Q×Ñ‘PUT‘T×ÑÐÔLÑ‘ÑS—ÓPTÒÈ
ÕJCBˆÙYš[™HÖTÐÓÓ—ÑP•Q×Ñ‘PUT‘T×ÑÐÔLÑ‘ÑS—ÔÒQ•
JCB‹ÊˆHÔLÑ‘ÑSˆHÔL
ÔL
H[˜\Ú]™HXYÈÛÛ›Û‹ƒBˆ
ˆŒL‹ŒLˆ[˜\Ú]™HXYÈ\È[˜X›YƒBˆ
ˆŒK‹[žHÝ\ˆ˜[YH[ˆŒLˆ[˜\Ú]™HXYÈ\È\ØX›KƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÑP•Q×Ñ‘PUT‘T×ÑÐÔLÑ‘ÑSŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÑP•Q×Ñ‘PUT‘T×ÑÐÔLÑ‘ÑS—ÔÒQ•
JH	ˆÖTÐÓÓ—ÑP•Q×Ñ‘PUT‘T×ÑÐÔLÑ‘ÑS—ÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÑP•Q×Ñ‘PUT‘T×ÑÐÔLÓ’QS—ÓPTÒÈ
ÕJCBˆÙYš[™HÖTÐÓÓ—ÑP•Q×Ñ‘PUT‘T×ÑÐÔLÓ’QS—ÔÒQ•
•JCB‹ÊˆHÔLÓ’QSˆHÔL›Ûˆ[˜\Ú]™HXYÈÛÛ›Û‹ƒBˆ
ˆŒL‹ŒLˆ[˜\Ú]™HXYÈ\È[˜X›YƒBˆ
ˆŒK‹[žHÝ\ˆ˜[YH[ˆŒLˆ[˜\Ú]™HXYÈ\È\ØX›KƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÑP•Q×Ñ‘PUT‘T×ÑÐÔLÓ’QSŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÑP•Q×Ñ‘PUT‘T×ÑÐÔLÓ’QS—ÔÒQ•
JH	ˆÖTÐÓÓ—ÑP•Q×Ñ‘PUT‘T×ÑÐÔLÓ’QS—ÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÑP•Q×Ñ‘PUT‘T×ÑÐÔLÔÔQS—ÓPTÒÈ
ÌJCBˆÙYš[™HÖTÐÓÓ—ÑP•Q×Ñ‘PUT‘T×ÑÐÔLÔÔQS—ÔÒQ•
JCB‹ÊˆHÔLÔÔQSˆHÔLÙXÝ\™H[˜\Ú]™HXYÈÛÛ›Û‹ƒBˆ
ˆŒL‹ŒLˆ[˜\Ú]™HXYÈ\È[˜X›YƒBˆ
ˆŒK‹[žHÝ\ˆ˜[YH[ˆŒLˆ[˜\Ú]™HXYÈ\È\ØX›KƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÑP•Q×Ñ‘PUT‘T×ÑÐÔLÔÔQSŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÑP•Q×Ñ‘PUT‘T×ÑÐÔLÔÔQS—ÔÒQ•
JH	ˆÖTÐÓÓ—ÑP•Q×Ñ‘PUT‘T×ÑÐÔLÔÔQS—ÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÑP•Q×Ñ‘PUT‘T×ÑÐÔLÔÔ’QS—ÓPTÒÈ
ÌJCBˆÙYš[™HÖTÐÓÓ—ÑP•Q×Ñ‘PUT‘T×ÑÐÔLÔÔ’QS—ÔÒQ•
•JCB‹ÊˆHÔLÔÔ’QSˆHÔLÙXÝ\™H›Ûˆ[˜\Ú]™HXYÈÛÛ›Û‹ƒBˆ
ˆŒL‹ŒLˆ[˜\Ú]™HXYÈ\È[˜X›YƒBˆ
ˆŒK‹[žHÝ\ˆ˜[YH[ˆŒLˆ[˜\Ú]™HXYÈ\È\ØX›KƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÑP•Q×Ñ‘PUT‘T×ÑÐÔLÔÔ’QSŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÑP•Q×Ñ‘PUT‘T×ÑÐÔLÔÔ’QS—ÔÒQ•
JH	ˆÖTÐÓÓ—ÑP•Q×Ñ‘PUT‘T×ÑÐÔLÔÔ’QS—ÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÑP•Q×Ñ‘PUT‘T×ÑÐÔLWÑ‘ÑS—ÓPTÒÈ
ÌJCBˆÙYš[™HÖTÐÓÓ—ÑP•Q×Ñ‘PUT‘T×ÑÐÔLWÑ‘ÑS—ÔÒQ•
JCB‹ÊˆHÔLWÑ‘ÑSˆHÔLH[˜\Ú]™HXYÈÛÛ›Û‹ƒBˆ
ˆŒL‹ŒLˆ[˜\Ú]™HXYÈ\È[˜X›YƒBˆ
ˆŒK‹[žHÝ\ˆ˜[YH[ˆŒLˆ[˜\Ú]™HXYÈ\È\ØX›KƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÑP•Q×Ñ‘PUT‘T×ÑÐÔLWÑ‘ÑSŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÑP•Q×Ñ‘PUT‘T×ÑÐÔLWÑ‘ÑS—ÔÒQ•
JH	ˆÖTÐÓÓ—ÑP•Q×Ñ‘PUT‘T×ÑÐÔLWÑ‘ÑS—ÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÑP•Q×Ñ‘PUT‘T×ÑÐÔLWÓ’QS—ÓPTÒÈ
ÌJCBˆÙYš[™HÖTÐÓÓ—ÑP•Q×Ñ‘PUT‘T×ÑÐÔLWÓ’QS—ÔÒQ•
LJCB‹ÊˆHÔLWÓ’QSˆHÔLH›Ûˆ[˜\Ú]™HXYÈÛÛ›Û‹ƒBˆ
ˆŒL‹ŒLˆ[˜\Ú]™HXYÈ\È[˜X›YƒBˆ
ˆŒK‹[žHÝ\ˆ˜[YH[ˆŒLˆ[˜\Ú]™HXYÈ\È\ØX›KƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÑP•Q×Ñ‘PUT‘T×ÑÐÔLWÓ’QSŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÑP•Q×Ñ‘PUT‘T×ÑÐÔLWÓ’QS—ÔÒQ•
JH	ˆÖTÐÓÓ—ÑP•Q×Ñ‘PUT‘T×ÑÐÔLWÓ’QS—ÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHÑVWÐ“ÐÒÈH›ØÚÈ]ZYZÙ^KÔQˆ[[™^ˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÒÑVWÐ“ÐÒ×ÒÑVWÐ“ÐÒ×ÓPTÒÈ
‘‘‘‘‘‘‘•JCBˆÙYš[™HÖTÐÓÓ—ÒÑVWÐ“ÐÒ×ÒÑVWÐ“ÐÒ×ÔÒQ•
JCB‹ÊˆHÑVWÐ“ÐÒÈHÜš]HH˜[YHÈ›ØÚÈ]ZYZÙ^KÔQˆ[[™^ƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÒÑVWÐ“ÐÒ×ÒÑVWÐ“ÐÒÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÒÑVWÐ“ÐÒ×ÒÑVWÐ“ÐÒ×ÔÒQ•
JH	ˆÖTÐÓÓ—ÒÑVWÐ“ÐÒ×ÒÑVWÐ“ÐÒ×ÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHP•Q×ÐUUÐ‘PPÓÓˆHXYÈ]][XØ][Ûˆ‘PPÓÓˆ™YÚ\Ý\ˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÑP•Q×ÐUUÐ‘PPÓÓ—Ð‘PPÓÓ—ÓPTÒÈ
‘‘‘‘‘‘‘•JCBˆÙYš[™HÖTÐÓÓ—ÑP•Q×ÐUUÐ‘PPÓÓ—Ð‘PPÓÓ—ÔÒQ•
JCB‹ÊˆH‘PPÓÓˆHÙ]žHHXYÈ]][XØ][ÛˆÛÙH[ˆ“ÓHÈ\ÜÈHXYÈ™XXÛÛœÈ
Ü™Y[X[Bˆ
ˆ™XXÛÛˆ[™]][XØ][Ûˆ™XXÛÛŠHÈ\XØ][ÛˆÛÙKƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÑP•Q×ÐUUÐ‘PPÓÓ—Ð‘PPÓÓŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÑP•Q×ÐUUÐ‘PPÓÓ—Ð‘PPÓÓ—ÔÒQ•
JH	ˆÖTÐÓÓ—ÑP•Q×ÐUUÐ‘PPÓÓ—Ð‘PPÓÓ—ÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHÔPÑ‘ÈHÔ\ÈÛÛ™šYÝ\˜][Ûˆ™YÚ\Ý\ˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÐÔPÑ‘×ÐÔLQSP“WÓPTÒÈ
JCBˆÙYš[™HÖTÐÓÓ—ÐÔPÑ‘×ÐÔLQSP“WÔÒQ•
•JCB‹ÊˆHÔLQSP“HH[˜X›HÔLKƒBˆ
ˆŒ‹ÔLH\È\ØX›H
›ØÙ\ÜÛÜˆ[ˆ™\Ù]
KƒBˆ
ˆŒK‹ÔLH\È[˜X›KƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÐÔPÑ‘×ÐÔLQSP“J
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÐÔPÑ‘×ÐÔLQSP“WÔÒQ•
JH	ˆÖTÐÓÓ—ÐÔPÑ‘×ÐÔLQSP“WÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHU’PÑWÒQH]šXÙHQ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÑU’PÑWÒQÔ“ÓWÔ‘U—ÓRS“Ô—ÓPTÒÈ
ŒJCBˆÙYš[™HÖTÐÓÓ—ÑU’PÑWÒQÔ“ÓWÔ‘U—ÓRS“Ô—ÔÒQ•
ŒJCB‹ÊˆH“ÓWÔ‘U—ÓRS“ÔˆH“ÓH™]š\Ú[Û‹ƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÑU’PÑWÒQÔ“ÓWÔ‘U—ÓRS“ÔŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÑU’PÑWÒQÔ“ÓWÔ‘U—ÓRS“Ô—ÔÒQ•
JH	ˆÖTÐÓÓ—ÑU’PÑWÒQÔ“ÓWÔ‘U—ÓRS“Ô—ÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHQRQHÚ\™]š\Ú[ÛˆQ[™[X™\ˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÑQRQÔ‘U—ÒQÓPTÒÈ
•JCBˆÙYš[™HÖTÐÓÓ—ÑQRQÔ‘U—ÒQÔÒQ•
JCB‹ÊˆH‘U—ÒQHÚ\Y][™]š\Ú[ÛˆQƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÑQRQÔ‘U—ÒQ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÑQRQÔ‘U—ÒQÔÒQ•
JH	ˆÖTÐÓÓ—ÑQRQÔ‘U—ÒQÓPTÒÊCBˆÙYš[™HÖTÐÓÓ—ÑQRQÓPÓ×Ó•SWÒS—ÑQWÒQÓPTÒÈ
‘‘‘‘ŒJCBˆÙYš[™HÖTÐÓÓ—ÑQRQÓPÓ×Ó•SWÒS—ÑQWÒQÔÒQ•
JCB‹ÊˆHPÓ×Ó•SWÒS—ÑQWÒQHÚ\[X™\ˆ‹ƒBˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÑQRQÓPÓ×Ó•SWÒS—ÑQWÒQ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÓÓ—ÑQRQÓPÓ×Ó•SWÒS—ÑQWÒQÔÒQ•
JH	ˆÖTÐÓÓ—ÑQRQÓPÓ×Ó•SWÒS—ÑQWÒQÓPTÒÊCB‹ÊˆHH
‹ÃBƒBƒB‹ÊˆCBˆ
ˆCBˆ
‹ÈÊˆ[™ÙˆÜ›Ý\ÖTÐÓÓ—Ô™YÚ\Ý\—ÓX\ÚÜÈ
‹ÃBƒBƒB‹ÊˆÖTÐÓÓˆH\š\\˜[[œÝ[˜ÙH˜\ÙHY™\ÜÙ\È
‹ÃBˆÚYˆ
×ÐT“WÑ‘PUT‘WÐÓTÑH	ˆŠCBˆÊŠˆ\š\\˜[ÖTÐÓÓˆ˜\ÙHY™\ÜÈ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÐTÑH
LJCBˆÊŠˆ\š\\˜[ÖTÐÓÓˆ˜\ÙHY™\ÜÈ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÐTÑWÓ”È
JCBˆÊŠˆ\š\\˜[ÖTÐÓÓˆ˜\ÙHÚ[\ˆ
‹ÃBˆÙYš[™HÖTÐÓÓˆ

ÖTÐÓÓ—Õ\H
ŠTÖTÐÓÓ—ÐTÑJCBˆÊŠˆ\š\\˜[ÖTÐÓÓˆ˜\ÙHÚ[\ˆ
‹ÃBˆÙYš[™HÖTÐÓÓ—Ó”È

ÖTÐÓÓ—Õ\H
ŠTÖTÐÓÓ—ÐTÑWÓ”ÊCBˆÊŠˆ\œ˜^H[š]X[^™\ˆÙˆÖTÐÓÓˆ\š\\˜[˜\ÙHY™\ÜÙ\È
‹ÃBˆÙYš[™HÖTÐÓÓ—ÐTÑWÐQ”ÈÈÖTÐÓÓ—ÐTÑHCBˆÊŠˆ\œ˜^H[š]X[^™\ˆÙˆÖTÐÓÓˆ\š\\˜[˜\ÙHÚ[\œÈ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÐTÑWÔ”ÈÈÖTÐÓÓˆCBˆÊŠˆ\œ˜^H[š]X[^™\ˆÙˆÖTÐÓÓˆ\š\\˜[˜\ÙHY™\ÜÙ\È
‹ÃBˆÙYš[™HÖTÐÓÓ—ÐTÑWÐQ”×Ó”ÈÈÖTÐÓÓ—ÐTÑWÓ”ÈCBˆÊŠˆ\œ˜^H[š]X[^™\ˆÙˆÖTÐÓÓˆ\š\\˜[˜\ÙHÚ[\œÈ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÐTÑWÔ”×Ó”ÈÈÖTÐÓÓ—Ó”ÈCBˆÙ[ÙCBˆÊŠˆ\š\\˜[ÖTÐÓÓˆ˜\ÙHY™\ÜÈ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÐTÑH
JCBˆÊŠˆ\š\\˜[ÖTÐÓÓˆ˜\ÙHÚ[\ˆ
‹ÃBˆÙYš[™HÖTÐÓÓˆ

ÖTÐÓÓ—Õ\H
ŠTÖTÐÓÓ—ÐTÑJCBˆÊŠˆ\œ˜^H[š]X[^™\ˆÙˆÖTÐÓÓˆ\š\\˜[˜\ÙHY™\ÜÙ\È
‹ÃBˆÙYš[™HÖTÐÓÓ—ÐTÑWÐQ”ÈÈÖTÐÓÓ—ÐTÑHCBˆÊŠˆ\œ˜^H[š]X[^™\ˆÙˆÖTÐÓÓˆ\š\\˜[˜\ÙHÚ[\œÈ
‹ÃBˆÙYš[™HÖTÐÓÓ—ÐTÑWÔ”ÈÈÖTÐÓÓˆCBˆÙ[™YƒBƒB‹ÊˆCBˆ
ˆCBˆ
‹ÈÊˆ[™ÙˆÜ›Ý\ÖTÐÓÓ—Ô\š\\˜[ÐXØÙ\Ü×Ó^Y\ˆ
‹ÃBƒBƒB‹ÊˆKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKCBˆKHÖTÐÕ\š\\˜[XØÙ\ÜÈ^Y\ƒBˆKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKH
‹ÃBƒB‹ÊˆCBˆ
ˆYÙÜ›Ý\ÖTÐÕÔ\š\\˜[ÐXØÙ\Ü×Ó^Y\ˆÖTÐÕ\š\\˜[XØÙ\ÜÈ^Y\ƒBˆ
ˆÃBˆ
‹ÃBƒB‹ÊŠˆÖTÐÕH™YÚ\Ý\ˆ^[Ý]\YYˆ
‹ÃB\YYˆÝXÝÃBˆ×ÒSÈZ[Ì—ÝTUSÒÓÕUÈÊŠ\]HØÚÈÝ]ÛÛ›ÛÙ™œÙ]ˆ
‹ÃBˆZ[Ý‘TÑT•‘QÌÍŒNÃBˆ×ÒSÈZ[Ì—ÝÐÕ“ÑSÎNÈÊŠÙ[XÝÈHÛÝ\˜ÙH›ÜˆÐÒÈÛÚ[™È[È›^ÛÛ[H‹”Ù[XÝÈHÛÝ\˜ÙH›ÜˆÐÒÈÛÚ[™È[È›^ÛÛ[HË\œ˜^HÙ™œÙ]ˆ\œ˜^HÝ\ˆ
‹ÃBˆZ[Ý‘TÑT•‘QÌVÌÌ—NÃBˆ×ÒSÈZ[Ì—ÝÒT‘QÕ“ÑUÌ—NÈÊŠÙ[XÝÈÛÝ\˜Ù\È[™]HÛÛXš[˜][ÛœÈ›ÜˆÚ\™YÚYÛ˜[Ù]‹‹”Ù[XÝÈÛÝ\˜Ù\È[™]HÛÛXš[˜][ÛœÈ›ÜˆÚ\™YÚYÛ˜[Ù]K‹\œ˜^HÙ™œÙ]ˆ\œ˜^HÝ\ˆ
‹ÃBˆZ[Ý‘TÑT•‘QÌ–ÌLŒNÃBˆ×ÒHZ[Ì—ÝTÐ—Ò×ÔÕUTÎÈÊŠÝ]\È™YÚ\Ý\ˆ›ÜˆTÐˆËÙ™œÙ]ˆL
‹ÃBŸHÖTÐÕÕ\NÃBƒB‹ÊˆKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKCBˆKHÖTÐÕ™YÚ\Ý\ˆX\ÚÜÃBˆKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKH
‹ÃBƒB‹ÊˆCBˆ
ˆYÙÜ›Ý\ÖTÐÕÔ™YÚ\Ý\—ÓX\ÚÜÈÖTÐÕ™YÚ\Ý\ˆX\ÚÜÃBˆ
ˆÃBˆ
‹ÃBƒB‹ÊˆH˜[YHTUSÒÓÕUH\]HØÚÈÝ]ÛÛ›Û
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HÖTÐÕÕTUSÒÓÕUÕTUSÒÓÕUÓPTÒÈ
UJCBˆÙYš[™HÖTÐÕÕTUSÒÓÕUÕTUSÒÓÕUÔÒQ•
JCB‹ÊˆHTUSÒÓÕUH[™YÚ\Ý\œÃBˆ
ˆŒ‹“›Ü›X[[ÙKˆØ[ˆ™HÜš][ˆËƒBˆ
ˆŒK‹”›ÝXÝY[ÙKˆØ[››Ý™HÜš][ˆËƒBˆ
‹ÃBˆÙYš[™HÖTÐÕÕTUSÒÓÕUÕTUSÒÓÕU

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÕÕTUSÒÓÕUÕTUSÒÓÕUÔÒQ•
JH	ˆÖTÐÕÕTUSÒÓÕUÕTUSÒÓÕUÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHÐÕ“ÑSHÙ[XÝÈHÛÝ\˜ÙH›ÜˆÐÒÈÛÚ[™È[È›^ÛÛ[H‹”Ù[XÝÈHÛÝ\˜ÙH›ÜˆÐÒÈÛÚ[™È[È›^ÛÛ[HÈ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HÖTÐÕÑÐÕ“ÑSÔÐÒÒS”ÑSÓPTÒÈ
ÕJCBˆÙYš[™HÖTÐÕÑÐÕ“ÑSÔÐÒÒS”ÑSÔÒQ•
JCB‹ÊˆHÐÒÒS”ÑSHÙ[XÝÈHÛÝ\˜ÙH›ÜˆÐÒÈÛÚ[™È[È\È›^ÛÛ[KƒBˆ
ˆŒ‹”Ù[XÝÈHYXØ]YÛ—ÔÐÒÈ[˜Ý[Ûˆ›Üˆ\È›^ÛÛ[KƒBˆ
ˆŒK‹”ÐÒÈ\ÈZÙ[ˆœ›ÛHÚ\™YÚYÛ˜[Ù]
Yš[™YžHÒT‘QÕ“ÑU
KƒBˆ
ˆŒL‹”ÐÒÈ\ÈZÙ[ˆœ›ÛHÚ\™YÚYÛ˜[Ù]H
Yš[™YžHÒT‘QÕ“ÑUJKƒBˆ
ˆŒLK‹”™\Ù\™YƒBˆ
‹ÃBˆÙYš[™HÖTÐÕÑÐÕ“ÑSÔÐÒÒS”ÑS

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÕÑÐÕ“ÑSÔÐÒÒS”ÑSÔÒQ•
JH	ˆÖTÐÕÑÐÕ“ÑSÔÐÒÒS”ÑSÓPTÒÊCBˆÙYš[™HÖTÐÕÑÐÕ“ÑSÕÔÒS”ÑSÓPTÒÈ
ÌJCBˆÙYš[™HÖTÐÕÑÐÕ“ÑSÕÔÒS”ÑSÔÒQ•
JCB‹ÊˆHÔÒS”ÑSHÙ[XÝÈHÛÝ\˜ÙH›ÜˆÔÈÛÚ[™È[È\È›^ÛÛ[KƒBˆ
ˆŒ‹”Ù[XÝÈHYXØ]Y
Û—ÕÔÐÓÓRTÓ×ÕÔÊH[˜Ý[Ûˆ›Üˆ\È›^ÛÛ[KƒBˆ
ˆŒK‹•ÔÈ\ÈZÙ[ˆœ›ÛHÚ\™YÚYÛ˜[Ù]
Yš[™YžHÒT‘QÕ“ÑU
KƒBˆ
ˆŒL‹•ÔÈ\ÈZÙ[ˆœ›ÛHÚ\™YÚYÛ˜[Ù]H
Yš[™YžHÒT‘QÕ“ÑUJKƒBˆ
ˆŒLK‹”™\Ù\™YƒBˆ
‹ÃBˆÙYš[™HÖTÐÕÑÐÕ“ÑSÕÔÒS”ÑS

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÕÑÐÕ“ÑSÕÔÒS”ÑSÔÒQ•
JH	ˆÖTÐÕÑÐÕ“ÑSÕÔÒS”ÑSÓPTÒÊCBˆÙYš[™HÖTÐÕÑÐÕ“ÑSÑURS”ÑSÓPTÒÈ
ÌJCBˆÙYš[™HÖTÐÕÑÐÕ“ÑSÑURS”ÑSÔÒQ•
M•JCB‹ÊˆHURS”ÑSHÙ[XÝÈHÛÝ\˜ÙH›ÜˆUH[œ]È\È›^ÛÛ[KƒBˆ
ˆŒ‹”Ù[XÝÈHYXØ]YÛ—Ô–ÔÑWÓSÔÒWÑUH[œ]›Üˆ\È›^ÛÛ[KƒBˆ
ˆŒK‹’[œ]]H\ÈZÙ[ˆœ›ÛHÚ\™YÚYÛ˜[Ù]
Yš[™YžHÒT‘QÕ“ÑU
KƒBˆ
ˆŒL‹’[œ]]H\ÈZÙ[ˆœ›ÛHÚ\™YÚYÛ˜[Ù]H
Yš[™YžHÒT‘QÕ“ÑUJKƒBˆ
ˆŒLK‹”™\Ù\™YƒBˆ
‹ÃBˆÙYš[™HÖTÐÕÑÐÕ“ÑSÑURS”ÑS

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÕÑÐÕ“ÑSÑURS”ÑSÔÒQ•
JH	ˆÖTÐÕÑÐÕ“ÑSÑURS”ÑSÓPTÒÊCBˆÙYš[™HÖTÐÕÑÐÕ“ÑSÑUSÕUÑSÓPTÒÈ
ÌJCBˆÙYš[™HÖTÐÕÑÐÕ“ÑSÑUSÕUÑSÔÒQ•
JCB‹ÊˆHUSÕUÑSHÙ[XÝÈHÛÝ\˜ÙH›ÜˆUHÝ]]œ›ÛH\È›^ÛÛ[KƒBˆ
ˆŒ‹”Ù[XÝÈHYXØ]YÛ—Ô–ÔÑWÓSÔÒWÑUHÝ]]œ›ÛH\È›^ÛÛ[KƒBˆ
ˆŒK‹“Ý]]]H\ÈZÙ[ˆœ›ÛHÚ\™YÚYÛ˜[Ù]
Yš[™YžHÒT‘QÕ“ÑU
KƒBˆ
ˆŒL‹“Ý]]]H\ÈZÙ[ˆœ›ÛHÚ\™YÚYÛ˜[Ù]H
Yš[™YžHÒT‘QÕ“ÑUJKƒBˆ
ˆŒLK‹”™\Ù\™YƒBˆ
‹ÃBˆÙYš[™HÖTÐÕÑÐÕ“ÑSÑUSÕUÑS

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÕÑÐÕ“ÑSÑUSÕUÑSÔÒQ•
JH	ˆÖTÐÕÑÐÕ“ÑSÑUSÕUÑSÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆHÛÝ[ÙˆÖTÐÕÑÐÕ“ÑS
‹ÃBˆÙYš[™HÖTÐÕÑÐÕ“ÑSÐÓÕS•
JCBƒB‹ÊˆH˜[YHÒT‘QÕ“ÑUHÙ[XÝÈÛÝ\˜Ù\È[™]HÛÛXš[˜][ÛœÈ›ÜˆÚ\™YÚYÛ˜[Ù]‹‹”Ù[XÝÈÛÝ\˜Ù\È[™]HÛÛXš[˜][ÛœÈ›ÜˆÚ\™YÚYÛ˜[Ù]Kˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HÖTÐÕÔÒT‘QÕ“ÑUÔÒT‘QÐÒÔÑSÓPTÒÈ
ÕJCBˆÙYš[™HÖTÐÕÔÒT‘QÕ“ÑUÔÒT‘QÐÒÔÑSÔÒQ•
JCB‹ÊˆHÒT‘QÐÒÔÑSHÙ[XÝÈHÛÝ\˜ÙH›ÜˆÐÒÈÙˆ\ÈÚ\™YÚYÛ˜[Ù]ƒBˆ
ˆŒ‹”ÐÒÈ›Üˆ\ÈÚ\™YÚYÛ˜[Ù]ÛÛY\Èœ›ÛH›^ÛÛ[HƒBˆ
ˆŒK‹”ÐÒÈ›Üˆ\ÈÚ\™YÚYÛ˜[Ù]ÛÛY\Èœ›ÛH›^ÛÛ[HKƒBˆ
ˆŒL‹”ÐÒÈ›Üˆ\ÈÚ\™YÚYÛ˜[Ù]ÛÛY\Èœ›ÛH›^ÛÛ[H‹ƒBˆ
ˆŒLK‹”ÐÒÈ›Üˆ\ÈÚ\™YÚYÛ˜[Ù]ÛÛY\Èœ›ÛH›^ÛÛ[HËƒBˆ
ˆŒL‹”ÐÒÈ›Üˆ\ÈÚ\™YÚYÛ˜[Ù]ÛÛY\Èœ›ÛH›^ÛÛ[HƒBˆ
ˆŒLK‹”ÐÒÈ›Üˆ\ÈÚ\™YÚYÛ˜[Ù]ÛÛY\Èœ›ÛH›^ÛÛ[HKƒBˆ
ˆŒLL‹”ÐÒÈ›Üˆ\ÈÚ\™YÚYÛ˜[Ù]ÛÛY\Èœ›ÛH›^ÛÛ[H‹ƒBˆ
ˆŒLLK‹”ÐÒÈ›Üˆ\ÈÚ\™YÚYÛ˜[Ù]ÛÛY\Èœ›ÛH›^ÛÛ[HËƒBˆ
‹ÃBˆÙYš[™HÖTÐÕÔÒT‘QÕ“ÑUÔÒT‘QÐÒÔÑS

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÕÔÒT‘QÕ“ÑUÔÒT‘QÐÒÔÑSÔÒQ•
JH	ˆÖTÐÕÔÒT‘QÕ“ÑUÔÒT‘QÐÒÔÑSÓPTÒÊCBˆÙYš[™HÖTÐÕÔÒT‘QÕ“ÑUÔÒT‘QÔÔÑSÓPTÒÈ
ÌJCBˆÙYš[™HÖTÐÕÔÒT‘QÕ“ÑUÔÒT‘QÔÔÑSÔÒQ•
JCB‹ÊˆHÒT‘QÔÔÑSHÙ[XÝÈHÛÝ\˜ÙH›ÜˆÔÈÙˆ\ÈÚ\™YÚYÛ˜[Ù]ƒBˆ
ˆŒ‹•ÔÈ›Üˆ\ÈÚ\™YÚYÛ˜[Ù]ÛÛY\Èœ›ÛH›^ÛÛ[HƒBˆ
ˆŒK‹•ÔÈ›Üˆ\ÈÚ\™YÚYÛ˜[Ù]ÛÛY\Èœ›ÛH›^ÛÛ[HKƒBˆ
ˆŒL‹•ÔÈ›Üˆ\ÈÚ\™YÚYÛ˜[Ù]ÛÛY\Èœ›ÛH›^ÛÛ[H‹ƒBˆ
ˆŒLK‹•ÔÈ›Üˆ\ÈÚ\™YÚYÛ˜[Ù]ÛÛY\Èœ›ÛH›^ÛÛ[HËƒBˆ
ˆŒL‹•ÔÈ›Üˆ\ÈÚ\™YÚYÛ˜[Ù]ÛÛY\Èœ›ÛH›^ÛÛ[HƒBˆ
ˆŒLK‹•ÔÈ›Üˆ\ÈÚ\™YÚYÛ˜[Ù]ÛÛY\Èœ›ÛH›^ÛÛ[HKƒBˆ
ˆŒLL‹•ÔÈ›Üˆ\ÈÚ\™YÚYÛ˜[Ù]ÛÛY\Èœ›ÛH›^ÛÛ[H‹ƒBˆ
ˆŒLLK‹•ÔÈ›Üˆ\ÈÚ\™YÚYÛ˜[Ù]ÛÛY\Èœ›ÛH›^ÛÛ[HËƒBˆ
‹ÃBˆÙYš[™HÖTÐÕÔÒT‘QÕ“ÑUÔÒT‘QÔÔÑS

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÕÔÒT‘QÕ“ÑUÔÒT‘QÔÔÑSÔÒQ•
JH	ˆÖTÐÕÔÒT‘QÕ“ÑUÔÒT‘QÔÔÑSÓPTÒÊCBˆÙYš[™HÖTÐÕÔÒT‘QÕ“ÑUÔÒT‘QUTÑSÓPTÒÈ
ÌJCBˆÙYš[™HÖTÐÕÔÒT‘QÕ“ÑUÔÒT‘QUTÑSÔÒQ•
JCB‹ÊˆHÒT‘QUTÑSHÙ[XÝÈHÛÝ\˜ÙH›ÜˆUH[œ]›Üˆ\ÈÚ\™YÚYÛ˜[Ù]ƒBˆ
ˆŒ‹‘UH[œ]›Üˆ\ÈÚ\™YÚYÛ˜[Ù]ÛÛY\Èœ›ÛH›^ÛÛ[HƒBˆ
ˆŒK‹‘UH[œ]›Üˆ\ÈÚ\™YÚYÛ˜[Ù]ÛÛY\Èœ›ÛH›^ÛÛ[HKƒBˆ
ˆŒL‹‘UH[œ]›Üˆ\ÈÚ\™YÚYÛ˜[Ù]ÛÛY\Èœ›ÛH›^ÛÛ[H‹ƒBˆ
ˆŒLK‹‘UH[œ]›Üˆ\ÈÚ\™YÚYÛ˜[Ù]ÛÛY\Èœ›ÛH›^ÛÛ[HËƒBˆ
ˆŒL‹‘UH[œ]›Üˆ\ÈÚ\™YÚYÛ˜[Ù]ÛÛY\Èœ›ÛH›^ÛÛ[HƒBˆ
ˆŒLK‹‘UH[œ]›Üˆ\ÈÚ\™YÚYÛ˜[Ù]ÛÛY\Èœ›ÛH›^ÛÛ[HKƒBˆ
ˆŒLL‹‘UH[œ]›Üˆ\ÈÚ\™YÚYÛ˜[Ù]ÛÛY\Èœ›ÛH›^ÛÛ[H‹ƒBˆ
ˆŒLLK‹‘UH[œ]›Üˆ\ÈÚ\™YÚYÛ˜[Ù]ÛÛY\Èœ›ÛH›^ÛÛ[HËƒBˆ
‹ÃBˆÙYš[™HÖTÐÕÔÒT‘QÕ“ÑUÔÒT‘QUTÑS

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÕÔÒT‘QÕ“ÑUÔÒT‘QUTÑSÔÒQ•
JH	ˆÖTÐÕÔÒT‘QÕ“ÑUÔÒT‘QUTÑSÓPTÒÊCBˆÙYš[™HÖTÐÕÔÒT‘QÕ“ÑUÑÌUSÕUS—ÓPTÒÈ
LJCBˆÙYš[™HÖTÐÕÔÒT‘QÕ“ÑUÑÌUSÕUS—ÔÒQ•
M•JCB‹ÊˆHÌUSÕUSˆHÛÛ›ÛÈÌÛÛšX][ÛˆÈÒT‘QUSÕU›Üˆ\ÈÚ\™YÙ]ƒBˆ
ˆŒ‹‘]HÝ]]œ›ÛHÌÙ\È›ÝÛÛšX]HÈ\ÈÚ\™YÙ]ƒBˆ
ˆŒK‹‘]HÝ]]œ›ÛHÌÙ\ÈÛÛšX]HÈ\ÈÚ\™YÙ]ƒBˆ
‹ÃBˆÙYš[™HÖTÐÕÔÒT‘QÕ“ÑUÑÌUSÕUSŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÕÔÒT‘QÕ“ÑUÑÌUSÕUS—ÔÒQ•
JH	ˆÖTÐÕÔÒT‘QÕ“ÑUÑÌUSÕUS—ÓPTÒÊCBˆÙYš[™HÖTÐÕÔÒT‘QÕ“ÑUÑÌQUSÕUS—ÓPTÒÈ
ŒJCBˆÙYš[™HÖTÐÕÔÒT‘QÕ“ÑUÑÌQUSÕUS—ÔÒQ•
MÕJCB‹ÊˆHÌQUSÕUSˆHÛÛ›ÛÈÌHÛÛšX][ÛˆÈÒT‘QUSÕU›Üˆ\ÈÚ\™YÙ]ƒBˆ
ˆŒ‹‘]HÝ]]œ›ÛHÌHÙ\È›ÝÛÛšX]HÈ\ÈÚ\™YÙ]ƒBˆ
ˆŒK‹‘]HÝ]]œ›ÛHÌHÙ\ÈÛÛšX]HÈ\ÈÚ\™YÙ]ƒBˆ
‹ÃBˆÙYš[™HÖTÐÕÔÒT‘QÕ“ÑUÑÌQUSÕUSŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÕÔÒT‘QÕ“ÑUÑÌQUSÕUS—ÔÒQ•
JH	ˆÖTÐÕÔÒT‘QÕ“ÑUÑÌQUSÕUS—ÓPTÒÊCBˆÙYš[™HÖTÐÕÔÒT‘QÕ“ÑUÑÌ‘USÕUS—ÓPTÒÈ
JCBˆÙYš[™HÖTÐÕÔÒT‘QÕ“ÑUÑÌ‘USÕUS—ÔÒQ•
NJCB‹ÊˆHÌ‘USÕUSˆHÛÛ›ÛÈÌˆÛÛšX][ÛˆÈÒT‘QUSÕU›Üˆ\ÈÚ\™YÙ]ƒBˆ
ˆŒ‹‘]HÝ]]œ›ÛHÌˆÙ\È›ÝÛÛšX]HÈ\ÈÚ\™YÙ]ƒBˆ
ˆŒK‹‘]HÝ]]œ›ÛHÌˆÙ\ÈÛÛšX]HÈ\ÈÚ\™YÙ]ƒBˆ
‹ÃBˆÙYš[™HÖTÐÕÔÒT‘QÕ“ÑUÑÌ‘USÕUSŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÕÔÒT‘QÕ“ÑUÑÌ‘USÕUS—ÔÒQ•
JH	ˆÖTÐÕÔÒT‘QÕ“ÑUÑÌ‘USÕUS—ÓPTÒÊCBˆÙYš[™HÖTÐÕÔÒT‘QÕ“ÑUÑÍUSÕUS—ÓPTÒÈ
LJCBˆÙYš[™HÖTÐÕÔÒT‘QÕ“ÑUÑÍUSÕUS—ÔÒQ•
ŒJCB‹ÊˆHÍUSÕUSˆHÛÛ›ÛÈÍÛÛšX][ÛˆÈÒT‘QUSÕU›Üˆ\ÈÚ\™YÙ]ƒBˆ
ˆŒ‹‘]HÝ]]œ›ÛHÍÙ\È›ÝÛÛšX]HÈ\ÈÚ\™YÙ]ƒBˆ
ˆŒK‹‘]HÝ]]œ›ÛHÍÙ\ÈÛÛšX]HÈ\ÈÚ\™YÙ]ƒBˆ
‹ÃBˆÙYš[™HÖTÐÕÔÒT‘QÕ“ÑUÑÍUSÕUSŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÕÔÒT‘QÕ“ÑUÑÍUSÕUS—ÔÒQ•
JH	ˆÖTÐÕÔÒT‘QÕ“ÑUÑÍUSÕUS—ÓPTÒÊCBˆÙYš[™HÖTÐÕÔÒT‘QÕ“ÑUÑÍQUSÕUS—ÓPTÒÈ
ŒJCBˆÙYš[™HÖTÐÕÔÒT‘QÕ“ÑUÑÍQUSÕUS—ÔÒQ•
ŒUJCB‹ÊˆHÍQUSÕUSˆHÛÛ›ÛÈÍHÛÛšX][ÛˆÈÒT‘QUSÕU›Üˆ\ÈÚ\™YÙ]ƒBˆ
ˆŒ‹‘]HÝ]]œ›ÛHÍHÙ\È›ÝÛÛšX]HÈ\ÈÚ\™YÙ]ƒBˆ
ˆŒK‹‘]HÝ]]œ›ÛHÍHÙ\ÈÛÛšX]HÈ\ÈÚ\™YÙ]ƒBˆ
‹ÃBˆÙYš[™HÖTÐÕÔÒT‘QÕ“ÑUÑÍQUSÕUSŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÕÔÒT‘QÕ“ÑUÑÍQUSÕUS—ÔÒQ•
JH	ˆÖTÐÕÔÒT‘QÕ“ÑUÑÍQUSÕUS—ÓPTÒÊCBˆÙYš[™HÖTÐÕÔÒT‘QÕ“ÑUÑÍ‘USÕUS—ÓPTÒÈ
JCBˆÙYš[™HÖTÐÕÔÒT‘QÕ“ÑUÑÍ‘USÕUS—ÔÒQ•
Œ•JCB‹ÊˆHÍ‘USÕUSˆHÛÛ›ÛÈÍˆÛÛšX][ÛˆÈÒT‘QUSÕU›Üˆ\ÈÚ\™YÙ]ƒBˆ
ˆŒ‹‘]HÝ]]œ›ÛHÍˆÙ\È›ÝÛÛšX]HÈ\ÈÚ\™YÙ]ƒBˆ
ˆŒK‹‘]HÝ]]œ›ÛHÍˆÙ\ÈÛÛšX]HÈ\ÈÚ\™YÙ]ƒBˆ
‹ÃBˆÙYš[™HÖTÐÕÔÒT‘QÕ“ÑUÑÍ‘USÕUSŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÕÔÒT‘QÕ“ÑUÑÍ‘USÕUS—ÔÒQ•
JH	ˆÖTÐÕÔÒT‘QÕ“ÑUÑÍ‘USÕUS—ÓPTÒÊCBˆÙYš[™HÖTÐÕÔÒT‘QÕ“ÑUÑÍÑUSÕUS—ÓPTÒÈ
JCBˆÙYš[™HÖTÐÕÔÒT‘QÕ“ÑUÑÍÑUSÕUS—ÔÒQ•
ŒÕJCB‹ÊˆHÍÑUSÕUSˆHÛÛ›ÛÈÍÈÛÛšX][ÛˆÈÒT‘QUSÕU›Üˆ\ÈÚ\™YÙ]ƒBˆ
ˆŒ‹‘]HÝ]]œ›ÛHÍÈÙ\È›ÝÛÛšX]HÈ\ÈÚ\™YÙ]ƒBˆ
ˆŒK‹‘]HÝ]]œ›ÛHÍÈÙ\ÈÛÛšX]HÈ\ÈÚ\™YÙ]ƒBˆ
‹ÃBˆÙYš[™HÖTÐÕÔÒT‘QÕ“ÑUÑÍÑUSÕUSŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÕÔÒT‘QÕ“ÑUÑÍÑUSÕUS—ÔÒQ•
JH	ˆÖTÐÕÔÒT‘QÕ“ÑUÑÍÑUSÕUS—ÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆHÛÝ[ÙˆÖTÐÕÔÒT‘QÕ“ÑU
‹ÃBˆÙYš[™HÖTÐÕÔÒT‘QÕ“ÑUÐÓÕS•
•JCBƒB‹ÊˆH˜[YHTÐ—Ò×ÔÕUTÈHÝ]\È™YÚ\Ý\ˆ›ÜˆTÐˆÈ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HÖTÐÕÕTÐ—Ò×ÔÕUT×ÕTÐ’×ÌÕ—Ó“Ò×ÓPTÒÈ
UJCBˆÙYš[™HÖTÐÕÕTÐ—Ò×ÔÕUT×ÕTÐ’×ÌÕ—Ó“Ò×ÔÒQ•
JCB‹ÊˆHTÐ’×ÌÕ—Ó“ÒÈHTÐ—ÒÎˆÝÈ›ÛYÙH]XÝ[ÛˆÛˆËŒÕˆÝ\KƒBˆ
ˆŒ‹ŒÝŒÈÝ\H\ÈÛÛÙƒBˆ
ˆŒK‹ŒÝŒÈÝ\H\ÈÛÈÝËƒBˆ
‹ÃBˆÙYš[™HÖTÐÕÕTÐ—Ò×ÔÕUT×ÕTÐ’×ÌÕ—Ó“ÒÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÖTÐÕÕTÐ—Ò×ÔÕUT×ÕTÐ’×ÌÕ—Ó“Ò×ÔÒQ•
JH	ˆÖTÐÕÕTÐ—Ò×ÔÕUT×ÕTÐ’×ÌÕ—Ó“Ò×ÓPTÒÊCB‹ÊˆHH
‹ÃBƒBƒB‹ÊˆCBˆ
ˆCBˆ
‹ÈÊˆ[™ÙˆÜ›Ý\ÖTÐÕÔ™YÚ\Ý\—ÓX\ÚÜÈ
‹ÃBƒBƒB‹ÊˆÖTÐÕH\š\\˜[[œÝ[˜ÙH˜\ÙHY™\ÜÙ\È
‹ÃBˆÚYˆ
×ÐT“WÑ‘PUT‘WÐÓTÑH	ˆŠCBˆÊŠˆ\š\\˜[ÖTÐÕ˜\ÙHY™\ÜÈ
‹ÃBˆÙYš[™HÖTÐÕÐTÑH
LŒÌJCBˆÊŠˆ\š\\˜[ÖTÐÕ˜\ÙHY™\ÜÈ
‹ÃBˆÙYš[™HÖTÐÕÐTÑWÓ”È
ŒÌJCBˆÊŠˆ\š\\˜[ÖTÐÕ˜\ÙHÚ[\ˆ
‹ÃBˆÙYš[™HÖTÐÕ

ÖTÐÕÕ\H
ŠTÖTÐÕÐTÑJCBˆÊŠˆ\š\\˜[ÖTÐÕ˜\ÙHÚ[\ˆ
‹ÃBˆÙYš[™HÖTÐÕÓ”È

ÖTÐÕÕ\H
ŠTÖTÐÕÐTÑWÓ”ÊCBˆÊŠˆ\œ˜^H[š]X[^™\ˆÙˆÖTÐÕ\š\\˜[˜\ÙHY™\ÜÙ\È
‹ÃBˆÙYš[™HÖTÐÕÐTÑWÐQ”ÈÈÖTÐÕÐTÑHCBˆÊŠˆ\œ˜^H[š]X[^™\ˆÙˆÖTÐÕ\š\\˜[˜\ÙHÚ[\œÈ
‹ÃBˆÙYš[™HÖTÐÕÐTÑWÔ”ÈÈÖTÐÕCBˆÊŠˆ\œ˜^H[š]X[^™\ˆÙˆÖTÐÕ\š\\˜[˜\ÙHY™\ÜÙ\È
‹ÃBˆÙYš[™HÖTÐÕÐTÑWÐQ”×Ó”ÈÈÖTÐÕÐTÑWÓ”ÈCBˆÊŠˆ\œ˜^H[š]X[^™\ˆÙˆÖTÐÕ\š\\˜[˜\ÙHÚ[\œÈ
‹ÃBˆÙYš[™HÖTÐÕÐTÑWÔ”×Ó”ÈÈÖTÐÕÓ”ÈCBˆÙ[ÙCBˆÊŠˆ\š\\˜[ÖTÐÕ˜\ÙHY™\ÜÈ
‹ÃBˆÙYš[™HÖTÐÕÐTÑH
ŒÌJCBˆÊŠˆ\š\\˜[ÖTÐÕ˜\ÙHÚ[\ˆ
‹ÃBˆÙYš[™HÖTÐÕ

ÖTÐÕÕ\H
ŠTÖTÐÕÐTÑJCBˆÊŠˆ\œ˜^H[š]X[^™\ˆÙˆÖTÐÕ\š\\˜[˜\ÙHY™\ÜÙ\È
‹ÃBˆÙYš[™HÖTÐÕÐTÑWÐQ”ÈÈÖTÐÕÐTÑHCBˆÊŠˆ\œ˜^H[š]X[^™\ˆÙˆÖTÐÕ\š\\˜[˜\ÙHÚ[\œÈ
‹ÃBˆÙYš[™HÖTÐÕÐTÑWÔ”ÈÈÖTÐÕCBˆÙ[™YƒBƒB‹ÊˆCBˆ
ˆCBˆ
‹ÈÊˆ[™ÙˆÜ›Ý\ÖTÐÕÔ\š\\˜[ÐXØÙ\Ü×Ó^Y\ˆ
‹ÃBƒBƒB‹ÊˆKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKCBˆKHTÐT•\š\\˜[XØÙ\ÜÈ^Y\ƒBˆKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKH
‹ÃBƒB‹ÊˆCBˆ
ˆYÙÜ›Ý\TÐT•Ô\š\\˜[ÐXØÙ\Ü×Ó^Y\ˆTÐT•\š\\˜[XØÙ\ÜÈ^Y\ƒBˆ
ˆÃBˆ
‹ÃBƒB‹ÊŠˆTÐT•H™YÚ\Ý\ˆ^[Ý]\YYˆ
‹ÃB\YYˆÝXÝÃBˆ×ÒSÈZ[Ì—ÝÑ‘ÎÈÊŠTÐT•ÛÛ™šYÝ\˜][Ûˆ™YÚ\Ý\‹ˆ˜\ÚXÈTÐT•ÛÛ™šYÝ\˜][ÛˆÙ][™ÜÈ]\XØ[H\™H›ÝÚ[™ÙY\š[™ÈÜ\˜][Û‹‹Ù™œÙ]ˆ
‹ÃBˆ×ÒSÈZ[Ì—ÝÕÈÊŠTÐT•ÛÛ›Û™YÚ\Ý\‹ˆTÐT•ÛÛ›ÛÙ][™ÜÈ]\™H[Ü™HZÙ[HÈÚ[™ÙH\š[™ÈÜ\˜][Û‹‹Ù™œÙ]ˆ
‹ÃBˆ×ÒSÈZ[Ì—ÝÕUÈÊŠTÐT•Ý]\È™YÚ\Ý\‹ˆHÛÛ\]HÝ]\È˜[YHØ[ˆ™H™XY\™KˆÜš][™ÈÛ™\ÈÛX\œÈÛÛYHš]È[ˆH™YÚ\Ý\‹ˆÛÛYHš]ÈØ[ˆ™HÛX\™YžHÜš][™ÈHHÈ[K‹Ù™œÙ]ˆ
‹ÃBˆ×ÒSÈZ[Ì—ÝS•S”ÑUÈÊŠ[\œ\[˜X›H™XY[™Ù]™YÚ\Ý\ˆ›ÜˆTÐT•
›Ý’Q“ÊHÝ]\ËˆÛÛZ[œÈ[™]šYX[[\œ\[˜X›Hš]È›ÜˆXXÚÝ[X[TÐT•[\œ\ˆHÛÛ\]H˜[YHX^H™H™XYœ›ÛH\È™YÚ\Ý\‹ˆÜš][™ÈHHÈ[žH[\[Y[Yš]ÜÚ][ÛˆØ]\Ù\È]š]È™HÙ]‹Ù™œÙ]ˆÈ
‹ÃBˆ×ÓÈZ[Ì—ÝS•SÓŽÈÊŠ[\œ\[˜X›HÛX\ˆ™YÚ\Ý\‹ˆ[ÝÜÈÛX\š[™È[žHÛÛXš[˜][ÛˆÙˆš]È[ˆHS•S”ÑU™YÚ\Ý\‹ˆÜš][™ÈHHÈ[žH[\[Y[Yš]ÜÚ][ÛˆØ]\Ù\ÈHÛÜœ™\ÜÛ™[™Èš]È™HÛX\™Y‹Ù™œÙ]ˆL
‹ÃBˆZ[Ý‘TÑT•‘QÌÌL—NÃBˆ×ÒSÈZ[Ì—Ý”‘ÎÈÊŠ˜]Y˜]HÙ[™\˜]Üˆ™YÚ\Ý\‹ˆM‹Xš][YÙ\ˆ˜]Y˜]H]š\ÛÜˆ˜[YK‹Ù™œÙ]ˆŒ
‹ÃBˆ×ÒHZ[Ì—ÝS•ÕUÈÊŠ[\œ\Ý]\È™YÚ\Ý\‹ˆ™Y›XÝÈ[\œ\È]\™HÝ\œ™[H[˜X›Y‹Ù™œÙ]ˆ
‹ÃBˆ×ÒSÈZ[Ì—ÝÔÔŽÈÊŠÝ™\œØ[\HÙ[XÝ[Ûˆ™YÚ\Ý\ˆ›Üˆ\Þ[˜Ú›Û›Ý\ÈÛÛ[][šXØ][Û‹‹Ù™œÙ]ˆŽ
‹ÃBˆ×ÒSÈZ[Ì—ÝQŽÈÊŠY™\ÜÈ™YÚ\Ý\ˆ›Üˆ]]ÛX]XÈY™\ÜÈX]Ú[™Ë‹Ù™œÙ]ˆÈ
‹ÃBˆZ[Ý‘TÑT•‘QÌVÌÍLÍ—NÃBˆ×ÒSÈZ[Ì—Ý’Q“ÐÑ‘ÎÈÊŠ’Q“ÈÛÛ™šYÝ\˜][Ûˆ[™[˜X›H™YÚ\Ý\‹‹Ù™œÙ]ˆL
‹ÃBˆ×ÒSÈZ[Ì—Ý’Q“ÔÕUÈÊŠ’Q“ÈÝ]\È™YÚ\Ý\‹‹Ù™œÙ]ˆL
‹ÃBˆ×ÒSÈZ[Ì—Ý’Q“Õ’QÎÈÊŠ’Q“ÈšYÙÙ\ˆÙ][™ÜÈ›Üˆ[\œ\[™PH™\]Y\Ý‹Ù™œÙ]ˆL
‹ÃBˆZ[Ý‘TÑT•‘QÌ–ÍNÃBˆ×ÒSÈZ[Ì—Ý’Q“ÒS•S”ÑUÈÊŠ’Q“È[\œ\[˜X›HÙ]
[˜X›JH[™™XY™YÚ\Ý\‹‹Ù™œÙ]ˆLL
‹ÃBˆ×ÒSÈZ[Ì—Ý’Q“ÒS•SÓŽÈÊŠ’Q“È[\œ\[˜X›HÛX\ˆ
\ØX›JH[™™XY™YÚ\Ý\‹‹Ù™œÙ]ˆLM
‹ÃBˆ×ÒHZ[Ì—Ý’Q“ÒS•ÕUÈÊŠ’Q“È[\œ\Ý]\È™YÚ\Ý\‹‹Ù™œÙ]ˆLN
‹ÃBˆZ[Ý‘TÑT•‘QÌÖÍNÃBˆ×ÓÈZ[Ì—Ý’Q“ÕÔŽÈÊŠ’Q“ÈÜš]H]K‹Ù™œÙ]ˆLŒ
‹ÃBˆZ[Ý‘TÑT•‘QÍÌL—NÃBˆ×ÒHZ[Ì—Ý’Q“Ô‘ÈÊŠ’Q“È™XY]K‹Ù™œÙ]ˆLÌ
‹ÃBˆZ[Ý‘TÑT•‘QÍVÌL—NÃBˆ×ÒHZ[Ì—Ý’Q“Ô‘“ÔÔÈÊŠ’Q“È]H™XYÚ]›È’Q“ÈÜ‹Ù™œÙ]ˆM
‹ÃBˆZ[Ý‘TÑT•‘QÍ–ÍNÃBˆ×ÒHZ[Ì—ÝQÈÊŠ\š\\˜[Y[YšXØ][Ûˆ™YÚ\Ý\‹‹Ù™œÙ]ˆ‘È
‹ÃBŸHTÐT•Õ\NÃBƒB‹ÊˆKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKCBˆKHTÐT•™YÚ\Ý\ˆX\ÚÜÃBˆKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKH
‹ÃBƒB‹ÊˆCBˆ
ˆYÙÜ›Ý\TÐT•Ô™YÚ\Ý\—ÓX\ÚÜÈTÐT•™YÚ\Ý\ˆX\ÚÜÃBˆ
ˆÃBˆ
‹ÃBƒB‹ÊˆH˜[YHÑ‘ÈHTÐT•ÛÛ™šYÝ\˜][Ûˆ™YÚ\Ý\‹ˆ˜\ÚXÈTÐT•ÛÛ™šYÝ\˜][ÛˆÙ][™ÜÈ]\XØ[H\™H›ÝÚ[™ÙY\š[™ÈÜ\˜][Û‹ˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐT•ÐÑ‘×ÑSP“WÓPTÒÈ
UJCBˆÙYš[™HTÐT•ÐÑ‘×ÑSP“WÔÒQ•
JCB‹ÊˆHSP“HHTÐT•[˜X›KƒBˆ
ˆŒ‹‘\ØX›YˆHTÐT•\È\ØX›Y[™H[\›˜[Ý]HXXÚ[™H[™ÛÝ[\œÈ\™H™\Ù]ˆÚ[H[˜X›HHBˆ
ˆ[TÐT•[\œ\È[™PH˜[œÙ™\œÈ\™H\ØX›YˆÚ[ˆ[˜X›H\ÈÙ]YØZ[‹Ñ‘È[™[ÜÝÝ\ˆÛÛ›ÛBˆ
ˆš]È™[XZ[ˆ[˜Ú[™ÙYˆÚ[ˆ™KY[˜X›YHTÐT•Ú[[[YYX][H™H™XYHÈ˜[œÛZ]™XØ]\ÙHCBˆ
ˆ˜[œÛZ]\ˆ\È™Y[ˆ™\Ù][™\È\™Y›Ü™H]˜Z[X›KƒBˆ
ˆŒK‹‘[˜X›YˆHTÐT•\È[˜X›Y›ÜˆÜ\˜][Û‹ƒBˆ
‹ÃBˆÙYš[™HTÐT•ÐÑ‘×ÑSP“J
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•ÐÑ‘×ÑSP“WÔÒQ•
JH	ˆTÐT•ÐÑ‘×ÑSP“WÓPTÒÊCBˆÙYš[™HTÐT•ÐÑ‘×ÑUSS—ÓPTÒÈ
ÕJCBˆÙYš[™HTÐT•ÐÑ‘×ÑUSS—ÔÒQ•
•JCB‹ÊˆHUSSˆHÙ[XÝÈH]HÚ^™H›ÜˆHTÐT•ƒBˆ
ˆŒ‹Èš]]H[™ÝƒBˆ
ˆŒK‹Žš]]H[™ÝƒBˆ
ˆŒL‹ŽHš]]H[™ÝˆH]š]\ÈÛÛ[[Û›H\ÙY›ÜˆY™\ÜÚ[™È[ˆ][Y›Ü[ÙKˆÙYHHQ‘Uš][ˆHÕ™YÚ\Ý\‹ƒBˆ
ˆŒLK‹”™\Ù\™YƒBˆ
‹ÃBˆÙYš[™HTÐT•ÐÑ‘×ÑUSSŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•ÐÑ‘×ÑUSS—ÔÒQ•
JH	ˆTÐT•ÐÑ‘×ÑUSS—ÓPTÒÊCBˆÙYš[™HTÐT•ÐÑ‘×ÔT’UTÑSÓPTÒÈ
ÌJCBˆÙYš[™HTÐT•ÐÑ‘×ÔT’UTÑSÔÒQ•
JCB‹ÊˆHT’UTÑSHÙ[XÝÈÚ]\HÙˆ\š]H\È\ÙYžHHTÐT•ƒBˆ
ˆŒ‹“›È\š]KƒBˆ
ˆŒK‹”™\Ù\™YƒBˆ
ˆŒL‹‘]™[ˆ\š]KˆYÈHš]ÈXXÚÚ\˜XÝ\ˆÝXÚ]H[X™\ˆÙˆ\È[ˆH˜[œÛZ]YÚ\˜XÝ\ˆ\È]™[‹Bˆ
ˆ[™H[X™\ˆÙˆ\È[ˆH™XÙZ]™YÚ\˜XÝ\ˆ\È^XÝYÈ™H]™[‹ƒBˆ
ˆŒLK‹“Ù\š]KˆYÈHš]ÈXXÚÚ\˜XÝ\ˆÝXÚ]H[X™\ˆÙˆ\È[ˆH˜[œÛZ]YÚ\˜XÝ\ˆ\ÈÙBˆ
ˆ[™H[X™\ˆÙˆ\È[ˆH™XÙZ]™YÚ\˜XÝ\ˆ\È^XÝYÈ™HÙƒBˆ
‹ÃBˆÙYš[™HTÐT•ÐÑ‘×ÔT’UTÑS

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•ÐÑ‘×ÔT’UTÑSÔÒQ•
JH	ˆTÐT•ÐÑ‘×ÔT’UTÑSÓPTÒÊCBˆÙYš[™HTÐT•ÐÑ‘×ÔÕÔS—ÓPTÒÈ
JCBˆÙYš[™HTÐT•ÐÑ‘×ÔÕÔS—ÔÒQ•
•JCB‹ÊˆHÕÔSˆH[X™\ˆÙˆÝÜš]È\[™YÈ˜[œÛZ]Y]KˆÛ›HHÚ[™ÛHÝÜš]\È™\]Z\™Y›Üˆ™XÙZ]™Y]KƒBˆ
ˆŒ‹ŒHÝÜš]ƒBˆ
ˆŒK‹ŒˆÝÜš]Ëˆ\ÈÙ][™ÈÚÝ[Û›H™H\ÙY›Üˆ\Þ[˜Ú›Û›Ý\ÈÛÛ[][šXØ][Û‹ƒBˆ
‹ÃBˆÙYš[™HTÐT•ÐÑ‘×ÔÕÔSŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•ÐÑ‘×ÔÕÔS—ÔÒQ•
JH	ˆTÐT•ÐÑ‘×ÔÕÔS—ÓPTÒÊCBˆÙYš[™HTÐT•ÐÑ‘×ÓSÑLÌ’×ÓPTÒÈ
JCBˆÙYš[™HTÐT•ÐÑ‘×ÓSÑLÌ’×ÔÒQ•
ÕJCB‹ÊˆHSÑLÌ’ÈHÙ[XÝÈÝ[™\™ÜˆÌˆÒˆÛØÚÚ[™È[ÙKƒBˆ
ˆŒ‹‘\ØX›YˆTÐT•\Ù\ÈÝ[™\™ÛØÚÚ[™ËƒBˆ
ˆŒK‹‘[˜X›YˆTÐT•\Ù\ÈHÌˆÒˆÛØÚÈœ›ÛHH•ÈÜØÚ[]Üˆ\ÈHÛØÚÈÛÝ\˜ÙHÈH”‘Ë[™\Ù\ÈHÜXÚX[š]ÛØÚÚ[™ÈØÚ[YKƒBˆ
‹ÃBˆÙYš[™HTÐT•ÐÑ‘×ÓSÑLÌ’Ê
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•ÐÑ‘×ÓSÑLÌ’×ÔÒQ•
JH	ˆTÐT•ÐÑ‘×ÓSÑLÌ’×ÓPTÒÊCBˆÙYš[™HTÐT•ÐÑ‘×ÓS“SÑWÓPTÒÈ
LJCBˆÙYš[™HTÐT•ÐÑ‘×ÓS“SÑWÔÒQ•
JCB‹ÊˆHS“SÑHHSˆœ™XZÈ[ÙH[˜X›KƒBˆ
ˆŒ‹‘\ØX›Yˆœ™XZÈ]XÝ[™Ù[™\˜]H\ÈÛÛ™šYÝ\™Y›Üˆ›Ü›X[Ü\˜][Û‹ƒBˆ
ˆŒK‹‘[˜X›Yˆœ™XZÈ]XÝ[™Ù[™\˜]H\ÈÛÛ™šYÝ\™Y›ÜˆSˆ\ÈÜ\˜][Û‹ƒBˆ
‹ÃBˆÙYš[™HTÐT•ÐÑ‘×ÓS“SÑJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•ÐÑ‘×ÓS“SÑWÔÒQ•
JH	ˆTÐT•ÐÑ‘×ÓS“SÑWÓPTÒÊCBˆÙYš[™HTÐT•ÐÑ‘×ÐÕÑS—ÓPTÒÈ
ŒJCBˆÙYš[™HTÐT•ÐÑ‘×ÐÕÑS—ÔÒQ•
UJCB‹ÊˆHÕÑSˆHÕÈ[˜X›Kˆ]\›Z[™\ÈÚ]\ˆÕÈ\È\ÙY›Üˆ›ÝÈÛÛ›ÛˆÕÈØ[ˆ™Hœ›ÛHH[œ]Bˆ
ˆ[‹Üˆœ›ÛHHTÐT•	ÜÈÝÛˆ•ÈYˆÛÜ˜XÚÈ[ÙH\È[˜X›YƒBˆ
ˆŒ‹“›È›ÝÈÛÛ›ÛˆH˜[œÛZ]\ˆÙ\È›Ý™XÙZ]™H[žH]]ÛX]XÈ›ÝÈÛÛ›ÛÚYÛ˜[ƒBˆ
ˆŒK‹‘›ÝÈÛÛ›Û[˜X›YˆH˜[œÛZ]\ˆ\Ù\ÈHÕÈ[œ]
Üˆ•ÈÝ]][ˆÛÜ˜XÚÈ[ÙJH›Üˆ›ÝÈÛÛ›Û\œÜÙ\ËƒBˆ
‹ÃBˆÙYš[™HTÐT•ÐÑ‘×ÐÕÑSŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•ÐÑ‘×ÐÕÑS—ÔÒQ•
JH	ˆTÐT•ÐÑ‘×ÐÕÑS—ÓPTÒÊCBˆÙYš[™HTÐT•ÐÑ‘×ÔÖSÑS—ÓPTÒÈ
JCBˆÙYš[™HTÐT•ÐÑ‘×ÔÖSÑS—ÔÒQ•
LUJCB‹ÊˆHÖSÑSˆHÙ[XÝÈÞ[˜Ú›Û›Ý\ÈÜˆ\Þ[˜Ú›Û›Ý\ÈÜ\˜][Û‹ƒBˆ
ˆŒ‹\Þ[˜Ú›Û›Ý\È[ÙKƒBˆ
ˆŒK‹”Þ[˜Ú›Û›Ý\È[ÙKƒBˆ
‹ÃBˆÙYš[™HTÐT•ÐÑ‘×ÔÖSÑSŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•ÐÑ‘×ÔÖSÑS—ÔÒQ•
JH	ˆTÐT•ÐÑ‘×ÔÖSÑS—ÓPTÒÊCBˆÙYš[™HTÐT•ÐÑ‘×ÐÓÔÓÓPTÒÈ
LJCBˆÙYš[™HTÐT•ÐÑ‘×ÐÓÔÓÔÒQ•
L•JCB‹ÊˆHÓÔÓHÙ[XÝÈHÛØÚÈÛ\š]H[™Ø[\[™ÈYÙHÙˆ™XÙZ]™Y]H[ˆÞ[˜Ú›Û›Ý\È[ÙKƒBˆ
ˆŒ‹‘˜[[™ÈYÙKˆ[—Ô–\ÈØ[\YÛˆH˜[[™ÈYÙHÙˆÐÓËƒBˆ
ˆŒK‹”š\Ú[™ÈYÙKˆ[—Ô–\ÈØ[\YÛˆHš\Ú[™ÈYÙHÙˆÐÓËƒBˆ
‹ÃBˆÙYš[™HTÐT•ÐÑ‘×ÐÓÔÓ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•ÐÑ‘×ÐÓÔÓÔÒQ•
JH	ˆTÐT•ÐÑ‘×ÐÓÔÓÓPTÒÊCBˆÙYš[™HTÐT•ÐÑ‘×ÔÖSÓTÕÓPTÒÈ
JCBˆÙYš[™HTÐT•ÐÑ‘×ÔÖSÓTÕÔÒQ•
MJCB‹ÊˆHÖSÓTÕHÞ[˜Ú›Û›Ý\È[ÙHX\Ý\ˆÙ[XÝƒBˆ
ˆŒ‹”Û]™KˆÚ[ˆÞ[˜Ú›Û›Ý\È[ÙH\È[˜X›YHTÐT•\ÈHÛ]™KƒBˆ
ˆŒK‹“X\Ý\‹ˆÚ[ˆÞ[˜Ú›Û›Ý\È[ÙH\È[˜X›YHTÐT•\ÈHX\Ý\‹ƒBˆ
‹ÃBˆÙYš[™HTÐT•ÐÑ‘×ÔÖSÓTÕ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•ÐÑ‘×ÔÖSÓTÕÔÒQ•
JH	ˆTÐT•ÐÑ‘×ÔÖSÓTÕÓPTÒÊCBˆÙYš[™HTÐT•ÐÑ‘×ÓÓÔÓPTÒÈ
JCBˆÙYš[™HTÐT•ÐÑ‘×ÓÓÔÔÒQ•
MUJCB‹ÊˆHÓÔHÙ[XÝÈ]HÛÜ˜XÚÈ[ÙKƒBˆ
ˆŒ‹“›Ü›X[Ü\˜][Û‹ƒBˆ
ˆŒK‹“ÛÜ˜XÚÈ[ÙKˆ\È›ÝšY\ÈHYXÚ[š\ÛHÈ\™›Ü›HXYÛ›ÜÝXÈÛÜ˜XÚÈ\Ý[™È›ÜˆTÐT•]KˆÙ\šX[Bˆ
ˆ]Hœ›ÛHH˜[œÛZ]\ˆ
[—Õ
H\ÈÛÛ›™XÝY[\›˜[HÈÙ\šX[[œ]ÙˆH™XÙZ]™H
[—Ô–
Kˆ[—ÕBˆ
ˆ[™[—Ô•ÈXÝ]š]HÚ[[ÛÈ\X\ˆÛˆ^\›˜[[œÈYˆ\ÙH[˜Ý[ÛœÈ\™HÛÛ™šYÝ\™YÈ\X\ˆÛˆ]šXÙCBˆ
ˆ[œËˆH™XÙZ]™\ˆ•ÈÚYÛ˜[\È[ÛÈÛÜY˜XÚÈÈÕÈ[™\™›Ü›\È›ÝÈÛÛ›ÛYˆ[˜X›YžHÕÑS‹ƒBˆ
‹ÃBˆÙYš[™HTÐT•ÐÑ‘×ÓÓÔ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•ÐÑ‘×ÓÓÔÔÒQ•
JH	ˆTÐT•ÐÑ‘×ÓÓÔÓPTÒÊCBˆÙYš[™HTÐT•ÐÑ‘×ÓÑUWÓPTÒÈ
JCBˆÙYš[™HTÐT•ÐÑ‘×ÓÑUWÔÒQ•
NJCB‹ÊˆHÑUHHÝ]][˜X›H\›˜\›Ý[™[YH[˜X›H›Üˆ”ËMHÜ\˜][Û‹ƒBˆ
ˆŒ‹‘\ØX›YˆYˆÙ[XÝYžHÑTÑSHÝ]][˜X›HÚYÛ˜[X\ÜÙ\Y]H[™ÙˆH\ÝÝÜš]ÙˆH˜[œÛZ\ÜÚ[Û‹ƒBˆ
ˆŒK‹‘[˜X›YˆYˆÙ[XÝYžHÑTÑSHÝ]][˜X›HÚYÛ˜[™[XZ[œÈ\ÜÙ\Y›ÜˆÛ™HÚ\˜XÝ\ˆ[YHY\ˆCBˆ
ˆ[™ÙˆH\ÝÝÜš]ÙˆH˜[œÛZ\ÜÚ[Û‹ˆÑHÚ[[ÛÈ™[XZ[ˆ\ÜÙ\YYˆ[›Ý\ˆ˜[œÛZ]™YÚ[œÃBˆ
ˆ™Y›Ü™H]\ÈX\ÜÙ\YƒBˆ
‹ÃBˆÙYš[™HTÐT•ÐÑ‘×ÓÑUJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•ÐÑ‘×ÓÑUWÔÒQ•
JH	ˆTÐT•ÐÑ‘×ÓÑUWÓPTÒÊCBˆÙYš[™HTÐT•ÐÑ‘×ÐUUÐQ—ÓPTÒÈ
JCBˆÙYš[™HTÐT•ÐÑ‘×ÐUUÐQ—ÔÒQ•
NUJCB‹ÊˆHUUÐQˆH]]ÛX]XÈY™\ÜÈX]Ú[™È[˜X›KƒBˆ
ˆŒ‹‘\ØX›YˆÚ[ˆY™\ÜÚ[™È\È[˜X›YžHQ‘UY™\ÜÈX]Ú[™È\ÈÛ™HžHÛÙØ\™Kˆ\È›ÝšY\ÈCBˆ
ˆÜÜÚXš[]HÙˆ™\œØ][HY™\ÜÚ[™È
K™Ëˆ™\ÜÛ™È[Ü™H[ˆÛ™HY™\ÜÊKƒBˆ
ˆŒK‹‘[˜X›YˆÚ[ˆY™\ÜÚ[™È\È[˜X›YžHQ‘UY™\ÜÈX]Ú[™È\ÈÛ™HžH\™Ø\™K\Ú[™ÈH˜[YH[ƒBˆ
ˆHQˆ™YÚ\Ý\ˆ\ÈHY™\ÜÈÈX]ÚƒBˆ
‹ÃBˆÙYš[™HTÐT•ÐÑ‘×ÐUUÐQŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•ÐÑ‘×ÐUUÐQ—ÔÒQ•
JH	ˆTÐT•ÐÑ‘×ÐUUÐQ—ÓPTÒÊCBˆÙYš[™HTÐT•ÐÑ‘×ÓÑTÑSÓPTÒÈ
LJCBˆÙYš[™HTÐT•ÐÑ‘×ÓÑTÑSÔÒQ•
ŒJCB‹ÊˆHÑTÑSHÝ]][˜X›HÙ[XÝƒBˆ
ˆŒ‹”Ý[™\™ˆH•ÈÚYÛ˜[\È\ÙY\ÈHÝ[™\™›ÝÈÛÛ›Û[˜Ý[Û‹ƒBˆ
ˆŒK‹””ËMKˆH•ÈÚYÛ˜[ÛÛ™šYÝ\™YÈ›ÝšYH[ˆÝ]][˜X›HÚYÛ˜[ÈÛÛ›Û[ˆ”ËMH˜[œØÙZ]™\‹ƒBˆ
‹ÃBˆÙYš[™HTÐT•ÐÑ‘×ÓÑTÑS

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•ÐÑ‘×ÓÑTÑSÔÒQ•
JH	ˆTÐT•ÐÑ‘×ÓÑTÑSÓPTÒÊCBˆÙYš[™HTÐT•ÐÑ‘×ÓÑTÓÓPTÒÈ
ŒJCBˆÙYš[™HTÐT•ÐÑ‘×ÓÑTÓÔÒQ•
ŒUJCB‹ÊˆHÑTÓHÝ]][˜X›HÛ\š]KƒBˆ
ˆŒ‹“ÝËˆYˆÙ[XÝYžHÑTÑSHÝ]][˜X›H\ÈXÝ]™HÝËƒBˆ
ˆŒK‹’YÚˆYˆÙ[XÝYžHÑTÑSHÝ]][˜X›H\ÈXÝ]™HYÚƒBˆ
‹ÃBˆÙYš[™HTÐT•ÐÑ‘×ÓÑTÓ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•ÐÑ‘×ÓÑTÓÔÒQ•
JH	ˆTÐT•ÐÑ‘×ÓÑTÓÓPTÒÊCBˆÙYš[™HTÐT•ÐÑ‘×Ô–ÓÓPTÒÈ
JCBˆÙYš[™HTÐT•ÐÑ‘×Ô–ÓÔÒQ•
Œ•JCB‹ÊˆH–ÓH™XÙZ]™H]HÛ\š]KƒBˆ
ˆŒ‹”Ý[™\™ˆH–ÚYÛ˜[\È\ÙY\È]\œš]™\Èœ›ÛHH[‹ˆ\ÈYX[œÈ]H–™\Ý˜[YH\ÈKÝ\Bˆ
ˆš]\È]H\È›Ý[™\Y[™HÝÜš]\ÈKƒBˆ
ˆŒK‹’[™\YˆH–ÚYÛ˜[\È[™\Y™Y›Ü™H™Z[™È\ÙYžHHTÐT•ˆ\ÈYX[œÈ]H–™\Ý˜[YH\ÃBˆ
ˆÝ\š]\ÈK]H\È[™\Y[™HÝÜš]\ÈƒBˆ
‹ÃBˆÙYš[™HTÐT•ÐÑ‘×Ô–Ó

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•ÐÑ‘×Ô–ÓÔÒQ•
JH	ˆTÐT•ÐÑ‘×Ô–ÓÓPTÒÊCBˆÙYš[™HTÐT•ÐÑ‘×ÕÓÓPTÒÈ
JCBˆÙYš[™HTÐT•ÐÑ‘×ÕÓÔÒQ•
ŒÕJCB‹ÊˆHÓH˜[œÛZ]]HÛ\š]KƒBˆ
ˆŒ‹”Ý[™\™ˆHÚYÛ˜[\ÈÙ[Ý]Ú]Ý]Ú[™ÙKˆ\ÈYX[œÈ]H™\Ý˜[YH\ÈKÝ\š]\ÃBˆ
ˆ]H\È›Ý[™\Y[™HÝÜš]\ÈKƒBˆ
ˆŒK‹’[™\YˆHÚYÛ˜[\È[™\YžHHTÐT•™Y›Ü™H™Z[™ÈÙ[Ý]ˆ\ÈYX[œÈ]H™\Ý˜[YCBˆ
ˆ\ÈÝ\š]\ÈK]H\È[™\Y[™HÝÜš]\ÈƒBˆ
‹ÃBˆÙYš[™HTÐT•ÐÑ‘×ÕÓ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•ÐÑ‘×ÕÓÔÒQ•
JH	ˆTÐT•ÐÑ‘×ÕÓÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHÕHTÐT•ÛÛ›Û™YÚ\Ý\‹ˆTÐT•ÛÛ›ÛÙ][™ÜÈ]\™H[Ü™HZÙ[HÈÚ[™ÙH\š[™ÈÜ\˜][Û‹ˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐT•ÐÕÕ”’ÑS—ÓPTÒÈ
•JCBˆÙYš[™HTÐT•ÐÕÕ”’ÑS—ÔÒQ•
UJCB‹ÊˆH”’ÑSˆHœ™XZÈ[˜X›KƒBˆ
ˆŒ‹“›Ü›X[Ü\˜][Û‹ƒBˆ
ˆŒK‹ÛÛ[[Ý\Èœ™XZËˆÛÛ[[Ý\Èœ™XZÈ\ÈÙ[[[YYX][HÚ[ˆ\Èš]\ÈÙ][™™[XZ[œÈ[[\Èš]Bˆ
ˆ\ÈÛX\™YˆHœ™XZÈX^H™HÙ[Ú]Ý][™Ù\ˆÙˆÛÜœ\[™È[žHÝ\œ™[H˜[œÛZ][™ÈÚ\˜XÝ\ˆYˆCBˆ
ˆ˜[œÛZ]\ˆ\Èš\œÝ\ØX›Y
TÈ[ˆÕ\ÈÙ]
H[™[ˆØZ][™È›ÜˆH˜[œÛZ]\ˆÈ™H\ØX›YBˆ
ˆ
TÒS•[ˆÕUHJH™Y›Ü™HÜš][™ÈHÈ”’ÑS‹ƒBˆ
‹ÃBˆÙYš[™HTÐT•ÐÕÕ”’ÑSŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•ÐÕÕ”’ÑS—ÔÒQ•
JH	ˆTÐT•ÐÕÕ”’ÑS—ÓPTÒÊCBˆÙYš[™HTÐT•ÐÕÐQ‘UÓPTÒÈ
JCBˆÙYš[™HTÐT•ÐÕÐQ‘UÔÒQ•
•JCB‹ÊˆHQ‘UH[˜X›HY™\ÜÈ]XÝ[ÙKƒBˆ
ˆŒ‹‘\ØX›YˆHTÐT•™\Ù[È[[˜ÛÛZ[™È]KƒBˆ
ˆŒK‹‘[˜X›YˆHTÐT•™XÙZ]™\ˆYÛ›Ü™\È[˜ÛÛZ[™È]H]Ù\È›Ý]™HH[ÜÝÚYÛšYšXØ[š]ÙˆH]CBˆ
ˆ
\XØ[HH]š]
HHKˆÚ[ˆH]HTÐˆš]HKH™XÙZ]™\ˆ™X]ÈH[˜ÛÛZ[™È]H›Ü›X[KBˆ
ˆÙ[™\˜][™ÈH™XÙZ]™Y]H[\œ\ˆÛÙØ\™HØ[ˆ[ˆÚXÚÈH]HÈÙYHYˆ\È\È[ˆY™\ÜÈ]Bˆ
ˆÚÝ[™H[™YˆYˆ]\ËHQ‘Uš]\ÈÛX\™YžHÛÙØ\™H[™\\ˆ[˜ÛÛZ[™È]H\È[™YBˆ
ˆ›Ü›X[KƒBˆ
‹ÃBˆÙYš[™HTÐT•ÐÕÐQ‘U

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•ÐÕÐQ‘UÔÒQ•
JH	ˆTÐT•ÐÕÐQ‘UÓPTÒÊCBˆÙYš[™HTÐT•ÐÕÕT×ÓPTÒÈ
JCBˆÙYš[™HTÐT•ÐÕÕT×ÔÒQ•
•JCB‹ÊˆHTÈH˜[œÛZ]\ØX›KƒBˆ
ˆŒ‹“›Ý\ØX›YˆTÐT•˜[œÛZ]\ˆ\È›Ý\ØX›YƒBˆ
ˆŒK‹‘\ØX›YˆTÐT•˜[œÛZ]\ˆ\È\ØX›YY\ˆ[žHÚ\˜XÝ\ˆÝ\œ™[H™Z[™È˜[œÛZ]Y\ÈÛÛ\]Kˆ\ÃBˆ
ˆ™X]\™HØ[ˆ™H\ÙYÈ˜XÚ[]]HÛÙØ\™H›ÝÈÛÛ›ÛƒBˆ
‹ÃBˆÙYš[™HTÐT•ÐÕÕTÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•ÐÕÕT×ÔÒQ•
JH	ˆTÐT•ÐÕÕT×ÓPTÒÊCBˆÙYš[™HTÐT•ÐÕÐÐ×ÓPTÒÈ
LJCBˆÙYš[™HTÐT•ÐÕÐÐ×ÔÒQ•
JCB‹ÊˆHÐÈHÛÛ[[Ý\ÈÛØÚÈÙ[™\˜][Û‹ˆžHY˜][ÐÓÈ\ÈÛ›HÝ]]Ú[H]H\È™Z[™È˜[œÛZ]Y[ˆÞ[˜Ú›Û›Ý\È[ÙKƒBˆ
ˆŒ‹ÛØÚÈÛˆÚ\˜XÝ\‹ˆ[ˆÞ[˜Ú›Û›Ý\È[ÙKÐÓÈÞXÛ\ÈÛ›HÚ[ˆÚ\˜XÝ\œÈ\™H™Z[™ÈÙ[Ûˆ[—ÕÜˆÃBˆ
ˆÛÛ\]HHÚ\˜XÝ\ˆ]\È™Z[™È™XÙZ]™YƒBˆ
ˆŒK‹ÛÛ[[Ý\ÈÛØÚËˆÐÓÈ[œÈÛÛ[[Ý\ÛH[ˆÞ[˜Ú›Û›Ý\È[ÙK[ÝÚ[™ÈÚ\˜XÝ\œÈÈ™H™XÙZ]™YÛƒBˆ
ˆ[—Ôž[™\[™[Hœ›ÛH˜[œÛZ\ÜÚ[ÛˆÛˆ[—Õ
KƒBˆ
‹ÃBˆÙYš[™HTÐT•ÐÕÐÐÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•ÐÕÐÐ×ÔÒQ•
JH	ˆTÐT•ÐÕÐÐ×ÓPTÒÊCBˆÙYš[™HTÐT•ÐÕÐÓÐÓÓ”–ÓPTÒÈ
ŒJCBˆÙYš[™HTÐT•ÐÕÐÓÐÓÓ”–ÔÒQ•
UJCB‹ÊˆHÓÐÓÓ”–HÛX\ˆÛÛ[[Ý\ÈÛØÚËƒBˆ
ˆŒ‹“›ÈY™™XÝˆ›ÈY™™XÝÛˆHÐÈš]ƒBˆ
ˆŒK‹]]ËXÛX\‹ˆHÐÈš]\È]]ÛX]XØ[HÛX\™YÚ[ˆHÛÛ\]HÚ\˜XÝ\ˆ\È™Y[ˆ™XÙZ]™Yˆ\Èš]\ÈÛX\™Y]HØ[YH[YKƒBˆ
‹ÃBˆÙYš[™HTÐT•ÐÕÐÓÐÓÓ”–

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•ÐÕÐÓÐÓÓ”–ÔÒQ•
JH	ˆTÐT•ÐÕÐÓÐÓÓ”–ÓPTÒÊCBˆÙYš[™HTÐT•ÐÕÐUUÐUQÓPTÒÈ
LJCBˆÙYš[™HTÐT•ÐÕÐUUÐUQÔÒQ•
M•JCB‹ÊˆHUUÐUQH]]Ø˜]Y[˜X›KƒBˆ
ˆŒ‹‘\ØX›YˆTÐT•\È[ˆ›Ü›X[Ü\˜][™È[ÙKƒBˆ
ˆŒK‹‘[˜X›YˆTÐT•\È[ˆ]]Ø˜]Y[ÙKˆ\Èš]ÚÝ[Û›H™HÙ]Ú[ˆHTÐT•™XÙZ]™\ˆ\ÈYKˆCBˆ
ˆš\œÝÝ\š]Ùˆ–\ÈYX\Ý\™Y[™\ÙYH\]HH”‘È™YÚ\Ý\ˆÈX]ÚH™XÙZ]™Y]H˜]KƒBˆ
ˆUUÐUQ\ÈÛX\™YÛ˜ÙH\È›ØÙ\ÜÈ\ÈÛÛ\]KÜˆYˆ\™H\È[ˆQT”‹ƒBˆ
‹ÃBˆÙYš[™HTÐT•ÐÕÐUUÐUQ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•ÐÕÐUUÐUQÔÒQ•
JH	ˆTÐT•ÐÕÐUUÐUQÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHÕUHTÐT•Ý]\È™YÚ\Ý\‹ˆHÛÛ\]HÝ]\È˜[YHØ[ˆ™H™XY\™KˆÜš][™ÈÛ™\ÈÛX\œÈÛÛYHš]È[ˆH™YÚ\Ý\‹ˆÛÛYHš]ÈØ[ˆ™HÛX\™YžHÜš][™ÈHHÈ[Kˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐT•ÔÕUÔ–QWÓPTÒÈ
•JCBˆÙYš[™HTÐT•ÔÕUÔ–QWÔÒQ•
UJCB‹ÊˆH–QHH™XÙZ]™\ˆYKˆÚ[ˆ[™XØ]\È]H™XÙZ]™\ˆ\ÈÝ\œ™[H[ˆH›ØÙ\ÜÈÙƒBˆ
ˆ™XÙZ]š[™È]KˆÚ[ˆK[™XØ]\È]H™XÙZ]™\ˆ\È›ÝÝ\œ™[H[ˆH›ØÙ\ÜÈÙˆ™XÙZ]š[™ÃBˆ
ˆ]KƒBˆ
‹ÃBˆÙYš[™HTÐT•ÔÕUÔ–QJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•ÔÕUÔ–QWÔÒQ•
JH	ˆTÐT•ÔÕUÔ–QWÓPTÒÊCBˆÙYš[™HTÐT•ÔÕUÕQWÓPTÒÈ
JCBˆÙYš[™HTÐT•ÔÕUÕQWÔÒQ•
ÕJCB‹ÊˆHQHH˜[œÛZ]\ˆYKˆÚ[ˆ[™XØ]\È]H˜[œÛZ]\ˆ\ÈÝ\œ™[H[ˆH›ØÙ\ÜÈÙƒBˆ
ˆÙ[™[™È]K•Ú[ˆK[™XØ]H]H˜[œÛZ]\ˆ\È›ÝÝ\œ™[H[ˆH›ØÙ\ÜÈÙˆÙ[™[™ÃBˆ
ˆ]KƒBˆ
‹ÃBˆÙYš[™HTÐT•ÔÕUÕQJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•ÔÕUÕQWÔÒQ•
JH	ˆTÐT•ÔÕUÕQWÓPTÒÊCBˆÙYš[™HTÐT•ÔÕUÐÕ×ÓPTÒÈ
LJCBˆÙYš[™HTÐT•ÔÕUÐÕ×ÔÒQ•
JCB‹ÊˆHÕÈH\Èš]™Y›XÝÈHÝ\œ™[Ý]HÙˆHÕÈÚYÛ˜[™YØ\™\ÜÈÙˆHÙ][™ÈÙˆCBˆ
ˆÕÑSˆš][ˆHÑ‘È™YÚ\Ý\‹ˆ\ÈÚ[™HH˜[YHÙˆHÕÈ[œ][ˆ[›\ÜÈÛÜ˜XÚÈ[ÙCBˆ
ˆ\È[˜X›YƒBˆ
‹ÃBˆÙYš[™HTÐT•ÔÕUÐÕÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•ÔÕUÐÕ×ÔÒQ•
JH	ˆTÐT•ÔÕUÐÕ×ÓPTÒÊCBˆÙYš[™HTÐT•ÔÕUÑSPÕ×ÓPTÒÈ
ŒJCBˆÙYš[™HTÐT•ÔÕUÑSPÕ×ÔÒQ•
UJCB‹ÊˆHSPÕÈH\Èš]\ÈÙ]Ú[ˆHÚ[™ÙH[ˆHÝ]H\È]XÝY›ÜˆHÕÈ›YÈX›Ý™Kˆ\Èš]\ÈÛX\™YžHÛÙØ\™KƒBˆ
‹ÃBˆÙYš[™HTÐT•ÔÕUÑSPÕÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•ÔÕUÑSPÕ×ÔÒQ•
JH	ˆTÐT•ÔÕUÑSPÕ×ÓPTÒÊCBˆÙYš[™HTÐT•ÔÕUÕTÔÕUÓPTÒÈ
JCBˆÙYš[™HTÐT•ÔÕUÕTÔÕUÔÒQ•
•JCB‹ÊˆHTÔÕUH˜[œÛZ]\ˆ\ØX›YÝ]\È›YËˆÚ[ˆK\Èš][™XØ]\È]HTÐT•Bˆ
ˆ˜[œÛZ]\ˆ\È[HYHY\ˆ™Z[™È\ØX›YšXHHTÈš][ˆHÑ‘È™YÚ\Ý\ˆ
TÈHJKƒBˆ
‹ÃBˆÙYš[™HTÐT•ÔÕUÕTÔÕU

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•ÔÕUÕTÔÕUÔÒQ•
JH	ˆTÐT•ÔÕUÕTÔÕUÓPTÒÊCBˆÙYš[™HTÐT•ÔÕUÔ–”’×ÓPTÒÈ
JCBˆÙYš[™HTÐT•ÔÕUÔ–”’×ÔÒQ•
LJCB‹ÊˆH–”’ÈH™XÙZ]™Yœ™XZËˆ\Èš]™Y›XÝÈHÝ\œ™[Ý]HÙˆH™XÙZ]™\ˆœ™XZÈ]XÝ[ÛƒBˆ
ˆÙÚXËˆ]\ÈÙ]Ú[ˆH[—Ô–[ˆ™[XZ[œÈÝÈ›ÜˆMˆš][Y\Ëˆ›ÝH]”SQT”’S•Ú[[ÛÃBˆ
ˆ™HÙ]Ú[ˆ\ÈÛÛ™][ÛˆØØÝ\œÈ™XØ]\ÙHHÝÜš]
ÊH›ÜˆHÚ\˜XÝ\ˆÛÝ[™HZ\ÜÚ[™ËƒBˆ
ˆ–”’È\ÈÛX\™YÚ[ˆH[—Ô–[ˆÛÙ\ÈYÚƒBˆ
‹ÃBˆÙYš[™HTÐT•ÔÕUÔ–”’Ê
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•ÔÕUÔ–”’×ÔÒQ•
JH	ˆTÐT•ÔÕUÔ–”’×ÓPTÒÊCBˆÙYš[™HTÐT•ÔÕUÑST–”’×ÓPTÒÈ
JCBˆÙYš[™HTÐT•ÔÕUÑST–”’×ÔÒQ•
LUJCB‹ÊˆHST–”’ÈH\Èš]\ÈÙ]Ú[ˆHÚ[™ÙH[ˆHÝ]HÙˆ™XÙZ]™\ˆœ™XZÈ]XÝ[ÛˆØØÝ\œËˆÛX\™YžHÛÙØ\™KƒBˆ
‹ÃBˆÙYš[™HTÐT•ÔÕUÑST–”’Ê
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•ÔÕUÑST–”’×ÔÒQ•
JH	ˆTÐT•ÔÕUÑST–”’×ÓPTÒÊCBˆÙYš[™HTÐT•ÔÕUÔÕT•ÓPTÒÈ
LJCBˆÙYš[™HTÐT•ÔÕUÔÕT•ÔÒQ•
L•JCB‹ÊˆHÕT•H\Èš]\ÈÙ]Ú[ˆHÝ\\È]XÝYÛˆH™XÙZ]™\ˆ[œ]ˆ]È\œÜÙH\Èš[X\š[CBˆ
ˆÈ[ÝÈØZÙK]\œ›ÛHY\\ÛY\ÜˆÝÙ\‹YÝÛˆ[ÙH[[YYX][HÚ[ˆHÝ\\È]XÝYƒBˆ
ˆÛX\™YžHÛÙØ\™KƒBˆ
‹ÃBˆÙYš[™HTÐT•ÔÕUÔÕT•

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•ÔÕUÔÕT•ÔÒQ•
JH	ˆTÐT•ÔÕUÔÕT•ÓPTÒÊCBˆÙYš[™HTÐT•ÔÕUÑ”SQT”’S•ÓPTÒÈ
ŒJCBˆÙYš[™HTÐT•ÔÕUÑ”SQT”’S•ÔÒQ•
LÕJCB‹ÊˆH”SQT”’S•Hœ˜[Z[™È\œ›Üˆ[\œ\›YËˆ\È›YÈ\ÈÙ]Ú[ˆHÚ\˜XÝ\ˆ\È™XÙZ]™YÚ]CBˆ
ˆZ\ÜÚ[™ÈÝÜš]]H^XÝYØØ][Û‹ˆ\ÈÛÝ[™H[ˆ[™XØ][ÛˆÙˆH˜]Y˜]HÜƒBˆ
ˆÛÛ™šYÝ\˜][ÛˆZ\ÛX]ÚÚ]H˜[œÛZ][™ÈÛÝ\˜ÙKƒBˆ
‹ÃBˆÙYš[™HTÐT•ÔÕUÑ”SQT”’S•

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•ÔÕUÑ”SQT”’S•ÔÒQ•
JH	ˆTÐT•ÔÕUÑ”SQT”’S•ÓPTÒÊCBˆÙYš[™HTÐT•ÔÕUÔT’UQT”’S•ÓPTÒÈ
JCBˆÙYš[™HTÐT•ÔÕUÔT’UQT”’S•ÔÒQ•
MJCB‹ÊˆHT’UQT”’S•H\š]H\œ›Üˆ[\œ\›YËˆ\È›YÈ\ÈÙ]Ú[ˆH\š]H\œ›Üˆ\È]XÝY[ˆH™XÙZ]™YÚ\˜XÝ\‹ƒBˆ
‹ÃBˆÙYš[™HTÐT•ÔÕUÔT’UQT”’S•

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•ÔÕUÔT’UQT”’S•ÔÒQ•
JH	ˆTÐT•ÔÕUÔT’UQT”’S•ÓPTÒÊCBˆÙYš[™HTÐT•ÔÕUÔ–“ÒTÑRS•ÓPTÒÈ
JCBˆÙYš[™HTÐT•ÔÕUÔ–“ÒTÑRS•ÔÒQ•
MUJCB‹ÊˆH–“ÒTÑRS•H™XÙZ]™Y›Ú\ÙH[\œ\›YËˆ™YHØ[\\ÈÙˆ™XÙZ]™Y]H\™HZÙ[ˆ[ˆÜ™\ˆÃBˆ
ˆ]\›Z[™HH˜[YHÙˆXXÚ™XÙZ]™Y]Hš]^Ù\[ˆÞ[˜Ú›Û›Ý\È[ÙKˆ\ÈXÝÈ\ÈCBˆ
ˆ›Ú\ÙHš[\ˆYˆÛ™HØ[\H\ØYÜ™Y\Ëˆ\È›YÈ\ÈÙ]Ú[ˆH™XÙZ]™Y]Hš]ÛÛZ[œÈÛ™CBˆ
ˆ\ØYÜ™YZ[™ÈØ[\Kˆ\ÈÛÝ[[™XØ]H[™H›Ú\ÙKH˜]Y˜]HÜˆÚ\˜XÝ\ˆ›Ü›X]Z\ÛX]ÚÜƒBˆ
ˆÜÜÈÙˆÞ[˜Ú›Ûš^˜][Ûˆ\š[™È]H™XÙ\[Û‹ƒBˆ
‹ÃBˆÙYš[™HTÐT•ÔÕUÔ–“ÒTÑRS•

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•ÔÕUÔ–“ÒTÑRS•ÔÒQ•
JH	ˆTÐT•ÔÕUÔ–“ÒTÑRS•ÓPTÒÊCBˆÙYš[™HTÐT•ÔÕUÐP‘T”—ÓPTÒÈ
LJCBˆÙYš[™HTÐT•ÔÕUÐP‘T”—ÔÒQ•
M•JCB‹ÊˆHP‘T”ˆH]]È˜]Y\œ›Ü‹ˆ[ˆ]]È˜]Y\œ›ÜˆØ[ˆØØÝ\ˆYˆH”‘ÈÛÝ[ÈÈ]È[Z]™Y›Ü™HCBˆ
ˆ[™ÙˆHÝ\š]]\È™Z[™ÈYX\Ý\™Y\ÜÙ[X[H[ˆ]]È˜]Y[YK[Ý]ƒBˆ
‹ÃBˆÙYš[™HTÐT•ÔÕUÐP‘T”Š
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•ÔÕUÐP‘T”—ÔÒQ•
JH	ˆTÐT•ÔÕUÐP‘T”—ÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHS•S”ÑUH[\œ\[˜X›H™XY[™Ù]™YÚ\Ý\ˆ›ÜˆTÐT•
›Ý’Q“ÊHÝ]\ËˆÛÛZ[œÈ[™]šYX[[\œ\[˜X›Hš]È›ÜˆXXÚÝ[X[TÐT•[\œ\ˆHÛÛ\]H˜[YHX^H™H™XYœ›ÛH\È™YÚ\Ý\‹ˆÜš][™ÈHHÈ[žH[\[Y[Yš]ÜÚ][ÛˆØ]\Ù\È]š]È™HÙ]ˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐT•ÒS•S”ÑUÕQQS—ÓPTÒÈ
JCBˆÙYš[™HTÐT•ÒS•S”ÑUÕQQS—ÔÒQ•
ÕJCB‹ÊˆHQQSˆHÚ[ˆK[˜X›\È[ˆ[\œ\Ú[ˆH˜[œÛZ]\ˆ™XÛÛY\ÈYH
QHHJKƒBˆ
‹ÃBˆÙYš[™HTÐT•ÒS•S”ÑUÕQQSŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•ÒS•S”ÑUÕQQS—ÔÒQ•
JH	ˆTÐT•ÒS•S”ÑUÕQQS—ÓPTÒÊCBˆÙYš[™HTÐT•ÒS•S”ÑUÑSPÕÑS—ÓPTÒÈ
ŒJCBˆÙYš[™HTÐT•ÒS•S”ÑUÑSPÕÑS—ÔÒQ•
UJCB‹ÊˆHSPÕÑSˆHÚ[ˆK[˜X›\È[ˆ[\œ\Ú[ˆ\™H\ÈHÚ[™ÙH[ˆHÝ]HÙˆHÕÈ[œ]ƒBˆ
‹ÃBˆÙYš[™HTÐT•ÒS•S”ÑUÑSPÕÑSŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•ÒS•S”ÑUÑSPÕÑS—ÔÒQ•
JH	ˆTÐT•ÒS•S”ÑUÑSPÕÑS—ÓPTÒÊCBˆÙYš[™HTÐT•ÒS•S”ÑUÕTÑS—ÓPTÒÈ
JCBˆÙYš[™HTÐT•ÒS•S”ÑUÕTÑS—ÔÒQ•
•JCB‹ÊˆHTÑSˆHÚ[ˆK[˜X›\È[ˆ[\œ\Ú[ˆH˜[œÛZ]\ˆ\È[H\ØX›Y\È[™XØ]YžCBˆ
ˆHTÒS•›YÈ[ˆÕUˆÙYH\ØÜš\[ÛˆÙˆHTÒS•š]›Üˆ]Z[ËƒBˆ
‹ÃBˆÙYš[™HTÐT•ÒS•S”ÑUÕTÑSŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•ÒS•S”ÑUÕTÑS—ÔÒQ•
JH	ˆTÐT•ÒS•S”ÑUÕTÑS—ÓPTÒÊCBˆÙYš[™HTÐT•ÒS•S”ÑUÑST–”’ÑS—ÓPTÒÈ
JCBˆÙYš[™HTÐT•ÒS•S”ÑUÑST–”’ÑS—ÔÒQ•
LUJCB‹ÊˆHST–”’ÑSˆHÚ[ˆK[˜X›\È[ˆ[\œ\Ú[ˆHÚ[™ÙHÙˆÝ]H\ÈØØÝ\œ™Y[ˆH]XÝ[ÛƒBˆ
ˆÙˆH™XÙZ]™Yœ™XZÈÛÛ™][Ûˆ
œ™XZÈÛÛ™][Ûˆ\ÜÙ\YÜˆX\ÜÙ\Y
KƒBˆ
‹ÃBˆÙYš[™HTÐT•ÒS•S”ÑUÑST–”’ÑSŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•ÒS•S”ÑUÑST–”’ÑS—ÔÒQ•
JH	ˆTÐT•ÒS•S”ÑUÑST–”’ÑS—ÓPTÒÊCBˆÙYš[™HTÐT•ÒS•S”ÑUÔÕT•S—ÓPTÒÈ
LJCBˆÙYš[™HTÐT•ÒS•S”ÑUÔÕT•S—ÔÒQ•
L•JCB‹ÊˆHÕT•SˆHÚ[ˆK[˜X›\È[ˆ[\œ\Ú[ˆH™XÙZ]™YÝ\š]\È™Y[ˆ]XÝYƒBˆ
‹ÃBˆÙYš[™HTÐT•ÒS•S”ÑUÔÕT•SŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•ÒS•S”ÑUÔÕT•S—ÔÒQ•
JH	ˆTÐT•ÒS•S”ÑUÔÕT•S—ÓPTÒÊCBˆÙYš[™HTÐT•ÒS•S”ÑUÑ”SQT”‘S—ÓPTÒÈ
ŒJCBˆÙYš[™HTÐT•ÒS•S”ÑUÑ”SQT”‘S—ÔÒQ•
LÕJCB‹ÊˆH”SQT”‘SˆHÚ[ˆK[˜X›\È[ˆ[\œ\Ú[ˆHœ˜[Z[™È\œ›Üˆ\È™Y[ˆ]XÝYƒBˆ
‹ÃBˆÙYš[™HTÐT•ÒS•S”ÑUÑ”SQT”‘SŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•ÒS•S”ÑUÑ”SQT”‘S—ÔÒQ•
JH	ˆTÐT•ÒS•S”ÑUÑ”SQT”‘S—ÓPTÒÊCBˆÙYš[™HTÐT•ÒS•S”ÑUÔT’UQT”‘S—ÓPTÒÈ
JCBˆÙYš[™HTÐT•ÒS•S”ÑUÔT’UQT”‘S—ÔÒQ•
MJCB‹ÊˆHT’UQT”‘SˆHÚ[ˆK[˜X›\È[ˆ[\œ\Ú[ˆH\š]H\œ›Üˆ\È™Y[ˆ]XÝYƒBˆ
‹ÃBˆÙYš[™HTÐT•ÒS•S”ÑUÔT’UQT”‘SŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•ÒS•S”ÑUÔT’UQT”‘S—ÔÒQ•
JH	ˆTÐT•ÒS•S”ÑUÔT’UQT”‘S—ÓPTÒÊCBˆÙYš[™HTÐT•ÒS•S”ÑUÔ–“ÒTÑQS—ÓPTÒÈ
JCBˆÙYš[™HTÐT•ÒS•S”ÑUÔ–“ÒTÑQS—ÔÒQ•
MUJCB‹ÊˆH–“ÒTÑQSˆHÚ[ˆK[˜X›\È[ˆ[\œ\Ú[ˆ›Ú\ÙH\È]XÝYˆÙYH\ØÜš\[ÛˆÙˆH–“ÒTÑRS•š][ˆX›HÍMƒBˆ
‹ÃBˆÙYš[™HTÐT•ÒS•S”ÑUÔ–“ÒTÑQSŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•ÒS•S”ÑUÔ–“ÒTÑQS—ÔÒQ•
JH	ˆTÐT•ÒS•S”ÑUÔ–“ÒTÑQS—ÓPTÒÊCBˆÙYš[™HTÐT•ÒS•S”ÑUÐP‘T”‘S—ÓPTÒÈ
LJCBˆÙYš[™HTÐT•ÒS•S”ÑUÐP‘T”‘S—ÔÒQ•
M•JCB‹ÊˆHP‘T”‘SˆHÚ[ˆK[˜X›\È[ˆ[\œ\Ú[ˆ[ˆ]]È˜]Y\œ›ÜˆØØÝ\œËƒBˆ
‹ÃBˆÙYš[™HTÐT•ÒS•S”ÑUÐP‘T”‘SŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•ÒS•S”ÑUÐP‘T”‘S—ÔÒQ•
JH	ˆTÐT•ÒS•S”ÑUÐP‘T”‘S—ÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHS•SÓˆH[\œ\[˜X›HÛX\ˆ™YÚ\Ý\‹ˆ[ÝÜÈÛX\š[™È[žHÛÛXš[˜][ÛˆÙˆš]È[ˆHS•S”ÑU™YÚ\Ý\‹ˆÜš][™ÈHHÈ[žH[\[Y[Yš]ÜÚ][ÛˆØ]\Ù\ÈHÛÜœ™\ÜÛ™[™Èš]È™HÛX\™Yˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐT•ÒS•SÓ—ÕQPÓ—ÓPTÒÈ
JCBˆÙYš[™HTÐT•ÒS•SÓ—ÕQPÓ—ÔÒQ•
ÕJCB‹ÊˆHQPÓˆHÜš][™ÈHÛX\œÈHÛÜœ™\ÜÛ™[™Èš][ˆHS•S”ÑU™YÚ\Ý\‹ƒBˆ
‹ÃBˆÙYš[™HTÐT•ÒS•SÓ—ÕQPÓŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•ÒS•SÓ—ÕQPÓ—ÔÒQ•
JH	ˆTÐT•ÒS•SÓ—ÕQPÓ—ÓPTÒÊCBˆÙYš[™HTÐT•ÒS•SÓ—ÑSPÕÐÓ—ÓPTÒÈ
ŒJCBˆÙYš[™HTÐT•ÒS•SÓ—ÑSPÕÐÓ—ÔÒQ•
UJCB‹ÊˆHSPÕÐÓˆHÜš][™ÈHÛX\œÈHÛÜœ™\ÜÛ™[™Èš][ˆHS•S”ÑU™YÚ\Ý\‹ƒBˆ
‹ÃBˆÙYš[™HTÐT•ÒS•SÓ—ÑSPÕÐÓŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•ÒS•SÓ—ÑSPÕÐÓ—ÔÒQ•
JH	ˆTÐT•ÒS•SÓ—ÑSPÕÐÓ—ÓPTÒÊCBˆÙYš[™HTÐT•ÒS•SÓ—ÕTÐÓ—ÓPTÒÈ
JCBˆÙYš[™HTÐT•ÒS•SÓ—ÕTÐÓ—ÔÒQ•
•JCB‹ÊˆHTÐÓˆHÜš][™ÈHÛX\œÈHÛÜœ™\ÜÛ™[™Èš][ˆHS•S”ÑU™YÚ\Ý\‹ƒBˆ
‹ÃBˆÙYš[™HTÐT•ÒS•SÓ—ÕTÐÓŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•ÒS•SÓ—ÕTÐÓ—ÔÒQ•
JH	ˆTÐT•ÒS•SÓ—ÕTÐÓ—ÓPTÒÊCBˆÙYš[™HTÐT•ÒS•SÓ—ÑST–”’ÐÓ—ÓPTÒÈ
JCBˆÙYš[™HTÐT•ÒS•SÓ—ÑST–”’ÐÓ—ÔÒQ•
LUJCB‹ÊˆHST–”’ÐÓˆHÜš][™ÈHÛX\œÈHÛÜœ™\ÜÛ™[™Èš][ˆHS•S”ÑU™YÚ\Ý\‹ƒBˆ
‹ÃBˆÙYš[™HTÐT•ÒS•SÓ—ÑST–”’ÐÓŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•ÒS•SÓ—ÑST–”’ÐÓ—ÔÒQ•
JH	ˆTÐT•ÒS•SÓ—ÑST–”’ÐÓ—ÓPTÒÊCBˆÙYš[™HTÐT•ÒS•SÓ—ÔÕT•Ó—ÓPTÒÈ
LJCBˆÙYš[™HTÐT•ÒS•SÓ—ÔÕT•Ó—ÔÒQ•
L•JCB‹ÊˆHÕT•ÓˆHÜš][™ÈHÛX\œÈHÛÜœ™\ÜÛ™[™Èš][ˆHS•S”ÑU™YÚ\Ý\‹ƒBˆ
‹ÃBˆÙYš[™HTÐT•ÒS•SÓ—ÔÕT•ÓŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•ÒS•SÓ—ÔÕT•Ó—ÔÒQ•
JH	ˆTÐT•ÒS•SÓ—ÔÕT•Ó—ÓPTÒÊCBˆÙYš[™HTÐT•ÒS•SÓ—Ñ”SQT”Ó—ÓPTÒÈ
ŒJCBˆÙYš[™HTÐT•ÒS•SÓ—Ñ”SQT”Ó—ÔÒQ•
LÕJCB‹ÊˆH”SQT”ÓˆHÜš][™ÈHÛX\œÈHÛÜœ™\ÜÛ™[™Èš][ˆHS•S”ÑU™YÚ\Ý\‹ƒBˆ
‹ÃBˆÙYš[™HTÐT•ÒS•SÓ—Ñ”SQT”ÓŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•ÒS•SÓ—Ñ”SQT”Ó—ÔÒQ•
JH	ˆTÐT•ÒS•SÓ—Ñ”SQT”Ó—ÓPTÒÊCBˆÙYš[™HTÐT•ÒS•SÓ—ÔT’UQT”Ó—ÓPTÒÈ
JCBˆÙYš[™HTÐT•ÒS•SÓ—ÔT’UQT”Ó—ÔÒQ•
MJCB‹ÊˆHT’UQT”ÓˆHÜš][™ÈHÛX\œÈHÛÜœ™\ÜÛ™[™Èš][ˆHS•S”ÑU™YÚ\Ý\‹ƒBˆ
‹ÃBˆÙYš[™HTÐT•ÒS•SÓ—ÔT’UQT”ÓŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•ÒS•SÓ—ÔT’UQT”Ó—ÔÒQ•
JH	ˆTÐT•ÒS•SÓ—ÔT’UQT”Ó—ÓPTÒÊCBˆÙYš[™HTÐT•ÒS•SÓ—Ô–“ÒTÑPÓ—ÓPTÒÈ
JCBˆÙYš[™HTÐT•ÒS•SÓ—Ô–“ÒTÑPÓ—ÔÒQ•
MUJCB‹ÊˆH–“ÒTÑPÓˆHÜš][™ÈHÛX\œÈHÛÜœ™\ÜÛ™[™Èš][ˆHS•S”ÑU™YÚ\Ý\‹ƒBˆ
‹ÃBˆÙYš[™HTÐT•ÒS•SÓ—Ô–“ÒTÑPÓŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•ÒS•SÓ—Ô–“ÒTÑPÓ—ÔÒQ•
JH	ˆTÐT•ÒS•SÓ—Ô–“ÒTÑPÓ—ÓPTÒÊCBˆÙYš[™HTÐT•ÒS•SÓ—ÐP‘T”Ó—ÓPTÒÈ
LJCBˆÙYš[™HTÐT•ÒS•SÓ—ÐP‘T”Ó—ÔÒQ•
M•JCB‹ÊˆHP‘T”ÓˆHÜš][™ÈHÛX\œÈHÛÜœ™\ÜÛ™[™Èš][ˆHS•S”ÑU™YÚ\Ý\‹ƒBˆ
‹ÃBˆÙYš[™HTÐT•ÒS•SÓ—ÐP‘T”ÓŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•ÒS•SÓ—ÐP‘T”Ó—ÔÒQ•
JH	ˆTÐT•ÒS•SÓ—ÐP‘T”Ó—ÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YH”‘ÈH˜]Y˜]HÙ[™\˜]Üˆ™YÚ\Ý\‹ˆM‹Xš][YÙ\ˆ˜]Y˜]H]š\ÛÜˆ˜[YKˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐT•Ð”‘×Ð”‘ÕSÓPTÒÈ
‘‘‘•JCBˆÙYš[™HTÐT•Ð”‘×Ð”‘ÕSÔÒQ•
JCB‹ÊˆH”‘ÕSH\È˜[YH\È\ÙYÈ]šYHHTÐT•[œ]ÛØÚÈÈ]\›Z[™HH˜]Y˜]K˜\ÙYÛƒBˆ
ˆH[œ]ÛØÚÈœ›ÛHH”‘ËˆHÓÈ\È\ÙY\™XÝHžHHTÐT•[˜Ý[Û‹ˆHHÓÈ\ÃBˆ
ˆ]šYYžHˆ™Y›Ü™H\ÙHžHHTÐT•[˜Ý[Û‹ˆˆHÓÈ\È]šYYžHÈ™Y›Ü™H\ÙHžHHTÐT•Bˆ
ˆ[˜Ý[Û‹ˆ‘‘‘ˆHÓÈ\È]šYYžHKLÍˆ™Y›Ü™H\ÙHžHHTÐT•[˜Ý[Û‹ƒBˆ
‹ÃBˆÙYš[™HTÐT•Ð”‘×Ð”‘ÕS

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•Ð”‘×Ð”‘ÕSÔÒQ•
JH	ˆTÐT•Ð”‘×Ð”‘ÕSÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHS•ÕUH[\œ\Ý]\È™YÚ\Ý\‹ˆ™Y›XÝÈ[\œ\È]\™HÝ\œ™[H[˜X›Yˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐT•ÒS•ÕUÕQWÓPTÒÈ
JCBˆÙYš[™HTÐT•ÒS•ÕUÕQWÔÒQ•
ÕJCB‹ÊˆHQHH˜[œÛZ]\ˆYHÝ]\ËƒBˆ
‹ÃBˆÙYš[™HTÐT•ÒS•ÕUÕQJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•ÒS•ÕUÕQWÔÒQ•
JH	ˆTÐT•ÒS•ÕUÕQWÓPTÒÊCBˆÙYš[™HTÐT•ÒS•ÕUÑSPÕ×ÓPTÒÈ
ŒJCBˆÙYš[™HTÐT•ÒS•ÕUÑSPÕ×ÔÒQ•
UJCB‹ÊˆHSPÕÈH\Èš]\ÈÙ]Ú[ˆHÚ[™ÙH[ˆHÝ]HÙˆHÕÈ[œ]\È]XÝYƒBˆ
‹ÃBˆÙYš[™HTÐT•ÒS•ÕUÑSPÕÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•ÒS•ÕUÑSPÕ×ÔÒQ•
JH	ˆTÐT•ÒS•ÕUÑSPÕ×ÓPTÒÊCBˆÙYš[™HTÐT•ÒS•ÕUÕTÒS•ÓPTÒÈ
JCBˆÙYš[™HTÐT•ÒS•ÕUÕTÒS•ÔÒQ•
•JCB‹ÊˆHTÒS•H˜[œÛZ]\ˆ\ØX›Y[\œ\›YËƒBˆ
‹ÃBˆÙYš[™HTÐT•ÒS•ÕUÕTÒS•

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•ÒS•ÕUÕTÒS•ÔÒQ•
JH	ˆTÐT•ÒS•ÕUÕTÒS•ÓPTÒÊCBˆÙYš[™HTÐT•ÒS•ÕUÑST–”’×ÓPTÒÈ
JCBˆÙYš[™HTÐT•ÒS•ÕUÑST–”’×ÔÒQ•
LUJCB‹ÊˆHST–”’ÈH\Èš]\ÈÙ]Ú[ˆHÚ[™ÙH[ˆHÝ]HÙˆ™XÙZ]™\ˆœ™XZÈ]XÝ[ÛˆØØÝ\œËƒBˆ
‹ÃBˆÙYš[™HTÐT•ÒS•ÕUÑST–”’Ê
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•ÒS•ÕUÑST–”’×ÔÒQ•
JH	ˆTÐT•ÒS•ÕUÑST–”’×ÓPTÒÊCBˆÙYš[™HTÐT•ÒS•ÕUÔÕT•ÓPTÒÈ
LJCBˆÙYš[™HTÐT•ÒS•ÕUÔÕT•ÔÒQ•
L•JCB‹ÊˆHÕT•H\Èš]\ÈÙ]Ú[ˆHÝ\\È]XÝYÛˆH™XÙZ]™\ˆ[œ]ƒBˆ
‹ÃBˆÙYš[™HTÐT•ÒS•ÕUÔÕT•

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•ÒS•ÕUÔÕT•ÔÒQ•
JH	ˆTÐT•ÒS•ÕUÔÕT•ÓPTÒÊCBˆÙYš[™HTÐT•ÒS•ÕUÑ”SQT”’S•ÓPTÒÈ
ŒJCBˆÙYš[™HTÐT•ÒS•ÕUÑ”SQT”’S•ÔÒQ•
LÕJCB‹ÊˆH”SQT”’S•Hœ˜[Z[™È\œ›Üˆ[\œ\›YËƒBˆ
‹ÃBˆÙYš[™HTÐT•ÒS•ÕUÑ”SQT”’S•

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•ÒS•ÕUÑ”SQT”’S•ÔÒQ•
JH	ˆTÐT•ÒS•ÕUÑ”SQT”’S•ÓPTÒÊCBˆÙYš[™HTÐT•ÒS•ÕUÔT’UQT”’S•ÓPTÒÈ
JCBˆÙYš[™HTÐT•ÒS•ÕUÔT’UQT”’S•ÔÒQ•
MJCB‹ÊˆHT’UQT”’S•H\š]H\œ›Üˆ[\œ\›YËƒBˆ
‹ÃBˆÙYš[™HTÐT•ÒS•ÕUÔT’UQT”’S•

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•ÒS•ÕUÔT’UQT”’S•ÔÒQ•
JH	ˆTÐT•ÒS•ÕUÔT’UQT”’S•ÓPTÒÊCBˆÙYš[™HTÐT•ÒS•ÕUÔ–“ÒTÑRS•ÓPTÒÈ
JCBˆÙYš[™HTÐT•ÒS•ÕUÔ–“ÒTÑRS•ÔÒQ•
MUJCB‹ÊˆH–“ÒTÑRS•H™XÙZ]™Y›Ú\ÙH[\œ\›YËƒBˆ
‹ÃBˆÙYš[™HTÐT•ÒS•ÕUÔ–“ÒTÑRS•

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•ÒS•ÕUÔ–“ÒTÑRS•ÔÒQ•
JH	ˆTÐT•ÒS•ÕUÔ–“ÒTÑRS•ÓPTÒÊCBˆÙYš[™HTÐT•ÒS•ÕUÐP‘T”’S•ÓPTÒÈ
LJCBˆÙYš[™HTÐT•ÒS•ÕUÐP‘T”’S•ÔÒQ•
M•JCB‹ÊˆHP‘T”’S•H]]È˜]Y\œ›Üˆ[\œ\›YËƒBˆ
‹ÃBˆÙYš[™HTÐT•ÒS•ÕUÐP‘T”’S•

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•ÒS•ÕUÐP‘T”’S•ÔÒQ•
JH	ˆTÐT•ÒS•ÕUÐP‘T”’S•ÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHÔÔˆHÝ™\œØ[\HÙ[XÝ[Ûˆ™YÚ\Ý\ˆ›Üˆ\Þ[˜Ú›Û›Ý\ÈÛÛ[][šXØ][Û‹ˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐT•ÓÔÔ—ÓÔÔ•SÓPTÒÈ
•JCBˆÙYš[™HTÐT•ÓÔÔ—ÓÔÔ•SÔÒQ•
JCB‹ÊˆHÔÔ•SHÝ™\œØ[\HÙ[XÝ[Ûˆ˜[YKˆÈÈH›ÝÝ\ÜYHH[˜Ý[ÛˆÛØÚÜÈ\™H\ÙYÃBˆ
ˆ˜[œÛZ][™™XÙZ]™HXXÚ]Hš]ˆHHˆ[˜Ý[ÛˆÛØÚÜÈ\™H\ÙYÈ˜[œÛZ][™™XÙZ]™CBˆ
ˆXXÚ]Hš]ˆHMˆ[˜Ý[ÛˆÛØÚÜÈ\™H\ÙYÈ˜[œÛZ][™™XÙZ]™HXXÚ]Hš]ƒBˆ
‹ÃBˆÙYš[™HTÐT•ÓÔÔ—ÓÔÔ•S

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•ÓÔÔ—ÓÔÔ•SÔÒQ•
JH	ˆTÐT•ÓÔÔ—ÓÔÔ•SÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHQˆHY™\ÜÈ™YÚ\Ý\ˆ›Üˆ]]ÛX]XÈY™\ÜÈX]Ú[™Ëˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐT•ÐQ—ÐQ‘TÔ×ÓPTÒÈ
‘•JCBˆÙYš[™HTÐT•ÐQ—ÐQ‘TÔ×ÔÒQ•
JCB‹ÊˆHQ‘TÔÈHXš]Y™\ÜÈ\ÙYÚ]]]ÛX]XÈY™\ÜÈX]Ú[™Ëˆ\ÙYÚ[ˆY™\ÜÈ]XÝ[Ûˆ\ÃBˆ
ˆ[˜X›Y
Q‘U[ˆÕHJH[™]]ÛX]XÈY™\ÜÈX]Ú[™È\È[˜X›Y
UUÐQˆ[ˆÑ‘ÈHJKƒBˆ
‹ÃBˆÙYš[™HTÐT•ÐQ—ÐQ‘TÔÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•ÐQ—ÐQ‘TÔ×ÔÒQ•
JH	ˆTÐT•ÐQ—ÐQ‘TÔ×ÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YH’Q“ÐÑ‘ÈH’Q“ÈÛÛ™šYÝ\˜][Ûˆ[™[˜X›H™YÚ\Ý\‹ˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐT•Ñ’Q“ÐÑ‘×ÑSP“UÓPTÒÈ
UJCBˆÙYš[™HTÐT•Ñ’Q“ÐÑ‘×ÑSP“UÔÒQ•
JCB‹ÊˆHSP“UH[˜X›HH˜[œÛZ]’Q“ËƒBˆ
ˆŒ‹•H˜[œÛZ]’Q“È\È›Ý[˜X›YƒBˆ
ˆŒK‹•H˜[œÛZ]’Q“È\È[˜X›YƒBˆ
‹ÃBˆÙYš[™HTÐT•Ñ’Q“ÐÑ‘×ÑSP“U

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•Ñ’Q“ÐÑ‘×ÑSP“UÔÒQ•
JH	ˆTÐT•Ñ’Q“ÐÑ‘×ÑSP“UÓPTÒÊCBˆÙYš[™HTÐT•Ñ’Q“ÐÑ‘×ÑSP“T–ÓPTÒÈ
•JCBˆÙYš[™HTÐT•Ñ’Q“ÐÑ‘×ÑSP“T–ÔÒQ•
UJCB‹ÊˆHSP“T–H[˜X›HH™XÙZ]™H’Q“ËƒBˆ
ˆŒ‹•H™XÙZ]™H’Q“È\È›Ý[˜X›YƒBˆ
ˆŒK‹•H™XÙZ]™H’Q“È\È[˜X›YƒBˆ
‹ÃBˆÙYš[™HTÐT•Ñ’Q“ÐÑ‘×ÑSP“T–

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•Ñ’Q“ÐÑ‘×ÑSP“T–ÔÒQ•
JH	ˆTÐT•Ñ’Q“ÐÑ‘×ÑSP“T–ÓPTÒÊCBˆÙYš[™HTÐT•Ñ’Q“ÐÑ‘×ÔÒV‘WÓPTÒÈ
ÌJCBˆÙYš[™HTÐT•Ñ’Q“ÐÑ‘×ÔÒV‘WÔÒQ•
JCB‹ÊˆHÒV‘HH’Q“ÈÚ^™HÛÛ™šYÝ\˜][Û‹ˆ\È\ÈH™XY[Û›HšY[ˆH’Q“È\ÈÛÛ™šYÝ\™Y\ÈMƒBˆ
ˆ[šY\ÈÙˆš]ËˆK‹ÈH›Ý\XØX›HÈTÐT•ƒBˆ
‹ÃBˆÙYš[™HTÐT•Ñ’Q“ÐÑ‘×ÔÒV‘J
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•Ñ’Q“ÐÑ‘×ÔÒV‘WÔÒQ•
JH	ˆTÐT•Ñ’Q“ÐÑ‘×ÔÒV‘WÓPTÒÊCBˆÙYš[™HTÐT•Ñ’Q“ÐÑ‘×ÑPUÓPTÒÈ
LJCBˆÙYš[™HTÐT•Ñ’Q“ÐÑ‘×ÑPUÔÒQ•
L•JCB‹ÊˆHPUHPHÛÛ™šYÝ\˜][Ûˆ›Üˆ˜[œÛZ]ƒBˆ
ˆŒ‹‘PH\È›Ý\ÙY›ÜˆH˜[œÛZ][˜Ý[Û‹ƒBˆ
ˆŒK‹•šYÙÙ\ˆPH›ÜˆH˜[œÛZ][˜Ý[ÛˆYˆH’Q“È\È›Ý[ˆÙ[™\˜[K]H[\œ\ÈÛÝ[™H\ØX›YYˆPH\È[˜X›YƒBˆ
‹ÃBˆÙYš[™HTÐT•Ñ’Q“ÐÑ‘×ÑPU

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•Ñ’Q“ÐÑ‘×ÑPUÔÒQ•
JH	ˆTÐT•Ñ’Q“ÐÑ‘×ÑPUÓPTÒÊCBˆÙYš[™HTÐT•Ñ’Q“ÐÑ‘×ÑPT–ÓPTÒÈ
ŒJCBˆÙYš[™HTÐT•Ñ’Q“ÐÑ‘×ÑPT–ÔÒQ•
LÕJCB‹ÊˆHPT–HPHÛÛ™šYÝ\˜][Ûˆ›Üˆ™XÙZ]™KƒBˆ
ˆŒ‹‘PH\È›Ý\ÙY›ÜˆH™XÙZ]™H[˜Ý[Û‹ƒBˆ
ˆŒK‹•šYÙÙ\ˆPH›ÜˆH™XÙZ]™H[˜Ý[ÛˆYˆH’Q“È\È›Ý[\KˆÙ[™\˜[K]H[\œ\ÈÛÝ[™H\ØX›YYˆPH\È[˜X›YƒBˆ
‹ÃBˆÙYš[™HTÐT•Ñ’Q“ÐÑ‘×ÑPT–

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•Ñ’Q“ÐÑ‘×ÑPT–ÔÒQ•
JH	ˆTÐT•Ñ’Q“ÐÑ‘×ÑPT–ÓPTÒÊCBˆÙYš[™HTÐT•Ñ’Q“ÐÑ‘×ÕÐRÑUÓPTÒÈ
JCBˆÙYš[™HTÐT•Ñ’Q“ÐÑ‘×ÕÐRÑUÔÒQ•
MJCB‹ÊˆHÐRÑUHØZÙK]\›Üˆ˜[œÛZ]’Q“È]™[ˆ\È[ÝÜÈH]šXÙHÈ™HÛÚÙ[ˆœ›ÛH™YXÙYÝÙ\ƒBˆ
ˆ[Ù\È
\ÈÝÙ\‹YÝÛ‹\ÈÛ™È\ÈH\š\\˜[[˜Ý[ÛˆÛÜšÜÈ[ˆ]ÝÙ\ˆ[ÙJHÚ]Ý]Bˆ
ˆ[˜X›[™ÈH“[\œ\ˆÛ›HPHØZÙ\È\›ØÙ\ÜÙ\È]K[™ÛÙ\È˜XÚÈÈÛY\ˆCBˆ
ˆÔHÚ[™[XZ[ˆÝÜY[[ÛÚÙ[ˆžH[›Ý\ˆØ]\ÙKÝXÚ\ÈPHÛÛ\][Û‹ˆÙYH\™Ø\™CBˆ
ˆØZÙK]\ÛÛ›Û™YÚ\Ý\‹ƒBˆ
ˆŒ‹“Û›H[˜X›Y[\œ\ÈÚ[ØZÙH\H]šXÙH›Ü›H™YXÙYÝÙ\ˆ[Ù\ËƒBˆ
ˆŒK‹H]šXÙHØZÙK]\›ÜˆPHÚ[ØØÝ\ˆYˆH˜[œÛZ]’Q“È]™[™XXÚ\ÈH˜[YHÜXÚYšYYžH“[ƒBˆ
ˆ’Q“Õ’QË]™[ˆÚ[ˆH“[\œ\\È›Ý[˜X›YƒBˆ
‹ÃBˆÙYš[™HTÐT•Ñ’Q“ÐÑ‘×ÕÐRÑU

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•Ñ’Q“ÐÑ‘×ÕÐRÑUÔÒQ•
JH	ˆTÐT•Ñ’Q“ÐÑ‘×ÕÐRÑUÓPTÒÊCBˆÙYš[™HTÐT•Ñ’Q“ÐÑ‘×ÕÐRÑT–ÓPTÒÈ
JCBˆÙYš[™HTÐT•Ñ’Q“ÐÑ‘×ÕÐRÑT–ÔÒQ•
MUJCB‹ÊˆHÐRÑT–HØZÙK]\›Üˆ™XÙZ]™H’Q“È]™[ˆ\È[ÝÜÈH]šXÙHÈ™HÛÚÙ[ˆœ›ÛH™YXÙYÝÙ\ƒBˆ
ˆ[Ù\È
\ÈÝÙ\‹YÝÛ‹\ÈÛ™È\ÈH\š\\˜[[˜Ý[ÛˆÛÜšÜÈ[ˆ]ÝÙ\ˆ[ÙJHÚ]Ý]Bˆ
ˆ[˜X›[™ÈH“[\œ\ˆÛ›HPHØZÙ\È\›ØÙ\ÜÙ\È]K[™ÛÙ\È˜XÚÈÈÛY\ˆCBˆ
ˆÔHÚ[™[XZ[ˆÝÜY[[ÛÚÙ[ˆžH[›Ý\ˆØ]\ÙKÝXÚ\ÈPHÛÛ\][Û‹ˆÙYH\™Ø\™CBˆ
ˆØZÙK]\ÛÛ›Û™YÚ\Ý\‹ƒBˆ
ˆŒ‹“Û›H[˜X›Y[\œ\ÈÚ[ØZÙH\H]šXÙH›Ü›H™YXÙYÝÙ\ˆ[Ù\ËƒBˆ
ˆŒK‹H]šXÙHØZÙK]\›ÜˆPHÚ[ØØÝ\ˆYˆH™XÙZ]™H’Q“È]™[™XXÚ\ÈH˜[YHÜXÚYšYYžH–“[ƒBˆ
ˆ’Q“Õ’QË]™[ˆÚ[ˆH–“[\œ\\È›Ý[˜X›YƒBˆ
‹ÃBˆÙYš[™HTÐT•Ñ’Q“ÐÑ‘×ÕÐRÑT–

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•Ñ’Q“ÐÑ‘×ÕÐRÑT–ÔÒQ•
JH	ˆTÐT•Ñ’Q“ÐÑ‘×ÕÐRÑT–ÓPTÒÊCBˆÙYš[™HTÐT•Ñ’Q“ÐÑ‘×ÑSTUÓPTÒÈ
LJCBˆÙYš[™HTÐT•Ñ’Q“ÐÑ‘×ÑSTUÔÒQ•
M•JCB‹ÊˆHSTUH[\HÛÛ[X[™›ÜˆH˜[œÛZ]’Q“ËˆÚ[ˆHH\ÈÜš][ˆÈ\Èš]H’Q“È\È[\YYƒBˆ
‹ÃBˆÙYš[™HTÐT•Ñ’Q“ÐÑ‘×ÑSTU

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•Ñ’Q“ÐÑ‘×ÑSTUÔÒQ•
JH	ˆTÐT•Ñ’Q“ÐÑ‘×ÑSTUÓPTÒÊCBˆÙYš[™HTÐT•Ñ’Q“ÐÑ‘×ÑSTT–ÓPTÒÈ
ŒJCBˆÙYš[™HTÐT•Ñ’Q“ÐÑ‘×ÑSTT–ÔÒQ•
MÕJCB‹ÊˆHSTT–H[\HÛÛ[X[™›ÜˆH™XÙZ]™H’Q“ËˆÚ[ˆHH\ÈÜš][ˆÈ\Èš]H–’Q“È\È[\YYƒBˆ
‹ÃBˆÙYš[™HTÐT•Ñ’Q“ÐÑ‘×ÑSTT–

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•Ñ’Q“ÐÑ‘×ÑSTT–ÔÒQ•
JH	ˆTÐT•Ñ’Q“ÐÑ‘×ÑSTT–ÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YH’Q“ÔÕUH’Q“ÈÝ]\È™YÚ\Ý\‹ˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐT•Ñ’Q“ÔÕUÕT”—ÓPTÒÈ
UJCBˆÙYš[™HTÐT•Ñ’Q“ÔÕUÕT”—ÔÒQ•
JCB‹ÊˆHT”ˆH’Q“È\œ›Ü‹ˆÚ[™HÙ]YˆH˜[œÛZ]’Q“È\œ›ÜˆØØÝ\œËˆ\ÈÛÝ[™H[ˆÝ™\™›ÝÃBˆ
ˆØ]\ÙYžH\Ú[™È]H[ÈH[’Q“ËÜˆžH[ˆ[™\™›ÝÈYˆH’Q“È\È[\HÚ[ˆ]H\ÃBˆ
ˆ™YYYˆÛX\™YžHÜš][™ÈHHÈ\Èš]ƒBˆ
‹ÃBˆÙYš[™HTÐT•Ñ’Q“ÔÕUÕT”Š
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•Ñ’Q“ÔÕUÕT”—ÔÒQ•
JH	ˆTÐT•Ñ’Q“ÔÕUÕT”—ÓPTÒÊCBˆÙYš[™HTÐT•Ñ’Q“ÔÕUÔ–T”—ÓPTÒÈ
•JCBˆÙYš[™HTÐT•Ñ’Q“ÔÕUÔ–T”—ÔÒQ•
UJCB‹ÊˆH–T”ˆH–’Q“È\œ›Ü‹ˆÚ[™HÙ]YˆH™XÙZ]™H’Q“ÈÝ™\™›ÝÈØØÝ\œËØ]\ÙYžHÛÙØ\™HÜˆPCBˆ
ˆ›Ý[\Z[™ÈH’Q“È˜\Ý[›ÝYÚˆÛX\™YžHÜš][™ÈHHÈ\Èš]ƒBˆ
‹ÃBˆÙYš[™HTÐT•Ñ’Q“ÔÕUÔ–T”Š
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•Ñ’Q“ÔÕUÔ–T”—ÔÒQ•
JH	ˆTÐT•Ñ’Q“ÔÕUÔ–T”—ÓPTÒÊCBˆÙYš[™HTÐT•Ñ’Q“ÔÕUÔT’S•ÓPTÒÈ
JCBˆÙYš[™HTÐT•Ñ’Q“ÔÕUÔT’S•ÔÒQ•
ÕJCB‹ÊˆHT’S•H\š\\˜[[\œ\ˆÚ[ˆK\È[™XØ]\È]H\š\\˜[[˜Ý[Ûˆ\È\ÜÙ\YBˆ
ˆ[ˆ[\œ\ˆH]Z[ÈØ[ˆ™H›Ý[™žH™XY[™ÈH\š\\˜[	ÜÈÕU™YÚ\Ý\‹ƒBˆ
‹ÃBˆÙYš[™HTÐT•Ñ’Q“ÔÕUÔT’S•

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•Ñ’Q“ÔÕUÔT’S•ÔÒQ•
JH	ˆTÐT•Ñ’Q“ÔÕUÔT’S•ÓPTÒÊCBˆÙYš[™HTÐT•Ñ’Q“ÔÕUÕSTWÓPTÒÈ
LJCBˆÙYš[™HTÐT•Ñ’Q“ÔÕUÕSTWÔÒQ•
JCB‹ÊˆHSTHH˜[œÛZ]’Q“È[\KˆÚ[ˆKH˜[œÛZ]’Q“È\È[\KˆH\š\\˜[X^HÝ[™H›ØÙ\ÜÚ[™ÈH\ÝYXÙHÙˆ]KƒBˆ
‹ÃBˆÙYš[™HTÐT•Ñ’Q“ÔÕUÕSTJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•Ñ’Q“ÔÕUÕSTWÔÒQ•
JH	ˆTÐT•Ñ’Q“ÔÕUÕSTWÓPTÒÊCBˆÙYš[™HTÐT•Ñ’Q“ÔÕUÕ“Õ•SÓPTÒÈ
ŒJCBˆÙYš[™HTÐT•Ñ’Q“ÔÕUÕ“Õ•SÔÒQ•
UJCB‹ÊˆH“Õ•SH˜[œÛZ]’Q“È›Ý[ˆÚ[ˆKH˜[œÛZ]’Q“È\È›Ý[ÛÈ[Ü™H]HØ[ˆ™CBˆ
ˆÜš][‹ˆÚ[ˆH˜[œÛZ]’Q“È\È[[™[›Ý\ˆÜš]HÛÝ[Ø]\ÙH]ÈÝ™\™›ÝËƒBˆ
‹ÃBˆÙYš[™HTÐT•Ñ’Q“ÔÕUÕ“Õ•S

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•Ñ’Q“ÔÕUÕ“Õ•SÔÒQ•
JH	ˆTÐT•Ñ’Q“ÔÕUÕ“Õ•SÓPTÒÊCBˆÙYš[™HTÐT•Ñ’Q“ÔÕUÔ–“ÕSTWÓPTÒÈ
JCBˆÙYš[™HTÐT•Ñ’Q“ÔÕUÔ–“ÕSTWÔÒQ•
•JCB‹ÊˆH–“ÕSTHH™XÙZ]™H’Q“È›Ý[\KˆÚ[ˆKH™XÙZ]™H’Q“È\È›Ý[\KÛÈ]HØ[ˆ™H™XYˆÚ[ˆH™XÙZ]™H’Q“È\È[\KƒBˆ
‹ÃBˆÙYš[™HTÐT•Ñ’Q“ÔÕUÔ–“ÕSTJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•Ñ’Q“ÔÕUÔ–“ÕSTWÔÒQ•
JH	ˆTÐT•Ñ’Q“ÔÕUÔ–“ÕSTWÓPTÒÊCBˆÙYš[™HTÐT•Ñ’Q“ÔÕUÔ–•SÓPTÒÈ
JCBˆÙYš[™HTÐT•Ñ’Q“ÔÕUÔ–•SÔÒQ•
ÕJCB‹ÊˆH–•SH™XÙZ]™H’Q“È[ˆÚ[ˆKH™XÙZ]™H’Q“È\È[ˆ]H™YYÈÈ™H™XYÝ]ÃBˆ
ˆ™]™[H\š\\˜[œ›ÛHØ]\Ú[™È[ˆÝ™\™›ÝËƒBˆ
‹ÃBˆÙYš[™HTÐT•Ñ’Q“ÔÕUÔ–•S

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•Ñ’Q“ÔÕUÔ–•SÔÒQ•
JH	ˆTÐT•Ñ’Q“ÔÕUÔ–•SÓPTÒÊCBˆÙYš[™HTÐT•Ñ’Q“ÔÕUÕ“ÓPTÒÈ
QŒJCBˆÙYš[™HTÐT•Ñ’Q“ÔÕUÕ“ÔÒQ•
JCB‹ÊˆH“H˜[œÛZ]’Q“ÈÝ\œ™[]™[ˆHYX[œÈH’Q“È\ÈÝ\œ™[H[\K[™HSTCBˆ
ˆ[™“Õ•S›YÜÈÚ[™HKˆÝ\ˆ˜[Y\È[ÝÈ]XÚ]H\ÈXÝX[H[ˆH’Q“È]Bˆ
ˆHÚ[Ú\™HH™XYØØÝ\œËˆYˆH’Q“È\È[HSTH[™“Õ•S›YÜÈÚ[™CBˆ
ˆƒBˆ
‹ÃBˆÙYš[™HTÐT•Ñ’Q“ÔÕUÕ“

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•Ñ’Q“ÔÕUÕ“ÔÒQ•
JH	ˆTÐT•Ñ’Q“ÔÕUÕ“ÓPTÒÊCBˆÙYš[™HTÐT•Ñ’Q“ÔÕUÔ–“ÓPTÒÈ
QŒJCBˆÙYš[™HTÐT•Ñ’Q“ÔÕUÔ–“ÔÒQ•
M•JCB‹ÊˆH–“H™XÙZ]™H’Q“ÈÝ\œ™[]™[ˆHYX[œÈH–’Q“È\ÈÝ\œ™[H[\K[™H–•S[™Bˆ
ˆ–“ÕSTH›YÜÈÚ[™HˆÝ\ˆ˜[Y\È[ÝÈ]XÚ]H\ÈXÝX[H[ˆH–’Q“È]CBˆ
ˆÚ[Ú\™HH™XYØØÝ\œËˆYˆH–’Q“È\È[H–•S[™–“ÕSTH›YÜÈÚ[™CBˆ
ˆKƒBˆ
‹ÃBˆÙYš[™HTÐT•Ñ’Q“ÔÕUÔ–“

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•Ñ’Q“ÔÕUÔ–“ÔÒQ•
JH	ˆTÐT•Ñ’Q“ÔÕUÔ–“ÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YH’Q“Õ’QÈH’Q“ÈšYÙÙ\ˆÙ][™ÜÈ›Üˆ[\œ\[™PH™\]Y\Ýˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐT•Ñ’Q“Õ’Q×Õ“SWÓPTÒÈ
UJCBˆÙYš[™HTÐT•Ñ’Q“Õ’Q×Õ“SWÔÒQ•
JCB‹ÊˆH“SHH˜[œÛZ]’Q“È]™[šYÙÙ\ˆ[˜X›Kˆ\ÈšYÙÙ\ˆÚ[™XÛÛYH[ˆ[\œ\Yˆ[˜X›YBˆ
ˆ[ˆ’Q“ÒS•S”ÑUÜˆHPHšYÙÙ\ˆYˆPU[ˆ’Q“ÐÑ‘È\ÈÙ]ƒBˆ
ˆŒ‹•˜[œÛZ]’Q“È]™[Ù\È›ÝÙ[™\˜]HH’Q“È]™[šYÙÙ\‹ƒBˆ
ˆŒK‹[ˆšYÙÙ\ˆÚ[™HÙ[™\˜]YYˆH˜[œÛZ]’Q“È]™[™XXÚ\ÈH˜[YHÜXÚYšYYžHH“šY[[ˆ\È™YÚ\Ý\‹ƒBˆ
‹ÃBˆÙYš[™HTÐT•Ñ’Q“Õ’Q×Õ“SJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•Ñ’Q“Õ’Q×Õ“SWÔÒQ•
JH	ˆTÐT•Ñ’Q“Õ’Q×Õ“SWÓPTÒÊCBˆÙYš[™HTÐT•Ñ’Q“Õ’Q×Ô–“SWÓPTÒÈ
•JCBˆÙYš[™HTÐT•Ñ’Q“Õ’Q×Ô–“SWÔÒQ•
UJCB‹ÊˆH–“SHH™XÙZ]™H’Q“È]™[šYÙÙ\ˆ[˜X›Kˆ\ÈšYÙÙ\ˆÚ[™XÛÛYH[ˆ[\œ\Yˆ[˜X›YBˆ
ˆ[ˆ’Q“ÒS•S”ÑUÜˆHPHšYÙÙ\ˆYˆPT–[ˆ’Q“ÐÑ‘È\ÈÙ]ƒBˆ
ˆŒ‹”™XÙZ]™H’Q“È]™[Ù\È›ÝÙ[™\˜]HH’Q“È]™[šYÙÙ\‹ƒBˆ
ˆŒK‹[ˆšYÙÙ\ˆÚ[™HÙ[™\˜]YYˆH™XÙZ]™H’Q“È]™[™XXÚ\ÈH˜[YHÜXÚYšYYžHH–“šY[[ˆ\È™YÚ\Ý\‹ƒBˆ
‹ÃBˆÙYš[™HTÐT•Ñ’Q“Õ’Q×Ô–“SJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•Ñ’Q“Õ’Q×Ô–“SWÔÒQ•
JH	ˆTÐT•Ñ’Q“Õ’Q×Ô–“SWÓPTÒÊCBˆÙYš[™HTÐT•Ñ’Q“Õ’Q×Õ“ÓPTÒÈ
ŒJCBˆÙYš[™HTÐT•Ñ’Q“Õ’Q×Õ“ÔÒQ•
JCB‹ÊˆH“H˜[œÛZ]’Q“È]™[šYÙÙ\ˆÚ[ˆ\ÈšY[\È\ÙYÛ›HÚ[ˆ“SHHKˆYˆ[˜X›YBˆ
ˆÈÈÛËH’Q“È]™[Ø[ˆØZÙH\H]šXÙH\Ý[›ÝYÚÈ\™›Ü›HPK[ˆ™]\›ˆÃBˆ
ˆH™YXÙYÝÙ\ˆ[ÙKˆÙYH\™Ø\™HØZÙK]\ÛÛ›Û™YÚ\Ý\‹ˆHšYÙÙ\ˆÚ[ˆH’Q“ÃBˆ
ˆ™XÛÛY\È[\KˆHHšYÙÙ\ˆÚ[ˆH’Q“È]™[XÜ™X\Ù\ÈÈÛ™H[žKˆMHHšYÙÙ\ˆÚ[ˆHBˆ
ˆ’Q“È]™[XÜ™X\Ù\ÈÈMH[šY\È
\È›ÈÛ™Ù\ˆ[
KƒBˆ
‹ÃBˆÙYš[™HTÐT•Ñ’Q“Õ’Q×Õ“

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•Ñ’Q“Õ’Q×Õ“ÔÒQ•
JH	ˆTÐT•Ñ’Q“Õ’Q×Õ“ÓPTÒÊCBˆÙYš[™HTÐT•Ñ’Q“Õ’Q×Ô–“ÓPTÒÈ
ŒJCBˆÙYš[™HTÐT•Ñ’Q“Õ’Q×Ô–“ÔÒQ•
M•JCB‹ÊˆH–“H™XÙZ]™H’Q“È]™[šYÙÙ\ˆÚ[ˆH–’Q“È]™[\ÈÚXÚÙYÚ[ˆH™]ÈYXÙHÙˆ]CBˆ
ˆ\È™XÙZ]™Yˆ\ÈšY[\È\ÙYÛ›HÚ[ˆ–“SHHKˆYˆ[˜X›YÈÈÛËH’Q“È]™[Bˆ
ˆØ[ˆØZÙH\H]šXÙH\Ý[›ÝYÚÈ\™›Ü›HPK[ˆ™]\›ˆÈH™YXÙYÝÙ\ˆ[ÙKˆÙYCBˆ
ˆ\™Ø\™HØZÙK]\ÛÛ›Û™YÚ\Ý\‹ˆHšYÙÙ\ˆÚ[ˆH–’Q“È\È™XÙZ]™YÛ™H[žH
\È›ÃBˆ
ˆÛ™Ù\ˆ[\JKˆHHšYÙÙ\ˆÚ[ˆH–’Q“È\È™XÙZ]™YÛÈ[šY\ËˆMHHšYÙÙ\ˆÚ[ˆH–Bˆ
ˆ’Q“È\È™XÙZ]™YMˆ[šY\È
\È™XÛÛYH[
KƒBˆ
‹ÃBˆÙYš[™HTÐT•Ñ’Q“Õ’Q×Ô–“

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•Ñ’Q“Õ’Q×Ô–“ÔÒQ•
JH	ˆTÐT•Ñ’Q“Õ’Q×Ô–“ÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YH’Q“ÒS•S”ÑUH’Q“È[\œ\[˜X›HÙ]
[˜X›JH[™™XY™YÚ\Ý\‹ˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐT•Ñ’Q“ÒS•S”ÑUÕT”—ÓPTÒÈ
UJCBˆÙYš[™HTÐT•Ñ’Q“ÒS•S”ÑUÕT”—ÔÒQ•
JCB‹ÊˆHT”ˆH]\›Z[™\ÈÚ]\ˆ[ˆ[\œ\ØØÝ\œÈÚ[ˆH˜[œÛZ]\œ›ÜˆØØÝ\œË˜\ÙYÛˆHT”ˆ›YÈ[ˆH’Q“ÔÕU™YÚ\Ý\‹ƒBˆ
ˆŒ‹“›È[\œ\Ú[™HÙ[™\˜]Y›ÜˆH˜[œÛZ]\œ›Ü‹ƒBˆ
ˆŒK‹[ˆ[\œ\Ú[™HÙ[™\˜]YÚ[ˆH˜[œÛZ]\œ›ÜˆØØÝ\œËƒBˆ
‹ÃBˆÙYš[™HTÐT•Ñ’Q“ÒS•S”ÑUÕT”Š
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•Ñ’Q“ÒS•S”ÑUÕT”—ÔÒQ•
JH	ˆTÐT•Ñ’Q“ÒS•S”ÑUÕT”—ÓPTÒÊCBˆÙYš[™HTÐT•Ñ’Q“ÒS•S”ÑUÔ–T”—ÓPTÒÈ
•JCBˆÙYš[™HTÐT•Ñ’Q“ÒS•S”ÑUÔ–T”—ÔÒQ•
UJCB‹ÊˆH–T”ˆH]\›Z[™\ÈÚ]\ˆ[ˆ[\œ\ØØÝ\œÈÚ[ˆH™XÙZ]™H\œ›ÜˆØØÝ\œË˜\ÙYÛˆH–T”ˆ›YÈ[ˆH’Q“ÔÕU™YÚ\Ý\‹ƒBˆ
ˆŒ‹“›È[\œ\Ú[™HÙ[™\˜]Y›ÜˆH™XÙZ]™H\œ›Ü‹ƒBˆ
ˆŒK‹[ˆ[\œ\Ú[™HÙ[™\˜]YÚ[ˆH™XÙZ]™H\œ›ÜˆØØÝ\œËƒBˆ
‹ÃBˆÙYš[™HTÐT•Ñ’Q“ÒS•S”ÑUÔ–T”Š
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•Ñ’Q“ÒS•S”ÑUÔ–T”—ÔÒQ•
JH	ˆTÐT•Ñ’Q“ÒS•S”ÑUÔ–T”—ÓPTÒÊCBˆÙYš[™HTÐT•Ñ’Q“ÒS•S”ÑUÕ“ÓPTÒÈ
JCBˆÙYš[™HTÐT•Ñ’Q“ÒS•S”ÑUÕ“ÔÒQ•
•JCB‹ÊˆH“H]\›Z[™\ÈÚ]\ˆ[ˆ[\œ\ØØÝ\œÈÚ[ˆHH˜[œÛZ]’Q“È™XXÚ\ÈH]™[Bˆ
ˆÜXÚYšYYžHH“šY[[ˆH’Q“Õ’QÈ™YÚ\Ý\‹ƒBˆ
ˆŒ‹“›È[\œ\Ú[™HÙ[™\˜]Y˜\ÙYÛˆH’Q“È]™[ƒBˆ
ˆŒK‹’Yˆ“SH[ˆH’Q“Õ’QÈ™YÚ\Ý\ˆHK[ˆ[\œ\Ú[™HÙ[™\˜]YÚ[ˆH’Q“È]™[XÜ™X\Ù\ÃBˆ
ˆÈH]™[ÜXÚYšYYžH“[ˆH’Q“Õ’QÈ™YÚ\Ý\‹ƒBˆ
‹ÃBˆÙYš[™HTÐT•Ñ’Q“ÒS•S”ÑUÕ“

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•Ñ’Q“ÒS•S”ÑUÕ“ÔÒQ•
JH	ˆTÐT•Ñ’Q“ÒS•S”ÑUÕ“ÓPTÒÊCBˆÙYš[™HTÐT•Ñ’Q“ÒS•S”ÑUÔ–“ÓPTÒÈ
JCBˆÙYš[™HTÐT•Ñ’Q“ÒS•S”ÑUÔ–“ÔÒQ•
ÕJCB‹ÊˆH–“H]\›Z[™\ÈÚ]\ˆ[ˆ[\œ\ØØÝ\œÈÚ[ˆHH™XÙZ]™H’Q“È™XXÚ\ÈH]™[Bˆ
ˆÜXÚYšYYžHH“šY[[ˆH’Q“Õ’QÈ™YÚ\Ý\‹ƒBˆ
ˆŒ‹“›È[\œ\Ú[™HÙ[™\˜]Y˜\ÙYÛˆH–’Q“È]™[ƒBˆ
ˆŒK‹’Yˆ–“SH[ˆH’Q“Õ’QÈ™YÚ\Ý\ˆHK[ˆ[\œ\Ú[™HÙ[™\˜]YÚ[ˆHÚ[ˆH–’Q“È]™[Bˆ
ˆ[˜Ü™X\Ù\ÈÈH]™[ÜXÚYšYYžH–“[ˆH’Q“Õ’QÈ™YÚ\Ý\‹ƒBˆ
‹ÃBˆÙYš[™HTÐT•Ñ’Q“ÒS•S”ÑUÔ–“

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•Ñ’Q“ÒS•S”ÑUÔ–“ÔÒQ•
JH	ˆTÐT•Ñ’Q“ÒS•S”ÑUÔ–“ÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YH’Q“ÒS•SÓˆH’Q“È[\œ\[˜X›HÛX\ˆ
\ØX›JH[™™XY™YÚ\Ý\‹ˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐT•Ñ’Q“ÒS•SÓ—ÕT”—ÓPTÒÈ
UJCBˆÙYš[™HTÐT•Ñ’Q“ÒS•SÓ—ÕT”—ÔÒQ•
JCB‹ÊˆHT”ˆHÜš][™ÈÛ™HÛX\œÈHÛÜœ™\ÜÛ™[™Èš]È[ˆH’Q“ÒS•S”ÑU™YÚ\Ý\‹ƒBˆ
‹ÃBˆÙYš[™HTÐT•Ñ’Q“ÒS•SÓ—ÕT”Š
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•Ñ’Q“ÒS•SÓ—ÕT”—ÔÒQ•
JH	ˆTÐT•Ñ’Q“ÒS•SÓ—ÕT”—ÓPTÒÊCBˆÙYš[™HTÐT•Ñ’Q“ÒS•SÓ—Ô–T”—ÓPTÒÈ
•JCBˆÙYš[™HTÐT•Ñ’Q“ÒS•SÓ—Ô–T”—ÔÒQ•
UJCB‹ÊˆH–T”ˆHÜš][™ÈÛ™HÛX\œÈHÛÜœ™\ÜÛ™[™Èš]È[ˆH’Q“ÒS•S”ÑU™YÚ\Ý\‹ƒBˆ
‹ÃBˆÙYš[™HTÐT•Ñ’Q“ÒS•SÓ—Ô–T”Š
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•Ñ’Q“ÒS•SÓ—Ô–T”—ÔÒQ•
JH	ˆTÐT•Ñ’Q“ÒS•SÓ—Ô–T”—ÓPTÒÊCBˆÙYš[™HTÐT•Ñ’Q“ÒS•SÓ—Õ“ÓPTÒÈ
JCBˆÙYš[™HTÐT•Ñ’Q“ÒS•SÓ—Õ“ÔÒQ•
•JCB‹ÊˆH“HÜš][™ÈÛ™HÛX\œÈHÛÜœ™\ÜÛ™[™Èš]È[ˆH’Q“ÒS•S”ÑU™YÚ\Ý\‹ƒBˆ
‹ÃBˆÙYš[™HTÐT•Ñ’Q“ÒS•SÓ—Õ“

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•Ñ’Q“ÒS•SÓ—Õ“ÔÒQ•
JH	ˆTÐT•Ñ’Q“ÒS•SÓ—Õ“ÓPTÒÊCBˆÙYš[™HTÐT•Ñ’Q“ÒS•SÓ—Ô–“ÓPTÒÈ
JCBˆÙYš[™HTÐT•Ñ’Q“ÒS•SÓ—Ô–“ÔÒQ•
ÕJCB‹ÊˆH–“HÜš][™ÈÛ™HÛX\œÈHÛÜœ™\ÜÛ™[™Èš]È[ˆH’Q“ÒS•S”ÑU™YÚ\Ý\‹ƒBˆ
‹ÃBˆÙYš[™HTÐT•Ñ’Q“ÒS•SÓ—Ô–“

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•Ñ’Q“ÒS•SÓ—Ô–“ÔÒQ•
JH	ˆTÐT•Ñ’Q“ÒS•SÓ—Ô–“ÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YH’Q“ÒS•ÕUH’Q“È[\œ\Ý]\È™YÚ\Ý\‹ˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐT•Ñ’Q“ÒS•ÕUÕT”—ÓPTÒÈ
UJCBˆÙYš[™HTÐT•Ñ’Q“ÒS•ÕUÕT”—ÔÒQ•
JCB‹ÊˆHT”ˆH’Q“È\œ›Ü‹ƒBˆ
‹ÃBˆÙYš[™HTÐT•Ñ’Q“ÒS•ÕUÕT”Š
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•Ñ’Q“ÒS•ÕUÕT”—ÔÒQ•
JH	ˆTÐT•Ñ’Q“ÒS•ÕUÕT”—ÓPTÒÊCBˆÙYš[™HTÐT•Ñ’Q“ÒS•ÕUÔ–T”—ÓPTÒÈ
•JCBˆÙYš[™HTÐT•Ñ’Q“ÒS•ÕUÔ–T”—ÔÒQ•
UJCB‹ÊˆH–T”ˆH–’Q“È\œ›Ü‹ƒBˆ
‹ÃBˆÙYš[™HTÐT•Ñ’Q“ÒS•ÕUÔ–T”Š
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•Ñ’Q“ÒS•ÕUÔ–T”—ÔÒQ•
JH	ˆTÐT•Ñ’Q“ÒS•ÕUÔ–T”—ÓPTÒÊCBˆÙYš[™HTÐT•Ñ’Q“ÒS•ÕUÕ“ÓPTÒÈ
JCBˆÙYš[™HTÐT•Ñ’Q“ÒS•ÕUÕ“ÔÒQ•
•JCB‹ÊˆH“H˜[œÛZ]’Q“È]™[[\œ\ƒBˆ
‹ÃBˆÙYš[™HTÐT•Ñ’Q“ÒS•ÕUÕ“

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•Ñ’Q“ÒS•ÕUÕ“ÔÒQ•
JH	ˆTÐT•Ñ’Q“ÒS•ÕUÕ“ÓPTÒÊCBˆÙYš[™HTÐT•Ñ’Q“ÒS•ÕUÔ–“ÓPTÒÈ
JCBˆÙYš[™HTÐT•Ñ’Q“ÒS•ÕUÔ–“ÔÒQ•
ÕJCB‹ÊˆH–“H™XÙZ]™H’Q“È]™[[\œ\ƒBˆ
‹ÃBˆÙYš[™HTÐT•Ñ’Q“ÒS•ÕUÔ–“

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•Ñ’Q“ÒS•ÕUÔ–“ÔÒQ•
JH	ˆTÐT•Ñ’Q“ÒS•ÕUÔ–“ÓPTÒÊCBˆÙYš[™HTÐT•Ñ’Q“ÒS•ÕUÔT’S•ÓPTÒÈ
LJCBˆÙYš[™HTÐT•Ñ’Q“ÒS•ÕUÔT’S•ÔÒQ•
JCB‹ÊˆHT’S•H\š\\˜[[\œ\ƒBˆ
‹ÃBˆÙYš[™HTÐT•Ñ’Q“ÒS•ÕUÔT’S•

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•Ñ’Q“ÒS•ÕUÔT’S•ÔÒQ•
JH	ˆTÐT•Ñ’Q“ÒS•ÕUÔT’S•ÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YH’Q“ÕÔˆH’Q“ÈÜš]H]Kˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐT•Ñ’Q“ÕÔ—ÕUWÓPTÒÈ
Q‘•JCBˆÙYš[™HTÐT•Ñ’Q“ÕÔ—ÕUWÔÒQ•
JCB‹ÊˆHUHH˜[œÛZ]]HÈH’Q“ËƒBˆ
‹ÃBˆÙYš[™HTÐT•Ñ’Q“ÕÔ—ÕUJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•Ñ’Q“ÕÔ—ÕUWÔÒQ•
JH	ˆTÐT•Ñ’Q“ÕÔ—ÕUWÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YH’Q“Ô‘H’Q“È™XY]Kˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐT•Ñ’Q“Ô‘Ô–UWÓPTÒÈ
Q‘•JCBˆÙYš[™HTÐT•Ñ’Q“Ô‘Ô–UWÔÒQ•
JCB‹ÊˆH–UHH™XÙZ]™Y]Hœ›ÛHH’Q“ËˆH[X™\ˆÙˆš]È\ÙY\[™ÈÛˆHUSSˆ[™T’UTÑSÙ][™ÜËƒBˆ
‹ÃBˆÙYš[™HTÐT•Ñ’Q“Ô‘Ô–UJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•Ñ’Q“Ô‘Ô–UWÔÒQ•
JH	ˆTÐT•Ñ’Q“Ô‘Ô–UWÓPTÒÊCBˆÙYš[™HTÐT•Ñ’Q“Ô‘Ñ”SQT”—ÓPTÒÈ
ŒJCBˆÙYš[™HTÐT•Ñ’Q“Ô‘Ñ”SQT”—ÔÒQ•
LÕJCB‹ÊˆH”SQT”ˆHœ˜[Z[™È\œ›ÜˆÝ]\È›YËˆ\Èš]™Y›XÝÈHÝ]\È›ÜˆH]H]\È™XY[Û™ÃBˆ
ˆÚ]œ›ÛHH’Q“Ë[™[™XØ]\È]HÚ\˜XÝ\ˆØ\È™XÙZ]™YÚ]HZ\ÜÚ[™ÈÝÜš]]Bˆ
ˆH^XÝYØØ][Û‹ˆ\ÈÛÝ[™H[ˆ[™XØ][ÛˆÙˆH˜]Y˜]HÜˆÛÛ™šYÝ\˜][ÛˆZ\ÛX]ÚBˆ
ˆÚ]H˜[œÛZ][™ÈÛÝ\˜ÙKƒBˆ
‹ÃBˆÙYš[™HTÐT•Ñ’Q“Ô‘Ñ”SQT”Š
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•Ñ’Q“Ô‘Ñ”SQT”—ÔÒQ•
JH	ˆTÐT•Ñ’Q“Ô‘Ñ”SQT”—ÓPTÒÊCBˆÙYš[™HTÐT•Ñ’Q“Ô‘ÔT’UQT”—ÓPTÒÈ
JCBˆÙYš[™HTÐT•Ñ’Q“Ô‘ÔT’UQT”—ÔÒQ•
MJCB‹ÊˆHT’UQT”ˆH\š]H\œ›ÜˆÝ]\È›YËˆ\Èš]™Y›XÝÈHÝ]\È›ÜˆH]H]\È™XY[Û™ÃBˆ
ˆÚ]œ›ÛHH’Q“Ëˆ\Èš]Ú[™HÙ]Ú[ˆH\š]H\œ›Üˆ\È]XÝY[ˆH™XÙZ]™YBˆ
ˆÚ\˜XÝ\‹ƒBˆ
‹ÃBˆÙYš[™HTÐT•Ñ’Q“Ô‘ÔT’UQT”Š
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•Ñ’Q“Ô‘ÔT’UQT”—ÔÒQ•
JH	ˆTÐT•Ñ’Q“Ô‘ÔT’UQT”—ÓPTÒÊCBˆÙYš[™HTÐT•Ñ’Q“Ô‘Ô–“ÒTÑWÓPTÒÈ
JCBˆÙYš[™HTÐT•Ñ’Q“Ô‘Ô–“ÒTÑWÔÒQ•
MUJCB‹ÊˆH–“ÒTÑHH™XÙZ]™Y›Ú\ÙH›YËˆÙYH\ØÜš\[ÛˆÙˆHž›Ú\ÙR[š][ˆX›HÍMƒBˆ
‹ÃBˆÙYš[™HTÐT•Ñ’Q“Ô‘Ô–“ÒTÑJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•Ñ’Q“Ô‘Ô–“ÒTÑWÔÒQ•
JH	ˆTÐT•Ñ’Q“Ô‘Ô–“ÒTÑWÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YH’Q“Ô‘“ÔÔH’Q“È]H™XYÚ]›È’Q“ÈÜˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐT•Ñ’Q“Ô‘“ÔÔÔ–UWÓPTÒÈ
Q‘•JCBˆÙYš[™HTÐT•Ñ’Q“Ô‘“ÔÔÔ–UWÔÒQ•
JCB‹ÊˆH–UHH™XÙZ]™Y]Hœ›ÛHH’Q“ËˆH[X™\ˆÙˆš]È\ÙY\[™ÈÛˆHUSSˆ[™T’UTÑSÙ][™ÜËƒBˆ
‹ÃBˆÙYš[™HTÐT•Ñ’Q“Ô‘“ÔÔÔ–UJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•Ñ’Q“Ô‘“ÔÔÔ–UWÔÒQ•
JH	ˆTÐT•Ñ’Q“Ô‘“ÔÔÔ–UWÓPTÒÊCBˆÙYš[™HTÐT•Ñ’Q“Ô‘“ÔÔÑ”SQT”—ÓPTÒÈ
ŒJCBˆÙYš[™HTÐT•Ñ’Q“Ô‘“ÔÔÑ”SQT”—ÔÒQ•
LÕJCB‹ÊˆH”SQT”ˆHœ˜[Z[™È\œ›ÜˆÝ]\È›YËˆ\Èš]™Y›XÝÈHÝ]\È›ÜˆH]H]\È™XY[Û™ÃBˆ
ˆÚ]œ›ÛHH’Q“Ë[™[™XØ]\È]HÚ\˜XÝ\ˆØ\È™XÙZ]™YÚ]HZ\ÜÚ[™ÈÝÜš]]Bˆ
ˆH^XÝYØØ][Û‹ˆ\ÈÛÝ[™H[ˆ[™XØ][ÛˆÙˆH˜]Y˜]HÜˆÛÛ™šYÝ\˜][ÛˆZ\ÛX]ÚBˆ
ˆÚ]H˜[œÛZ][™ÈÛÝ\˜ÙKƒBˆ
‹ÃBˆÙYš[™HTÐT•Ñ’Q“Ô‘“ÔÔÑ”SQT”Š
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•Ñ’Q“Ô‘“ÔÔÑ”SQT”—ÔÒQ•
JH	ˆTÐT•Ñ’Q“Ô‘“ÔÔÑ”SQT”—ÓPTÒÊCBˆÙYš[™HTÐT•Ñ’Q“Ô‘“ÔÔÔT’UQT”—ÓPTÒÈ
JCBˆÙYš[™HTÐT•Ñ’Q“Ô‘“ÔÔÔT’UQT”—ÔÒQ•
MJCB‹ÊˆHT’UQT”ˆH\š]H\œ›ÜˆÝ]\È›YËˆ\Èš]™Y›XÝÈHÝ]\È›ÜˆH]H]\È™XY[Û™ÃBˆ
ˆÚ]œ›ÛHH’Q“Ëˆ\Èš]Ú[™HÙ]Ú[ˆH\š]H\œ›Üˆ\È]XÝY[ˆH™XÙZ]™YBˆ
ˆÚ\˜XÝ\‹ƒBˆ
‹ÃBˆÙYš[™HTÐT•Ñ’Q“Ô‘“ÔÔÔT’UQT”Š
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•Ñ’Q“Ô‘“ÔÔÔT’UQT”—ÔÒQ•
JH	ˆTÐT•Ñ’Q“Ô‘“ÔÔÔT’UQT”—ÓPTÒÊCBˆÙYš[™HTÐT•Ñ’Q“Ô‘“ÔÔÔ–“ÒTÑWÓPTÒÈ
JCBˆÙYš[™HTÐT•Ñ’Q“Ô‘“ÔÔÔ–“ÒTÑWÔÒQ•
MUJCB‹ÊˆH–“ÒTÑHH™XÙZ]™Y›Ú\ÙH›YËˆÙYH\ØÜš\[ÛˆÙˆHž›Ú\ÙR[š][ˆX›HÍMƒBˆ
‹ÃBˆÙYš[™HTÐT•Ñ’Q“Ô‘“ÔÔÔ–“ÒTÑJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•Ñ’Q“Ô‘“ÔÔÔ–“ÒTÑWÔÒQ•
JH	ˆTÐT•Ñ’Q“Ô‘“ÔÔÔ–“ÒTÑWÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHQH\š\\˜[Y[YšXØ][Ûˆ™YÚ\Ý\‹ˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐT•ÒQÐTT•T‘WÓPTÒÈ
‘•JCBˆÙYš[™HTÐT•ÒQÐTT•T‘WÔÒQ•
JCB‹ÊˆHTT•T‘HH\\\™Nˆ[˜ÛÙY\È
\\\™HÚ^™KÍÊHLKÛÈYX[œÈHÈ\\\™KƒBˆ
‹ÃBˆÙYš[™HTÐT•ÒQÐTT•T‘J
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•ÒQÐTT•T‘WÔÒQ•
JH	ˆTÐT•ÒQÐTT•T‘WÓPTÒÊCBˆÙYš[™HTÐT•ÒQÓRS“Ô—Ô‘U—ÓPTÒÈ
ŒJCBˆÙYš[™HTÐT•ÒQÓRS“Ô—Ô‘U—ÔÒQ•
JCB‹ÊˆHRS“Ô—Ô‘UˆHZ[›Üˆ™]š\Ú[ÛˆÙˆ[Ù[H[\[Y[][Û‹ƒBˆ
‹ÃBˆÙYš[™HTÐT•ÒQÓRS“Ô—Ô‘UŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•ÒQÓRS“Ô—Ô‘U—ÔÒQ•
JH	ˆTÐT•ÒQÓRS“Ô—Ô‘U—ÓPTÒÊCBˆÙYš[™HTÐT•ÒQÓPR“Ô—Ô‘U—ÓPTÒÈ
ŒJCBˆÙYš[™HTÐT•ÒQÓPR“Ô—Ô‘U—ÔÒQ•
L•JCB‹ÊˆHPR“Ô—Ô‘UˆHXZ›Üˆ™]š\Ú[ÛˆÙˆ[Ù[H[\[Y[][Û‹ƒBˆ
‹ÃBˆÙYš[™HTÐT•ÒQÓPR“Ô—Ô‘UŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•ÒQÓPR“Ô—Ô‘U—ÔÒQ•
JH	ˆTÐT•ÒQÓPR“Ô—Ô‘U—ÓPTÒÊCBˆÙYš[™HTÐT•ÒQÒQÓPTÒÈ
‘‘‘ŒJCBˆÙYš[™HTÐT•ÒQÒQÔÒQ•
M•JCB‹ÊˆHQH[Ù[HY[YšY\ˆ›ÜˆHÙ[XÝY[˜Ý[Û‹ƒBˆ
‹ÃBˆÙYš[™HTÐT•ÒQÒQ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐT•ÒQÒQÔÒQ•
JH	ˆTÐT•ÒQÒQÓPTÒÊCB‹ÊˆHH
‹ÃBƒBƒB‹ÊˆCBˆ
ˆCBˆ
‹ÈÊˆ[™ÙˆÜ›Ý\TÐT•Ô™YÚ\Ý\—ÓX\ÚÜÈ
‹ÃBƒBƒB‹ÊˆTÐT•H\š\\˜[[œÝ[˜ÙH˜\ÙHY™\ÜÙ\È
‹ÃBˆÚYˆ
×ÐT“WÑ‘PUT‘WÐÓTÑH	ˆŠCBˆÊŠˆ\š\\˜[TÐT•˜\ÙHY™\ÜÈ
‹ÃBˆÙYš[™HTÐT•ÐTÑH
LŒJCBˆÊŠˆ\š\\˜[TÐT•˜\ÙHY™\ÜÈ
‹ÃBˆÙYš[™HTÐT•ÐTÑWÓ”È
ŒJCBˆÊŠˆ\š\\˜[TÐT•˜\ÙHÚ[\ˆ
‹ÃBˆÙYš[™HTÐT•

TÐT•Õ\H
ŠUTÐT•ÐTÑJCBˆÊŠˆ\š\\˜[TÐT•˜\ÙHÚ[\ˆ
‹ÃBˆÙYš[™HTÐT•Ó”È

TÐT•Õ\H
ŠUTÐT•ÐTÑWÓ”ÊCBˆÊŠˆ\š\\˜[TÐT•H˜\ÙHY™\ÜÈ
‹ÃBˆÙYš[™HTÐT•WÐTÑH
LÌJCBˆÊŠˆ\š\\˜[TÐT•H˜\ÙHY™\ÜÈ
‹ÃBˆÙYš[™HTÐT•WÐTÑWÓ”È
ÌJCBˆÊŠˆ\š\\˜[TÐT•H˜\ÙHÚ[\ˆ
‹ÃBˆÙYš[™HTÐT•H

TÐT•Õ\H
ŠUTÐT•WÐTÑJCBˆÊŠˆ\š\\˜[TÐT•H˜\ÙHÚ[\ˆ
‹ÃBˆÙYš[™HTÐT•WÓ”È

TÐT•Õ\H
ŠUTÐT•WÐTÑWÓ”ÊCBˆÊŠˆ\š\\˜[TÐT•ˆ˜\ÙHY™\ÜÈ
‹ÃBˆÙYš[™HTÐT•—ÐTÑH
LJCBˆÊŠˆ\š\\˜[TÐT•ˆ˜\ÙHY™\ÜÈ
‹ÃBˆÙYš[™HTÐT•—ÐTÑWÓ”È
JCBˆÊŠˆ\š\\˜[TÐT•ˆ˜\ÙHÚ[\ˆ
‹ÃBˆÙYš[™HTÐT•ˆ

TÐT•Õ\H
ŠUTÐT•—ÐTÑJCBˆÊŠˆ\š\\˜[TÐT•ˆ˜\ÙHÚ[\ˆ
‹ÃBˆÙYš[™HTÐT•—Ó”È

TÐT•Õ\H
ŠUTÐT•—ÐTÑWÓ”ÊCBˆÊŠˆ\š\\˜[TÐT•È˜\ÙHY™\ÜÈ
‹ÃBˆÙYš[™HTÐT•×ÐTÑH
LLJCBˆÊŠˆ\š\\˜[TÐT•È˜\ÙHY™\ÜÈ
‹ÃBˆÙYš[™HTÐT•×ÐTÑWÓ”È
LJCBˆÊŠˆ\š\\˜[TÐT•È˜\ÙHÚ[\ˆ
‹ÃBˆÙYš[™HTÐT•È

TÐT•Õ\H
ŠUTÐT•×ÐTÑJCBˆÊŠˆ\š\\˜[TÐT•È˜\ÙHÚ[\ˆ
‹ÃBˆÙYš[™HTÐT•×Ó”È

TÐT•Õ\H
ŠUTÐT•×ÐTÑWÓ”ÊCBˆÊŠˆ\š\\˜[TÐT•˜\ÙHY™\ÜÈ
‹ÃBˆÙYš[™HTÐT•ÐTÑH
LLJCBˆÊŠˆ\š\\˜[TÐT•˜\ÙHY™\ÜÈ
‹ÃBˆÙYš[™HTÐT•ÐTÑWÓ”È
LJCBˆÊŠˆ\š\\˜[TÐT•˜\ÙHÚ[\ˆ
‹ÃBˆÙYš[™HTÐT•

TÐT•Õ\H
ŠUTÐT•ÐTÑJCBˆÊŠˆ\š\\˜[TÐT•˜\ÙHÚ[\ˆ
‹ÃBˆÙYš[™HTÐT•Ó”È

TÐT•Õ\H
ŠUTÐT•ÐTÑWÓ”ÊCBˆÊŠˆ\š\\˜[TÐT•H˜\ÙHY™\ÜÈ
‹ÃBˆÙYš[™HTÐT•WÐTÑH
LMŒJCBˆÊŠˆ\š\\˜[TÐT•H˜\ÙHY™\ÜÈ
‹ÃBˆÙYš[™HTÐT•WÐTÑWÓ”È
MŒJCBˆÊŠˆ\š\\˜[TÐT•H˜\ÙHÚ[\ˆ
‹ÃBˆÙYš[™HTÐT•H

TÐT•Õ\H
ŠUTÐT•WÐTÑJCBˆÊŠˆ\š\\˜[TÐT•H˜\ÙHÚ[\ˆ
‹ÃBˆÙYš[™HTÐT•WÓ”È

TÐT•Õ\H
ŠUTÐT•WÐTÑWÓ”ÊCBˆÊŠˆ\š\\˜[TÐT•ˆ˜\ÙHY™\ÜÈ
‹ÃBˆÙYš[™HTÐT•—ÐTÑH
LMÌJCBˆÊŠˆ\š\\˜[TÐT•ˆ˜\ÙHY™\ÜÈ
‹ÃBˆÙYš[™HTÐT•—ÐTÑWÓ”È
MÌJCBˆÊŠˆ\š\\˜[TÐT•ˆ˜\ÙHÚ[\ˆ
‹ÃBˆÙYš[™HTÐT•ˆ

TÐT•Õ\H
ŠUTÐT•—ÐTÑJCBˆÊŠˆ\š\\˜[TÐT•ˆ˜\ÙHÚ[\ˆ
‹ÃBˆÙYš[™HTÐT•—Ó”È

TÐT•Õ\H
ŠUTÐT•—ÐTÑWÓ”ÊCBˆÊŠˆ\š\\˜[TÐT•È˜\ÙHY™\ÜÈ
‹ÃBˆÙYš[™HTÐT•×ÐTÑH
LNJCBˆÊŠˆ\š\\˜[TÐT•È˜\ÙHY™\ÜÈ
‹ÃBˆÙYš[™HTÐT•×ÐTÑWÓ”È
NJCBˆÊŠˆ\š\\˜[TÐT•È˜\ÙHÚ[\ˆ
‹ÃBˆÙYš[™HTÐT•È

TÐT•Õ\H
ŠUTÐT•×ÐTÑJCBˆÊŠˆ\š\\˜[TÐT•È˜\ÙHÚ[\ˆ
‹ÃBˆÙYš[™HTÐT•×Ó”È

TÐT•Õ\H
ŠUTÐT•×ÐTÑWÓ”ÊCBˆÊŠˆ\œ˜^H[š]X[^™\ˆÙˆTÐT•\š\\˜[˜\ÙHY™\ÜÙ\È
‹ÃBˆÙYš[™HTÐT•ÐTÑWÐQ”ÈÈTÐT•ÐTÑKTÐT•WÐTÑKTÐT•—ÐTÑKTÐT•×ÐTÑKTÐT•ÐTÑKTÐT•WÐTÑKTÐT•—ÐTÑKTÐT•×ÐTÑHCBˆÊŠˆ\œ˜^H[š]X[^™\ˆÙˆTÐT•\š\\˜[˜\ÙHÚ[\œÈ
‹ÃBˆÙYš[™HTÐT•ÐTÑWÔ”ÈÈTÐT•TÐT•KTÐT•‹TÐT•ËTÐT•TÐT•KTÐT•‹TÐT•ÈCBˆÊŠˆ\œ˜^H[š]X[^™\ˆÙˆTÐT•\š\\˜[˜\ÙHY™\ÜÙ\È
‹ÃBˆÙYš[™HTÐT•ÐTÑWÐQ”×Ó”ÈÈTÐT•ÐTÑWÓ”ËTÐT•WÐTÑWÓ”ËTÐT•—ÐTÑWÓ”ËTÐT•×ÐTÑWÓ”ËTÐT•ÐTÑWÓ”ËTÐT•WÐTÑWÓ”ËTÐT•—ÐTÑWÓ”ËTÐT•×ÐTÑWÓ”ÈCBˆÊŠˆ\œ˜^H[š]X[^™\ˆÙˆTÐT•\š\\˜[˜\ÙHÚ[\œÈ
‹ÃBˆÙYš[™HTÐT•ÐTÑWÔ”×Ó”ÈÈTÐT•Ó”ËTÐT•WÓ”ËTÐT•—Ó”ËTÐT•×Ó”ËTÐT•Ó”ËTÐT•WÓ”ËTÐT•—Ó”ËTÐT•×Ó”ÈCBˆÙ[ÙCBˆÊŠˆ\š\\˜[TÐT•˜\ÙHY™\ÜÈ
‹ÃBˆÙYš[™HTÐT•ÐTÑH
ŒJCBˆÊŠˆ\š\\˜[TÐT•˜\ÙHÚ[\ˆ
‹ÃBˆÙYš[™HTÐT•

TÐT•Õ\H
ŠUTÐT•ÐTÑJCBˆÊŠˆ\š\\˜[TÐT•H˜\ÙHY™\ÜÈ
‹ÃBˆÙYš[™HTÐT•WÐTÑH
ÌJCBˆÊŠˆ\š\\˜[TÐT•H˜\ÙHÚ[\ˆ
‹ÃBˆÙYš[™HTÐT•H

TÐT•Õ\H
ŠUTÐT•WÐTÑJCBˆÊŠˆ\š\\˜[TÐT•ˆ˜\ÙHY™\ÜÈ
‹ÃBˆÙYš[™HTÐT•—ÐTÑH
JCBˆÊŠˆ\š\\˜[TÐT•ˆ˜\ÙHÚ[\ˆ
‹ÃBˆÙYš[™HTÐT•ˆ

TÐT•Õ\H
ŠUTÐT•—ÐTÑJCBˆÊŠˆ\š\\˜[TÐT•È˜\ÙHY™\ÜÈ
‹ÃBˆÙYš[™HTÐT•×ÐTÑH
LJCBˆÊŠˆ\š\\˜[TÐT•È˜\ÙHÚ[\ˆ
‹ÃBˆÙYš[™HTÐT•È

TÐT•Õ\H
ŠUTÐT•×ÐTÑJCBˆÊŠˆ\š\\˜[TÐT•˜\ÙHY™\ÜÈ
‹ÃBˆÙYš[™HTÐT•ÐTÑH
LJCBˆÊŠˆ\š\\˜[TÐT•˜\ÙHÚ[\ˆ
‹ÃBˆÙYš[™HTÐT•

TÐT•Õ\H
ŠUTÐT•ÐTÑJCBˆÊŠˆ\š\\˜[TÐT•H˜\ÙHY™\ÜÈ
‹ÃBˆÙYš[™HTÐT•WÐTÑH
MŒJCBˆÊŠˆ\š\\˜[TÐT•H˜\ÙHÚ[\ˆ
‹ÃBˆÙYš[™HTÐT•H

TÐT•Õ\H
ŠUTÐT•WÐTÑJCBˆÊŠˆ\š\\˜[TÐT•ˆ˜\ÙHY™\ÜÈ
‹ÃBˆÙYš[™HTÐT•—ÐTÑH
MÌJCBˆÊŠˆ\š\\˜[TÐT•ˆ˜\ÙHÚ[\ˆ
‹ÃBˆÙYš[™HTÐT•ˆ

TÐT•Õ\H
ŠUTÐT•—ÐTÑJCBˆÊŠˆ\š\\˜[TÐT•È˜\ÙHY™\ÜÈ
‹ÃBˆÙYš[™HTÐT•×ÐTÑH
NJCBˆÊŠˆ\š\\˜[TÐT•È˜\ÙHÚ[\ˆ
‹ÃBˆÙYš[™HTÐT•È

TÐT•Õ\H
ŠUTÐT•×ÐTÑJCBˆÊŠˆ\œ˜^H[š]X[^™\ˆÙˆTÐT•\š\\˜[˜\ÙHY™\ÜÙ\È
‹ÃBˆÙYš[™HTÐT•ÐTÑWÐQ”ÈÈTÐT•ÐTÑKTÐT•WÐTÑKTÐT•—ÐTÑKTÐT•×ÐTÑKTÐT•ÐTÑKTÐT•WÐTÑKTÐT•—ÐTÑKTÐT•×ÐTÑHCBˆÊŠˆ\œ˜^H[š]X[^™\ˆÙˆTÐT•\š\\˜[˜\ÙHÚ[\œÈ
‹ÃBˆÙYš[™HTÐT•ÐTÑWÔ”ÈÈTÐT•TÐT•KTÐT•‹TÐT•ËTÐT•TÐT•KTÐT•‹TÐT•ÈCBˆÙ[™YƒB‹ÊŠˆ[\œ\™XÝÜœÈ›ÜˆHTÐT•\š\\˜[\H
‹ÃBˆÙYš[™HTÐT•ÒT”TÈÈ“VÓÓSLÒT”[‹“VÓÓSLWÒT”[‹“VÓÓSL—ÒT”[‹“VÓÓSL×ÒT”[‹“VÓÓSMÒT”[‹“VÓÓSMWÒT”[‹“VÓÓSM—ÒT”[‹“VÓÓSM×ÒT”[ˆCBƒB‹ÊˆCBˆ
ˆCBˆ
‹ÈÊˆ[™ÙˆÜ›Ý\TÐT•Ô\š\\˜[ÐXØÙ\Ü×Ó^Y\ˆ
‹ÃBƒBƒB‹ÊˆKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKCBˆKHTÐˆ\š\\˜[XØÙ\ÜÈ^Y\ƒBˆKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKH
‹ÃBƒB‹ÊˆCBˆ
ˆYÙÜ›Ý\TÐ—Ô\š\\˜[ÐXØÙ\Ü×Ó^Y\ˆTÐˆ\š\\˜[XØÙ\ÜÈ^Y\ƒBˆ
ˆÃBˆ
‹ÃBƒB‹ÊŠˆTÐˆH™YÚ\Ý\ˆ^[Ý]\YYˆ
‹ÃB\YYˆÝXÝÃBˆ×ÒSÈZ[Ì—ÝUÓQÕUÈÊŠTÐˆ]šXÙHÛÛ[X[™ÔÝ]\È™YÚ\Ý\‹Ù™œÙ]ˆ
‹ÃBˆ×ÒSÈZ[Ì—ÝS‘“ÎÈÊŠTÐˆ[™›È™YÚ\Ý\‹Ù™œÙ]ˆ
‹ÃBˆ×ÒSÈZ[Ì—ÝTTÕÕT•ÈÊŠTÐˆTÛÛ[X[™ÔÝ]\È\ÝÝ\Y™\ÜËÙ™œÙ]ˆ
‹ÃBˆ×ÒSÈZ[Ì—ÝUP•Q”ÕT•ÈÊŠTÐˆ]HY™™\ˆÝ\Y™\ÜËÙ™œÙ]ˆÈ
‹ÃBˆ×ÒSÈZ[Ì—ÝNÈÊŠTÐˆ[šÈÝÙ\ˆX[˜YÙ[Y[™YÚ\Ý\‹Ù™œÙ]ˆL
‹ÃBˆ×ÒSÈZ[Ì—ÝTÒÒTÈÊŠTÐˆ[™Ú[ÚÚ\Ù™œÙ]ˆM
‹ÃBˆ×ÒSÈZ[Ì—ÝTS•TÑNÈÊŠTÐˆ[™Ú[Y™™\ˆ[ˆ\ÙKÙ™œÙ]ˆN
‹ÃBˆ×ÒSÈZ[Ì—ÝT•QÑ‘ÎÈÊŠTÐˆ[™Ú[Y™™\ˆÛÛ™šYÝ\˜][Ûˆ™YÚ\Ý\‹Ù™œÙ]ˆPÈ
‹ÃBˆ×ÒSÈZ[Ì—ÝS•ÕUÈÊŠTÐˆ[\œ\Ý]\È™YÚ\Ý\‹Ù™œÙ]ˆŒ
‹ÃBˆ×ÒSÈZ[Ì—ÝS•SŽÈÊŠTÐˆ[\œ\[˜X›H™YÚ\Ý\‹Ù™œÙ]ˆ
‹ÃBˆ×ÒSÈZ[Ì—ÝS•ÑUÕUÈÊŠTÐˆÙ][\œ\Ý]\È™YÚ\Ý\‹Ù™œÙ]ˆŽ
‹ÃBˆZ[Ý‘TÑT•‘QÌÎNÃBˆ×ÒSÈZ[Ì—ÝTÑÑÓNÈÊŠTÐˆ[™Ú[ÙÙÛH™YÚ\Ý\‹Ù™œÙ]ˆÍ
‹ÃBŸHTÐ—Õ\NÃBƒB‹ÊˆKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKCBˆKHTÐˆ™YÚ\Ý\ˆX\ÚÜÃBˆKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKH
‹ÃBƒB‹ÊˆCBˆ
ˆYÙÜ›Ý\TÐ—Ô™YÚ\Ý\—ÓX\ÚÜÈTÐˆ™YÚ\Ý\ˆX\ÚÜÃBˆ
ˆÃBˆ
‹ÃBƒB‹ÊˆH˜[YHUÓQÕUHTÐˆ]šXÙHÛÛ[X[™ÔÝ]\È™YÚ\Ý\ˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ—ÑUÓQÕUÑU—ÐQ—ÓPTÒÈ
Ñ•JCBˆÙYš[™HTÐ—ÑUÓQÕUÑU—ÐQ—ÔÒQ•
JCB‹ÊˆHU—ÐQˆHTÐˆ]šXÙHY™\ÜËˆY\ˆ\È™\Ù]HY™\ÜÈ\È™\Ù]ÈˆYˆH[˜X›Hš]Bˆ
ˆ\ÈÙ]H]šXÙHÚ[™\ÜÛ™ÛˆXÚÙ]È›Üˆ[˜Ý[ÛˆY™\ÜÈU—ÐQ‹ˆÚ[ˆ™XÙZ]š[™ÈCBˆ
ˆÙ]Y™\ÜÈÛÛ›Û™\]Y\Ýœ›ÛHHTÐˆÜÝÛÙØ\™H]\Ý›ÙÜ˜[HH™]ÈY™\ÜÈ™Y›Ü™CBˆ
ˆÛÛ\][™ÈHÝ]\È\ÙHÙˆHÙ]Y™\ÜÈÛÛ›Û™\]Y\ÝƒBˆ
‹ÃBˆÙYš[™HTÐ—ÑUÓQÕUÑU—ÐQŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ—ÑUÓQÕUÑU—ÐQ—ÔÒQ•
JH	ˆTÐ—ÑUÓQÕUÑU—ÐQ—ÓPTÒÊCBˆÙYš[™HTÐ—ÑUÓQÕUÑU—ÑS—ÓPTÒÈ
JCBˆÙYš[™HTÐ—ÑUÓQÕUÑU—ÑS—ÔÒQ•
ÕJCB‹ÊˆHU—ÑSˆHTÐˆ]šXÙH[˜X›KˆYˆ\Èš]\ÈÙ]HÈÚ[Ý\™\ÜÛ™[™ÈÛˆXÚÙ]È›Üˆ[˜Ý[ÛˆY™\ÜÈU—ÐQ‹ƒBˆ
‹ÃBˆÙYš[™HTÐ—ÑUÓQÕUÑU—ÑSŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ—ÑUÓQÕUÑU—ÑS—ÔÒQ•
JH	ˆTÐ—ÑUÓQÕUÑU—ÑS—ÓPTÒÊCBˆÙYš[™HTÐ—ÑUÓQÕUÔÑUTÓPTÒÈ
LJCBˆÙYš[™HTÐ—ÑUÓQÕUÔÑUTÔÒQ•
JCB‹ÊˆHÑUTHÑUTÚÙ[ˆ™XÙZ]™YˆYˆHÑUTÚÙ[ˆ\È™XÙZ]™Y[™XÚÛ›ÝÛYÙYžHH]šXÙK\ÃBˆ
ˆš]\ÈÙ]ˆ\ÈÛ™È\È\Èš]\ÈÙ][™XÙZ]™YSˆ[™ÕUÚÙ[œÈÚ[™HRÙYžHËˆÕÃBˆ
ˆ]\ÝÛX\ˆ\Èš]žHÜš][™ÈHÛ™KˆYˆ\Èš]\È™\›ËÈÚ[[™HHÚÙ[œÈÈCBˆ
ˆÕ“T\È[™XØ]YžHHÕ“TSˆ[™ÕU]H[™›Ü›X][Ûˆ›ÙÜ˜[[YYžHÕËƒBˆ
‹ÃBˆÙYš[™HTÐ—ÑUÓQÕUÔÑUT

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ—ÑUÓQÕUÔÑUTÔÒQ•
JH	ˆTÐ—ÑUÓQÕUÔÑUTÓPTÒÊCBˆÙYš[™HTÐ—ÑUÓQÕUÑ“ÔÑWÓ‘QQÓ×ÓPTÒÈ
ŒJCBˆÙYš[™HTÐ—ÑUÓQÕUÑ“ÔÑWÓ‘QQÓ×ÔÒQ•
UJCB‹ÊˆH“ÔÑWÓ‘QQÓÈH›Ü˜Ù\ÈH‘QQÓÈÝ]]È[Ø^\È™HÛŽƒBˆ
ˆŒ‹•TÐ—Ó‘QQÓÈ\È›Ü›X[[˜Ý[Û‹ƒBˆ
ˆŒK‹•TÐ—Ó‘QQÓÈ[Ø^\ÈKˆÛØÚÈÚ[›Ý™HÝÜY[ˆØ\ÙHÙˆÝ\Ü[™ƒBˆ
‹ÃBˆÙYš[™HTÐ—ÑUÓQÕUÑ“ÔÑWÓ‘QQÓÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ—ÑUÓQÕUÑ“ÔÑWÓ‘QQÓ×ÔÒQ•
JH	ˆTÐ—ÑUÓQÕUÑ“ÔÑWÓ‘QQÓ×ÓPTÒÊCBˆÙYš[™HTÐ—ÑUÓQÕUÓWÔÕTÓPTÒÈ
JCBˆÙYš[™HTÐ—ÑUÓQÕUÓWÔÕTÔÒQ•
LUJCB‹ÊˆHWÔÕTHHÝ\ÜYƒBˆ
ˆŒ‹“H›ÝÝ\ÜYƒBˆ
ˆŒK‹“HÝ\ÜYƒBˆ
‹ÃBˆÙYš[™HTÐ—ÑUÓQÕUÓWÔÕT

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ—ÑUÓQÕUÓWÔÕTÔÒQ•
JH	ˆTÐ—ÑUÓQÕUÓWÔÕTÓPTÒÊCBˆÙYš[™HTÐ—ÑUÓQÕUÒS•Ó“R×ÐS×ÓPTÒÈ
LJCBˆÙYš[™HTÐ—ÑUÓQÕUÒS•Ó“R×ÐS×ÔÒQ•
L•JCB‹ÊˆHS•Ó“R×ÐSÈH[\œ\ÛˆRÈ›Üˆ[\œ\[™[ÈÕUTBˆ
ˆŒ‹“Û›HXÚÛ›ÝÛYÙYXÚÙ]ÈÙ[™\˜]H[ˆ[\œ\Bˆ
ˆŒK‹›ÝXÚÛ›ÝÛYÙY[™RÙYXÚÙ]ÈÙ[™\˜]H[\œ\ËƒBˆ
‹ÃBˆÙYš[™HTÐ—ÑUÓQÕUÒS•Ó“R×ÐSÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ—ÑUÓQÕUÒS•Ó“R×ÐS×ÔÒQ•
JH	ˆTÐ—ÑUÓQÕUÒS•Ó“R×ÐS×ÓPTÒÊCBˆÙYš[™HTÐ—ÑUÓQÕUÒS•Ó“R×ÐRWÓPTÒÈ
ŒJCBˆÙYš[™HTÐ—ÑUÓQÕUÒS•Ó“R×ÐRWÔÒQ•
LÕJCB‹ÊˆHS•Ó“R×ÐRHH[\œ\ÛˆRÈ›Üˆ[\œ\[™[ÈSˆTBˆ
ˆŒ‹“Û›HXÚÛ›ÝÛYÙYXÚÙ]ÈÙ[™\˜]H[ˆ[\œ\Bˆ
ˆŒK‹›ÝXÚÛ›ÝÛYÙY[™RÙYXÚÙ]ÈÙ[™\˜]H[\œ\ËƒBˆ
‹ÃBˆÙYš[™HTÐ—ÑUÓQÕUÒS•Ó“R×ÐRJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ—ÑUÓQÕUÒS•Ó“R×ÐRWÔÒQ•
JH	ˆTÐ—ÑUÓQÕUÒS•Ó“R×ÐRWÓPTÒÊCBˆÙYš[™HTÐ—ÑUÓQÕUÒS•Ó“R×ÐÓ×ÓPTÒÈ
JCBˆÙYš[™HTÐ—ÑUÓQÕUÒS•Ó“R×ÐÓ×ÔÒQ•
MJCB‹ÊˆHS•Ó“R×ÐÓÈH[\œ\ÛˆRÈ›ÜˆÛÛ›ÛÕUTBˆ
ˆŒ‹“Û›HXÚÛ›ÝÛYÙYXÚÙ]ÈÙ[™\˜]H[ˆ[\œ\Bˆ
ˆŒK‹›ÝXÚÛ›ÝÛYÙY[™RÙYXÚÙ]ÈÙ[™\˜]H[\œ\ËƒBˆ
‹ÃBˆÙYš[™HTÐ—ÑUÓQÕUÒS•Ó“R×ÐÓÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ—ÑUÓQÕUÒS•Ó“R×ÐÓ×ÔÒQ•
JH	ˆTÐ—ÑUÓQÕUÒS•Ó“R×ÐÓ×ÓPTÒÊCBˆÙYš[™HTÐ—ÑUÓQÕUÒS•Ó“R×ÐÒWÓPTÒÈ
JCBˆÙYš[™HTÐ—ÑUÓQÕUÒS•Ó“R×ÐÒWÔÒQ•
MUJCB‹ÊˆHS•Ó“R×ÐÒHH[\œ\ÛˆRÈ›ÜˆÛÛ›ÛSˆTBˆ
ˆŒ‹“Û›HXÚÛ›ÝÛYÙYXÚÙ]ÈÙ[™\˜]H[ˆ[\œ\Bˆ
ˆŒK‹›ÝXÚÛ›ÝÛYÙY[™RÙYXÚÙ]ÈÙ[™\˜]H[\œ\ËƒBˆ
‹ÃBˆÙYš[™HTÐ—ÑUÓQÕUÒS•Ó“R×ÐÒJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ—ÑUÓQÕUÒS•Ó“R×ÐÒWÔÒQ•
JH	ˆTÐ—ÑUÓQÕUÒS•Ó“R×ÐÒWÓPTÒÊCBˆÙYš[™HTÐ—ÑUÓQÕUÑÓÓ—ÓPTÒÈ
LJCBˆÙYš[™HTÐ—ÑUÓQÕUÑÓÓ—ÔÒQ•
M•JCB‹ÊˆHÓÓˆH]šXÙHÝ]\ÈHÛÛ›™XÝˆHÛÛ›™XÝš]]\Ý™HÙ]žHÕÈÈ[™XØ]H]H]šXÙCBˆ
ˆ]\ÝÚYÛ˜[HÛÛ›™XÝˆH[]\™\Ú\ÝÜˆÛˆTÐ—ÑÚ[™H[˜X›YÚ[ˆ\Èš]\ÈÙ][™Bˆ
ˆH•TÑP“ÕSÑQš]\ÈÛ™KƒBˆ
‹ÃBˆÙYš[™HTÐ—ÑUÓQÕUÑÓÓŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ—ÑUÓQÕUÑÓÓ—ÔÒQ•
JH	ˆTÐ—ÑUÓQÕUÑÓÓ—ÓPTÒÊCBˆÙYš[™HTÐ—ÑUÓQÕUÑÕT×ÓPTÒÈ
ŒJCBˆÙYš[™HTÐ—ÑUÓQÕUÑÕT×ÔÒQ•
MÕJCB‹ÊˆHÕTÈH]šXÙHÝ]\ÈHÝ\Ü[™ˆHÝ\Ü[™š][™XØ]\ÈHÝ\œ™[Ý\Ü[™Ý]Kˆ]\ÈÙ]Bˆ
ˆÈHÚ[ˆH]šXÙH\Û‰ÝÙY[ˆ[žHXÝ]š]HÛˆ]È\Ý™X[HÜ›Üˆ[Ü™H[ˆÃBˆ
ˆZ[\ÙXÛÛ™Ëˆ]\È™\Ù]ÈÛˆ[žHXÝ]š]KˆÚ[ˆH]šXÙH\ÈÝ\Ü[™Y
Ý\Ü[™š]ÕTÈHJH[™Bˆ
ˆHÛÙØ\™HÜš]\ÈHÈ]H]šXÙHÚ[Ù[™\˜]HH™[[ÝHØZÙK]\ˆ\ÈÚ[Û›H\[ƒBˆ
ˆÚ[ˆH]šXÙH\ÈÛÛ›™XÝY
ÛÛ›™XÝš]HJKˆÚ[ˆH]šXÙH\È›ÝÛÛ›™XÝYÜˆ›ÝBˆ
ˆÝ\Ü[™YHÜš][™ÈH\È›ÈY™™XÝˆÜš][™ÈHH™]™\ˆ\È[ˆY™™XÝƒBˆ
‹ÃBˆÙYš[™HTÐ—ÑUÓQÕUÑÕTÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ—ÑUÓQÕUÑÕT×ÔÒQ•
JH	ˆTÐ—ÑUÓQÕUÑÕT×ÓPTÒÊCBˆÙYš[™HTÐ—ÑUÓQÕUÓWÔÕT×ÓPTÒÈ
JCBˆÙYš[™HTÐ—ÑUÓQÕUÓWÔÕT×ÔÒQ•
NUJCB‹ÊˆHWÔÕTÈH]šXÙHÝ]\ÈHHÝ\Ü[™ˆ\Èš]™\™\Ù[ÈHÝ\œ™[HÝ\Ü[™Ý]Kˆ]\ÃBˆ
ˆÙ]ÈHžHÈÚ[ˆH]šXÙH\ÈXÚÛ›ÝÛYÙYHH™\]Y\Ýœ›ÛHHTÐˆÜÝ[™CBˆ
ˆÚÙ[ˆ™]žH[YHÙˆL\È\È[\ÙYˆÚ[ˆH]šXÙH\È[ˆHHÝ\Ü[™YÝ]H
HÝ\Ü[™Bˆ
ˆš]HJH[™HÛÙØ\™HÜš]\ÈH™\›ÈÈ\Èš]H]šXÙHÚ[Ù[™\˜]HH™[[ÝCBˆ
ˆØ[Ë]\ˆÛÙØ\™HØ[ˆÛ›HÜš]HH™\›ÈÈ\Èš]Ú[ˆHWÔ‘UÔš]\ÈÙ]ÈKˆÈ™\Ù]È\ÃBˆ
ˆš]Ú[ˆ]™XÙZ]™\ÈHÜÝ[š]X]Y™\Ý[YKˆÈÛ›H\]\ÈHWÔÕTÈš]Ú[ˆCBˆ
ˆWÔÕTš]\È\]X[ÈÛ™KƒBˆ
‹ÃBˆÙYš[™HTÐ—ÑUÓQÕUÓWÔÕTÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ—ÑUÓQÕUÓWÔÕT×ÔÒQ•
JH	ˆTÐ—ÑUÓQÕUÓWÔÕT×ÓPTÒÊCBˆÙYš[™HTÐ—ÑUÓQÕUÓWÔ‘UÔÓPTÒÈ
LJCBˆÙYš[™HTÐ—ÑUÓQÕUÓWÔ‘UÔÔÒQ•
ŒJCB‹ÊˆHWÔ‘UÔHH™[[ÝHØZÙK]\[˜X›YžHTÐˆÜÝˆÈÙ]È\Èš]ÈÛ™HÚ[ˆH”™[[ÝUØZÙCBˆ
ˆš][ˆHH^[™YÚÙ[ˆ\ÈÙ]ÈKˆÈÚ[™\Ù]\Èš]ÈÚ[ˆ]™XÙZ]™\ÈCBˆ
ˆÜÝ[š]X]YH™\Ý[YKÚ[ˆH™[[ÝHØZÙK]\\ÈÙ[žHH]šXÙHÜˆÚ[ˆHTÐˆ\È™\Ù]Bˆ
ˆ\È™XÙZ]™YˆÛÙØ\™HØ[ˆ\ÙH\Èš]ÈÚXÚÈYˆH™[[ÝHØZÙK]\™X]\™H\È[˜X›YžHCBˆ
ˆÜÝ›ÜˆHH˜[œØXÝ[Û‹ƒBˆ
‹ÃBˆÙYš[™HTÐ—ÑUÓQÕUÓWÔ‘UÔ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ—ÑUÓQÕUÓWÔ‘UÔÔÒQ•
JH	ˆTÐ—ÑUÓQÕUÓWÔ‘UÔÓPTÒÊCBˆÙYš[™HTÐ—ÑUÓQÕUÑÓÓ—Ð×ÓPTÒÈ
LJCBˆÙYš[™HTÐ—ÑUÓQÕUÑÓÓ—Ð×ÔÒQ•
JCB‹ÊˆHÓÓ—ÐÈH]šXÙHÝ]\ÈHÛÛ›™XÝÚ[™ÙKˆHÛÛ›™XÝÚ[™ÙHš]\ÈÙ]Ú[ˆH]šXÙIÜÈ[]\Bˆ
ˆ™\Ú\ÝÜˆ\È\ØÛÛ›™XÝY™XØ]\ÙH\È\Ø\X\™YˆHš]\È™\Ù]žHÜš][™ÈHÛ™HÈ]ƒBˆ
‹ÃBˆÙYš[™HTÐ—ÑUÓQÕUÑÓÓ—ÐÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ—ÑUÓQÕUÑÓÓ—Ð×ÔÒQ•
JH	ˆTÐ—ÑUÓQÕUÑÓÓ—Ð×ÓPTÒÊCBˆÙYš[™HTÐ—ÑUÓQÕUÑÕT×Ð×ÓPTÒÈ
ŒJCBˆÙYš[™HTÐ—ÑUÓQÕUÑÕT×Ð×ÔÒQ•
UJCB‹ÊˆHÕT×ÐÈH]šXÙHÝ]\ÈHÝ\Ü[™Ú[™ÙKˆHÝ\Ü[™Ú[™ÙHš]\ÈÙ]ÈHÚ[ˆHÝ\Ü[™š]Bˆ
ˆÙÙÛ\ËˆHÝ\Ü[™š]Ø[ˆÙÙÛH™XØ]\ÙNˆHH]šXÙHÛÙ\È[ˆHÝ\Ü[™YÝ]HHCBˆ
ˆ]šXÙH\È\ØÛÛ›™XÝYHH]šXÙH™XÙZ]™\È™\Ý[YHÚYÛ˜[[™ÈÛˆ]È\Ý™X[HÜˆHš]\ÃBˆ
ˆ™\Ù]žHÜš][™ÈHÛ™HÈ]ƒBˆ
‹ÃBˆÙYš[™HTÐ—ÑUÓQÕUÑÕT×ÐÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ—ÑUÓQÕUÑÕT×Ð×ÔÒQ•
JH	ˆTÐ—ÑUÓQÕUÑÕT×Ð×ÓPTÒÊCBˆÙYš[™HTÐ—ÑUÓQÕUÑ‘T×Ð×ÓPTÒÈ
JCBˆÙYš[™HTÐ—ÑUÓQÕUÑ‘T×Ð×ÔÒQ•
•JCB‹ÊˆH‘T×ÐÈH]šXÙHÝ]\ÈH™\Ù]Ú[™ÙKˆ\Èš]\ÈÙ]Ú[ˆH]šXÙH™XÙZ]™YH\È™\Ù]ˆÛƒBˆ
ˆH\È™\Ù]H]šXÙHÚ[]]ÛX]XØ[HÛÈÈHY˜][Ý]H
[˜ÛÛ™šYÝ\™Y[™™\ÜÛ™[™ÃBˆ
ˆÈY™\ÜÈ
KˆHš]\È™\Ù]žHÜš][™ÈHÛ™HÈ]ƒBˆ
‹ÃBˆÙYš[™HTÐ—ÑUÓQÕUÑ‘T×ÐÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ—ÑUÓQÕUÑ‘T×Ð×ÔÒQ•
JH	ˆTÐ—ÑUÓQÕUÑ‘T×Ð×ÓPTÒÊCBˆÙYš[™HTÐ—ÑUÓQÕUÕ•TÑP“ÕSÑQÓPTÒÈ
LJCBˆÙYš[™HTÐ—ÑUÓQÕUÕ•TÑP“ÕSÑQÔÒQ•
ŽJCB‹ÊˆH•TÑP“ÕSÑQH\Èš][™XØ]\ÈYˆ˜\È\È]XÝYÜˆ›ÝˆHš]˜Z\Ù\È[[YYX][HÚ[ƒBˆ
ˆ˜\È™XÛÛY\ÈYÚˆ]›ÜÈÈ™\›ÈYˆ˜\È\ÈÝÈ›Üˆ]X\ÝÈ\ËˆYˆ\Èš]\ÈYÚ[™Bˆ
ˆHÛÛˆš]\ÈÙ]HÈÚ[[˜X›HH[]\™\Ú\ÝÜˆÈÚYÛ˜[HÛÛ›™XÝƒBˆ
‹ÃBˆÙYš[™HTÐ—ÑUÓQÕUÕ•TÑP“ÕSÑQ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ—ÑUÓQÕUÕ•TÑP“ÕSÑQÔÒQ•
JH	ˆTÐ—ÑUÓQÕUÕ•TÑP“ÕSÑQÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHS‘“ÈHTÐˆ[™›È™YÚ\Ý\ˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ—ÒS‘“×Ñ”SQWÓ”—ÓPTÒÈ
Ñ‘•JCBˆÙYš[™HTÐ—ÒS‘“×Ñ”SQWÓ”—ÔÒQ•
JCB‹ÊˆH”SQWÓ”ˆHœ˜[YH[X™\‹ˆ\ÈÛÛZ[œÈHœ˜[YH[X™\ˆÙˆH\ÝÝXØÙ\ÜÙ[H™XÙZ]™YÓÑ‹ƒBˆ
ˆ[ˆØ\ÙH›ÈÓÑˆØ\È™XÙZ]™YžHH]šXÙH]H™YÚ[›š[™ÈÙˆHœ˜[YKHœ˜[YH[X™\ƒBˆ
ˆ™]\›™Y\È]ÙˆH\ÝÝXØÙ\ÜÙ[H™XÙZ]™YÓÑ‹ˆ[ˆØ\ÙHHÓÑˆœ˜[YH[X™\ˆÛÛZ[™YHÔÃBˆ
ˆ\œ›Ü‹Hœ˜[YH[X™\ˆ™]\›™YÚ[™HHÛÜœ\Yœ˜[YH[X™\ˆ\È™XÙZ]™YžHH]šXÙKƒBˆ
‹ÃBˆÙYš[™HTÐ—ÒS‘“×Ñ”SQWÓ”Š
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ—ÒS‘“×Ñ”SQWÓ”—ÔÒQ•
JH	ˆTÐ—ÒS‘“×Ñ”SQWÓ”—ÓPTÒÊCBˆÙYš[™HTÐ—ÒS‘“×ÑT”—ÐÓÑWÓPTÒÈ
ÎJCBˆÙYš[™HTÐ—ÒS‘“×ÑT”—ÐÓÑWÔÒQ•
LUJCB‹ÊˆHT”—ÐÓÑHHH\œ›ÜˆÛÙHÚXÚ\ÝØØÝ\œ™YƒBˆ
ˆŒ‹“›È\œ›ÜƒBˆ
ˆŒK‹”Q[˜ÛÙ[™È\œ›ÜƒBˆ
ˆŒL‹”Q[šÛ›ÝÛƒBˆ
ˆŒLK‹”XÚÙ][™^XÝYBˆ
ˆŒL‹•ÚÙ[ˆÔÈ\œ›ÜƒBˆ
ˆŒLK‹‘]HÔÈ\œ›ÜƒBˆ
ˆŒLL‹•[YHÝ]Bˆ
ˆŒLLK‹˜X˜›CBˆ
ˆŒL‹•[˜Ø]YSÔBˆ
ˆŒLK‹”Ù[Ô™XÙZ]™YRÃBˆ
ˆŒLL‹”Ù[Ý[Bˆ
ˆŒLLK‹“Ý™\œ[ƒBˆ
ˆŒLL‹”Ù[[\HXÚÙ]Bˆ
ˆŒLLK‹š]ÝY™ˆ\œ›ÜƒBˆ
ˆŒLLL‹”Þ[˜È\œ›ÜƒBˆ
ˆŒLLLK‹•Ü›Û™È]HÙÙÛCBˆ
‹ÃBˆÙYš[™HTÐ—ÒS‘“×ÑT”—ÐÓÑJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ—ÒS‘“×ÑT”—ÐÓÑWÔÒQ•
JH	ˆTÐ—ÒS‘“×ÑT”—ÐÓÑWÓPTÒÊCBˆÙYš[™HTÐ—ÒS‘“×ÓRS”‘U—ÓPTÒÈ
‘ŒJCBˆÙYš[™HTÐ—ÒS‘“×ÓRS”‘U—ÔÒQ•
M•JCB‹ÊˆHRS”‘UˆHZ[›Üˆ™]š\Ú[Û‹ƒBˆ
‹ÃBˆÙYš[™HTÐ—ÒS‘“×ÓRS”‘UŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ—ÒS‘“×ÓRS”‘U—ÔÒQ•
JH	ˆTÐ—ÒS‘“×ÓRS”‘U—ÓPTÒÊCBˆÙYš[™HTÐ—ÒS‘“×ÓPR”‘U—ÓPTÒÈ
‘ŒJCBˆÙYš[™HTÐ—ÒS‘“×ÓPR”‘U—ÔÒQ•
JCB‹ÊˆHPR”‘UˆHXZ›Üˆ™]š\Ú[Û‹ƒBˆ
‹ÃBˆÙYš[™HTÐ—ÒS‘“×ÓPR”‘UŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ—ÒS‘“×ÓPR”‘U—ÔÒQ•
JH	ˆTÐ—ÒS‘“×ÓPR”‘U—ÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHTTÕÕT•HTÐˆTÛÛ[X[™ÔÝ]\È\ÝÝ\Y™\ÜÈ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ—ÑTTÕÕT•ÑTÓTÕÓPTÒÈ
‘‘‘‘‘ŒJCBˆÙYš[™HTÐ—ÑTTÕÕT•ÑTÓTÕÔÒQ•
JCB‹ÊˆHTÓTÕHÝ\Y™\ÜÈÙˆHTÐˆTÛÛ[X[™ÔÝ]\È\ÝƒBˆ
‹ÃBˆÙYš[™HTÐ—ÑTTÕÕT•ÑTÓTÕ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ—ÑTTÕÕT•ÑTÓTÕÔÒQ•
JH	ˆTÐ—ÑTTÕÕT•ÑTÓTÕÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHUP•Q”ÕT•HTÐˆ]HY™™\ˆÝ\Y™\ÜÈ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ—ÑUP•Q”ÕT•ÑWÐ•Q—ÓPTÒÈ
‘ÌJCBˆÙYš[™HTÐ—ÑUP•Q”ÕT•ÑWÐ•Q—ÔÒQ•
Œ•JCB‹ÊˆHWÐ•QˆHÝ\Y™\ÜÈÙˆHY™™\ˆÚ[\ˆYÙHÚ\™H[[™Ú[]HY™™\œÈ\™HØØ]YƒBˆ
‹ÃBˆÙYš[™HTÐ—ÑUP•Q”ÕT•ÑWÐ•QŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ—ÑUP•Q”ÕT•ÑWÐ•Q—ÔÒQ•
JH	ˆTÐ—ÑUP•Q”ÕT•ÑWÐ•Q—ÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHHHTÐˆ[šÈÝÙ\ˆX[˜YÙ[Y[™YÚ\Ý\ˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ—ÓWÒT‘Ò×ÓPTÒÈ
•JCBˆÙYš[™HTÐ—ÓWÒT‘Ò×ÔÒQ•
JCB‹ÊˆHT‘ÒÈHÜÝ[š]X]Y™\Ý[YH\˜][ÛˆHËˆ\È\ÈHT‘˜[YHœ›ÛHH\Ý™XÙZ]™YHÚÙ[ƒBˆ
‹ÃBˆÙYš[™HTÐ—ÓWÒT‘ÒÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ—ÓWÒT‘Ò×ÔÒQ•
JH	ˆTÐ—ÓWÒT‘Ò×ÓPTÒÊCBˆÙYš[™HTÐ—ÓWÒT‘ÔÕ×ÓPTÒÈ
ŒJCBˆÙYš[™HTÐ—ÓWÒT‘ÔÕ×ÔÒQ•
JCB‹ÊˆHT‘ÔÕÈHÜÝ[š]X]Y™\Ý[YH\˜][ÛˆHÕËˆ\È\ÈH[YH\˜][Ûˆ™\]Z\™YžHHTÐƒBˆ
ˆ]šXÙHÞ\Ý[HÈÛÛYHÝ]ÙˆH[š]X]YÝ\Ü[™Y\ˆ™XÙZ]š[™ÈHÜÝ[š]X]YH™\Ý[YKƒBˆ
‹ÃBˆÙYš[™HTÐ—ÓWÒT‘ÔÕÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ—ÓWÒT‘ÔÕ×ÔÒQ•
JH	ˆTÐ—ÓWÒT‘ÔÕ×ÓPTÒÊCBˆÙYš[™HTÐ—ÓWÑUWÔS‘S‘×ÓPTÒÈ
LJCBˆÙYš[™HTÐ—ÓWÑUWÔS‘S‘×ÔÒQ•
JCB‹ÊˆHUWÔS‘S‘ÈH\ÈÛ™È\È\Èš]\ÈÙ]ÈÛ™H[™HÝ\ÜYš]\ÈÙ]ÈÛ™KÈÚ[Bˆ
ˆ™]\›ˆH–QU[™ÚZÙHÛˆ]™\žHHÚÙ[ˆ]™XÙZ]™\ËˆYˆHÝ\ÜYš]\ÈÙ]ÈÛ™H[™Bˆ
ˆ\Èš]\È™\›ËÈÚ[™]\›ˆ[ˆPÒÈ[™ÚZÙHÛˆ]™\žHHÚÙ[ˆ]™XÙZ]™\ËˆYˆÕÈ\ÃBˆ
ˆÝ[]H[™[™È[™H\ÈÝ\ÜY]]\ÝÙ]\Èš]ÈKƒBˆ
‹ÃBˆÙYš[™HTÐ—ÓWÑUWÔS‘S‘Ê
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ—ÓWÑUWÔS‘S‘×ÔÒQ•
JH	ˆTÐ—ÓWÑUWÔS‘S‘×ÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHTÒÒTHTÐˆ[™Ú[ÚÚ\
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ—ÑTÒÒTÔÒÒTÓPTÒÈ
Ñ‘•JCBˆÙYš[™HTÐ—ÑTÒÒTÔÒÒTÔÒQ•
JCB‹ÊˆHÒÒTH[™Ú[ÚÚ\ˆÜš][™ÈHÈÛ™HÙˆ\ÙHš]ËÚ[[™XØ]HÈÈ]]]\ÝBˆ
ˆXXÝ]˜]HHY™™\ˆ\ÜÚYÛ™YÈ\È[™Ú[[™™]\›ˆÛÛ›Û˜XÚÈÈÛÙØ\™KˆÚ[ˆÈ\ÃBˆ
ˆXXÝ]˜]YH[™Ú[]Ú[ÛX\ˆ\Èš]]]Ú[›Ý[ÙYžHHTS•TÑHš]ˆ[ƒBˆ
ˆ[\œ\Ú[™HÙ[™\˜]YÚ[ˆHXÝ]™Hš]ÛÙ\Èœ›ÛHHÈˆ›ÝNˆ[ˆØ\ÙHÙˆÝX›KXY™™\š[™ËBˆ
ˆÈÚ[Û›HÛX\ˆHXÝ]™Hš]ÙˆHY™™\ˆ[™XØ]YžHHTS•TÑHš]ƒBˆ
‹ÃBˆÙYš[™HTÐ—ÑTÒÒTÔÒÒT

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ—ÑTÒÒTÔÒÒTÔÒQ•
JH	ˆTÐ—ÑTÒÒTÔÒÒTÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHTS•TÑHHTÐˆ[™Ú[Y™™\ˆ[ˆ\ÙH
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ—ÑTS•TÑWÐ•Q—ÓPTÒÈ
ÑÕJCBˆÙYš[™HTÐ—ÑTS•TÑWÐ•Q—ÔÒQ•
•JCB‹ÊˆH•QˆHY™™\ˆ[ˆ\ÙNˆ\È™YÚ\Ý\ˆ\ÈÛ™Hš]\ˆ\ÚXØ[[™Ú[ˆˆÈ\ÈXØÙ\ÜÚ[™ÈY™™\ƒBˆ
ˆˆNˆÈ\ÈXØÙ\ÜÚ[™ÈY™™\ˆKƒBˆ
‹ÃBˆÙYš[™HTÐ—ÑTS•TÑWÐ•QŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ—ÑTS•TÑWÐ•Q—ÔÒQ•
JH	ˆTÐ—ÑTS•TÑWÐ•Q—ÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHT•QÑ‘ÈHTÐˆ[™Ú[Y™™\ˆÛÛ™šYÝ\˜][Ûˆ™YÚ\Ý\ˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ—ÑT•QÑ‘×Ð•Q—ÔÐ—ÓPTÒÈ
ÑÕJCBˆÙYš[™HTÐ—ÑT•QÑ‘×Ð•Q—ÔÐ—ÔÒQ•
•JCB‹ÊˆH•Q—ÔÐˆHY™™\ˆ\ØYÙNˆ\È™YÚ\Ý\ˆ\ÈÛ™Hš]\ˆ\ÚXØ[[™Ú[ˆˆÚ[™ÛKXY™™\‹ˆNƒBˆ
ˆÝX›KXY™™\‹ˆYˆHš]\ÈÙ]ÈÚ[™ÛKXY™™\ˆ

K]Ú[›ÝÙÙÛHHÛÜœ™\ÜÛ™[™ÃBˆ
ˆTS•TÑHš]Ú[ˆ]ÛX\œÈHXÝ]™Hš]ˆYˆHš]\ÈÙ]ÈÝX›KXY™™\ˆ
JKÈÚ[ÙÙÛCBˆ
ˆHTS•TÑHš]Ú[ˆ]ÛX\œÈHXÝ]™Hš]›ÜˆHY™™\‹ƒBˆ
‹ÃBˆÙYš[™HTÐ—ÑT•QÑ‘×Ð•Q—ÔÐŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ—ÑT•QÑ‘×Ð•Q—ÔÐ—ÔÒQ•
JH	ˆTÐ—ÑT•QÑ‘×Ð•Q—ÔÐ—ÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHS•ÕUHTÐˆ[\œ\Ý]\È™YÚ\Ý\ˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ—ÒS•ÕUÑTÕUÓPTÒÈ
UJCBˆÙYš[™HTÐ—ÒS•ÕUÑTÕUÔÒQ•
JCB‹ÊˆHTÕUH[\œ\Ý]\È™YÚ\Ý\ˆš]›ÜˆHÛÛ›ÛTÕU\™XÝ[Û‹ˆ\Èš]Ú[™HÙ]Bˆ
ˆYˆž]\È˜[œÚ][ÛœÈÈ™\›ÈÜˆHÚÚ\š]\ÈÙ]žHÛÙØ\™HÜˆHÑUTXÚÙ]\ÃBˆ
ˆÝXØÙ\ÜÙ[H™XÙZ]™Y›ÜˆHÛÛ›ÛTˆYˆH[Û“R×ÐÓÈ\ÈÙ]\Èš]Ú[[ÛÈ™HÙ]Ú[ˆCBˆ
ˆRÈ\È˜[œÛZ]Y›ÜˆHÛÛ›ÛTÕU\™XÝ[Û‹ˆÛÙØ\™HØ[ˆÛX\ˆ\Èš]žHÜš][™ÈCBˆ
ˆÛ™HÈ]ƒBˆ
‹ÃBˆÙYš[™HTÐ—ÒS•ÕUÑTÕU

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ—ÒS•ÕUÑTÕUÔÒQ•
JH	ˆTÐ—ÒS•ÕUÑTÕUÓPTÒÊCBˆÙYš[™HTÐ—ÒS•ÕUÑTS—ÓPTÒÈ
•JCBˆÙYš[™HTÐ—ÒS•ÕUÑTS—ÔÒQ•
UJCB‹ÊˆHTSˆH[\œ\Ý]\È™YÚ\Ý\ˆš]›ÜˆHÛÛ›ÛTSˆ\™XÝ[Û‹ˆ\Èš]Ú[™HÙ]YƒBˆ
ˆž]\È˜[œÚ][ÛœÈÈ™\›ÈÜˆHÚÚ\š]\ÈÙ]žHÛÙØ\™KˆYˆH[Û“R×ÐÒH\ÈÙ]\ÃBˆ
ˆš]Ú[[ÛÈ™HÙ]Ú[ˆHRÈ\È˜[œÛZ]Y›ÜˆHÛÛ›ÛTSˆ\™XÝ[Û‹ˆÛÙØ\™HØ[ƒBˆ
ˆÛX\ˆ\Èš]žHÜš][™ÈHÛ™HÈ]ƒBˆ
‹ÃBˆÙYš[™HTÐ—ÒS•ÕUÑTSŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ—ÒS•ÕUÑTS—ÔÒQ•
JH	ˆTÐ—ÒS•ÕUÑTS—ÓPTÒÊCBˆÙYš[™HTÐ—ÒS•ÕUÑTSÕUÓPTÒÈ
JCBˆÙYš[™HTÐ—ÒS•ÕUÑTSÕUÔÒQ•
•JCB‹ÊˆHTSÕUH[\œ\Ý]\È™YÚ\Ý\ˆš]›ÜˆHTHÕU\™XÝ[Û‹ˆ\Èš]Ú[™HÙ]YˆCBˆ
ˆÛÜœ™\ÜÛ™[™ÈXÝ]™Hš]\ÈÛX\™YžHËˆ\È\ÈÛ™H[ˆØ\ÙHH›ÙÜ˜[[YYž]\ÃBˆ
ˆ˜[œÚ][ÛœÈÈ™\›ÈÜˆHÚÚ\š]\ÈÙ]žHÛÙØ\™KˆYˆH[Û“R×ÐSÈ\ÈÙ]\Èš]Ú[[ÛÈ™CBˆ
ˆÙ]Ú[ˆHRÈ\È˜[œÛZ]Y›ÜˆHTHÕU\™XÝ[Û‹ˆÛÙØ\™HØ[ˆÛX\ˆ\Èš]žCBˆ
ˆÜš][™ÈHÛ™HÈ]ƒBˆ
‹ÃBˆÙYš[™HTÐ—ÒS•ÕUÑTSÕU

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ—ÒS•ÕUÑTSÕUÔÒQ•
JH	ˆTÐ—ÒS•ÕUÑTSÕUÓPTÒÊCBˆÙYš[™HTÐ—ÒS•ÕUÑTRS—ÓPTÒÈ
JCBˆÙYš[™HTÐ—ÒS•ÕUÑTRS—ÔÒQ•
ÕJCB‹ÊˆHTRSˆH[\œ\Ý]\È™YÚ\Ý\ˆš]›ÜˆHTHSˆ\™XÝ[Û‹ˆ\Èš]Ú[™HÙ]YˆCBˆ
ˆÛÜœ™\ÜÛ™[™ÈXÝ]™Hš]\ÈÛX\™YžHËˆ\È\ÈÛ™H[ˆØ\ÙHH›ÙÜ˜[[YYž]\È˜[œÚ][ÛœÃBˆ
ˆÈ™\›ÈÜˆHÚÚ\š]\ÈÙ]žHÛÙØ\™KˆYˆH[Û“R×ÐRH\ÈÙ]\Èš]Ú[[ÛÈ™CBˆ
ˆÙ]Ú[ˆHRÈ\È˜[œÛZ]Y›ÜˆHTHSˆ\™XÝ[Û‹ˆÛÙØ\™HØ[ˆÛX\ˆ\Èš]žHÜš][™ÃBˆ
ˆHÛ™HÈ]ƒBˆ
‹ÃBˆÙYš[™HTÐ—ÒS•ÕUÑTRSŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ—ÒS•ÕUÑTRS—ÔÒQ•
JH	ˆTÐ—ÒS•ÕUÑTRS—ÓPTÒÊCBˆÙYš[™HTÐ—ÒS•ÕUÑT“ÕUÓPTÒÈ
LJCBˆÙYš[™HTÐ—ÒS•ÕUÑT“ÕUÔÒQ•
JCB‹ÊˆHT“ÕUH[\œ\Ý]\È™YÚ\Ý\ˆš]›ÜˆHTˆÕU\™XÝ[Û‹ˆ\Èš]Ú[™HÙ]YˆCBˆ
ˆÛÜœ™\ÜÛ™[™ÈXÝ]™Hš]\ÈÛX\™YžHËˆ\È\ÈÛ™H[ˆØ\ÙHH›ÙÜ˜[[YYž]\ÃBˆ
ˆ˜[œÚ][ÛœÈÈ™\›ÈÜˆHÚÚ\š]\ÈÙ]žHÛÙØ\™KˆYˆH[Û“R×ÐSÈ\ÈÙ]\Èš]Ú[[ÛÈ™CBˆ
ˆÙ]Ú[ˆHRÈ\È˜[œÛZ]Y›ÜˆHTˆÕU\™XÝ[Û‹ˆÛÙØ\™HØ[ˆÛX\ˆ\Èš]žCBˆ
ˆÜš][™ÈHÛ™HÈ]ƒBˆ
‹ÃBˆÙYš[™HTÐ—ÒS•ÕUÑT“ÕU

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ—ÒS•ÕUÑT“ÕUÔÒQ•
JH	ˆTÐ—ÒS•ÕUÑT“ÕUÓPTÒÊCBˆÙYš[™HTÐ—ÒS•ÕUÑT’S—ÓPTÒÈ
ŒJCBˆÙYš[™HTÐ—ÒS•ÕUÑT’S—ÔÒQ•
UJCB‹ÊˆHT’SˆH[\œ\Ý]\È™YÚ\Ý\ˆš]›ÜˆHTˆSˆ\™XÝ[Û‹ˆ\Èš]Ú[™HÙ]YˆCBˆ
ˆÛÜœ™\ÜÛ™[™ÈXÝ]™Hš]\ÈÛX\™YžHËˆ\È\ÈÛ™H[ˆØ\ÙHH›ÙÜ˜[[YYž]\È˜[œÚ][ÛœÃBˆ
ˆÈ™\›ÈÜˆHÚÚ\š]\ÈÙ]žHÛÙØ\™KˆYˆH[Û“R×ÐRH\ÈÙ]\Èš]Ú[[ÛÈ™CBˆ
ˆÙ]Ú[ˆHRÈ\È˜[œÛZ]Y›ÜˆHTˆSˆ\™XÝ[Û‹ˆÛÙØ\™HØ[ˆÛX\ˆ\Èš]žHÜš][™ÃBˆ
ˆHÛ™HÈ]ƒBˆ
‹ÃBˆÙYš[™HTÐ—ÒS•ÕUÑT’SŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ—ÒS•ÕUÑT’S—ÔÒQ•
JH	ˆTÐ—ÒS•ÕUÑT’S—ÓPTÒÊCBˆÙYš[™HTÐ—ÒS•ÕUÑTÓÕUÓPTÒÈ
JCBˆÙYš[™HTÐ—ÒS•ÕUÑTÓÕUÔÒQ•
•JCB‹ÊˆHTÓÕUH[\œ\Ý]\È™YÚ\Ý\ˆš]›ÜˆHTÈÕU\™XÝ[Û‹ˆ\Èš]Ú[™HÙ]YˆCBˆ
ˆÛÜœ™\ÜÛ™[™ÈXÝ]™Hš]\ÈÛX\™YžHËˆ\È\ÈÛ™H[ˆØ\ÙHH›ÙÜ˜[[YYž]\ÃBˆ
ˆ˜[œÚ][ÛœÈÈ™\›ÈÜˆHÚÚ\š]\ÈÙ]žHÛÙØ\™KˆYˆH[Û“R×ÐSÈ\ÈÙ]\Èš]Ú[[ÛÈ™CBˆ
ˆÙ]Ú[ˆHRÈ\È˜[œÛZ]Y›ÜˆHTÈÕU\™XÝ[Û‹ˆÛÙØ\™HØ[ˆÛX\ˆ\Èš]žCBˆ
ˆÜš][™ÈHÛ™HÈ]ƒBˆ
‹ÃBˆÙYš[™HTÐ—ÒS•ÕUÑTÓÕU

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ—ÒS•ÕUÑTÓÕUÔÒQ•
JH	ˆTÐ—ÒS•ÕUÑTÓÕUÓPTÒÊCBˆÙYš[™HTÐ—ÒS•ÕUÑTÒS—ÓPTÒÈ
JCBˆÙYš[™HTÐ—ÒS•ÕUÑTÒS—ÔÒQ•
ÕJCB‹ÊˆHTÒSˆH[\œ\Ý]\È™YÚ\Ý\ˆš]›ÜˆHTÈSˆ\™XÝ[Û‹ˆ\Èš]Ú[™HÙ]YˆCBˆ
ˆÛÜœ™\ÜÛ™[™ÈXÝ]™Hš]\ÈÛX\™YžHËˆ\È\ÈÛ™H[ˆØ\ÙHH›ÙÜ˜[[YYž]\È˜[œÚ][ÛœÃBˆ
ˆÈ™\›ÈÜˆHÚÚ\š]\ÈÙ]žHÛÙØ\™KˆYˆH[Û“R×ÐRH\ÈÙ]\Èš]Ú[[ÛÈ™CBˆ
ˆÙ]Ú[ˆHRÈ\È˜[œÛZ]Y›ÜˆHTÈSˆ\™XÝ[Û‹ˆÛÙØ\™HØ[ˆÛX\ˆ\Èš]žHÜš][™ÃBˆ
ˆHÛ™HÈ]ƒBˆ
‹ÃBˆÙYš[™HTÐ—ÒS•ÕUÑTÒSŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ—ÒS•ÕUÑTÒS—ÔÒQ•
JH	ˆTÐ—ÒS•ÕUÑTÒS—ÓPTÒÊCBˆÙYš[™HTÐ—ÒS•ÕUÑTÕUÓPTÒÈ
LJCBˆÙYš[™HTÐ—ÒS•ÕUÑTÕUÔÒQ•
JCB‹ÊˆHTÕUH[\œ\Ý]\È™YÚ\Ý\ˆš]›ÜˆHTÕU\™XÝ[Û‹ˆ\Èš]Ú[™HÙ]YˆCBˆ
ˆÛÜœ™\ÜÛ™[™ÈXÝ]™Hš]\ÈÛX\™YžHËˆ\È\ÈÛ™H[ˆØ\ÙHH›ÙÜ˜[[YYž]\ÃBˆ
ˆ˜[œÚ][ÛœÈÈ™\›ÈÜˆHÚÚ\š]\ÈÙ]žHÛÙØ\™KˆYˆH[Û“R×ÐSÈ\ÈÙ]\Èš]Ú[[ÛÈ™CBˆ
ˆÙ]Ú[ˆHRÈ\È˜[œÛZ]Y›ÜˆHTÕU\™XÝ[Û‹ˆÛÙØ\™HØ[ˆÛX\ˆ\Èš]žCBˆ
ˆÜš][™ÈHÛ™HÈ]ƒBˆ
‹ÃBˆÙYš[™HTÐ—ÒS•ÕUÑTÕU

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ—ÒS•ÕUÑTÕUÔÒQ•
JH	ˆTÐ—ÒS•ÕUÑTÕUÓPTÒÊCBˆÙYš[™HTÐ—ÒS•ÕUÑTS—ÓPTÒÈ
ŒJCBˆÙYš[™HTÐ—ÒS•ÕUÑTS—ÔÒQ•
UJCB‹ÊˆHTSˆH[\œ\Ý]\È™YÚ\Ý\ˆš]›ÜˆHTSˆ\™XÝ[Û‹ˆ\Èš]Ú[™HÙ]YˆCBˆ
ˆÛÜœ™\ÜÛ™[™ÈXÝ]™Hš]\ÈÛX\™YžHËˆ\È\ÈÛ™H[ˆØ\ÙHH›ÙÜ˜[[YYž]\È˜[œÚ][ÛœÃBˆ
ˆÈ™\›ÈÜˆHÚÚ\š]\ÈÙ]žHÛÙØ\™KˆYˆH[Û“R×ÐRH\ÈÙ]\Èš]Ú[[ÛÈ™CBˆ
ˆÙ]Ú[ˆHRÈ\È˜[œÛZ]Y›ÜˆHTSˆ\™XÝ[Û‹ˆÛÙØ\™HØ[ˆÛX\ˆ\Èš]žHÜš][™ÃBˆ
ˆHÛ™HÈ]ƒBˆ
‹ÃBˆÙYš[™HTÐ—ÒS•ÕUÑTSŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ—ÒS•ÕUÑTS—ÔÒQ•
JH	ˆTÐ—ÒS•ÕUÑTS—ÓPTÒÊCBˆÙYš[™HTÐ—ÒS•ÕUÑ”SQWÒS•ÓPTÒÈ
JCBˆÙYš[™HTÐ—ÒS•ÕUÑ”SQWÒS•ÔÒQ•
ÌJCB‹ÊˆH”SQWÒS•Hœ˜[YH[\œ\ˆ\Èš]\ÈÙ]ÈÛ™H]™\žHZ[\ÙXÛÛ™Ú[ˆH˜\ÑX›Ý[˜ÙYš]Bˆ
ˆ[™HÓÓˆš]\™HÙ]ˆ\Èš]Ø[ˆ™H\ÙYžHÛÙØ\™HÚ[ˆ[™[™È\ÛØÚ›Û›Ý\ÃBˆ
ˆ[™Ú[ËˆÛÙØ\™HØ[ˆÛX\ˆ\Èš]žHÜš][™ÈHÛ™HÈ]ƒBˆ
‹ÃBˆÙYš[™HTÐ—ÒS•ÕUÑ”SQWÒS•

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ—ÒS•ÕUÑ”SQWÒS•ÔÒQ•
JH	ˆTÐ—ÒS•ÕUÑ”SQWÒS•ÓPTÒÊCBˆÙYš[™HTÐ—ÒS•ÕUÑU—ÒS•ÓPTÒÈ
JCBˆÙYš[™HTÐ—ÒS•ÕUÑU—ÒS•ÔÒQ•
ÌUJCB‹ÊˆHU—ÒS•H]šXÙHÝ]\È[\œ\ˆ\Èš]\ÈÙ]žHÈÚ[ˆÛ™HÙˆHš]È[ˆH]šXÙCBˆ
ˆÝ]\ÈÚ[™ÙH™YÚ\Ý\ˆ\™HÙ]ˆÛÙØ\™HØ[ˆÛX\ˆ\Èš]žHÜš][™ÈHÛ™HÈ]ƒBˆ
‹ÃBˆÙYš[™HTÐ—ÒS•ÕUÑU—ÒS•

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ—ÒS•ÕUÑU—ÒS•ÔÒQ•
JH	ˆTÐ—ÒS•ÕUÑU—ÒS•ÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHS•SˆHTÐˆ[\œ\[˜X›H™YÚ\Ý\ˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ—ÒS•S—ÑTÒS•ÑS—ÓPTÒÈ
Ñ‘•JCBˆÙYš[™HTÐ—ÒS•S—ÑTÒS•ÑS—ÔÒQ•
JCB‹ÊˆHTÒS•ÑSˆHYˆ\Èš]\ÈÙ][™HÛÜœ™\ÜÛ™[™ÈTÐˆ[\œ\Ý]\Èš]\ÈÙ]HÃBˆ
ˆ[\œ\\ÈÙ[™\˜]YÛˆH[\œ\[™H[™XØ]YžHHÛÜœ™\ÜÛ™[™ÈTÐˆ[\œ\›Ý][™ÃBˆ
ˆš]ƒBˆ
‹ÃBˆÙYš[™HTÐ—ÒS•S—ÑTÒS•ÑSŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ—ÒS•S—ÑTÒS•ÑS—ÔÒQ•
JH	ˆTÐ—ÒS•S—ÑTÒS•ÑS—ÓPTÒÊCBˆÙYš[™HTÐ—ÒS•S—Ñ”SQWÒS•ÑS—ÓPTÒÈ
JCBˆÙYš[™HTÐ—ÒS•S—Ñ”SQWÒS•ÑS—ÔÒQ•
ÌJCB‹ÊˆH”SQWÒS•ÑSˆHYˆ\Èš]\ÈÙ][™HÛÜœ™\ÜÛ™[™ÈTÐˆ[\œ\Ý]\Èš]\ÈÙ]HÃBˆ
ˆ[\œ\\ÈÙ[™\˜]YÛˆH[\œ\[™H[™XØ]YžHHÛÜœ™\ÜÛ™[™ÈTÐˆ[\œ\Bˆ
ˆ›Ý][™Èš]ƒBˆ
‹ÃBˆÙYš[™HTÐ—ÒS•S—Ñ”SQWÒS•ÑSŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ—ÒS•S—Ñ”SQWÒS•ÑS—ÔÒQ•
JH	ˆTÐ—ÒS•S—Ñ”SQWÒS•ÑS—ÓPTÒÊCBˆÙYš[™HTÐ—ÒS•S—ÑU—ÒS•ÑS—ÓPTÒÈ
JCBˆÙYš[™HTÐ—ÒS•S—ÑU—ÒS•ÑS—ÔÒQ•
ÌUJCB‹ÊˆHU—ÒS•ÑSˆHYˆ\Èš]\ÈÙ][™HÛÜœ™\ÜÛ™[™ÈTÐˆ[\œ\Ý]\Èš]\ÈÙ]HÃBˆ
ˆ[\œ\\ÈÙ[™\˜]YÛˆH[\œ\[™H[™XØ]YžHHÛÜœ™\ÜÛ™[™ÈTÐˆ[\œ\›Ý][™ÃBˆ
ˆš]ƒBˆ
‹ÃBˆÙYš[™HTÐ—ÒS•S—ÑU—ÒS•ÑSŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ—ÒS•S—ÑU—ÒS•ÑS—ÔÒQ•
JH	ˆTÐ—ÒS•S—ÑU—ÒS•ÑS—ÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHS•ÑUÕUHTÐˆÙ][\œ\Ý]\È™YÚ\Ý\ˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ—ÒS•ÑUÕUÑTÔÑUÒS•ÓPTÒÈ
Ñ‘•JCBˆÙYš[™HTÐ—ÒS•ÑUÕUÑTÔÑUÒS•ÔÒQ•
JCB‹ÊˆHTÔÑUÒS•HYˆÛÙØ\™HÜš]\ÈHÛ™HÈÛ™HÙˆ\ÙHš]ËHÛÜœ™\ÜÛ™[™ÈTÐˆ[\œ\Bˆ
ˆÝ]\Èš]\ÈÙ]ˆÚ[ˆ\È™YÚ\Ý\ˆ\È™XYHØ[YH˜[YH\ÈHTÐˆ[\œ\Ý]\È™YÚ\Ý\ƒBˆ
ˆ\È™]\›™YƒBˆ
‹ÃBˆÙYš[™HTÐ—ÒS•ÑUÕUÑTÔÑUÒS•

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ—ÒS•ÑUÕUÑTÔÑUÒS•ÔÒQ•
JH	ˆTÐ—ÒS•ÑUÕUÑTÔÑUÒS•ÓPTÒÊCBˆÙYš[™HTÐ—ÒS•ÑUÕUÑ”SQWÔÑUÒS•ÓPTÒÈ
JCBˆÙYš[™HTÐ—ÒS•ÑUÕUÑ”SQWÔÑUÒS•ÔÒQ•
ÌJCB‹ÊˆH”SQWÔÑUÒS•HYˆÛÙØ\™HÜš]\ÈHÛ™HÈÛ™HÙˆ\ÙHš]ËHÛÜœ™\ÜÛ™[™ÈTÐˆ[\œ\Bˆ
ˆÝ]\Èš]\ÈÙ]ˆÚ[ˆ\È™YÚ\Ý\ˆ\È™XYHØ[YH˜[YH\ÈHTÐˆ[\œ\Ý]\ÃBˆ
ˆ™YÚ\Ý\ˆ\È™]\›™YƒBˆ
‹ÃBˆÙYš[™HTÐ—ÒS•ÑUÕUÑ”SQWÔÑUÒS•

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ—ÒS•ÑUÕUÑ”SQWÔÑUÒS•ÔÒQ•
JH	ˆTÐ—ÒS•ÑUÕUÑ”SQWÔÑUÒS•ÓPTÒÊCBˆÙYš[™HTÐ—ÒS•ÑUÕUÑU—ÔÑUÒS•ÓPTÒÈ
JCBˆÙYš[™HTÐ—ÒS•ÑUÕUÑU—ÔÑUÒS•ÔÒQ•
ÌUJCB‹ÊˆHU—ÔÑUÒS•HYˆÛÙØ\™HÜš]\ÈHÛ™HÈÛ™HÙˆ\ÙHš]ËHÛÜœ™\ÜÛ™[™ÈTÐˆ[\œ\Bˆ
ˆÝ]\Èš]\ÈÙ]ˆÚ[ˆ\È™YÚ\Ý\ˆ\È™XYHØ[YH˜[YH\ÈHTÐˆ[\œ\Ý]\ÃBˆ
ˆ™YÚ\Ý\ˆ\È™]\›™YƒBˆ
‹ÃBˆÙYš[™HTÐ—ÒS•ÑUÕUÑU—ÔÑUÒS•

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ—ÒS•ÑUÕUÑU—ÔÑUÒS•ÔÒQ•
JH	ˆTÐ—ÒS•ÑUÕUÑU—ÔÑUÒS•ÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHTÑÑÓHHTÐˆ[™Ú[ÙÙÛH™YÚ\Ý\ˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ—ÑTÑÑÓWÕÑÑÓWÓPTÒÈ
Ñ‘•JCBˆÙYš[™HTÐ—ÑTÑÑÓWÕÑÑÓWÔÒQ•
JCB‹ÊˆHÑÑÓHH[™Ú[]HÙÙÛNˆ\ÈšY[[™XØ]\ÈHÝ\œ™[˜[YHÙˆH]HÙÙÛH›ÜˆHÛÜœ™\ÜÛ™[™È[™Ú[ƒBˆ
‹ÃBˆÙYš[™HTÐ—ÑTÑÑÓWÕÑÑÓJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ—ÑTÑÑÓWÕÑÑÓWÔÒQ•
JH	ˆTÐ—ÑTÑÑÓWÕÑÑÓWÓPTÒÊCB‹ÊˆHH
‹ÃBƒBƒB‹ÊˆCBˆ
ˆCBˆ
‹ÈÊˆ[™ÙˆÜ›Ý\TÐ—Ô™YÚ\Ý\—ÓX\ÚÜÈ
‹ÃBƒBƒB‹ÊˆTÐˆH\š\\˜[[œÝ[˜ÙH˜\ÙHY™\ÜÙ\È
‹ÃBˆÚYˆ
×ÐT“WÑ‘PUT‘WÐÓTÑH	ˆŠCBˆÊŠˆ\š\\˜[TÐŒ˜\ÙHY™\ÜÈ
‹ÃBˆÙYš[™HTÐŒÐTÑH
LJCBˆÊŠˆ\š\\˜[TÐŒ˜\ÙHY™\ÜÈ
‹ÃBˆÙYš[™HTÐŒÐTÑWÓ”È
JCBˆÊŠˆ\š\\˜[TÐŒ˜\ÙHÚ[\ˆ
‹ÃBˆÙYš[™HTÐŒ

TÐ—Õ\H
ŠUTÐŒÐTÑJCBˆÊŠˆ\š\\˜[TÐŒ˜\ÙHÚ[\ˆ
‹ÃBˆÙYš[™HTÐŒÓ”È

TÐ—Õ\H
ŠUTÐŒÐTÑWÓ”ÊCBˆÊŠˆ\œ˜^H[š]X[^™\ˆÙˆTÐˆ\š\\˜[˜\ÙHY™\ÜÙ\È
‹ÃBˆÙYš[™HTÐ—ÐTÑWÐQ”ÈÈTÐŒÐTÑHCBˆÊŠˆ\œ˜^H[š]X[^™\ˆÙˆTÐˆ\š\\˜[˜\ÙHÚ[\œÈ
‹ÃBˆÙYš[™HTÐ—ÐTÑWÔ”ÈÈTÐŒCBˆÊŠˆ\œ˜^H[š]X[^™\ˆÙˆTÐˆ\š\\˜[˜\ÙHY™\ÜÙ\È
‹ÃBˆÙYš[™HTÐ—ÐTÑWÐQ”×Ó”ÈÈTÐŒÐTÑWÓ”ÈCBˆÊŠˆ\œ˜^H[š]X[^™\ˆÙˆTÐˆ\š\\˜[˜\ÙHÚ[\œÈ
‹ÃBˆÙYš[™HTÐ—ÐTÑWÔ”×Ó”ÈÈTÐŒÓ”ÈCBˆÙ[ÙCBˆÊŠˆ\š\\˜[TÐŒ˜\ÙHY™\ÜÈ
‹ÃBˆÙYš[™HTÐŒÐTÑH
JCBˆÊŠˆ\š\\˜[TÐŒ˜\ÙHÚ[\ˆ
‹ÃBˆÙYš[™HTÐŒ

TÐ—Õ\H
ŠUTÐŒÐTÑJCBˆÊŠˆ\œ˜^H[š]X[^™\ˆÙˆTÐˆ\š\\˜[˜\ÙHY™\ÜÙ\È
‹ÃBˆÙYš[™HTÐ—ÐTÑWÐQ”ÈÈTÐŒÐTÑHCBˆÊŠˆ\œ˜^H[š]X[^™\ˆÙˆTÐˆ\š\\˜[˜\ÙHÚ[\œÈ
‹ÃBˆÙYš[™HTÐ—ÐTÑWÔ”ÈÈTÐŒCBˆÙ[™YƒB‹ÊŠˆ[\œ\™XÝÜœÈ›ÜˆHTÐˆ\š\\˜[\H
‹ÃBˆÙYš[™HTÐ—ÒT”TÈÈTÐŒÒT”[ˆCBˆÙYš[™HTÐ—Ó‘QQÓ×ÒT”TÈÈTÐŒÓ‘QQÓ×ÒT”[ˆCBƒB‹ÊˆCBˆ
ˆCBˆ
‹ÈÊˆ[™ÙˆÜ›Ý\TÐ—Ô\š\\˜[ÐXØÙ\Ü×Ó^Y\ˆ
‹ÃBƒBƒB‹ÊˆKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKCBˆKHTÐ‘”Ò\š\\˜[XØÙ\ÜÈ^Y\ƒBˆKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKH
‹ÃBƒB‹ÊˆCBˆ
ˆYÙÜ›Ý\TÐ‘”ÒÔ\š\\˜[ÐXØÙ\Ü×Ó^Y\ˆTÐ‘”Ò\š\\˜[XØÙ\ÜÈ^Y\ƒBˆ
ˆÃBˆ
‹ÃBƒB‹ÊŠˆTÐ‘”ÒH™YÚ\Ý\ˆ^[Ý]\YYˆ
‹ÃB\YYˆÝXÝÃBˆ×ÒHZ[Ì—ÝÔ‘U’TÒSÓŽÈÊŠÑ™\™\Ù[][ÛˆÙˆH™\œÚ[ÛˆÙˆHÒHÜXÚYšXØ][Ûˆ]\È[\[Y[YžHHÜÝÛÛ›Û\ˆ
ÊKÙ™œÙ]ˆ
‹ÃBˆ×ÒSÈZ[Ì—ÝÐÓÓ•“ÓÈÊŠYš[™\ÈHÜ\˜][™È[Ù\ÈÙˆHËÙ™œÙ]ˆ
‹ÃBˆ×ÒSÈZ[Ì—ÝÐÓÓSPS‘ÕUTÎÈÊŠ\È™YÚ\Ý\ˆ\È\ÙYÈ™XÙZ]™HHÛÛ[X[™Èœ›ÛHHÜÝÛÛ›Û\ˆš]™\ˆ
Ñ
KÙ™œÙ]ˆ
‹ÃBˆ×ÒSÈZ[Ì—ÝÒS•T”•TÕUTÎÈÊŠ[™XØ]\ÈHÝ]\ÈÛˆ˜\š[Ý\È]™[È]Ø]\ÙH\™Ø\™H[\œ\ÈžHÙ][™ÈH\›ÜšX]Hš]ËÙ™œÙ]ˆÈ
‹ÃBˆ×ÒSÈZ[Ì—ÝÒS•T”•TSP“NÈÊŠÛÛ›ÛÈHš]È[ˆHÒ[\œ\Ý]\È™YÚ\Ý\ˆ[™[™XØ]\ÈÚXÚ]™[ÈÚ[Ù[™\˜]HH\™Ø\™H[\œ\Ù™œÙ]ˆL
‹ÃBˆ×ÒSÈZ[Ì—ÝÒS•T”•TTÐP“NÈÊŠHš]È[ˆ\È™YÚ\Ý\ˆ\™H\ÙYÈ\ØX›HÛÜœ™\ÜÛ™[™Èš]È[ˆHÒ[\œ\Ý]\È™YÚ\Ý\ˆ[™[ˆ\›ˆ\ØX›H]]™[XY[™ÈÈ\™Ø\™H[\œ\Ù™œÙ]ˆM
‹ÃBˆ×ÒSÈZ[Ì—ÝÒÐÐNÈÊŠÛÛZ[œÈH\ÚXØ[Y™\ÜÈÙˆHÜÝÛÛ›Û\ˆÛÛ[][šXØ][Ûˆ\™XKÙ™œÙ]ˆN
‹ÃBˆ×ÒHZ[Ì—ÝÔT’SÑÕT”‘S•QÈÊŠÛÛZ[œÈH\ÚXØ[Y™\ÜÈÙˆHÝ\œ™[\ÛØÚ›Û›Ý\ÈÜˆ[\œ\[™Ú[\ØÜš\Ü‹Ù™œÙ]ˆPÈ
‹ÃBˆ×ÒSÈZ[Ì—ÝÐÓÓ•“ÓPQQÈÊŠÛÛZ[œÈH\ÚXØ[Y™\ÜÈÙˆHš\œÝ[™Ú[\ØÜš\ÜˆÙˆHÛÛ›Û\ÝÙ™œÙ]ˆŒ
‹ÃBˆ×ÒSÈZ[Ì—ÝÐÓÓ•“ÓÕT”‘S•QÈÊŠÛÛZ[œÈH\ÚXØ[Y™\ÜÈÙˆHÝ\œ™[[™Ú[\ØÜš\ÜˆÙˆHÛÛ›Û\ÝÙ™œÙ]ˆ
‹ÃBˆ×ÒSÈZ[Ì—ÝÐ•SÒPQQÈÊŠÛÛZ[œÈH\ÚXØ[Y™\ÜÈÙˆHš\œÝ[™Ú[\ØÜš\ÜˆÙˆH[È\ÝÙ™œÙ]ˆŽ
‹ÃBˆ×ÒSÈZ[Ì—ÝÐ•SÐÕT”‘S•QÈÊŠÛÛZ[œÈH\ÚXØ[Y™\ÜÈÙˆHÝ\œ™[[™Ú[\ØÜš\ÜˆÙˆH[È\ÝÙ™œÙ]ˆÈ
‹ÃBˆ×ÒHZ[Ì—ÝÑÓ‘RPQÈÊŠÛÛZ[œÈH\ÚXØ[Y™\ÜÈÙˆH\Ý˜[œÙ™\ˆ\ØÜš\ÜˆYYÈH	ÑÛ™IÈ]Y]YKÙ™œÙ]ˆÌ
‹ÃBˆ×ÒSÈZ[Ì—ÝÑ“RS•T•SÈÊŠYš[™\ÈHš][YH[\˜[[ˆHœ˜[YH[™H[ÜYYX^[][HXÚÙ]Ú^™HÚXÚÛÝ[›ÝØ]\ÙH[ˆÝ™\œ[‹Ù™œÙ]ˆÍ
‹ÃBˆ×ÒHZ[Ì—ÝÑ“T‘SPRS’S‘ÎÈÊŠHMXš]ÛÝ[\ˆÚÝÚ[™ÈHš][YH™[XZ[š[™È[ˆHÝ\œ™[œ˜[YKÙ™œÙ]ˆÎ
‹ÃBˆ×ÒHZ[Ì—ÝÑ“S•SP‘TŽÈÊŠÛÛZ[œÈHM‹Xš]ÛÝ[\ˆ[™›ÝšY\ÈH[Z[™È™Y™\™[˜ÙH[[Û™È]™[È\[š[™È[ˆHÈ[™HÑÙ™œÙ]ˆÐÈ
‹ÃBˆ×ÒSÈZ[Ì—ÝÔT’SÑPÔÕT•ÈÊŠÛÛZ[œÈH›ÙÜ˜[[XX›HMXš]˜[YHÚXÚ]\›Z[™\ÈHX\›Y\Ý[YHÈÚÝ[Ý\›ØÙ\ÜÚ[™ÈH\š[ÙXÈ\ÝÙ™œÙ]ˆ
‹ÃBˆ×ÒSÈZ[Ì—ÝÓÕ‘TÒÓÈÊŠÛÛZ[œÈLKXš]˜[YHÚXÚ\È\ÙYžHHÈÈ]\›Z[™HÚ]\ˆÈÛÛ[Z]È˜[œÙ™\ˆHX^[][HÙˆXž]HÈXÚÙ]™Y›Ü™HSÑ‹Ù™œÙ]ˆ
‹ÃBˆ×ÒSÈZ[Ì—ÝÔ’TÐÔ’TÔNÈÊŠš\œÝÙˆHÛÈ™YÚ\Ý\œÈÚXÚ\ØÜšX™\ÈHÚ\˜XÝ\š\ÝXÜÈÙˆH›ÛÝX‹Ù™œÙ]ˆ
‹ÃBˆ×ÒSÈZ[Ì—ÝÔ’TÐÔ’TÔŽÈÊŠÙXÛÛ™ÙˆHÛÈ™YÚ\Ý\œÈÚXÚ\ØÜšX™\ÈHÚ\˜XÝ\š\ÝXÜÈÙˆH›ÛÝX‹Ù™œÙ]ˆÈ
‹ÃBˆ×ÒSÈZ[Ì—ÝÔ’ÕUTÎÈÊŠ\È™YÚ\Ý\ˆ\È]šYY[ÈÛÈ\ËÙ™œÙ]ˆL
‹ÃBˆ×ÒSÈZ[Ì—ÝÔ’Ô•ÕUTÎÈÊŠÛÛ›ÛÈ[™™\ÜÈHÜ]™[ÈÛˆH\‹\Ü˜\Ú\ËÙ™œÙ]ˆM
‹ÃBˆZ[Ý‘TÑT•‘QÌÍNÃBˆ×ÒSÈZ[Ì—ÝÔ•SÑNÈÊŠÛÛ›ÛÈHÜYˆ]\È]XÚYÈHÜÝ›ØÚÈÜˆH]šXÙH›ØÚËÙ™œÙ]ˆPÈ
‹ÃBŸHTÐ‘”ÒÕ\NÃBƒB‹ÊˆKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKCBˆKHTÐ‘”Ò™YÚ\Ý\ˆX\ÚÜÃBˆKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKH
‹ÃBƒB‹ÊˆCBˆ
ˆYÙÜ›Ý\TÐ‘”ÒÔ™YÚ\Ý\—ÓX\ÚÜÈTÐ‘”Ò™YÚ\Ý\ˆX\ÚÜÃBˆ
ˆÃBˆ
‹ÃBƒB‹ÊˆH˜[YHÔ‘U’TÒSÓˆHÑ™\™\Ù[][ÛˆÙˆH™\œÚ[ÛˆÙˆHÒHÜXÚYšXØ][Ûˆ]\È[\[Y[YžHHÜÝÛÛ›Û\ˆ
ÊH
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÔ‘U’TÒSÓ—Ô‘U—ÓPTÒÈ
‘•JCBˆÙYš[™HTÐ‘”ÒÒÔ‘U’TÒSÓ—Ô‘U—ÔÒQ•
JCB‹ÊˆH‘UˆH™]š\Ú[Û‹ƒBˆ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÔ‘U’TÒSÓ—Ô‘UŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ‘”ÒÒÔ‘U’TÒSÓ—Ô‘U—ÔÒQ•
JH	ˆTÐ‘”ÒÒÔ‘U’TÒSÓ—Ô‘U—ÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHÐÓÓ•“ÓHYš[™\ÈHÜ\˜][™È[Ù\ÈÙˆHÈ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÐÓÓ•“ÓÐÐ”Ô—ÓPTÒÈ
ÕJCBˆÙYš[™HTÐ‘”ÒÒÐÓÓ•“ÓÐÐ”Ô—ÔÒQ•
JCB‹ÊˆHÐ”ÔˆHÛÛ›Û[ÔÙ\šXÙT˜][ËƒBˆ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÐÓÓ•“ÓÐÐ”ÔŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ‘”ÒÒÐÓÓ•“ÓÐÐ”Ô—ÔÒQ•
JH	ˆTÐ‘”ÒÒÐÓÓ•“ÓÐÐ”Ô—ÓPTÒÊCBˆÙYš[™HTÐ‘”ÒÒÐÓÓ•“ÓÔWÓPTÒÈ
JCBˆÙYš[™HTÐ‘”ÒÒÐÓÓ•“ÓÔWÔÒQ•
•JCB‹ÊˆHHH\š[ÙXÓ\Ý[˜X›KƒBˆ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÐÓÓ•“ÓÔJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ‘”ÒÒÐÓÓ•“ÓÔWÔÒQ•
JH	ˆTÐ‘”ÒÒÐÓÓ•“ÓÔWÓPTÒÊCBˆÙYš[™HTÐ‘”ÒÒÐÓÓ•“ÓÒQWÓPTÒÈ
JCBˆÙYš[™HTÐ‘”ÒÒÐÓÓ•“ÓÒQWÔÒQ•
ÕJCB‹ÊˆHQHH\ÛØÚ›Û›Ý\Ñ[˜X›KƒBˆ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÐÓÓ•“ÓÒQJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ‘”ÒÒÐÓÓ•“ÓÒQWÔÒQ•
JH	ˆTÐ‘”ÒÒÐÓÓ•“ÓÒQWÓPTÒÊCBˆÙYš[™HTÐ‘”ÒÒÐÓÓ•“ÓÐÓWÓPTÒÈ
LJCBˆÙYš[™HTÐ‘”ÒÒÐÓÓ•“ÓÐÓWÔÒQ•
JCB‹ÊˆHÓHHÛÛ›Û\Ý[˜X›KƒBˆ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÐÓÓ•“ÓÐÓJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ‘”ÒÒÐÓÓ•“ÓÐÓWÔÒQ•
JH	ˆTÐ‘”ÒÒÐÓÓ•“ÓÐÓWÓPTÒÊCBˆÙYš[™HTÐ‘”ÒÒÐÓÓ•“ÓÐ“WÓPTÒÈ
ŒJCBˆÙYš[™HTÐ‘”ÒÒÐÓÓ•“ÓÐ“WÔÒQ•
UJCB‹ÊˆH“HH[Ó\Ý[˜X›H\Èš]\ÈÙ]È[˜X›HH›ØÙ\ÜÚ[™ÈÙˆH[È\Ý[ˆH™^œ˜[YKƒBˆ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÐÓÓ•“ÓÐ“J
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ‘”ÒÒÐÓÓ•“ÓÐ“WÔÒQ•
JH	ˆTÐ‘”ÒÒÐÓÓ•“ÓÐ“WÓPTÒÊCBˆÙYš[™HTÐ‘”ÒÒÐÓÓ•“ÓÒÑ”×ÓPTÒÈ
ÌJCBˆÙYš[™HTÐ‘”ÒÒÐÓÓ•“ÓÒÑ”×ÔÒQ•
•JCB‹ÊˆHÑ”ÈHÜÝÛÛ›Û\‘[˜Ý[Û˜[Ý]H›ÜˆTÐˆŽˆTÐ”‘TÑUXŽˆTÐ”‘TÕSQHLŽˆTÐ“ÔTUSÓSBˆ
ˆLXŽˆTÐ”ÕTÔS‘H˜[œÚ][ÛˆÈTÐ“ÔTUSÓSœ›ÛH[›Ý\ˆÝ]HØ]\Ù\ÈÓÑ™Ù[™\˜][ÛˆÈ™YÚ[ƒBˆ
ˆH\È]\‹ƒBˆ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÐÓÓ•“ÓÒÑ”Ê
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ‘”ÒÒÐÓÓ•“ÓÒÑ”×ÔÒQ•
JH	ˆTÐ‘”ÒÒÐÓÓ•“ÓÒÑ”×ÓPTÒÊCBˆÙYš[™HTÐ‘”ÒÒÐÓÓ•“ÓÒT—ÓPTÒÈ
LJCBˆÙYš[™HTÐ‘”ÒÒÐÓÓ•“ÓÒT—ÔÒQ•
JCB‹ÊˆHTˆH[\œ\›Ý][™È\Èš]]\›Z[™\ÈH›Ý][™ÈÙˆ[\œ\ÈÙ[™\˜]YžH]™[È™YÚ\Ý\™Y[ˆÒ[\œ\Ý]\ËƒBˆ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÐÓÓ•“ÓÒTŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ‘”ÒÒÐÓÓ•“ÓÒT—ÔÒQ•
JH	ˆTÐ‘”ÒÒÐÓÓ•“ÓÒT—ÓPTÒÊCBˆÙYš[™HTÐ‘”ÒÒÐÓÓ•“ÓÔ•Ð×ÓPTÒÈ
ŒJCBˆÙYš[™HTÐ‘”ÒÒÐÓÓ•“ÓÔ•Ð×ÔÒQ•
UJCB‹ÊˆH•ÐÈH™[[ÝUØZÙ]\ÛÛ›™XÝY\Èš][™XØ]\ÈÚ]\ˆÈÝ\ÜÈ™[[ÝHØZÙK]\ÚYÛ˜[[™ËƒBˆ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÐÓÓ•“ÓÔ•ÐÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ‘”ÒÒÐÓÓ•“ÓÔ•Ð×ÔÒQ•
JH	ˆTÐ‘”ÒÒÐÓÓ•“ÓÔ•Ð×ÓPTÒÊCBˆÙYš[™HTÐ‘”ÒÒÐÓÓ•“ÓÔ•ÑWÓPTÒÈ
JCBˆÙYš[™HTÐ‘”ÒÒÐÓÓ•“ÓÔ•ÑWÔÒQ•
LJCB‹ÊˆH•ÑHH™[[ÝUØZÙ]\[˜X›H\Èš]\È\ÙYžHÑÈ[˜X›HÜˆ\ØX›HH™[[ÝHØZÙK]\™X]\™CBˆ
ˆ\ÛˆH]XÝ[ÛˆÙˆ\Ý™X[H™\Ý[YHÚYÛ˜[[™ËƒBˆ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÐÓÓ•“ÓÔ•ÑJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ‘”ÒÒÐÓÓ•“ÓÔ•ÑWÔÒQ•
JH	ˆTÐ‘”ÒÒÐÓÓ•“ÓÔ•ÑWÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHÐÓÓSPS‘ÕUTÈH\È™YÚ\Ý\ˆ\È\ÙYÈ™XÙZ]™HHÛÛ[X[™Èœ›ÛHHÜÝÛÛ›Û\ˆš]™\ˆ
Ñ
H
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÐÓÓSPS‘ÕUT×ÒÔ—ÓPTÒÈ
UJCBˆÙYš[™HTÐ‘”ÒÒÐÓÓSPS‘ÕUT×ÒÔ—ÔÒQ•
JCB‹ÊˆHÔˆHÜÝÛÛ›Û\”™\Ù]\Èš]\ÈÙ]žHÑÈ[š]X]HHÛÙØ\™H™\Ù]ÙˆËƒBˆ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÐÓÓSPS‘ÕUT×ÒÔŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ‘”ÒÒÐÓÓSPS‘ÕUT×ÒÔ—ÔÒQ•
JH	ˆTÐ‘”ÒÒÐÓÓSPS‘ÕUT×ÒÔ—ÓPTÒÊCBˆÙYš[™HTÐ‘”ÒÒÐÓÓSPS‘ÕUT×ÐÓ—ÓPTÒÈ
•JCBˆÙYš[™HTÐ‘”ÒÒÐÓÓSPS‘ÕUT×ÐÓ—ÔÒQ•
UJCB‹ÊˆHÓˆHÛÛ›Û\Ýš[Y\Èš]\È\ÙYÈ[™XØ]HÚ]\ˆ\™H\™H[žHÈÛˆHÛÛ›Û\ÝƒBˆ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÐÓÓSPS‘ÕUT×ÐÓŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ‘”ÒÒÐÓÓSPS‘ÕUT×ÐÓ—ÔÒQ•
JH	ˆTÐ‘”ÒÒÐÓÓSPS‘ÕUT×ÐÓ—ÓPTÒÊCBˆÙYš[™HTÐ‘”ÒÒÐÓÓSPS‘ÕUT×Ð“—ÓPTÒÈ
JCBˆÙYš[™HTÐ‘”ÒÒÐÓÓSPS‘ÕUT×Ð“—ÔÒQ•
•JCB‹ÊˆH“ˆH[Ó\Ýš[Y\Èš]\È\ÙYÈ[™XØ]HÚ]\ˆ\™H\™H[žHÈÛˆH[È\ÝƒBˆ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÐÓÓSPS‘ÕUT×Ð“Š
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ‘”ÒÒÐÓÓSPS‘ÕUT×Ð“—ÔÒQ•
JH	ˆTÐ‘”ÒÒÐÓÓSPS‘ÕUT×Ð“—ÓPTÒÊCBˆÙYš[™HTÐ‘”ÒÒÐÓÓSPS‘ÕUT×ÓÐÔ—ÓPTÒÈ
JCBˆÙYš[™HTÐ‘”ÒÒÐÓÓSPS‘ÕUT×ÓÐÔ—ÔÒQ•
ÕJCB‹ÊˆHÐÔˆHÝÛ™\œÚ\Ú[™ÙT™\]Y\Ý\Èš]\ÈÙ]žH[ˆÔÈÑÈ™\]Y\ÝHÚ[™ÙHÙˆÛÛ›ÛÙˆHËƒBˆ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÐÓÓSPS‘ÕUT×ÓÐÔŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ‘”ÒÒÐÓÓSPS‘ÕUT×ÓÐÔ—ÔÒQ•
JH	ˆTÐ‘”ÒÒÐÓÓSPS‘ÕUT×ÓÐÔ—ÓPTÒÊCBˆÙYš[™HTÐ‘”ÒÒÐÓÓSPS‘ÕUT×ÔÓÐ×ÓPTÒÈ
ÌJCBˆÙYš[™HTÐ‘”ÒÒÐÓÓSPS‘ÕUT×ÔÓÐ×ÔÒQ•
•JCB‹ÊˆHÓÐÈHØÚY[[™ÓÝ™\œ[ÛÝ[\ÙHš]È\™H[˜Ü™[Y[YÛˆXXÚØÚY[[™ÈÝ™\œ[ˆ\œ›Ü‹ƒBˆ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÐÓÓSPS‘ÕUT×ÔÓÐÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ‘”ÒÒÐÓÓSPS‘ÕUT×ÔÓÐ×ÔÒQ•
JH	ˆTÐ‘”ÒÒÐÓÓSPS‘ÕUT×ÔÓÐ×ÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHÒS•T”•TÕUTÈH[™XØ]\ÈHÝ]\ÈÛˆ˜\š[Ý\È]™[È]Ø]\ÙH\™Ø\™H[\œ\ÈžHÙ][™ÈH\›ÜšX]Hš]È
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÒS•T”•TÕUT×ÔÓ×ÓPTÒÈ
UJCBˆÙYš[™HTÐ‘”ÒÒÒS•T”•TÕUT×ÔÓ×ÔÒQ•
JCB‹ÊˆHÓÈHØÚY[[™ÓÝ™\œ[ˆ\Èš]\ÈÙ]Ú[ˆHTÐˆØÚY[H›ÜˆHÝ\œ™[œ˜[YHÝ™\œ[œÈ[™Bˆ
ˆY\ˆH\]HÙˆØØQœ˜[YS[X™\‹ƒBˆ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÒS•T”•TÕUT×ÔÓÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ‘”ÒÒÒS•T”•TÕUT×ÔÓ×ÔÒQ•
JH	ˆTÐ‘”ÒÒÒS•T”•TÕUT×ÔÓ×ÓPTÒÊCBˆÙYš[™HTÐ‘”ÒÒÒS•T”•TÕUT×ÕÑÓPTÒÈ
•JCBˆÙYš[™HTÐ‘”ÒÒÒS•T”•TÕUT×ÕÑÔÒQ•
UJCB‹ÊˆHÑHÜš]X˜XÚÑÛ™RXY\Èš]\ÈÙ][[YYX][HY\ˆÈ\ÈÜš][ˆÑÛ™RXYÈØØQÛ™RXYƒBˆ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÒS•T”•TÕUT×ÕÑ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ‘”ÒÒÒS•T”•TÕUT×ÕÑÔÒQ•
JH	ˆTÐ‘”ÒÒÒS•T”•TÕUT×ÕÑÓPTÒÊCBˆÙYš[™HTÐ‘”ÒÒÒS•T”•TÕUT×ÔÑ—ÓPTÒÈ
JCBˆÙYš[™HTÐ‘”ÒÒÒS•T”•TÕUT×ÔÑ—ÔÒQ•
•JCB‹ÊˆHÑˆHÝ\Ù‘œ˜[YH\Èš]\ÈÙ]žHÈ]XXÚÝ\ÙˆHœ˜[YH[™Y\ˆH\]HÙˆØØQœ˜[YS[X™\‹ƒBˆ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÒS•T”•TÕUT×ÔÑŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ‘”ÒÒÒS•T”•TÕUT×ÔÑ—ÔÒQ•
JH	ˆTÐ‘”ÒÒÒS•T”•TÕUT×ÔÑ—ÓPTÒÊCBˆÙYš[™HTÐ‘”ÒÒÒS•T”•TÕUT×Ô‘ÓPTÒÈ
JCBˆÙYš[™HTÐ‘”ÒÒÒS•T”•TÕUT×Ô‘ÔÒQ•
ÕJCB‹ÊˆH‘H™\Ý[YQ]XÝY\Èš]\ÈÙ]Ú[ˆÈ]XÝÈ]H]šXÙHÛˆHTÐˆ\È\ÜÙ\[™È™\Ý[YHÚYÛ˜[[™ËƒBˆ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÒS•T”•TÕUT×Ô‘

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ‘”ÒÒÒS•T”•TÕUT×Ô‘ÔÒQ•
JH	ˆTÐ‘”ÒÒÒS•T”•TÕUT×Ô‘ÓPTÒÊCBˆÙYš[™HTÐ‘”ÒÒÒS•T”•TÕUT×ÕQWÓPTÒÈ
LJCBˆÙYš[™HTÐ‘”ÒÒÒS•T”•TÕUT×ÕQWÔÒQ•
JCB‹ÊˆHQHH[œ™XÛÝ™\˜X›Q\œ›Üˆ\Èš]\ÈÙ]Ú[ˆÈ]XÝÈHÞ\Ý[H\œ›Üˆ›Ý™[]YÈTÐ‹ƒBˆ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÒS•T”•TÕUT×ÕQJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ‘”ÒÒÒS•T”•TÕUT×ÕQWÔÒQ•
JH	ˆTÐ‘”ÒÒÒS•T”•TÕUT×ÕQWÓPTÒÊCBˆÙYš[™HTÐ‘”ÒÒÒS•T”•TÕUT×Ñ““×ÓPTÒÈ
ŒJCBˆÙYš[™HTÐ‘”ÒÒÒS•T”•TÕUT×Ñ““×ÔÒQ•
UJCB‹ÊˆH““ÈHœ˜[YS[X™\“Ý™\™›ÝÈ\Èš]\ÈÙ]Ú[ˆHTØˆÙˆÑ›S[X™\ˆ
š]MJHÚ[™Ù\È˜[YKBˆ
ˆœ›ÛHÈHÜˆœ›ÛHHÈ[™Y\ˆØØQœ˜[YS[X™\ˆ\È™Y[ˆ\]YƒBˆ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÒS•T”•TÕUT×Ñ““Ê
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ‘”ÒÒÒS•T”•TÕUT×Ñ““×ÔÒQ•
JH	ˆTÐ‘”ÒÒÒS•T”•TÕUT×Ñ““×ÓPTÒÊCBˆÙYš[™HTÐ‘”ÒÒÒS•T”•TÕUT×Ô’Ð×ÓPTÒÈ
JCBˆÙYš[™HTÐ‘”ÒÒÒS•T”•TÕUT×Ô’Ð×ÔÒQ•
•JCB‹ÊˆH’ÐÈH›ÛÝX”Ý]\ÐÚ[™ÙH\Èš]\ÈÙ]Ú[ˆHÛÛ[ÙˆÔšÝ]\ÈÜˆHÛÛ[Ùˆ[žCBˆ
ˆÙˆÔšÜÝ]\ÖÓ[X™\›Ù‘ÝÛœÝ™X[TÜH\ÈÚ[™ÙYƒBˆ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÒS•T”•TÕUT×Ô’ÐÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ‘”ÒÒÒS•T”•TÕUT×Ô’Ð×ÔÒQ•
JH	ˆTÐ‘”ÒÒÒS•T”•TÕUT×Ô’Ð×ÓPTÒÊCBˆÙYš[™HTÐ‘”ÒÒÒS•T”•TÕUT×ÓÐ×ÓPTÒÈ
‘‘‘‘ÌJCBˆÙYš[™HTÐ‘”ÒÒÒS•T”•TÕUT×ÓÐ×ÔÒQ•
LJCB‹ÊˆHÐÈHÝÛ™\œÚ\Ú[™ÙH\Èš]\ÈÙ]žHÈÚ[ˆÑÙ]ÈHÝÛ™\œÚ\Ú[™ÙT™\]Y\ÝšY[[ˆÐÛÛ[X[™Ý]\ËƒBˆ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÒS•T”•TÕUT×ÓÐÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ‘”ÒÒÒS•T”•TÕUT×ÓÐ×ÔÒQ•
JH	ˆTÐ‘”ÒÒÒS•T”•TÕUT×ÓÐ×ÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHÒS•T”•TSP“HHÛÛ›ÛÈHš]È[ˆHÒ[\œ\Ý]\È™YÚ\Ý\ˆ[™[™XØ]\ÈÚXÚ]™[ÈÚ[Ù[™\˜]HH\™Ø\™H[\œ\
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÒS•T”•TSP“WÔÓ×ÓPTÒÈ
UJCBˆÙYš[™HTÐ‘”ÒÒÒS•T”•TSP“WÔÓ×ÔÒQ•
JCB‹ÊˆHÓÈHØÚY[[™ÈÝ™\œ[ˆ[\œ\ƒBˆ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÒS•T”•TSP“WÔÓÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ‘”ÒÒÒS•T”•TSP“WÔÓ×ÔÒQ•
JH	ˆTÐ‘”ÒÒÒS•T”•TSP“WÔÓ×ÓPTÒÊCBˆÙYš[™HTÐ‘”ÒÒÒS•T”•TSP“WÕÑÓPTÒÈ
•JCBˆÙYš[™HTÐ‘”ÒÒÒS•T”•TSP“WÕÑÔÒQ•
UJCB‹ÊˆHÑHÑÛ™RXYÜš]X˜XÚÈ[\œ\ƒBˆ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÒS•T”•TSP“WÕÑ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ‘”ÒÒÒS•T”•TSP“WÕÑÔÒQ•
JH	ˆTÐ‘”ÒÒÒS•T”•TSP“WÕÑÓPTÒÊCBˆÙYš[™HTÐ‘”ÒÒÒS•T”•TSP“WÔÑ—ÓPTÒÈ
JCBˆÙYš[™HTÐ‘”ÒÒÒS•T”•TSP“WÔÑ—ÔÒQ•
•JCB‹ÊˆHÑˆHÝ\Ùˆœ˜[YH[\œ\ƒBˆ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÒS•T”•TSP“WÔÑŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ‘”ÒÒÒS•T”•TSP“WÔÑ—ÔÒQ•
JH	ˆTÐ‘”ÒÒÒS•T”•TSP“WÔÑ—ÓPTÒÊCBˆÙYš[™HTÐ‘”ÒÒÒS•T”•TSP“WÔ‘ÓPTÒÈ
JCBˆÙYš[™HTÐ‘”ÒÒÒS•T”•TSP“WÔ‘ÔÒQ•
ÕJCB‹ÊˆH‘H™\Ý[YH]XÝ[\œ\ƒBˆ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÒS•T”•TSP“WÔ‘

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ‘”ÒÒÒS•T”•TSP“WÔ‘ÔÒQ•
JH	ˆTÐ‘”ÒÒÒS•T”•TSP“WÔ‘ÓPTÒÊCBˆÙYš[™HTÐ‘”ÒÒÒS•T”•TSP“WÕQWÓPTÒÈ
LJCBˆÙYš[™HTÐ‘”ÒÒÒS•T”•TSP“WÕQWÔÒQ•
JCB‹ÊˆHQHH[œ™XÛÝ™\˜X›H\œ›Üˆ[\œ\ƒBˆ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÒS•T”•TSP“WÕQJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ‘”ÒÒÒS•T”•TSP“WÕQWÔÒQ•
JH	ˆTÐ‘”ÒÒÒS•T”•TSP“WÕQWÓPTÒÊCBˆÙYš[™HTÐ‘”ÒÒÒS•T”•TSP“WÑ““×ÓPTÒÈ
ŒJCBˆÙYš[™HTÐ‘”ÒÒÒS•T”•TSP“WÑ““×ÔÒQ•
UJCB‹ÊˆH““ÈHœ˜[YH[X™\ˆÝ™\™›ÝÈ[\œ\ƒBˆ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÒS•T”•TSP“WÑ““Ê
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ‘”ÒÒÒS•T”•TSP“WÑ““×ÔÒQ•
JH	ˆTÐ‘”ÒÒÒS•T”•TSP“WÑ““×ÓPTÒÊCBˆÙYš[™HTÐ‘”ÒÒÒS•T”•TSP“WÔ’Ð×ÓPTÒÈ
JCBˆÙYš[™HTÐ‘”ÒÒÒS•T”•TSP“WÔ’Ð×ÔÒQ•
•JCB‹ÊˆH’ÐÈH›ÛÝXˆÝ]\ÈÚ[™ÙH[\œ\ƒBˆ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÒS•T”•TSP“WÔ’ÐÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ‘”ÒÒÒS•T”•TSP“WÔ’Ð×ÔÒQ•
JH	ˆTÐ‘”ÒÒÒS•T”•TSP“WÔ’Ð×ÓPTÒÊCBˆÙYš[™HTÐ‘”ÒÒÒS•T”•TSP“WÓÐ×ÓPTÒÈ
JCBˆÙYš[™HTÐ‘”ÒÒÒS•T”•TSP“WÓÐ×ÔÒQ•
ÌJCB‹ÊˆHÐÈHÝÛ™\œÚ\Ú[™ÙH[\œ\ƒBˆ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÒS•T”•TSP“WÓÐÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ‘”ÒÒÒS•T”•TSP“WÓÐ×ÔÒQ•
JH	ˆTÐ‘”ÒÒÒS•T”•TSP“WÓÐ×ÓPTÒÊCBˆÙYš[™HTÐ‘”ÒÒÒS•T”•TSP“WÓRQWÓPTÒÈ
JCBˆÙYš[™HTÐ‘”ÒÒÒS•T”•TSP“WÓRQWÔÒQ•
ÌUJCB‹ÊˆHRQHHX\Ý\ˆ[\œ\[˜X›KƒBˆ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÒS•T”•TSP“WÓRQJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ‘”ÒÒÒS•T”•TSP“WÓRQWÔÒQ•
JH	ˆTÐ‘”ÒÒÒS•T”•TSP“WÓRQWÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHÒS•T”•TTÐP“HHHš]È[ˆ\È™YÚ\Ý\ˆ\™H\ÙYÈ\ØX›HÛÜœ™\ÜÛ™[™Èš]È[ˆHÒ[\œ\Ý]\È™YÚ\Ý\ˆ[™[ˆ\›ˆ\ØX›H]]™[XY[™ÈÈ\™Ø\™H[\œ\
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÒS•T”•TTÐP“WÔÓ×ÓPTÒÈ
UJCBˆÙYš[™HTÐ‘”ÒÒÒS•T”•TTÐP“WÔÓ×ÔÒQ•
JCB‹ÊˆHÓÈHØÚY[[™ÈÝ™\œ[ˆ[\œ\ƒBˆ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÒS•T”•TTÐP“WÔÓÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ‘”ÒÒÒS•T”•TTÐP“WÔÓ×ÔÒQ•
JH	ˆTÐ‘”ÒÒÒS•T”•TTÐP“WÔÓ×ÓPTÒÊCBˆÙYš[™HTÐ‘”ÒÒÒS•T”•TTÐP“WÕÑÓPTÒÈ
•JCBˆÙYš[™HTÐ‘”ÒÒÒS•T”•TTÐP“WÕÑÔÒQ•
UJCB‹ÊˆHÑHÑÛ™RXYÜš]X˜XÚÈ[\œ\ƒBˆ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÒS•T”•TTÐP“WÕÑ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ‘”ÒÒÒS•T”•TTÐP“WÕÑÔÒQ•
JH	ˆTÐ‘”ÒÒÒS•T”•TTÐP“WÕÑÓPTÒÊCBˆÙYš[™HTÐ‘”ÒÒÒS•T”•TTÐP“WÔÑ—ÓPTÒÈ
JCBˆÙYš[™HTÐ‘”ÒÒÒS•T”•TTÐP“WÔÑ—ÔÒQ•
•JCB‹ÊˆHÑˆHÝ\Ùˆœ˜[YH[\œ\ƒBˆ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÒS•T”•TTÐP“WÔÑŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ‘”ÒÒÒS•T”•TTÐP“WÔÑ—ÔÒQ•
JH	ˆTÐ‘”ÒÒÒS•T”•TTÐP“WÔÑ—ÓPTÒÊCBˆÙYš[™HTÐ‘”ÒÒÒS•T”•TTÐP“WÔ‘ÓPTÒÈ
JCBˆÙYš[™HTÐ‘”ÒÒÒS•T”•TTÐP“WÔ‘ÔÒQ•
ÕJCB‹ÊˆH‘H™\Ý[YH]XÝ[\œ\ƒBˆ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÒS•T”•TTÐP“WÔ‘

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ‘”ÒÒÒS•T”•TTÐP“WÔ‘ÔÒQ•
JH	ˆTÐ‘”ÒÒÒS•T”•TTÐP“WÔ‘ÓPTÒÊCBˆÙYš[™HTÐ‘”ÒÒÒS•T”•TTÐP“WÕQWÓPTÒÈ
LJCBˆÙYš[™HTÐ‘”ÒÒÒS•T”•TTÐP“WÕQWÔÒQ•
JCB‹ÊˆHQHH[œ™XÛÝ™\˜X›H\œ›Üˆ[\œ\ƒBˆ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÒS•T”•TTÐP“WÕQJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ‘”ÒÒÒS•T”•TTÐP“WÕQWÔÒQ•
JH	ˆTÐ‘”ÒÒÒS•T”•TTÐP“WÕQWÓPTÒÊCBˆÙYš[™HTÐ‘”ÒÒÒS•T”•TTÐP“WÑ““×ÓPTÒÈ
ŒJCBˆÙYš[™HTÐ‘”ÒÒÒS•T”•TTÐP“WÑ““×ÔÒQ•
UJCB‹ÊˆH““ÈHœ˜[YH[X™\ˆÝ™\™›ÝÈ[\œ\ƒBˆ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÒS•T”•TTÐP“WÑ““Ê
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ‘”ÒÒÒS•T”•TTÐP“WÑ““×ÔÒQ•
JH	ˆTÐ‘”ÒÒÒS•T”•TTÐP“WÑ““×ÓPTÒÊCBˆÙYš[™HTÐ‘”ÒÒÒS•T”•TTÐP“WÔ’Ð×ÓPTÒÈ
JCBˆÙYš[™HTÐ‘”ÒÒÒS•T”•TTÐP“WÔ’Ð×ÔÒQ•
•JCB‹ÊˆH’ÐÈH›ÛÝXˆÝ]\ÈÚ[™ÙH[\œ\ƒBˆ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÒS•T”•TTÐP“WÔ’ÐÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ‘”ÒÒÒS•T”•TTÐP“WÔ’Ð×ÔÒQ•
JH	ˆTÐ‘”ÒÒÒS•T”•TTÐP“WÔ’Ð×ÓPTÒÊCBˆÙYš[™HTÐ‘”ÒÒÒS•T”•TTÐP“WÓÐ×ÓPTÒÈ
JCBˆÙYš[™HTÐ‘”ÒÒÒS•T”•TTÐP“WÓÐ×ÔÒQ•
ÌJCB‹ÊˆHÐÈHÝÛ™\œÚ\Ú[™ÙH[\œ\ƒBˆ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÒS•T”•TTÐP“WÓÐÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ‘”ÒÒÒS•T”•TTÐP“WÓÐ×ÔÒQ•
JH	ˆTÐ‘”ÒÒÒS•T”•TTÐP“WÓÐ×ÓPTÒÊCBˆÙYš[™HTÐ‘”ÒÒÒS•T”•TTÐP“WÓRQWÓPTÒÈ
JCBˆÙYš[™HTÐ‘”ÒÒÒS•T”•TTÐP“WÓRQWÔÒQ•
ÌUJCB‹ÊˆHRQHHHÜš][ˆÈ\ÈšY[\ÈYÛ›Ü™YžHËƒBˆ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÒS•T”•TTÐP“WÓRQJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ‘”ÒÒÒS•T”•TTÐP“WÓRQWÔÒQ•
JH	ˆTÐ‘”ÒÒÒS•T”•TTÐP“WÓRQWÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHÒÐÐHHÛÛZ[œÈH\ÚXØ[Y™\ÜÈÙˆHÜÝÛÛ›Û\ˆÛÛ[][šXØ][Ûˆ\™XH
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÒÐÐWÒÐÐWÓPTÒÈ
‘‘‘‘‘ŒJCBˆÙYš[™HTÐ‘”ÒÒÒÐÐWÒÐÐWÔÒQ•
JCB‹ÊˆHÐÐHH˜\ÙHY™\ÜÈÙˆHÜÝÛÛ›Û\ˆÛÛ[][šXØ][Ûˆ\™XKƒBˆ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÒÐÐWÒÐÐJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ‘”ÒÒÒÐÐWÒÐÐWÔÒQ•
JH	ˆTÐ‘”ÒÒÒÐÐWÒÐÐWÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHÔT’SÑÕT”‘S•QHÛÛZ[œÈH\ÚXØ[Y™\ÜÈÙˆHÝ\œ™[\ÛØÚ›Û›Ý\ÈÜˆ[\œ\[™Ú[\ØÜš\Üˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÔT’SÑÕT”‘S•QÔÑQÓPTÒÈ
‘‘‘‘‘‘ŒJCBˆÙYš[™HTÐ‘”ÒÒÔT’SÑÕT”‘S•QÔÑQÔÒQ•
JCB‹ÊˆHÑQHHÛÛ[Ùˆ\È™YÚ\Ý\ˆ\È\]YžHÈY\ˆH\š[ÙXÈQ\È›ØÙ\ÜÙYƒBˆ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÔT’SÑÕT”‘S•QÔÑQ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ‘”ÒÒÔT’SÑÕT”‘S•QÔÑQÔÒQ•
JH	ˆTÐ‘”ÒÒÔT’SÑÕT”‘S•QÔÑQÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHÐÓÓ•“ÓPQQHÛÛZ[œÈH\ÚXØ[Y™\ÜÈÙˆHš\œÝ[™Ú[\ØÜš\ÜˆÙˆHÛÛ›Û\Ý
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÐÓÓ•“ÓPQQÐÒQÓPTÒÈ
‘‘‘‘‘‘ŒJCBˆÙYš[™HTÐ‘”ÒÒÐÓÓ•“ÓPQQÐÒQÔÒQ•
JCB‹ÊˆHÒQHÈ˜]™\œÙ\ÈHÛÛ›Û\ÝÝ\[™ÈÚ]HÐÛÛ›ÛXYQÚ[\‹ƒBˆ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÐÓÓ•“ÓPQQÐÒQ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ‘”ÒÒÐÓÓ•“ÓPQQÐÒQÔÒQ•
JH	ˆTÐ‘”ÒÒÐÓÓ•“ÓPQQÐÒQÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHÐÓÓ•“ÓÕT”‘S•QHÛÛZ[œÈH\ÚXØ[Y™\ÜÈÙˆHÝ\œ™[[™Ú[\ØÜš\ÜˆÙˆHÛÛ›Û\Ý
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÐÓÓ•“ÓÕT”‘S•QÐÐÑQÓPTÒÈ
‘‘‘‘‘‘ŒJCBˆÙYš[™HTÐ‘”ÒÒÐÓÓ•“ÓÕT”‘S•QÐÐÑQÔÒQ•
JCB‹ÊˆHÐÑQHÛÛ›ÛÝ\œ™[QƒBˆ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÐÓÓ•“ÓÕT”‘S•QÐÐÑQ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ‘”ÒÒÐÓÓ•“ÓÕT”‘S•QÐÐÑQÔÒQ•
JH	ˆTÐ‘”ÒÒÐÓÓ•“ÓÕT”‘S•QÐÐÑQÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHÐ•SÒPQQHÛÛZ[œÈH\ÚXØ[Y™\ÜÈÙˆHš\œÝ[™Ú[\ØÜš\ÜˆÙˆH[È\Ý
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÐ•SÒPQQÐ’QÓPTÒÈ
‘‘‘‘‘‘ŒJCBˆÙYš[™HTÐ‘”ÒÒÐ•SÒPQQÐ’QÔÒQ•
JCB‹ÊˆH’QH[ÒXYQÈ˜]™\œÙ\ÈH[È\ÝÝ\[™ÈÚ]HÐ[ÒXYQÚ[\‹ƒBˆ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÐ•SÒPQQÐ’Q

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ‘”ÒÒÐ•SÒPQQÐ’QÔÒQ•
JH	ˆTÐ‘”ÒÒÐ•SÒPQQÐ’QÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHÐ•SÐÕT”‘S•QHÛÛZ[œÈH\ÚXØ[Y™\ÜÈÙˆHÝ\œ™[[™Ú[\ØÜš\ÜˆÙˆH[È\Ý
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÐ•SÐÕT”‘S•QÐÑQÓPTÒÈ
‘‘‘‘‘‘ŒJCBˆÙYš[™HTÐ‘”ÒÒÐ•SÐÕT”‘S•QÐÑQÔÒQ•
JCB‹ÊˆHÑQH[ÐÝ\œ™[Q\È\ÈY˜[˜ÙYÈH™^QY\ˆHÈ\ÈÙ\™YHÝ\œ™[Û™KƒBˆ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÐ•SÐÕT”‘S•QÐÑQ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ‘”ÒÒÐ•SÐÕT”‘S•QÐÑQÔÒQ•
JH	ˆTÐ‘”ÒÒÐ•SÐÕT”‘S•QÐÑQÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHÑÓ‘RPQHÛÛZ[œÈH\ÚXØ[Y™\ÜÈÙˆH\Ý˜[œÙ™\ˆ\ØÜš\ÜˆYYÈH	ÑÛ™IÈ]Y]YH
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÑÓ‘RPQÑÓPTÒÈ
‘‘‘‘‘‘ŒJCBˆÙYš[™HTÐ‘”ÒÒÑÓ‘RPQÑÔÒQ•
JCB‹ÊˆHHÛ™RXYÚ[ˆH\ÈÛÛ\]YÈÜš]\ÈHÛÛ[ÙˆÑÛ™RXYÈH™^šY[ÙˆHƒBˆ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÑÓ‘RPQÑ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ‘”ÒÒÑÓ‘RPQÑÔÒQ•
JH	ˆTÐ‘”ÒÒÑÓ‘RPQÑÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHÑ“RS•T•SHYš[™\ÈHš][YH[\˜[[ˆHœ˜[YH[™H[ÜYYX^[][HXÚÙ]Ú^™HÚXÚÛÝ[›ÝØ]\ÙH[ˆÝ™\œ[ˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÑ“RS•T•SÑ’WÓPTÒÈ
Ñ‘‘•JCBˆÙYš[™HTÐ‘”ÒÒÑ“RS•T•SÑ’WÔÒQ•
JCB‹ÊˆH’HHœ˜[YR[\˜[\ÈÜXÚYšY\ÈH[\˜[™]ÙY[ˆÛÈÛÛœÙXÝ]]™HÓÑœÈ[ˆš][Y\ËƒBˆ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÑ“RS•T•SÑ’J
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ‘”ÒÒÑ“RS•T•SÑ’WÔÒQ•
JH	ˆTÐ‘”ÒÒÑ“RS•T•SÑ’WÓPTÒÊCBˆÙYš[™HTÐ‘”ÒÒÑ“RS•T•SÑ”ÓT×ÓPTÒÈ
Ñ‘‘ŒJCBˆÙYš[™HTÐ‘”ÒÒÑ“RS•T•SÑ”ÓT×ÔÒQ•
M•JCB‹ÊˆH”ÓTÈH”Ó\™Ù\Ý]TXÚÙ]\ÈšY[ÜXÚYšY\ÈH˜[YHÚXÚ\ÈØYY[ÈH\™Ù\Ý]CBˆ
ˆXÚÙ]ÛÝ[\ˆ]H™YÚ[›š[™ÈÙˆXXÚœ˜[YKƒBˆ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÑ“RS•T•SÑ”ÓTÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ‘”ÒÒÑ“RS•T•SÑ”ÓT×ÔÒQ•
JH	ˆTÐ‘”ÒÒÑ“RS•T•SÑ”ÓT×ÓPTÒÊCBˆÙYš[™HTÐ‘”ÒÒÑ“RS•T•SÑ’UÓPTÒÈ
JCBˆÙYš[™HTÐ‘”ÒÒÑ“RS•T•SÑ’UÔÒQ•
ÌUJCB‹ÊˆH’UHœ˜[YR[\˜[ÙÙÛHÑÙÙÛ\È\Èš]Ú[™]™\ˆ]ØYÈH™]È˜[YHÈœ˜[YR[\˜[ƒBˆ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÑ“RS•T•SÑ’U

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ‘”ÒÒÑ“RS•T•SÑ’UÔÒQ•
JH	ˆTÐ‘”ÒÒÑ“RS•T•SÑ’UÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHÑ“T‘SPRS’S‘ÈHHMXš]ÛÝ[\ˆÚÝÚ[™ÈHš][YH™[XZ[š[™È[ˆHÝ\œ™[œ˜[YH
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÑ“T‘SPRS’S‘×Ñ”—ÓPTÒÈ
Ñ‘‘•JCBˆÙYš[™HTÐ‘”ÒÒÑ“T‘SPRS’S‘×Ñ”—ÔÒQ•
JCB‹ÊˆH”ˆHœ˜[YT™[XZ[š[™È\ÈÛÝ[\ˆ\ÈXÜ™[Y[Y]XXÚš][YKƒBˆ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÑ“T‘SPRS’S‘×Ñ”Š
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ‘”ÒÒÑ“T‘SPRS’S‘×Ñ”—ÔÒQ•
JH	ˆTÐ‘”ÒÒÑ“T‘SPRS’S‘×Ñ”—ÓPTÒÊCBˆÙYš[™HTÐ‘”ÒÒÑ“T‘SPRS’S‘×Ñ”•ÓPTÒÈ
JCBˆÙYš[™HTÐ‘”ÒÒÑ“T‘SPRS’S‘×Ñ”•ÔÒQ•
ÌUJCB‹ÊˆH”•Hœ˜[YT™[XZ[š[™ÕÙÙÛH\Èš]\ÈØYYœ›ÛHHœ˜[YR[\˜[ÙÙÛHšY[ÙˆÑ›R[\˜[Bˆ
ˆÚ[™]™\ˆœ˜[YT™[XZ[š[™È™XXÚ\ÈƒBˆ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÑ“T‘SPRS’S‘×Ñ”•

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ‘”ÒÒÑ“T‘SPRS’S‘×Ñ”•ÔÒQ•
JH	ˆTÐ‘”ÒÒÑ“T‘SPRS’S‘×Ñ”•ÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHÑ“S•SP‘TˆHÛÛZ[œÈHM‹Xš]ÛÝ[\ˆ[™›ÝšY\ÈH[Z[™È™Y™\™[˜ÙH[[Û™È]™[È\[š[™È[ˆHÈ[™HÑ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÑ“S•SP‘T—Ñ“—ÓPTÒÈ
‘‘‘•JCBˆÙYš[™HTÐ‘”ÒÒÑ“S•SP‘T—Ñ“—ÔÒQ•
JCB‹ÊˆH“ˆHœ˜[YS[X™\ˆ\È\È[˜Ü™[Y[YÚ[ˆÑ›T™[XZ[š[™È\È™K[ØYYƒBˆ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÑ“S•SP‘T—Ñ“Š
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ‘”ÒÒÑ“S•SP‘T—Ñ“—ÔÒQ•
JH	ˆTÐ‘”ÒÒÑ“S•SP‘T—Ñ“—ÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHÔT’SÑPÔÕT•HÛÛZ[œÈH›ÙÜ˜[[XX›HMXš]˜[YHÚXÚ]\›Z[™\ÈHX\›Y\Ý[YHÈÚÝ[Ý\›ØÙ\ÜÚ[™ÈH\š[ÙXÈ\Ý
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÔT’SÑPÔÕT•Ô×ÓPTÒÈ
Ñ‘‘•JCBˆÙYš[™HTÐ‘”ÒÒÔT’SÑPÔÕT•Ô×ÔÒQ•
JCB‹ÊˆHÈH\š[ÙXÔÝ\Y\ˆH\™Ø\™H™\Ù]\ÈšY[\ÈÛX\™Y[™[ˆÙ]žHÑ\š[™ÈHÈ[š]X[^˜][Û‹ƒBˆ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÔT’SÑPÔÕT•ÔÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ‘”ÒÒÔT’SÑPÔÕT•Ô×ÔÒQ•
JH	ˆTÐ‘”ÒÒÔT’SÑPÔÕT•Ô×ÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHÓÕ‘TÒÓHÛÛZ[œÈLKXš]˜[YHÚXÚ\È\ÙYžHHÈÈ]\›Z[™HÚ]\ˆÈÛÛ[Z]È˜[œÙ™\ˆHX^[][HÙˆXž]HÈXÚÙ]™Y›Ü™HSÑˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÓÕ‘TÒÓÓÕÓPTÒÈ
‘‘•JCBˆÙYš[™HTÐ‘”ÒÒÓÕ‘TÒÓÓÕÔÒQ•
JCB‹ÊˆHÕHÕ™\ÚÛ\ÈšY[ÛÛZ[œÈH˜[YHÚXÚ\ÈÛÛ\\™YÈHœ˜[YT™[XZ[š[™ÈšY[Bˆ
ˆš[ÜˆÈ[š]X][™ÈHÝÈÜYY˜[œØXÝ[Û‹ƒBˆ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÓÕ‘TÒÓÓÕ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ‘”ÒÒÓÕ‘TÒÓÓÕÔÒQ•
JH	ˆTÐ‘”ÒÒÓÕ‘TÒÓÓÕÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHÔ’TÐÔ’TÔHHš\œÝÙˆHÛÈ™YÚ\Ý\œÈÚXÚ\ØÜšX™\ÈHÚ\˜XÝ\š\ÝXÜÈÙˆH›ÛÝXˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÔ’TÐÔ’TÔWÓ‘ÓPTÒÈ
‘•JCBˆÙYš[™HTÐ‘”ÒÒÔ’TÐÔ’TÔWÓ‘ÔÒQ•
JCB‹ÊˆH‘H[X™\‘ÝÛœÝ™X[TÜÈ\ÙHš]ÈÜXÚYžHH[X™\ˆÙˆÝÛœÝ™X[HÜÈÝ\ÜYžHH›ÛÝX‹ƒBˆ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÔ’TÐÔ’TÔWÓ‘

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ‘”ÒÒÔ’TÐÔ’TÔWÓ‘ÔÒQ•
JH	ˆTÐ‘”ÒÒÔ’TÐÔ’TÔWÓ‘ÓPTÒÊCBˆÙYš[™HTÐ‘”ÒÒÔ’TÐÔ’TÔWÔÓWÓPTÒÈ
LJCBˆÙYš[™HTÐ‘”ÒÒÔ’TÐÔ’TÔWÔÓWÔÒQ•
JCB‹ÊˆHÓHHÝÙ\”ÝÚ]Ú[™Ó[ÙH\Èš]\È\ÙYÈÜXÚYžHÝÈHÝÙ\ˆÝÚ]Ú[™ÈÙˆH›ÛÝXˆÜÈ\ÈÛÛ›ÛYƒBˆ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÔ’TÐÔ’TÔWÔÓJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ‘”ÒÒÔ’TÐÔ’TÔWÔÓWÔÒQ•
JH	ˆTÐ‘”ÒÒÔ’TÐÔ’TÔWÔÓWÓPTÒÊCBˆÙYš[™HTÐ‘”ÒÒÔ’TÐÔ’TÔWÓ”×ÓPTÒÈ
ŒJCBˆÙYš[™HTÐ‘”ÒÒÔ’TÐÔ’TÔWÓ”×ÔÒQ•
UJCB‹ÊˆH”ÈH›ÔÝÙ\”ÝÚ]Ú[™È\ÙHš]È\™H\ÙYÈÜXÚYžHÚ]\ˆÝÙ\ˆÝÚ]Ú[™È\ÈÝ\ÜYÜˆÜ\™H[Ø^\ÈÝÙ\™YƒBˆ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÔ’TÐÔ’TÔWÓ”Ê
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ‘”ÒÒÔ’TÐÔ’TÔWÓ”×ÔÒQ•
JH	ˆTÐ‘”ÒÒÔ’TÐÔ’TÔWÓ”×ÓPTÒÊCBˆÙYš[™HTÐ‘”ÒÒÔ’TÐÔ’TÔWÑÓPTÒÈ
JCBˆÙYš[™HTÐ‘”ÒÒÔ’TÐÔ’TÔWÑÔÒQ•
LJCB‹ÊˆHH]šXÙU\H\Èš]ÜXÚYšY\È]H›ÛÝXˆ\È›ÝHÛÛ\Ý[™]šXÙKƒBˆ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÔ’TÐÔ’TÔWÑ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ‘”ÒÒÔ’TÐÔ’TÔWÑÔÒQ•
JH	ˆTÐ‘”ÒÒÔ’TÐÔ’TÔWÑÓPTÒÊCBˆÙYš[™HTÐ‘”ÒÒÔ’TÐÔ’TÔWÓÐÔWÓPTÒÈ
JCBˆÙYš[™HTÐ‘”ÒÒÔ’TÐÔ’TÔWÓÐÔWÔÒQ•
LUJCB‹ÊˆHÐÔHHÝ™\Ý\œ™[›ÝXÝ[Û“[ÙH\Èš]\ØÜšX™\ÈÝÈHÝ™\˜Ý\œ™[Ý]\È›ÜˆH›ÛÝXˆÜÈ\™H™\ÜYƒBˆ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÔ’TÐÔ’TÔWÓÐÔJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ‘”ÒÒÔ’TÐÔ’TÔWÓÐÔWÔÒQ•
JH	ˆTÐ‘”ÒÒÔ’TÐÔ’TÔWÓÐÔWÓPTÒÊCBˆÙYš[™HTÐ‘”ÒÒÔ’TÐÔ’TÔWÓ“ÐÔÓPTÒÈ
LJCBˆÙYš[™HTÐ‘”ÒÒÔ’TÐÔ’TÔWÓ“ÐÔÔÒQ•
L•JCB‹ÊˆH“ÐÔH›ÓÝ™\Ý\œ™[›ÝXÝ[Ûˆ\Èš]\ØÜšX™\ÈÝÈHÝ™\˜Ý\œ™[Ý]\È›ÜˆH›ÛÝXˆÜÈ\™H™\ÜYƒBˆ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÔ’TÐÔ’TÔWÓ“ÐÔ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ‘”ÒÒÔ’TÐÔ’TÔWÓ“ÐÔÔÒQ•
JH	ˆTÐ‘”ÒÒÔ’TÐÔ’TÔWÓ“ÐÔÓPTÒÊCBˆÙYš[™HTÐ‘”ÒÒÔ’TÐÔ’TÔWÔÕÕÓPTÒÈ
‘ŒJCBˆÙYš[™HTÐ‘”ÒÒÔ’TÐÔ’TÔWÔÕÕÔÒQ•
JCB‹ÊˆHÕÕHÝÙ\“Û•ÔÝÙ\‘ÛÛÙ[YH\Èž]HÜXÚYšY\ÈH\˜][ÛˆHÑ\ÈÈØZ]™Y›Ü™CBˆ
ˆXØÙ\ÜÚ[™ÈHÝÙ\™Y[ÛˆÜÙˆH›ÛÝX‹ƒBˆ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÔ’TÐÔ’TÔWÔÕÕ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ‘”ÒÒÔ’TÐÔ’TÔWÔÕÕÔÒQ•
JH	ˆTÐ‘”ÒÒÔ’TÐÔ’TÔWÔÕÕÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHÔ’TÐÔ’TÔˆHÙXÛÛ™ÙˆHÛÈ™YÚ\Ý\œÈÚXÚ\ØÜšX™\ÈHÚ\˜XÝ\š\ÝXÜÈÙˆH›ÛÝXˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÔ’TÐÔ’TÔ—Ñ—ÓPTÒÈ
‘‘‘•JCBˆÙYš[™HTÐ‘”ÒÒÔ’TÐÔ’TÔ—Ñ—ÔÒQ•
JCB‹ÊˆHˆH]šXÙT™[[Ý˜X›HXXÚš]\ÈYXØ]YÈHÜÙˆH›ÛÝX‹ƒBˆ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÔ’TÐÔ’TÔ—ÑŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ‘”ÒÒÔ’TÐÔ’TÔ—Ñ—ÔÒQ•
JH	ˆTÐ‘”ÒÒÔ’TÐÔ’TÔ—Ñ—ÓPTÒÊCBˆÙYš[™HTÐ‘”ÒÒÔ’TÐÔ’TÔ—ÔÓWÓPTÒÈ
‘‘‘ŒJCBˆÙYš[™HTÐ‘”ÒÒÔ’TÐÔ’TÔ—ÔÓWÔÒQ•
M•JCB‹ÊˆHÓHHÜÝÙ\ÛÛ›ÛX\ÚÈXXÚš][™XØ]\ÈYˆHÜ\ÈY™™XÝYžHHÛØ˜[ÝÙ\ˆÛÛ›ÛBˆ
ˆÛÛ[X[™Ú[ˆÝÙ\”ÝÚ]Ú[™Ó[ÙH\ÈÙ]ƒBˆ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÔ’TÐÔ’TÔ—ÔÓJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ‘”ÒÒÔ’TÐÔ’TÔ—ÔÓWÔÒQ•
JH	ˆTÐ‘”ÒÒÔ’TÐÔ’TÔ—ÔÓWÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHÔ’ÕUTÈH\È™YÚ\Ý\ˆ\È]šYY[ÈÛÈ\È
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÔ’ÕUT×Ó×ÓPTÒÈ
UJCBˆÙYš[™HTÐ‘”ÒÒÔ’ÕUT×Ó×ÔÒQ•
JCB‹ÊˆHÈH
™XY
HØØ[ÝÙ\”Ý]\ÈH›ÛÝXˆÙ\È›ÝÝ\ÜHØØ[ÝÙ\ˆÝ]\È™X]\™NÃBˆ
ˆ\Ë\Èš]\È[Ø^\È™XY\ÈƒBˆ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÔ’ÕUT×ÓÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ‘”ÒÒÔ’ÕUT×Ó×ÔÒQ•
JH	ˆTÐ‘”ÒÒÔ’ÕUT×Ó×ÓPTÒÊCBˆÙYš[™HTÐ‘”ÒÒÔ’ÕUT×ÓÐÒWÓPTÒÈ
•JCBˆÙYš[™HTÐ‘”ÒÒÔ’ÕUT×ÓÐÒWÔÒQ•
UJCB‹ÊˆHÐÒHHÝ™\Ý\œ™[[™XØ]Üˆ\Èš]™\ÜÈÝ™\˜Ý\œ™[ÛÛ™][ÛœÈÚ[ˆHÛØ˜[™\Ü[™È\È[\[Y[YƒBˆ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÔ’ÕUT×ÓÐÒJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ‘”ÒÒÔ’ÕUT×ÓÐÒWÔÒQ•
JH	ˆTÐ‘”ÒÒÔ’ÕUT×ÓÐÒWÓPTÒÊCBˆÙYš[™HTÐ‘”ÒÒÔ’ÕUT×Ñ•ÑWÓPTÒÈ
JCBˆÙYš[™HTÐ‘”ÒÒÔ’ÕUT×Ñ•ÑWÔÒQ•
MUJCB‹ÊˆH•ÑHH
™XY
H]šXÙT™[[ÝUØZÙ]\[˜X›H\Èš][˜X›\ÈHÛÛ›™XÝÝ]\ÐÚ[™ÙHš]\ÈH™\Ý[YCBˆ
ˆ]™[Ø]\Ú[™ÈHTÐ”ÕTÔS‘ÈTÐ”‘TÕSQHÝ]H˜[œÚ][Ûˆ[™Ù][™ÈH™\Ý[YQ]XÝYBˆ
ˆ[\œ\ƒBˆ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÔ’ÕUT×Ñ•ÑJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ‘”ÒÒÔ’ÕUT×Ñ•ÑWÔÒQ•
JH	ˆTÐ‘”ÒÒÔ’ÕUT×Ñ•ÑWÓPTÒÊCBˆÙYš[™HTÐ‘”ÒÒÔ’ÕUT×ÓÐ×ÓPTÒÈ
LJCBˆÙYš[™HTÐ‘”ÒÒÔ’ÕUT×ÓÐ×ÔÒQ•
M•JCB‹ÊˆHÐÈH
™XY
HØØ[ÝÙ\”Ý]\ÐÚ[™ÙHH›ÛÝXˆÙ\È›ÝÝ\ÜHØØ[ÝÙ\ˆÝ]\È™X]\™KƒBˆ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÔ’ÕUT×ÓÐÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ‘”ÒÒÔ’ÕUT×ÓÐ×ÔÒQ•
JH	ˆTÐ‘”ÒÒÔ’ÕUT×ÓÐ×ÓPTÒÊCBˆÙYš[™HTÐ‘”ÒÒÔ’ÕUT×ÓÐÒP×ÓPTÒÈ
ŒJCBˆÙYš[™HTÐ‘”ÒÒÔ’ÕUT×ÓÐÒP×ÔÒQ•
MÕJCB‹ÊˆHÐÒPÈHÝ™\Ý\œ™[[™XØ]ÜÚ[™ÙH\Èš]\ÈÙ]žH\™Ø\™HÚ[ˆHÚ[™ÙH\ÈØØÝ\œ™YÈHÐÒHšY[Ùˆ\È™YÚ\Ý\‹ƒBˆ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÔ’ÕUT×ÓÐÒPÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ‘”ÒÒÔ’ÕUT×ÓÐÒP×ÔÒQ•
JH	ˆTÐ‘”ÒÒÔ’ÕUT×ÓÐÒP×ÓPTÒÊCBˆÙYš[™HTÐ‘”ÒÒÔ’ÕUT×ÐÔ•ÑWÓPTÒÈ
JCBˆÙYš[™HTÐ‘”ÒÒÔ’ÕUT×ÐÔ•ÑWÔÒQ•
ÌUJCB‹ÊˆHÔ•ÑHH
Üš]JHÛX\”™[[ÝUØZÙ]\[˜X›HÜš][™ÈHHÛX\œÈ]šXÙT™[[Ý™UØZÙ]\[˜X›KƒBˆ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÔ’ÕUT×ÐÔ•ÑJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ‘”ÒÒÔ’ÕUT×ÐÔ•ÑWÔÒQ•
JH	ˆTÐ‘”ÒÒÔ’ÕUT×ÐÔ•ÑWÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHÔ’Ô•ÕUTÈHÛÛ›ÛÈ[™™\ÜÈHÜ]™[ÈÛˆH\‹\Ü˜\Ú\È
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÔ’Ô•ÕUT×ÐÐÔ×ÓPTÒÈ
UJCBˆÙYš[™HTÐ‘”ÒÒÔ’Ô•ÕUT×ÐÐÔ×ÔÒQ•
JCB‹ÊˆHÐÔÈH
™XY
HÝ\œ™[ÛÛ›™XÝÝ]\È\Èš]™Y›XÝÈHÝ\œ™[Ý]HÙˆHÝÛœÝ™X[HÜƒBˆ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÔ’Ô•ÕUT×ÐÐÔÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ‘”ÒÒÔ’Ô•ÕUT×ÐÐÔ×ÔÒQ•
JH	ˆTÐ‘”ÒÒÔ’Ô•ÕUT×ÐÐÔ×ÓPTÒÊCBˆÙYš[™HTÐ‘”ÒÒÔ’Ô•ÕUT×ÔT×ÓPTÒÈ
•JCBˆÙYš[™HTÐ‘”ÒÒÔ’Ô•ÕUT×ÔT×ÔÒQ•
UJCB‹ÊˆHTÈH
™XY
HÜ[˜X›TÝ]\È\Èš][™XØ]\ÈÚ]\ˆHÜ\È[˜X›YÜˆ\ØX›YƒBˆ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÔ’Ô•ÕUT×ÔTÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ‘”ÒÒÔ’Ô•ÕUT×ÔT×ÔÒQ•
JH	ˆTÐ‘”ÒÒÔ’Ô•ÕUT×ÔT×ÓPTÒÊCBˆÙYš[™HTÐ‘”ÒÒÔ’Ô•ÕUT×ÔÔ×ÓPTÒÈ
JCBˆÙYš[™HTÐ‘”ÒÒÔ’Ô•ÕUT×ÔÔ×ÔÒQ•
•JCB‹ÊˆHÔÈH
™XY
HÜÝ\Ü[™Ý]\È\Èš][™XØ]\ÈHÜ\ÈÝ\Ü[™YÜˆ[ˆH™\Ý[YHÙ\]Y[˜ÙKƒBˆ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÔ’Ô•ÕUT×ÔÔÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ‘”ÒÒÔ’Ô•ÕUT×ÔÔ×ÔÒQ•
JH	ˆTÐ‘”ÒÒÔ’Ô•ÕUT×ÔÔ×ÓPTÒÊCBˆÙYš[™HTÐ‘”ÒÒÔ’Ô•ÕUT×ÔÐÒWÓPTÒÈ
JCBˆÙYš[™HTÐ‘”ÒÒÔ’Ô•ÕUT×ÔÐÒWÔÒQ•
ÕJCB‹ÊˆHÐÒHH
™XY
HÜÝ™\Ý\œ™[[™XØ]Üˆ\Èš]\ÈÛ›H˜[YÚ[ˆH›ÛÝXˆ\ÈÛÛ™šYÝ\™Y[ƒBˆ
ˆÝXÚHØ^H]Ý™\˜Ý\œ™[ÛÛ™][ÛœÈ\™H™\ÜYÛˆH\‹\Ü˜\Ú\ËƒBˆ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÔ’Ô•ÕUT×ÔÐÒJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ‘”ÒÒÔ’Ô•ÕUT×ÔÐÒWÔÒQ•
JH	ˆTÐ‘”ÒÒÔ’Ô•ÕUT×ÔÐÒWÓPTÒÊCBˆÙYš[™HTÐ‘”ÒÒÔ’Ô•ÕUT×Ô”×ÓPTÒÈ
LJCBˆÙYš[™HTÐ‘”ÒÒÔ’Ô•ÕUT×Ô”×ÔÒQ•
JCB‹ÊˆH”ÈH
™XY
HÜ™\Ù]Ý]\ÈÚ[ˆ\Èš]\ÈÙ]žHHÜš]HÈÙ]Ü™\Ù]Ü™\Ù]ÚYÛ˜[[™È\È\ÜÙ\YƒBˆ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÔ’Ô•ÕUT×Ô”Ê
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ‘”ÒÒÔ’Ô•ÕUT×Ô”×ÔÒQ•
JH	ˆTÐ‘”ÒÒÔ’Ô•ÕUT×Ô”×ÓPTÒÊCBˆÙYš[™HTÐ‘”ÒÒÔ’Ô•ÕUT×Ô×ÓPTÒÈ
LJCBˆÙYš[™HTÐ‘”ÒÒÔ’Ô•ÕUT×Ô×ÔÒQ•
JCB‹ÊˆHÈH
™XY
HÜÝÙ\”Ý]\È\Èš]™Y›XÝÈHÜIÜÈÝÙ\ˆÝ]\Ë™YØ\™\ÜÈÙˆH\CBˆ
ˆÙˆÝÙ\ˆÝÚ]Ú[™È[\[Y[YƒBˆ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÔ’Ô•ÕUT×ÔÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ‘”ÒÒÔ’Ô•ÕUT×Ô×ÔÒQ•
JH	ˆTÐ‘”ÒÒÔ’Ô•ÕUT×Ô×ÓPTÒÊCBˆÙYš[™HTÐ‘”ÒÒÔ’Ô•ÕUT×ÓÑWÓPTÒÈ
ŒJCBˆÙYš[™HTÐ‘”ÒÒÔ’Ô•ÕUT×ÓÑWÔÒQ•
UJCB‹ÊˆHÑHH
™XY
HÝÔÜYY]šXÙP]XÚY\Èš][™XØ]\ÈHÜYYÙˆH]šXÙH]XÚYÈ\ÈÜƒBˆ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÔ’Ô•ÕUT×ÓÑJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ‘”ÒÒÔ’Ô•ÕUT×ÓÑWÔÒQ•
JH	ˆTÐ‘”ÒÒÔ’Ô•ÕUT×ÓÑWÓPTÒÊCBˆÙYš[™HTÐ‘”ÒÒÔ’Ô•ÕUT×ÐÔÐ×ÓPTÒÈ
LJCBˆÙYš[™HTÐ‘”ÒÒÔ’Ô•ÕUT×ÐÔÐ×ÔÒQ•
M•JCB‹ÊˆHÔÐÈHÛÛ›™XÝÝ]\ÐÚ[™ÙH\Èš]\ÈÙ]Ú[™]™\ˆHÛÛ›™XÝÜˆ\ØÛÛ›™XÝ]™[ØØÝ\œËƒBˆ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÔ’Ô•ÕUT×ÐÔÐÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ‘”ÒÒÔ’Ô•ÕUT×ÐÔÐ×ÔÒQ•
JH	ˆTÐ‘”ÒÒÔ’Ô•ÕUT×ÐÔÐ×ÓPTÒÊCBˆÙYš[™HTÐ‘”ÒÒÔ’Ô•ÕUT×ÔTÐ×ÓPTÒÈ
ŒJCBˆÙYš[™HTÐ‘”ÒÒÔ’Ô•ÕUT×ÔTÐ×ÔÒQ•
MÕJCB‹ÊˆHTÐÈHÜ[˜X›TÝ]\ÐÚ[™ÙH\Èš]\ÈÙ]Ú[ˆ\™Ø\™H]™[ÈØ]\ÙHHÜ[˜X›TÝ]\Èš]È™HÛX\™YƒBˆ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÔ’Ô•ÕUT×ÔTÐÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ‘”ÒÒÔ’Ô•ÕUT×ÔTÐ×ÔÒQ•
JH	ˆTÐ‘”ÒÒÔ’Ô•ÕUT×ÔTÐ×ÓPTÒÊCBˆÙYš[™HTÐ‘”ÒÒÔ’Ô•ÕUT×ÔÔÐ×ÓPTÒÈ
JCBˆÙYš[™HTÐ‘”ÒÒÔ’Ô•ÕUT×ÔÔÐ×ÔÒQ•
NJCB‹ÊˆHÔÐÈHÜÝ\Ü[™Ý]\ÐÚ[™ÙH\Èš]\ÈÙ]Ú[ˆH[™\Ý[YHÙ\]Y[˜ÙH\ÈÛÛ\]YƒBˆ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÔ’Ô•ÕUT×ÔÔÐÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ‘”ÒÒÔ’Ô•ÕUT×ÔÔÐ×ÔÒQ•
JH	ˆTÐ‘”ÒÒÔ’Ô•ÕUT×ÔÔÐ×ÓPTÒÊCBˆÙYš[™HTÐ‘”ÒÒÔ’Ô•ÕUT×ÓÐÒP×ÓPTÒÈ
JCBˆÙYš[™HTÐ‘”ÒÒÔ’Ô•ÕUT×ÓÐÒP×ÔÒQ•
NUJCB‹ÊˆHÐÒPÈHÜÝ™\Ý\œ™[[™XØ]ÜÚ[™ÙH\Èš]\È˜[YÛ›HYˆÝ™\˜Ý\œ™[ÛÛ™][ÛœÈ\™H™\ÜYÛˆH\‹\Ü˜\Ú\ËƒBˆ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÔ’Ô•ÕUT×ÓÐÒPÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ‘”ÒÒÔ’Ô•ÕUT×ÓÐÒP×ÔÒQ•
JH	ˆTÐ‘”ÒÒÔ’Ô•ÕUT×ÓÐÒP×ÓPTÒÊCBˆÙYš[™HTÐ‘”ÒÒÔ’Ô•ÕUT×Ô”Ð×ÓPTÒÈ
LJCBˆÙYš[™HTÐ‘”ÒÒÔ’Ô•ÕUT×Ô”Ð×ÔÒQ•
ŒJCB‹ÊˆH”ÐÈHÜ™\Ù]Ý]\ÐÚ[™ÙH\Èš]\ÈÙ]]H[™ÙˆHL\ÈÜ™\Ù]ÚYÛ˜[ƒBˆ
‹ÃBˆÙYš[™HTÐ‘”ÒÒÔ’Ô•ÕUT×Ô”ÐÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ‘”ÒÒÔ’Ô•ÕUT×Ô”Ð×ÔÒQ•
JH	ˆTÐ‘”ÒÒÔ’Ô•ÕUT×Ô”Ð×ÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHÔ•SÑHHÛÛ›ÛÈHÜYˆ]\È]XÚYÈHÜÝ›ØÚÈÜˆH]šXÙH›ØÚÈ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ‘”ÒÔÔ•SÑWÒQÓPTÒÈ
UJCBˆÙYš[™HTÐ‘”ÒÔÔ•SÑWÒQÔÒQ•
JCB‹ÊˆHQHÜQ[ˆ˜[YKƒBˆ
‹ÃBˆÙYš[™HTÐ‘”ÒÔÔ•SÑWÒQ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ‘”ÒÔÔ•SÑWÒQÔÒQ•
JH	ˆTÐ‘”ÒÔÔ•SÑWÒQÓPTÒÊCBˆÙYš[™HTÐ‘”ÒÔÔ•SÑWÒQÑS—ÓPTÒÈ
LJCBˆÙYš[™HTÐ‘”ÒÔÔ•SÑWÒQÑS—ÔÒQ•
JCB‹ÊˆHQÑSˆHÜQ[ˆ[]\[˜X›KƒBˆ
‹ÃBˆÙYš[™HTÐ‘”ÒÔÔ•SÑWÒQÑSŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ‘”ÒÔÔ•SÑWÒQÑS—ÔÒQ•
JH	ˆTÐ‘”ÒÔÔ•SÑWÒQÑS—ÓPTÒÊCBˆÙYš[™HTÐ‘”ÒÔÔ•SÑWÑU—ÑSP“WÓPTÒÈ
LJCBˆÙYš[™HTÐ‘”ÒÔÔ•SÑWÑU—ÑSP“WÔÒQ•
M•JCB‹ÊˆHU—ÑSP“HHNˆ]šXÙHˆÜÝƒBˆ
‹ÃBˆÙYš[™HTÐ‘”ÒÔÔ•SÑWÑU—ÑSP“J
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ‘”ÒÔÔ•SÑWÑU—ÑSP“WÔÒQ•
JH	ˆTÐ‘”ÒÔÔ•SÑWÑU—ÑSP“WÓPTÒÊCB‹ÊˆHH
‹ÃBƒBƒB‹ÊˆCBˆ
ˆCBˆ
‹ÈÊˆ[™ÙˆÜ›Ý\TÐ‘”ÒÔ™YÚ\Ý\—ÓX\ÚÜÈ
‹ÃBƒBƒB‹ÊˆTÐ‘”ÒH\š\\˜[[œÝ[˜ÙH˜\ÙHY™\ÜÙ\È
‹ÃBˆÚYˆ
×ÐT“WÑ‘PUT‘WÐÓTÑH	ˆŠCBˆÊŠˆ\š\\˜[TÐ‘”Ò˜\ÙHY™\ÜÈ
‹ÃBˆÙYš[™HTÐ‘”ÒÐTÑH
LLŒJCBˆÊŠˆ\š\\˜[TÐ‘”Ò˜\ÙHY™\ÜÈ
‹ÃBˆÙYš[™HTÐ‘”ÒÐTÑWÓ”È
LŒJCBˆÊŠˆ\š\\˜[TÐ‘”Ò˜\ÙHÚ[\ˆ
‹ÃBˆÙYš[™HTÐ‘”Ò

TÐ‘”ÒÕ\H
ŠUTÐ‘”ÒÐTÑJCBˆÊŠˆ\š\\˜[TÐ‘”Ò˜\ÙHÚ[\ˆ
‹ÃBˆÙYš[™HTÐ‘”ÒÓ”È

TÐ‘”ÒÕ\H
ŠUTÐ‘”ÒÐTÑWÓ”ÊCBˆÊŠˆ\œ˜^H[š]X[^™\ˆÙˆTÐ‘”Ò\š\\˜[˜\ÙHY™\ÜÙ\È
‹ÃBˆÙYš[™HTÐ‘”ÒÐTÑWÐQ”ÈÈTÐ‘”ÒÐTÑHCBˆÊŠˆ\œ˜^H[š]X[^™\ˆÙˆTÐ‘”Ò\š\\˜[˜\ÙHÚ[\œÈ
‹ÃBˆÙYš[™HTÐ‘”ÒÐTÑWÔ”ÈÈTÐ‘”ÒCBˆÊŠˆ\œ˜^H[š]X[^™\ˆÙˆTÐ‘”Ò\š\\˜[˜\ÙHY™\ÜÙ\È
‹ÃBˆÙYš[™HTÐ‘”ÒÐTÑWÐQ”×Ó”ÈÈTÐ‘”ÒÐTÑWÓ”ÈCBˆÊŠˆ\œ˜^H[š]X[^™\ˆÙˆTÐ‘”Ò\š\\˜[˜\ÙHÚ[\œÈ
‹ÃBˆÙYš[™HTÐ‘”ÒÐTÑWÔ”×Ó”ÈÈTÐ‘”ÒÓ”ÈCBˆÙ[ÙCBˆÊŠˆ\š\\˜[TÐ‘”Ò˜\ÙHY™\ÜÈ
‹ÃBˆÙYš[™HTÐ‘”ÒÐTÑH
LŒJCBˆÊŠˆ\š\\˜[TÐ‘”Ò˜\ÙHÚ[\ˆ
‹ÃBˆÙYš[™HTÐ‘”Ò

TÐ‘”ÒÕ\H
ŠUTÐ‘”ÒÐTÑJCBˆÊŠˆ\œ˜^H[š]X[^™\ˆÙˆTÐ‘”Ò\š\\˜[˜\ÙHY™\ÜÙ\È
‹ÃBˆÙYš[™HTÐ‘”ÒÐTÑWÐQ”ÈÈTÐ‘”ÒÐTÑHCBˆÊŠˆ\œ˜^H[š]X[^™\ˆÙˆTÐ‘”Ò\š\\˜[˜\ÙHÚ[\œÈ
‹ÃBˆÙYš[™HTÐ‘”ÒÐTÑWÔ”ÈÈTÐ‘”ÒCBˆÙ[™YƒB‹ÊŠˆ[\œ\™XÝÜœÈ›ÜˆHTÐ‘”Ò\š\\˜[\H
‹ÃBˆÙYš[™HTÐ‘”ÒÒT”TÈÈTÐŒÒT”[ˆCBˆÙYš[™HTÐ‘”ÒÓ‘QQÓ×ÒT”TÈÈTÐŒÓ‘QQÓ×ÒT”[ˆCBƒB‹ÊˆCBˆ
ˆCBˆ
‹ÈÊˆ[™ÙˆÜ›Ý\TÐ‘”ÒÔ\š\\˜[ÐXØÙ\Ü×Ó^Y\ˆ
‹ÃBƒBƒB‹ÊˆKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKCBˆKHTÐ’Ñ\š\\˜[XØÙ\ÜÈ^Y\ƒBˆKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKH
‹ÃBƒB‹ÊˆCBˆ
ˆYÙÜ›Ý\TÐ’ÑÔ\š\\˜[ÐXØÙ\Ü×Ó^Y\ˆTÐ’Ñ\š\\˜[XØÙ\ÜÈ^Y\ƒBˆ
ˆÃBˆ
‹ÃBƒB‹ÊŠˆTÐ’ÑH™YÚ\Ý\ˆ^[Ý]\YYˆ
‹ÃB\YYˆÝXÝÃBˆ×ÒSÈZ[Ì—ÝUÓQÕUÈÊŠTÐˆ]šXÙHÛÛ[X[™ÔÝ]\È™YÚ\Ý\‹Ù™œÙ]ˆ
‹ÃBˆ×ÒHZ[Ì—ÝS‘“ÎÈÊŠTÐˆ[™›È™YÚ\Ý\‹Ù™œÙ]ˆ
‹ÃBˆ×ÒSÈZ[Ì—ÝTTÕÕT•ÈÊŠTÐˆTÛÛ[X[™ÔÝ]\È\ÝÝ\Y™\ÜËÙ™œÙ]ˆ
‹ÃBˆ×ÒSÈZ[Ì—ÝUP•Q”ÕT•ÈÊŠTÐˆ]HY™™\ˆÝ\Y™\ÜËÙ™œÙ]ˆÈ
‹ÃBˆ×ÒSÈZ[Ì—ÝNÈÊŠTÐˆ[šÈÝÙ\ˆX[˜YÙ[Y[™YÚ\Ý\‹Ù™œÙ]ˆL
‹ÃBˆ×ÒSÈZ[Ì—ÝTÒÒTÈÊŠTÐˆ[™Ú[ÚÚ\Ù™œÙ]ˆM
‹ÃBˆ×ÒSÈZ[Ì—ÝTS•TÑNÈÊŠTÐˆ[™Ú[Y™™\ˆ[ˆ\ÙKÙ™œÙ]ˆN
‹ÃBˆ×ÒSÈZ[Ì—ÝT•QÑ‘ÎÈÊŠTÐˆ[™Ú[Y™™\ˆÛÛ™šYÝ\˜][Ûˆ™YÚ\Ý\‹Ù™œÙ]ˆPÈ
‹ÃBˆ×ÒSÈZ[Ì—ÝS•ÕUÈÊŠTÐˆ[\œ\Ý]\È™YÚ\Ý\‹Ù™œÙ]ˆŒ
‹ÃBˆ×ÒSÈZ[Ì—ÝS•SŽÈÊŠTÐˆ[\œ\[˜X›H™YÚ\Ý\‹Ù™œÙ]ˆ
‹ÃBˆ×ÒSÈZ[Ì—ÝS•ÑUÕUÈÊŠTÐˆÙ][\œ\Ý]\È™YÚ\Ý\‹Ù™œÙ]ˆŽ
‹ÃBˆZ[Ý‘TÑT•‘QÌÎNÃBˆ×ÒHZ[Ì—ÝTÑÑÓNÈÊŠTÐˆ[™Ú[ÙÙÛH™YÚ\Ý\‹Ù™œÙ]ˆÍ
‹ÃBŸHTÐ’ÑÕ\NÃBƒB‹ÊˆKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKCBˆKHTÐ’Ñ™YÚ\Ý\ˆX\ÚÜÃBˆKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKH
‹ÃBƒB‹ÊˆCBˆ
ˆYÙÜ›Ý\TÐ’ÑÔ™YÚ\Ý\—ÓX\ÚÜÈTÐ’Ñ™YÚ\Ý\ˆX\ÚÜÃBˆ
ˆÃBˆ
‹ÃBƒB‹ÊˆH˜[YHUÓQÕUHTÐˆ]šXÙHÛÛ[X[™ÔÝ]\È™YÚ\Ý\ˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ’ÑÑUÓQÕUÑU—ÐQ—ÓPTÒÈ
Ñ•JCBˆÙYš[™HTÐ’ÑÑUÓQÕUÑU—ÐQ—ÔÒQ•
JCB‹ÊˆHU—ÐQˆHTÐˆ]šXÙHY™\ÜËƒBˆ
‹ÃBˆÙYš[™HTÐ’ÑÑUÓQÕUÑU—ÐQŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÑÑUÓQÕUÑU—ÐQ—ÔÒQ•
JH	ˆTÐ’ÑÑUÓQÕUÑU—ÐQ—ÓPTÒÊCBˆÙYš[™HTÐ’ÑÑUÓQÕUÑU—ÑS—ÓPTÒÈ
JCBˆÙYš[™HTÐ’ÑÑUÓQÕUÑU—ÑS—ÔÒQ•
ÕJCB‹ÊˆHU—ÑSˆHTÐˆ]šXÙH[˜X›KƒBˆ
‹ÃBˆÙYš[™HTÐ’ÑÑUÓQÕUÑU—ÑSŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÑÑUÓQÕUÑU—ÑS—ÔÒQ•
JH	ˆTÐ’ÑÑUÓQÕUÑU—ÑS—ÓPTÒÊCBˆÙYš[™HTÐ’ÑÑUÓQÕUÔÑUTÓPTÒÈ
LJCBˆÙYš[™HTÐ’ÑÑUÓQÕUÔÑUTÔÒQ•
JCB‹ÊˆHÑUTHÑUTÚÙ[ˆ™XÙZ]™YƒBˆ
‹ÃBˆÙYš[™HTÐ’ÑÑUÓQÕUÔÑUT

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÑÑUÓQÕUÔÑUTÔÒQ•
JH	ˆTÐ’ÑÑUÓQÕUÔÑUTÓPTÒÊCBˆÙYš[™HTÐ’ÑÑUÓQÕUÑ“ÔÑWÓ‘QQÓ×ÓPTÒÈ
ŒJCBˆÙYš[™HTÐ’ÑÑUÓQÕUÑ“ÔÑWÓ‘QQÓ×ÔÒQ•
UJCB‹ÊˆH“ÔÑWÓ‘QQÓÈH›Ü˜Ù\ÈH‘QQÓÈÝ]]È[Ø^\È™HÛŽ‹ƒBˆ
‹ÃBˆÙYš[™HTÐ’ÑÑUÓQÕUÑ“ÔÑWÓ‘QQÓÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÑÑUÓQÕUÑ“ÔÑWÓ‘QQÓ×ÔÒQ•
JH	ˆTÐ’ÑÑUÓQÕUÑ“ÔÑWÓ‘QQÓ×ÓPTÒÊCBˆÙYš[™HTÐ’ÑÑUÓQÕUÓWÔÕTÓPTÒÈ
JCBˆÙYš[™HTÐ’ÑÑUÓQÕUÓWÔÕTÔÒQ•
LUJCB‹ÊˆHWÔÕTHHÝ\ÜY‹ƒBˆ
‹ÃBˆÙYš[™HTÐ’ÑÑUÓQÕUÓWÔÕT

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÑÑUÓQÕUÓWÔÕTÔÒQ•
JH	ˆTÐ’ÑÑUÓQÕUÓWÔÕTÓPTÒÊCBˆÙYš[™HTÐ’ÑÑUÓQÕUÒS•Ó“R×ÐS×ÓPTÒÈ
LJCBˆÙYš[™HTÐ’ÑÑUÓQÕUÒS•Ó“R×ÐS×ÔÒQ•
L•JCB‹ÊˆHS•Ó“R×ÐSÈH[\œ\ÛˆRÈ›Üˆ[\œ\[™[ÈÕUT‹ƒBˆ
‹ÃBˆÙYš[™HTÐ’ÑÑUÓQÕUÒS•Ó“R×ÐSÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÑÑUÓQÕUÒS•Ó“R×ÐS×ÔÒQ•
JH	ˆTÐ’ÑÑUÓQÕUÒS•Ó“R×ÐS×ÓPTÒÊCBˆÙYš[™HTÐ’ÑÑUÓQÕUÒS•Ó“R×ÐRWÓPTÒÈ
ŒJCBˆÙYš[™HTÐ’ÑÑUÓQÕUÒS•Ó“R×ÐRWÔÒQ•
LÕJCB‹ÊˆHS•Ó“R×ÐRHH[\œ\ÛˆRÈ›Üˆ[\œ\[™[ÈSˆT‹ƒBˆ
‹ÃBˆÙYš[™HTÐ’ÑÑUÓQÕUÒS•Ó“R×ÐRJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÑÑUÓQÕUÒS•Ó“R×ÐRWÔÒQ•
JH	ˆTÐ’ÑÑUÓQÕUÒS•Ó“R×ÐRWÓPTÒÊCBˆÙYš[™HTÐ’ÑÑUÓQÕUÒS•Ó“R×ÐÓ×ÓPTÒÈ
JCBˆÙYš[™HTÐ’ÑÑUÓQÕUÒS•Ó“R×ÐÓ×ÔÒQ•
MJCB‹ÊˆHS•Ó“R×ÐÓÈH[\œ\ÛˆRÈ›ÜˆÛÛ›ÛÕUT‹ƒBˆ
‹ÃBˆÙYš[™HTÐ’ÑÑUÓQÕUÒS•Ó“R×ÐÓÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÑÑUÓQÕUÒS•Ó“R×ÐÓ×ÔÒQ•
JH	ˆTÐ’ÑÑUÓQÕUÒS•Ó“R×ÐÓ×ÓPTÒÊCBˆÙYš[™HTÐ’ÑÑUÓQÕUÒS•Ó“R×ÐÒWÓPTÒÈ
JCBˆÙYš[™HTÐ’ÑÑUÓQÕUÒS•Ó“R×ÐÒWÔÒQ•
MUJCB‹ÊˆHS•Ó“R×ÐÒHH[\œ\ÛˆRÈ›ÜˆÛÛ›ÛSˆT‹ƒBˆ
‹ÃBˆÙYš[™HTÐ’ÑÑUÓQÕUÒS•Ó“R×ÐÒJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÑÑUÓQÕUÒS•Ó“R×ÐÒWÔÒQ•
JH	ˆTÐ’ÑÑUÓQÕUÒS•Ó“R×ÐÒWÓPTÒÊCBˆÙYš[™HTÐ’ÑÑUÓQÕUÑÓÓ—ÓPTÒÈ
LJCBˆÙYš[™HTÐ’ÑÑUÓQÕUÑÓÓ—ÔÒQ•
M•JCB‹ÊˆHÓÓˆH]šXÙHÝ]\ÈHÛÛ›™XÝƒBˆ
‹ÃBˆÙYš[™HTÐ’ÑÑUÓQÕUÑÓÓŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÑÑUÓQÕUÑÓÓ—ÔÒQ•
JH	ˆTÐ’ÑÑUÓQÕUÑÓÓ—ÓPTÒÊCBˆÙYš[™HTÐ’ÑÑUÓQÕUÑÕT×ÓPTÒÈ
ŒJCBˆÙYš[™HTÐ’ÑÑUÓQÕUÑÕT×ÔÒQ•
MÕJCB‹ÊˆHÕTÈH]šXÙHÝ]\ÈHÝ\Ü[™ƒBˆ
‹ÃBˆÙYš[™HTÐ’ÑÑUÓQÕUÑÕTÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÑÑUÓQÕUÑÕT×ÔÒQ•
JH	ˆTÐ’ÑÑUÓQÕUÑÕT×ÓPTÒÊCBˆÙYš[™HTÐ’ÑÑUÓQÕUÓWÔÕT×ÓPTÒÈ
JCBˆÙYš[™HTÐ’ÑÑUÓQÕUÓWÔÕT×ÔÒQ•
NUJCB‹ÊˆHWÔÕTÈH]šXÙHÝ]\ÈHHÝ\Ü[™ƒBˆ
‹ÃBˆÙYš[™HTÐ’ÑÑUÓQÕUÓWÔÕTÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÑÑUÓQÕUÓWÔÕT×ÔÒQ•
JH	ˆTÐ’ÑÑUÓQÕUÓWÔÕT×ÓPTÒÊCBˆÙYš[™HTÐ’ÑÑUÓQÕUÓWÔ‘UÔÓPTÒÈ
LJCBˆÙYš[™HTÐ’ÑÑUÓQÕUÓWÔ‘UÔÔÒQ•
ŒJCB‹ÊˆHWÔ‘UÔHH™[[ÝHØZÙK]\[˜X›YžHTÐˆÜÝƒBˆ
‹ÃBˆÙYš[™HTÐ’ÑÑUÓQÕUÓWÔ‘UÔ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÑÑUÓQÕUÓWÔ‘UÔÔÒQ•
JH	ˆTÐ’ÑÑUÓQÕUÓWÔ‘UÔÓPTÒÊCBˆÙYš[™HTÐ’ÑÑUÓQÕUÔÜYYÓPTÒÈ
ÌJCBˆÙYš[™HTÐ’ÑÑUÓQÕUÔÜYYÔÒQ•
Œ•JCB‹ÊˆHÜYYH\ÈšY[[™XØ]\ÈHÜYY]ÚXÚH]šXÙHÜ\˜]\ÎˆŽˆ™\Ù\™YXŽƒBˆ
ˆ[\ÜYYLŽˆYÚ\ÜYYLXŽˆÝ\\‹\ÜYY
™\Ù\™Y›Üˆ]\™H\ÙJKƒBˆ
‹ÃBˆÙYš[™HTÐ’ÑÑUÓQÕUÔÜYY

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÑÑUÓQÕUÔÜYYÔÒQ•
JH	ˆTÐ’ÑÑUÓQÕUÔÜYYÓPTÒÊCBˆÙYš[™HTÐ’ÑÑUÓQÕUÑÓÓ—Ð×ÓPTÒÈ
LJCBˆÙYš[™HTÐ’ÑÑUÓQÕUÑÓÓ—Ð×ÔÒQ•
JCB‹ÊˆHÓÓ—ÐÈH]šXÙHÝ]\ÈHÛÛ›™XÝÚ[™ÙKƒBˆ
‹ÃBˆÙYš[™HTÐ’ÑÑUÓQÕUÑÓÓ—ÐÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÑÑUÓQÕUÑÓÓ—Ð×ÔÒQ•
JH	ˆTÐ’ÑÑUÓQÕUÑÓÓ—Ð×ÓPTÒÊCBˆÙYš[™HTÐ’ÑÑUÓQÕUÑÕT×Ð×ÓPTÒÈ
ŒJCBˆÙYš[™HTÐ’ÑÑUÓQÕUÑÕT×Ð×ÔÒQ•
UJCB‹ÊˆHÕT×ÐÈH]šXÙHÝ]\ÈHÝ\Ü[™Ú[™ÙKƒBˆ
‹ÃBˆÙYš[™HTÐ’ÑÑUÓQÕUÑÕT×ÐÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÑÑUÓQÕUÑÕT×Ð×ÔÒQ•
JH	ˆTÐ’ÑÑUÓQÕUÑÕT×Ð×ÓPTÒÊCBˆÙYš[™HTÐ’ÑÑUÓQÕUÑ‘T×Ð×ÓPTÒÈ
JCBˆÙYš[™HTÐ’ÑÑUÓQÕUÑ‘T×Ð×ÔÒQ•
•JCB‹ÊˆH‘T×ÐÈH]šXÙHÝ]\ÈH™\Ù]Ú[™ÙKƒBˆ
‹ÃBˆÙYš[™HTÐ’ÑÑUÓQÕUÑ‘T×ÐÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÑÑUÓQÕUÑ‘T×Ð×ÔÒQ•
JH	ˆTÐ’ÑÑUÓQÕUÑ‘T×Ð×ÓPTÒÊCBˆÙYš[™HTÐ’ÑÑUÓQÕUÕ•T×ÑP“ÕSÑQÓPTÒÈ
LJCBˆÙYš[™HTÐ’ÑÑUÓQÕUÕ•T×ÑP“ÕSÑQÔÒQ•
ŽJCB‹ÊˆH•T×ÑP“ÕSÑQH\Èš][™XØ]\ÈYˆ•TÈ\È]XÝYÜˆ›ÝƒBˆ
‹ÃBˆÙYš[™HTÐ’ÑÑUÓQÕUÕ•T×ÑP“ÕSÑQ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÑÑUÓQÕUÕ•T×ÑP“ÕSÑQÔÒQ•
JH	ˆTÐ’ÑÑUÓQÕUÕ•T×ÑP“ÕSÑQÓPTÒÊCBˆÙYš[™HTÐ’ÑÑUÓQÕUÔWÕTÕÓSÑWÓPTÒÈ
LJCBˆÙYš[™HTÐ’ÑÑUÓQÕUÔWÕTÕÓSÑWÔÒQ•
ŽUJCB‹ÊˆHWÕTÕÓSÑHH\ÈšY[\ÈÜš][ˆžHš\›]Ø\™HÈ]HH[ÈH\Ý[ÙH\ÈYš[™YžHHTÐŒ‹ŒÜXÚYšXØ][ÛƒBˆ
‹ÃBˆÙYš[™HTÐ’ÑÑUÓQÕUÔWÕTÕÓSÑJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÑÑUÓQÕUÔWÕTÕÓSÑWÔÒQ•
JH	ˆTÐ’ÑÑUÓQÕUÔWÕTÕÓSÑWÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHS‘“ÈHTÐˆ[™›È™YÚ\Ý\ˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ’ÑÒS‘“×Ñ”SQWÓ”—ÓPTÒÈ
Ñ‘•JCBˆÙYš[™HTÐ’ÑÒS‘“×Ñ”SQWÓ”—ÔÒQ•
JCB‹ÊˆH”SQWÓ”ˆHœ˜[YH[X™\‹ƒBˆ
‹ÃBˆÙYš[™HTÐ’ÑÒS‘“×Ñ”SQWÓ”Š
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÑÒS‘“×Ñ”SQWÓ”—ÔÒQ•
JH	ˆTÐ’ÑÒS‘“×Ñ”SQWÓ”—ÓPTÒÊCBˆÙYš[™HTÐ’ÑÒS‘“×ÑT”—ÐÓÑWÓPTÒÈ
ÎJCBˆÙYš[™HTÐ’ÑÒS‘“×ÑT”—ÐÓÑWÔÒQ•
LUJCB‹ÊˆHT”—ÐÓÑHHH\œ›ÜˆÛÙHÚXÚ\ÝØØÝ\œ™Y‹ƒBˆ
‹ÃBˆÙYš[™HTÐ’ÑÒS‘“×ÑT”—ÐÓÑJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÑÒS‘“×ÑT”—ÐÓÑWÔÒQ•
JH	ˆTÐ’ÑÒS‘“×ÑT”—ÐÓÑWÓPTÒÊCBˆÙYš[™HTÐ’ÑÒS‘“×ÓRS”‘U—ÓPTÒÈ
‘ŒJCBˆÙYš[™HTÐ’ÑÒS‘“×ÓRS”‘U—ÔÒQ•
M•JCB‹ÊˆHRS”‘UˆHZ[›Üˆ™]š\Ú[Û‹ƒBˆ
‹ÃBˆÙYš[™HTÐ’ÑÒS‘“×ÓRS”‘UŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÑÒS‘“×ÓRS”‘U—ÔÒQ•
JH	ˆTÐ’ÑÒS‘“×ÓRS”‘U—ÓPTÒÊCBˆÙYš[™HTÐ’ÑÒS‘“×ÓPR”‘U—ÓPTÒÈ
‘ŒJCBˆÙYš[™HTÐ’ÑÒS‘“×ÓPR”‘U—ÔÒQ•
JCB‹ÊˆHPR”‘UˆHXZ›Üˆ™]š\Ú[Û‹ƒBˆ
‹ÃBˆÙYš[™HTÐ’ÑÒS‘“×ÓPR”‘UŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÑÒS‘“×ÓPR”‘U—ÔÒQ•
JH	ˆTÐ’ÑÒS‘“×ÓPR”‘U—ÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHTTÕÕT•HTÐˆTÛÛ[X[™ÔÝ]\È\ÝÝ\Y™\ÜÈ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ’ÑÑTTÕÕT•ÑTÓTÕÔ‘×ÓPTÒÈ
‘‘ŒJCBˆÙYš[™HTÐ’ÑÑTTÕÕT•ÑTÓTÕÔ‘×ÔÒQ•
JCB‹ÊˆHTÓTÕÔ‘ÈH›ÙÜ˜[[XX›HÜ[ÛˆÙˆHTÐˆTÛÛ[X[™ÔÝ]\È\ÝY™\ÜËƒBˆ
‹ÃBˆÙYš[™HTÐ’ÑÑTTÕÕT•ÑTÓTÕÔ‘Ê
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÑÑTTÕÕT•ÑTÓTÕÔ‘×ÔÒQ•
JH	ˆTÐ’ÑÑTTÕÕT•ÑTÓTÕÔ‘×ÓPTÒÊCBˆÙYš[™HTÐ’ÑÑTTÕÕT•ÑTÓTÕÑ’VQÓPTÒÈ
‘‘ŒJCBˆÙYš[™HTÐ’ÑÑTTÕÕT•ÑTÓTÕÑ’VQÔÒQ•
ŒJCB‹ÊˆHTÓTÕÑ’VQHš^YÜ[ÛˆÙˆTÐˆTÛÛ[X[™ÔÝ]\È\ÝY™\ÜËƒBˆ
‹ÃBˆÙYš[™HTÐ’ÑÑTTÕÕT•ÑTÓTÕÑ’VQ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÑÑTTÕÕT•ÑTÓTÕÑ’VQÔÒQ•
JH	ˆTÐ’ÑÑTTÕÕT•ÑTÓTÕÑ’VQÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHUP•Q”ÕT•HTÐˆ]HY™™\ˆÝ\Y™\ÜÈ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ’ÑÑUP•Q”ÕT•ÑWÐ•Q—ÓPTÒÈ
‘‘‘‘‘‘‘•JCBˆÙYš[™HTÐ’ÑÑUP•Q”ÕT•ÑWÐ•Q—ÔÒQ•
JCB‹ÊˆHWÐ•QˆHÝ\Y™\ÜÈÙˆHY[[ÜžHYÙHÚ\™H[[™Ú[]HY™™\œÈ\™HØØ]YƒBˆ
‹ÃBˆÙYš[™HTÐ’ÑÑUP•Q”ÕT•ÑWÐ•QŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÑÑUP•Q”ÕT•ÑWÐ•Q—ÔÒQ•
JH	ˆTÐ’ÑÑUP•Q”ÕT•ÑWÐ•Q—ÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHHHTÐˆ[šÈÝÙ\ˆX[˜YÙ[Y[™YÚ\Ý\ˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ’ÑÓWÒT‘Ò×ÓPTÒÈ
•JCBˆÙYš[™HTÐ’ÑÓWÒT‘Ò×ÔÒQ•
JCB‹ÊˆHT‘ÒÈHÜÝ[š]X]Y™\Ý[YH\˜][ÛˆHËƒBˆ
‹ÃBˆÙYš[™HTÐ’ÑÓWÒT‘ÒÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÑÓWÒT‘Ò×ÔÒQ•
JH	ˆTÐ’ÑÓWÒT‘Ò×ÓPTÒÊCBˆÙYš[™HTÐ’ÑÓWÒT‘ÔÕ×ÓPTÒÈ
ŒJCBˆÙYš[™HTÐ’ÑÓWÒT‘ÔÕ×ÔÒQ•
JCB‹ÊˆHT‘ÔÕÈHÜÝ[š]X]Y™\Ý[YH\˜][ÛˆHÕËƒBˆ
‹ÃBˆÙYš[™HTÐ’ÑÓWÒT‘ÔÕÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÑÓWÒT‘ÔÕ×ÔÒQ•
JH	ˆTÐ’ÑÓWÒT‘ÔÕ×ÓPTÒÊCBˆÙYš[™HTÐ’ÑÓWÑUWÔS‘S‘×ÓPTÒÈ
LJCBˆÙYš[™HTÐ’ÑÓWÑUWÔS‘S‘×ÔÒQ•
JCB‹ÊˆHUWÔS‘S‘ÈH\ÈÛ™È\È\Èš]\ÈÙ]ÈÛ™H[™HÝ\ÜYš]\ÈÙ]ÈÛ™KÈÚ[Bˆ
ˆ™]\›ˆH–QU[™ÚZÙHÛˆ]™\žHHÚÙ[ˆ]™XÙZ]™\ËƒBˆ
‹ÃBˆÙYš[™HTÐ’ÑÓWÑUWÔS‘S‘Ê
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÑÓWÑUWÔS‘S‘×ÔÒQ•
JH	ˆTÐ’ÑÓWÑUWÔS‘S‘×ÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHTÒÒTHTÐˆ[™Ú[ÚÚ\
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ’ÑÑTÒÒTÔÒÒTÓPTÒÈ
‘‘•JCBˆÙYš[™HTÐ’ÑÑTÒÒTÔÒÒTÔÒQ•
JCB‹ÊˆHÒÒTH[™Ú[ÚÚ\ˆÜš][™ÈHÈÛ™HÙˆ\ÙHš]ËÚ[[™XØ]HÈÈ]]]\ÝBˆ
ˆXXÝ]˜]HHY™™\ˆ\ÜÚYÛ™YÈ\È[™Ú[[™™]\›ˆÛÛ›Û˜XÚÈÈÛÙØ\™KƒBˆ
‹ÃBˆÙYš[™HTÐ’ÑÑTÒÒTÔÒÒT

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÑÑTÒÒTÔÒÒTÔÒQ•
JH	ˆTÐ’ÑÑTÒÒTÔÒÒTÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHTS•TÑHHTÐˆ[™Ú[Y™™\ˆ[ˆ\ÙH
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ’ÑÑTS•TÑWÐ•Q—ÓPTÒÈ
‘ÕJCBˆÙYš[™HTÐ’ÑÑTS•TÑWÐ•Q—ÔÒQ•
•JCB‹ÊˆH•QˆHY™™\ˆ[ˆ\ÙNˆ\È™YÚ\Ý\ˆ\ÈÛ™Hš]\ˆ\ÚXØ[[™Ú[ƒBˆ
‹ÃBˆÙYš[™HTÐ’ÑÑTS•TÑWÐ•QŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÑÑTS•TÑWÐ•Q—ÔÒQ•
JH	ˆTÐ’ÑÑTS•TÑWÐ•Q—ÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHT•QÑ‘ÈHTÐˆ[™Ú[Y™™\ˆÛÛ™šYÝ\˜][Ûˆ™YÚ\Ý\ˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ’ÑÑT•QÑ‘×Ð•Q—ÔÐ—ÓPTÒÈ
‘ÕJCBˆÙYš[™HTÐ’ÑÑT•QÑ‘×Ð•Q—ÔÐ—ÔÒQ•
•JCB‹ÊˆH•Q—ÔÐˆHY™™\ˆ\ØYÙNˆ\È™YÚ\Ý\ˆ\ÈÛ™Hš]\ˆ\ÚXØ[[™Ú[ƒBˆ
‹ÃBˆÙYš[™HTÐ’ÑÑT•QÑ‘×Ð•Q—ÔÐŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÑÑT•QÑ‘×Ð•Q—ÔÐ—ÔÒQ•
JH	ˆTÐ’ÑÑT•QÑ‘×Ð•Q—ÔÐ—ÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHS•ÕUHTÐˆ[\œ\Ý]\È™YÚ\Ý\ˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ’ÑÒS•ÕUÑTÕUÓPTÒÈ
UJCBˆÙYš[™HTÐ’ÑÒS•ÕUÑTÕUÔÒQ•
JCB‹ÊˆHTÕUH[\œ\Ý]\È™YÚ\Ý\ˆš]›ÜˆHÛÛ›ÛTÕU\™XÝ[Û‹ƒBˆ
‹ÃBˆÙYš[™HTÐ’ÑÒS•ÕUÑTÕU

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÑÒS•ÕUÑTÕUÔÒQ•
JH	ˆTÐ’ÑÒS•ÕUÑTÕUÓPTÒÊCBˆÙYš[™HTÐ’ÑÒS•ÕUÑTS—ÓPTÒÈ
•JCBˆÙYš[™HTÐ’ÑÒS•ÕUÑTS—ÔÒQ•
UJCB‹ÊˆHTSˆH[\œ\Ý]\È™YÚ\Ý\ˆš]›ÜˆHÛÛ›ÛTSˆ\™XÝ[Û‹ƒBˆ
‹ÃBˆÙYš[™HTÐ’ÑÒS•ÕUÑTSŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÑÒS•ÕUÑTS—ÔÒQ•
JH	ˆTÐ’ÑÒS•ÕUÑTS—ÓPTÒÊCBˆÙYš[™HTÐ’ÑÒS•ÕUÑTSÕUÓPTÒÈ
JCBˆÙYš[™HTÐ’ÑÒS•ÕUÑTSÕUÔÒQ•
•JCB‹ÊˆHTSÕUH[\œ\Ý]\È™YÚ\Ý\ˆš]›ÜˆHTHÕU\™XÝ[Û‹ƒBˆ
‹ÃBˆÙYš[™HTÐ’ÑÒS•ÕUÑTSÕU

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÑÒS•ÕUÑTSÕUÔÒQ•
JH	ˆTÐ’ÑÒS•ÕUÑTSÕUÓPTÒÊCBˆÙYš[™HTÐ’ÑÒS•ÕUÑTRS—ÓPTÒÈ
JCBˆÙYš[™HTÐ’ÑÒS•ÕUÑTRS—ÔÒQ•
ÕJCB‹ÊˆHTRSˆH[\œ\Ý]\È™YÚ\Ý\ˆš]›ÜˆHTHSˆ\™XÝ[Û‹ƒBˆ
‹ÃBˆÙYš[™HTÐ’ÑÒS•ÕUÑTRSŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÑÒS•ÕUÑTRS—ÔÒQ•
JH	ˆTÐ’ÑÒS•ÕUÑTRS—ÓPTÒÊCBˆÙYš[™HTÐ’ÑÒS•ÕUÑT“ÕUÓPTÒÈ
LJCBˆÙYš[™HTÐ’ÑÒS•ÕUÑT“ÕUÔÒQ•
JCB‹ÊˆHT“ÕUH[\œ\Ý]\È™YÚ\Ý\ˆš]›ÜˆHTˆÕU\™XÝ[Û‹ƒBˆ
‹ÃBˆÙYš[™HTÐ’ÑÒS•ÕUÑT“ÕU

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÑÒS•ÕUÑT“ÕUÔÒQ•
JH	ˆTÐ’ÑÒS•ÕUÑT“ÕUÓPTÒÊCBˆÙYš[™HTÐ’ÑÒS•ÕUÑT’S—ÓPTÒÈ
ŒJCBˆÙYš[™HTÐ’ÑÒS•ÕUÑT’S—ÔÒQ•
UJCB‹ÊˆHT’SˆH[\œ\Ý]\È™YÚ\Ý\ˆš]›ÜˆHTˆSˆ\™XÝ[Û‹ƒBˆ
‹ÃBˆÙYš[™HTÐ’ÑÒS•ÕUÑT’SŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÑÒS•ÕUÑT’S—ÔÒQ•
JH	ˆTÐ’ÑÒS•ÕUÑT’S—ÓPTÒÊCBˆÙYš[™HTÐ’ÑÒS•ÕUÑTÓÕUÓPTÒÈ
JCBˆÙYš[™HTÐ’ÑÒS•ÕUÑTÓÕUÔÒQ•
•JCB‹ÊˆHTÓÕUH[\œ\Ý]\È™YÚ\Ý\ˆš]›ÜˆHTÈÕU\™XÝ[Û‹ƒBˆ
‹ÃBˆÙYš[™HTÐ’ÑÒS•ÕUÑTÓÕU

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÑÒS•ÕUÑTÓÕUÔÒQ•
JH	ˆTÐ’ÑÒS•ÕUÑTÓÕUÓPTÒÊCBˆÙYš[™HTÐ’ÑÒS•ÕUÑTÒS—ÓPTÒÈ
JCBˆÙYš[™HTÐ’ÑÒS•ÕUÑTÒS—ÔÒQ•
ÕJCB‹ÊˆHTÒSˆH[\œ\Ý]\È™YÚ\Ý\ˆš]›ÜˆHTÈSˆ\™XÝ[Û‹ƒBˆ
‹ÃBˆÙYš[™HTÐ’ÑÒS•ÕUÑTÒSŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÑÒS•ÕUÑTÒS—ÔÒQ•
JH	ˆTÐ’ÑÒS•ÕUÑTÒS—ÓPTÒÊCBˆÙYš[™HTÐ’ÑÒS•ÕUÑTÕUÓPTÒÈ
LJCBˆÙYš[™HTÐ’ÑÒS•ÕUÑTÕUÔÒQ•
JCB‹ÊˆHTÕUH[\œ\Ý]\È™YÚ\Ý\ˆš]›ÜˆHTÕU\™XÝ[Û‹ƒBˆ
‹ÃBˆÙYš[™HTÐ’ÑÒS•ÕUÑTÕU

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÑÒS•ÕUÑTÕUÔÒQ•
JH	ˆTÐ’ÑÒS•ÕUÑTÕUÓPTÒÊCBˆÙYš[™HTÐ’ÑÒS•ÕUÑTS—ÓPTÒÈ
ŒJCBˆÙYš[™HTÐ’ÑÒS•ÕUÑTS—ÔÒQ•
UJCB‹ÊˆHTSˆH[\œ\Ý]\È™YÚ\Ý\ˆš]›ÜˆHTSˆ\™XÝ[Û‹ƒBˆ
‹ÃBˆÙYš[™HTÐ’ÑÒS•ÕUÑTSŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÑÒS•ÕUÑTS—ÔÒQ•
JH	ˆTÐ’ÑÒS•ÕUÑTS—ÓPTÒÊCBˆÙYš[™HTÐ’ÑÒS•ÕUÑTSÕUÓPTÒÈ
JCBˆÙYš[™HTÐ’ÑÒS•ÕUÑTSÕUÔÒQ•
LJCB‹ÊˆHTSÕUH[\œ\Ý]\È™YÚ\Ý\ˆš]›ÜˆHTHÕU\™XÝ[Û‹ƒBˆ
‹ÃBˆÙYš[™HTÐ’ÑÒS•ÕUÑTSÕU

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÑÒS•ÕUÑTSÕUÔÒQ•
JH	ˆTÐ’ÑÒS•ÕUÑTSÕUÓPTÒÊCBˆÙYš[™HTÐ’ÑÒS•ÕUÑTRS—ÓPTÒÈ
JCBˆÙYš[™HTÐ’ÑÒS•ÕUÑTRS—ÔÒQ•
LUJCB‹ÊˆHTRSˆH[\œ\Ý]\È™YÚ\Ý\ˆš]›ÜˆHTHSˆ\™XÝ[Û‹ƒBˆ
‹ÃBˆÙYš[™HTÐ’ÑÒS•ÕUÑTRSŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÑÒS•ÕUÑTRS—ÔÒQ•
JH	ˆTÐ’ÑÒS•ÕUÑTRS—ÓPTÒÊCBˆÙYš[™HTÐ’ÑÒS•ÕUÑ”SQWÒS•ÓPTÒÈ
JCBˆÙYš[™HTÐ’ÑÒS•ÕUÑ”SQWÒS•ÔÒQ•
ÌJCB‹ÊˆH”SQWÒS•Hœ˜[YH[\œ\ƒBˆ
‹ÃBˆÙYš[™HTÐ’ÑÒS•ÕUÑ”SQWÒS•

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÑÒS•ÕUÑ”SQWÒS•ÔÒQ•
JH	ˆTÐ’ÑÒS•ÕUÑ”SQWÒS•ÓPTÒÊCBˆÙYš[™HTÐ’ÑÒS•ÕUÑU—ÒS•ÓPTÒÈ
JCBˆÙYš[™HTÐ’ÑÒS•ÕUÑU—ÒS•ÔÒQ•
ÌUJCB‹ÊˆHU—ÒS•H]šXÙHÝ]\È[\œ\ƒBˆ
‹ÃBˆÙYš[™HTÐ’ÑÒS•ÕUÑU—ÒS•

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÑÒS•ÕUÑU—ÒS•ÔÒQ•
JH	ˆTÐ’ÑÒS•ÕUÑU—ÒS•ÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHS•SˆHTÐˆ[\œ\[˜X›H™YÚ\Ý\ˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ’ÑÒS•S—ÑTÒS•ÑS—ÓPTÒÈ
‘‘•JCBˆÙYš[™HTÐ’ÑÒS•S—ÑTÒS•ÑS—ÔÒQ•
JCB‹ÊˆHTÒS•ÑSˆHYˆ\Èš]\ÈÙ][™HÛÜœ™\ÜÛ™[™ÈTÐˆ[\œ\Ý]\Èš]\ÈÙ]HÃBˆ
ˆ[\œ\\ÈÙ[™\˜]YÛˆH[\œ\[™KƒBˆ
‹ÃBˆÙYš[™HTÐ’ÑÒS•S—ÑTÒS•ÑSŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÑÒS•S—ÑTÒS•ÑS—ÔÒQ•
JH	ˆTÐ’ÑÒS•S—ÑTÒS•ÑS—ÓPTÒÊCBˆÙYš[™HTÐ’ÑÒS•S—Ñ”SQWÒS•ÑS—ÓPTÒÈ
JCBˆÙYš[™HTÐ’ÑÒS•S—Ñ”SQWÒS•ÑS—ÔÒQ•
ÌJCB‹ÊˆH”SQWÒS•ÑSˆHYˆ\Èš]\ÈÙ][™HÛÜœ™\ÜÛ™[™ÈTÐˆ[\œ\Ý]\Èš]\ÈÙ]HÃBˆ
ˆ[\œ\\ÈÙ[™\˜]YÛˆH[\œ\[™KƒBˆ
‹ÃBˆÙYš[™HTÐ’ÑÒS•S—Ñ”SQWÒS•ÑSŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÑÒS•S—Ñ”SQWÒS•ÑS—ÔÒQ•
JH	ˆTÐ’ÑÒS•S—Ñ”SQWÒS•ÑS—ÓPTÒÊCBˆÙYš[™HTÐ’ÑÒS•S—ÑU—ÒS•ÑS—ÓPTÒÈ
JCBˆÙYš[™HTÐ’ÑÒS•S—ÑU—ÒS•ÑS—ÔÒQ•
ÌUJCB‹ÊˆHU—ÒS•ÑSˆHYˆ\Èš]\ÈÙ][™HÛÜœ™\ÜÛ™[™ÈTÐˆ[\œ\Ý]\Èš]\ÈÙ]HÃBˆ
ˆ[\œ\\ÈÙ[™\˜]YÛˆH[\œ\[™KƒBˆ
‹ÃBˆÙYš[™HTÐ’ÑÒS•S—ÑU—ÒS•ÑSŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÑÒS•S—ÑU—ÒS•ÑS—ÔÒQ•
JH	ˆTÐ’ÑÒS•S—ÑU—ÒS•ÑS—ÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHS•ÑUÕUHTÐˆÙ][\œ\Ý]\È™YÚ\Ý\ˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ’ÑÒS•ÑUÕUÑTÔÑUÒS•ÓPTÒÈ
‘‘•JCBˆÙYš[™HTÐ’ÑÒS•ÑUÕUÑTÔÑUÒS•ÔÒQ•
JCB‹ÊˆHTÔÑUÒS•HYˆÛÙØ\™HÜš]\ÈHÛ™HÈÛ™HÙˆ\ÙHš]ËHÛÜœ™\ÜÛ™[™ÈTÐˆ[\œ\Ý]\Èš]\ÈÙ]ƒBˆ
‹ÃBˆÙYš[™HTÐ’ÑÒS•ÑUÕUÑTÔÑUÒS•

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÑÒS•ÑUÕUÑTÔÑUÒS•ÔÒQ•
JH	ˆTÐ’ÑÒS•ÑUÕUÑTÔÑUÒS•ÓPTÒÊCBˆÙYš[™HTÐ’ÑÒS•ÑUÕUÑ”SQWÔÑUÒS•ÓPTÒÈ
JCBˆÙYš[™HTÐ’ÑÒS•ÑUÕUÑ”SQWÔÑUÒS•ÔÒQ•
ÌJCB‹ÊˆH”SQWÔÑUÒS•HYˆÛÙØ\™HÜš]\ÈHÛ™HÈÛ™HÙˆ\ÙHš]ËHÛÜœ™\ÜÛ™[™ÈTÐˆ[\œ\Ý]\Èš]\ÈÙ]ƒBˆ
‹ÃBˆÙYš[™HTÐ’ÑÒS•ÑUÕUÑ”SQWÔÑUÒS•

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÑÒS•ÑUÕUÑ”SQWÔÑUÒS•ÔÒQ•
JH	ˆTÐ’ÑÒS•ÑUÕUÑ”SQWÔÑUÒS•ÓPTÒÊCBˆÙYš[™HTÐ’ÑÒS•ÑUÕUÑU—ÔÑUÒS•ÓPTÒÈ
JCBˆÙYš[™HTÐ’ÑÒS•ÑUÕUÑU—ÔÑUÒS•ÔÒQ•
ÌUJCB‹ÊˆHU—ÔÑUÒS•HYˆÛÙØ\™HÜš]\ÈHÛ™HÈÛ™HÙˆ\ÙHš]ËHÛÜœ™\ÜÛ™[™ÈTÐˆ[\œ\Ý]\Èš]\ÈÙ]ƒBˆ
‹ÃBˆÙYš[™HTÐ’ÑÒS•ÑUÕUÑU—ÔÑUÒS•

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÑÒS•ÑUÕUÑU—ÔÑUÒS•ÔÒQ•
JH	ˆTÐ’ÑÒS•ÑUÕUÑU—ÔÑUÒS•ÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHTÑÑÓHHTÐˆ[™Ú[ÙÙÛH™YÚ\Ý\ˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ’ÑÑTÑÑÓWÕÑÑÓWÓPTÒÈ
Ñ‘‘‘‘‘‘•JCBˆÙYš[™HTÐ’ÑÑTÑÑÓWÕÑÑÓWÔÒQ•
JCB‹ÊˆHÑÑÓHH[™Ú[]HÙÙÛNˆ\ÈšY[[™XØ]\ÈHÝ\œ™[˜[YHÙˆH]HÙÙÛH›ÜˆHÛÜœ™\ÜÛ™[™È[™Ú[ƒBˆ
‹ÃBˆÙYš[™HTÐ’ÑÑTÑÑÓWÕÑÑÓJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÑÑTÑÑÓWÕÑÑÓWÔÒQ•
JH	ˆTÐ’ÑÑTÑÑÓWÕÑÑÓWÓPTÒÊCB‹ÊˆHH
‹ÃBƒBƒB‹ÊˆCBˆ
ˆCBˆ
‹ÈÊˆ[™ÙˆÜ›Ý\TÐ’ÑÔ™YÚ\Ý\—ÓX\ÚÜÈ
‹ÃBƒBƒB‹ÊˆTÐ’ÑH\š\\˜[[œÝ[˜ÙH˜\ÙHY™\ÜÙ\È
‹ÃBˆÚYˆ
×ÐT“WÑ‘PUT‘WÐÓTÑH	ˆŠCBˆÊŠˆ\š\\˜[TÐ’Ñ˜\ÙHY™\ÜÈ
‹ÃBˆÙYš[™HTÐ’ÑÐTÑH
LMJCBˆÊŠˆ\š\\˜[TÐ’Ñ˜\ÙHY™\ÜÈ
‹ÃBˆÙYš[™HTÐ’ÑÐTÑWÓ”È
MJCBˆÊŠˆ\š\\˜[TÐ’Ñ˜\ÙHÚ[\ˆ
‹ÃBˆÙYš[™HTÐ’Ñ

TÐ’ÑÕ\H
ŠUTÐ’ÑÐTÑJCBˆÊŠˆ\š\\˜[TÐ’Ñ˜\ÙHÚ[\ˆ
‹ÃBˆÙYš[™HTÐ’ÑÓ”È

TÐ’ÑÕ\H
ŠUTÐ’ÑÐTÑWÓ”ÊCBˆÊŠˆ\œ˜^H[š]X[^™\ˆÙˆTÐ’Ñ\š\\˜[˜\ÙHY™\ÜÙ\È
‹ÃBˆÙYš[™HTÐ’ÑÐTÑWÐQ”ÈÈTÐ’ÑÐTÑHCBˆÊŠˆ\œ˜^H[š]X[^™\ˆÙˆTÐ’Ñ\š\\˜[˜\ÙHÚ[\œÈ
‹ÃBˆÙYš[™HTÐ’ÑÐTÑWÔ”ÈÈTÐ’ÑCBˆÊŠˆ\œ˜^H[š]X[^™\ˆÙˆTÐ’Ñ\š\\˜[˜\ÙHY™\ÜÙ\È
‹ÃBˆÙYš[™HTÐ’ÑÐTÑWÐQ”×Ó”ÈÈTÐ’ÑÐTÑWÓ”ÈCBˆÊŠˆ\œ˜^H[š]X[^™\ˆÙˆTÐ’Ñ\š\\˜[˜\ÙHÚ[\œÈ
‹ÃBˆÙYš[™HTÐ’ÑÐTÑWÔ”×Ó”ÈÈTÐ’ÑÓ”ÈCBˆÙ[ÙCBˆÊŠˆ\š\\˜[TÐ’Ñ˜\ÙHY™\ÜÈ
‹ÃBˆÙYš[™HTÐ’ÑÐTÑH
MJCBˆÊŠˆ\š\\˜[TÐ’Ñ˜\ÙHÚ[\ˆ
‹ÃBˆÙYš[™HTÐ’Ñ

TÐ’ÑÕ\H
ŠUTÐ’ÑÐTÑJCBˆÊŠˆ\œ˜^H[š]X[^™\ˆÙˆTÐ’Ñ\š\\˜[˜\ÙHY™\ÜÙ\È
‹ÃBˆÙYš[™HTÐ’ÑÐTÑWÐQ”ÈÈTÐ’ÑÐTÑHCBˆÊŠˆ\œ˜^H[š]X[^™\ˆÙˆTÐ’Ñ\š\\˜[˜\ÙHÚ[\œÈ
‹ÃBˆÙYš[™HTÐ’ÑÐTÑWÔ”ÈÈTÐ’ÑCBˆÙ[™YƒB‹ÊŠˆ[\œ\™XÝÜœÈ›ÜˆHTÐ’Ñ\š\\˜[\H
‹ÃBˆÙYš[™HTÐ’ÑÒT”TÈÈTÐŒWÒT”[ˆCBˆÙYš[™HTÐ’ÑÓ‘QQÓ×ÒT”TÈÈTÐŒWÓ‘QQÓ×ÒT”[ˆCBƒB‹ÊˆCBˆ
ˆCBˆ
‹ÈÊˆ[™ÙˆÜ›Ý\TÐ’ÑÔ\š\\˜[ÐXØÙ\Ü×Ó^Y\ˆ
‹ÃBƒBƒB‹ÊˆKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKCBˆKHTÐ’Ò\š\\˜[XØÙ\ÜÈ^Y\ƒBˆKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKH
‹ÃBƒB‹ÊˆCBˆ
ˆYÙÜ›Ý\TÐ’ÒÔ\š\\˜[ÐXØÙ\Ü×Ó^Y\ˆTÐ’Ò\š\\˜[XØÙ\ÜÈ^Y\ƒBˆ
ˆÃBˆ
‹ÃBƒB‹ÊŠˆTÐ’ÒH™YÚ\Ý\ˆ^[Ý]\YYˆ
‹ÃB\YYˆÝXÝÃBˆ×ÒHZ[Ì—ÝÐTS‘ÕÐÒTQÈÊŠ\È™YÚ\Ý\ˆÛÛZ[œÈHÙ™œÙ]˜[YHÝØ\™ÈHÝ\ÙˆHÜ\˜][Û˜[™YÚ\Ý\ˆÜXÙH[™H™\œÚ[Ûˆ[X™\ˆÙˆHT›ØÚËÙ™œÙ]ˆ
‹ÃBˆ×ÒHZ[Ì—ÝÔÔTSTÎÈÊŠÜÝÛÛ›Û\ˆÝXÝ\˜[\˜[Y]\œËÙ™œÙ]ˆ
‹ÃBˆZ[Ý‘TÑT•‘QÌÍNÃBˆ×ÒSÈZ[Ì—Ý“Q—Ñ”’S‘VÈÊŠœ˜[YH[™ÝY\ÝY[Ù™œÙ]ˆÈ
‹ÃBˆ×ÒSÈZ[Ì—ÝUÈÊŠY[[ÜžH˜\ÙHY™\ÜÈÚ\™HU\ÈÝÜ™YÙ™œÙ]ˆL
‹ÃBˆ×ÒSÈZ[Ì—ÝTÓÔÈÊŠY[[ÜžH˜\ÙHY™\ÜÈÚ\™HTÓÈ\ÈÝÜ™YÙ™œÙ]ˆM
‹ÃBˆ×ÒSÈZ[Ì—ÝS•ÈÊŠY[[ÜžH˜\ÙHY™\ÜÈÚ\™HS•\ÈÝÜ™YÙ™œÙ]ˆN
‹ÃBˆ×ÒSÈZ[Ì—ÝUTVSÐQÈÊŠY[[ÜžH˜\ÙHY™\ÜÈ][™XØ]\ÈHÝ\ÙˆH]H^[ØYY™™\œËÙ™œÙ]ˆPÈ
‹ÃBˆ×ÒSÈZ[Ì—ÝTÐÓQÈÊŠTÐˆÛÛ[X[™™YÚ\Ý\‹Ù™œÙ]ˆŒ
‹ÃBˆ×ÒSÈZ[Ì—ÝTÐ”ÕÎÈÊŠTÐˆ[\œ\Ý]\È™YÚ\Ý\‹Ù™œÙ]ˆ
‹ÃBˆ×ÒSÈZ[Ì—ÝTÐ’S•ŽÈÊŠTÐˆ[\œ\[˜X›H™YÚ\Ý\‹Ù™œÙ]ˆŽ
‹ÃBˆ×ÒSÈZ[Ì—ÝÔ•ÐÌNÈÊŠÜÝ]\È[™ÛÛ›Û™YÚ\Ý\‹Ù™œÙ]ˆÈ
‹ÃBˆ×ÒSÈZ[Ì—ÝUÈÊŠÛ™HX\›ÜˆXXÚUÙ™œÙ]ˆÌ
‹ÃBˆ×ÒSÈZ[Ì—ÝUÎÈÊŠÚÚ\X\›ÜˆXXÚUÙ™œÙ]ˆÍ
‹ÃBˆ×ÒSÈZ[Ì—ÝTÓÔÈÊŠÛ™HX\›ÜˆXXÚTÓÈÙ™œÙ]ˆÎ
‹ÃBˆ×ÒSÈZ[Ì—ÝTÓÔÎÈÊŠÚÚ\X\›ÜˆXXÚTÓÈÙ™œÙ]ˆÐÈ
‹ÃBˆ×ÒSÈZ[Ì—ÝS•ÈÊŠÛ™HX\›ÜˆXXÚS•Ù™œÙ]ˆ
‹ÃBˆ×ÒSÈZ[Ì—ÝS•ÎÈÊŠÚÚ\X\›ÜˆXXÚS•Ù™œÙ]ˆ
‹ÃBˆ×ÒSÈZ[Ì—ÝTÕÈÊŠX\šÜÈH\Ý[ˆH\Ý›ÜˆTÓËS•[™UÙ™œÙ]ˆ
‹ÃBˆZ[Ý‘TÑT•‘QÌVÍNÃBˆ×ÒSÈZ[Ì—ÝÔ•SÑNÈÊŠÛÛ›ÛÈHÜYˆ]\È]XÚYÈHÜÝ›ØÚÈÜˆH]šXÙH›ØÚËÙ™œÙ]ˆL
‹ÃBŸHTÐ’ÒÕ\NÃBƒB‹ÊˆKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKCBˆKHTÐ’Ò™YÚ\Ý\ˆX\ÚÜÃBˆKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKH
‹ÃBƒB‹ÊˆCBˆ
ˆYÙÜ›Ý\TÐ’ÒÔ™YÚ\Ý\—ÓX\ÚÜÈTÐ’Ò™YÚ\Ý\ˆX\ÚÜÃBˆ
ˆÃBˆ
‹ÃBƒB‹ÊˆH˜[YHÐTS‘ÕÐÒTQH\È™YÚ\Ý\ˆÛÛZ[œÈHÙ™œÙ]˜[YHÝØ\™ÈHÝ\ÙˆHÜ\˜][Û˜[™YÚ\Ý\ˆÜXÙH[™H™\œÚ[Ûˆ[X™\ˆÙˆHT›ØÚÈ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ’ÒÐÐTS‘ÕÐÒTQÐÐTS‘ÕÓPTÒÈ
‘•JCBˆÙYš[™HTÐ’ÒÐÐTS‘ÕÐÒTQÐÐTS‘ÕÔÒQ•
JCB‹ÊˆHÐTS‘ÕHØ\Xš[]H[™Ýˆ\È\È\ÙY\È[ˆÙ™œÙ]ƒBˆ
‹ÃBˆÙYš[™HTÐ’ÒÐÐTS‘ÕÐÒTQÐÐTS‘Õ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÒÐÐTS‘ÕÐÒTQÐÐTS‘ÕÔÒQ•
JH	ˆTÐ’ÒÐÐTS‘ÕÐÒTQÐÐTS‘ÕÓPTÒÊCBˆÙYš[™HTÐ’ÒÐÐTS‘ÕÐÒTQÐÒTQÓPTÒÈ
‘‘‘ŒJCBˆÙYš[™HTÐ’ÒÐÐTS‘ÕÐÒTQÐÒTQÔÒQ•
M•JCB‹ÊˆHÒTQHÚ\Y[YšXØ][ÛŽˆ[™XØ]\ÈXZ›Üˆ[™Z[›Üˆ™]š\Ú[ÛˆÙˆHTˆÌÌNŒHHXZ›ÜƒBˆ
ˆ™]š\Ú[ÛˆÌŒÎŒM—HHZ[›Üˆ™]š\Ú[ÛˆXZ›Üˆ™]š\Ú[ÛœÈ\ÙYˆNˆTÐŒ‹ƒBˆ
‹ÃBˆÙYš[™HTÐ’ÒÐÐTS‘ÕÐÒTQÐÒTQ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÒÐÐTS‘ÕÐÒTQÐÒTQÔÒQ•
JH	ˆTÐ’ÒÐÐTS‘ÕÐÒTQÐÒTQÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHÔÔTSTÈHÜÝÛÛ›Û\ˆÝXÝ\˜[\˜[Y]\œÈ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ’ÒÒÔÔTST×Ó—ÔÔ•×ÓPTÒÈ
•JCBˆÙYš[™HTÐ’ÒÒÔÔTST×Ó—ÔÔ•×ÔÒQ•
JCB‹ÊˆH—ÔÔ•ÈH\È™YÚ\Ý\ˆÜXÚYšY\ÈH[X™\ˆÙˆ\ÚXØ[ÝÛœÝ™X[HÜÈ[\[Y[YÛˆ\ÈÜÝÛÛ›Û\‹ƒBˆ
‹ÃBˆÙYš[™HTÐ’ÒÒÔÔTST×Ó—ÔÔ•Ê
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÒÒÔÔTST×Ó—ÔÔ•×ÔÒQ•
JH	ˆTÐ’ÒÒÔÔTST×Ó—ÔÔ•×ÓPTÒÊCBˆÙYš[™HTÐ’ÒÒÔÔTST×Ô×ÓPTÒÈ
LJCBˆÙYš[™HTÐ’ÒÒÔÔTST×Ô×ÔÒQ•
JCB‹ÊˆHÈH\ÈšY[[™XØ]\ÈÚ]\ˆHÜÝÛÛ›Û\ˆ[\[Y[][Ûˆ[˜ÛY\ÈÜÝÙ\ˆÛÛ›ÛƒBˆ
‹ÃBˆÙYš[™HTÐ’ÒÒÔÔTST×ÔÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÒÒÔÔTST×Ô×ÔÒQ•
JH	ˆTÐ’ÒÒÔÔTST×Ô×ÓPTÒÊCBˆÙYš[™HTÐ’ÒÒÔÔTST×ÔÒS‘PÐUÔ—ÓPTÒÈ
LJCBˆÙYš[™HTÐ’ÒÒÔÔTST×ÔÒS‘PÐUÔ—ÔÒQ•
M•JCB‹ÊˆHÒS‘PÐUÔˆH\Èš][™XØ]\ÈÚ]\ˆHÜÈÝ\ÜÜ[™XØ]ÜˆÛÛ›ÛƒBˆ
‹ÃBˆÙYš[™HTÐ’ÒÒÔÔTST×ÔÒS‘PÐUÔŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÒÒÔÔTST×ÔÒS‘PÐUÔ—ÔÒQ•
JH	ˆTÐ’ÒÒÔÔTST×ÔÒS‘PÐUÔ—ÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YH“Q—Ñ”’S‘VHœ˜[YH[™ÝY\ÝY[
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ’ÒÑ“Q—Ñ”’S‘VÑ“Q—ÓPTÒÈ
Ñ•JCBˆÙYš[™HTÐ’ÒÑ“Q—Ñ”’S‘VÑ“Q—ÔÒQ•
JCB‹ÊˆH“QˆHœ˜[YH[™Ý[Z[™È˜[YKƒBˆ
‹ÃBˆÙYš[™HTÐ’ÒÑ“Q—Ñ”’S‘VÑ“QŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÒÑ“Q—Ñ”’S‘VÑ“Q—ÔÒQ•
JH	ˆTÐ’ÒÑ“Q—Ñ”’S‘VÑ“Q—ÓPTÒÊCBˆÙYš[™HTÐ’ÒÑ“Q—Ñ”’S‘VÑ”’S‘VÓPTÒÈ
Ñ‘‘ŒJCBˆÙYš[™HTÐ’ÒÑ“Q—Ñ”’S‘VÑ”’S‘VÔÒQ•
M•JCB‹ÊˆH”’S‘VHœ˜[YH[™^ˆš]ÈŽHÌMˆ[ˆ\È™YÚ\Ý\ˆ\™H\ÙY›ÜˆHœ˜[YH[X™\ˆšY[[ˆHÓÑˆXÚÙ]ƒBˆ
‹ÃBˆÙYš[™HTÐ’ÒÑ“Q—Ñ”’S‘VÑ”’S‘V

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÒÑ“Q—Ñ”’S‘VÑ”’S‘VÔÒQ•
JH	ˆTÐ’ÒÑ“Q—Ñ”’S‘VÑ”’S‘VÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHUHY[[ÜžH˜\ÙHY™\ÜÈÚ\™HU\ÈÝÜ™Y
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ’ÒÐUÐUÐÕT—ÓPTÒÈ
QŒJCBˆÙYš[™HTÐ’ÒÐUÐUÐÕT—ÔÒQ•
JCB‹ÊˆHUÐÕTˆH\È[™XØ]\ÈHÝ\œ™[]\È\ÙYžHH\™Ø\™HÚ[ˆ]\È›ØÙ\ÜÚ[™ÈHU\ÝƒBˆ
‹ÃBˆÙYš[™HTÐ’ÒÐUÐUÐÕTŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÒÐUÐUÐÕT—ÔÒQ•
JH	ˆTÐ’ÒÐUÐUÐÕT—ÓPTÒÊCBˆÙYš[™HTÐ’ÒÐUÐUÐTÑWÓPTÒÈ
‘‘‘‘‘LJCBˆÙYš[™HTÐ’ÒÐUÐUÐTÑWÔÒQ•
UJCB‹ÊˆHUÐTÑHH˜\ÙHY™\ÜÈÈ™H\ÙYžHH\™Ø\™HÈš[™HÝ\ÙˆHU\ÝƒBˆ
‹ÃBˆÙYš[™HTÐ’ÒÐUÐUÐTÑJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÒÐUÐUÐTÑWÔÒQ•
JH	ˆTÐ’ÒÐUÐUÐTÑWÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHTÓÔHY[[ÜžH˜\ÙHY™\ÜÈÚ\™HTÓÈ\ÈÝÜ™Y
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ’ÒÒTÓÔÒTÓ×Ñ’T”ÕÓPTÒÈ
ÑLJCBˆÙYš[™HTÐ’ÒÒTÓÔÒTÓ×Ñ’T”ÕÔÒQ•
UJCB‹ÊˆHTÓ×Ñ’T”ÕH\È[™XØ]\ÈHš\œÝ]\È\ÙYžHH\™Ø\™HÚ[ˆ]\È›ØÙ\ÜÚ[™ÈHTÓÈ\ÝƒBˆ
‹ÃBˆÙYš[™HTÐ’ÒÒTÓÔÒTÓ×Ñ’T”Õ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÒÒTÓÔÒTÓ×Ñ’T”ÕÔÒQ•
JH	ˆTÐ’ÒÒTÓÔÒTÓ×Ñ’T”ÕÓPTÒÊCBˆÙYš[™HTÐ’ÒÒTÓÔÒTÓ×ÐTÑWÓPTÒÈ
‘‘‘‘ÌJCBˆÙYš[™HTÐ’ÒÒTÓÔÒTÓ×ÐTÑWÔÒQ•
LJCB‹ÊˆHTÓ×ÐTÑHH˜\ÙHY™\ÜÈÈ™H\ÙYžHH\™Ø\™HÈš[™HÝ\ÙˆHTÓÈ\ÝƒBˆ
‹ÃBˆÙYš[™HTÐ’ÒÒTÓÔÒTÓ×ÐTÑJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÒÒTÓÔÒTÓ×ÐTÑWÔÒQ•
JH	ˆTÐ’ÒÒTÓÔÒTÓ×ÐTÑWÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHS•HY[[ÜžH˜\ÙHY™\ÜÈÚ\™HS•\ÈÝÜ™Y
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ’ÒÒS•ÒS•Ñ’T”ÕÓPTÒÈ
ÑLJCBˆÙYš[™HTÐ’ÒÒS•ÒS•Ñ’T”ÕÔÒQ•
UJCB‹ÊˆHS•Ñ’T”ÕH\È[™XØ]\ÈHš\œÝ]\È\ÙYžHH\™Ø\™HÚ[ˆ]\È›ØÙ\ÜÚ[™ÈHS•\ÝƒBˆ
‹ÃBˆÙYš[™HTÐ’ÒÒS•ÒS•Ñ’T”Õ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÒÒS•ÒS•Ñ’T”ÕÔÒQ•
JH	ˆTÐ’ÒÒS•ÒS•Ñ’T”ÕÓPTÒÊCBˆÙYš[™HTÐ’ÒÒS•ÒS•ÐTÑWÓPTÒÈ
‘‘‘‘ÌJCBˆÙYš[™HTÐ’ÒÒS•ÒS•ÐTÑWÔÒQ•
LJCB‹ÊˆHS•ÐTÑHH˜\ÙHY™\ÜÈÈ™H\ÙYžHH\™Ø\™HÈš[™HÝ\ÙˆHS•\ÝƒBˆ
‹ÃBˆÙYš[™HTÐ’ÒÒS•ÒS•ÐTÑJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÒÒS•ÒS•ÐTÑWÔÒQ•
JH	ˆTÐ’ÒÒS•ÒS•ÐTÑWÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHUTVSÐQHY[[ÜžH˜\ÙHY™\ÜÈ][™XØ]\ÈHÝ\ÙˆH]H^[ØYY™™\œÈ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ’ÒÑUTVSÐQÑUÐTÑWÓPTÒÈ
‘‘‘ŒJCBˆÙYš[™HTÐ’ÒÑUTVSÐQÑUÐTÑWÔÒQ•
M•JCB‹ÊˆHUÐTÑHH˜\ÙHY™\ÜÈÈ™H\ÙYžHH\™Ø\™HÈš[™HÝ\ÙˆH]H^[ØYÙXÝ[Û‹ƒBˆ
‹ÃBˆÙYš[™HTÐ’ÒÑUTVSÐQÑUÐTÑJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÒÑUTVSÐQÑUÐTÑWÔÒQ•
JH	ˆTÐ’ÒÑUTVSÐQÑUÐTÑWÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHTÐÓQHTÐˆÛÛ[X[™™YÚ\Ý\ˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ’ÒÕTÐÓQÔ”×ÓPTÒÈ
UJCBˆÙYš[™HTÐ’ÒÕTÐÓQÔ”×ÔÒQ•
JCB‹ÊˆH”ÈH[‹ÔÝÜˆXˆH[‹ƒBˆ
‹ÃBˆÙYš[™HTÐ’ÒÕTÐÓQÔ”Ê
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÒÕTÐÓQÔ”×ÔÒQ•
JH	ˆTÐ’ÒÕTÐÓQÔ”×ÓPTÒÊCBˆÙYš[™HTÐ’ÒÕTÐÓQÒÔ‘TÑUÓPTÒÈ
•JCBˆÙYš[™HTÐ’ÒÕTÐÓQÒÔ‘TÑUÔÒQ•
UJCB‹ÊˆHÔ‘TÑUHÜÝÛÛ›Û\ˆ™\Ù]ˆ\ÈÛÛ›Ûš]\È\ÙYžHHÛÙØ\™HÈ™\Ù]HÜÝÛÛ›Û\‹ƒBˆ
‹ÃBˆÙYš[™HTÐ’ÒÕTÐÓQÒÔ‘TÑU

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÒÕTÐÓQÒÔ‘TÑUÔÒQ•
JH	ˆTÐ’ÒÕTÐÓQÒÔ‘TÑUÓPTÒÊCBˆÙYš[™HTÐ’ÒÕTÐÓQÑ“×ÓPTÒÈ
ÕJCBˆÙYš[™HTÐ’ÒÕTÐÓQÑ“×ÔÒQ•
•JCB‹ÊˆH“ÈHœ˜[YH\ÝÚ^™Nˆ\ÈšY[ÜXÚYšY\ÈHÚ^™HÙˆHœ˜[YH\ÝƒBˆ
‹ÃBˆÙYš[™HTÐ’ÒÕTÐÓQÑ“Ê
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÒÕTÐÓQÑ“×ÔÒQ•
JH	ˆTÐ’ÒÕTÐÓQÑ“×ÓPTÒÊCBˆÙYš[™HTÐ’ÒÕTÐÓQÓÔ—ÓPTÒÈ
JCBˆÙYš[™HTÐ’ÒÕTÐÓQÓÔ—ÔÒQ•
ÕJCB‹ÊˆHÔˆHYÚÜÝÛÛ›Û\ˆ™\Ù]ˆ\Èš][ÝÜÈHš]™\ˆÛÙØ\™HÈ™\Ù]HÜÝBˆ
ˆÛÛ›Û\ˆÚ]Ý]Y™™XÝ[™ÈHÝ]HÙˆHÜËƒBˆ
‹ÃBˆÙYš[™HTÐ’ÒÕTÐÓQÓÔŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÒÕTÐÓQÓÔ—ÔÒQ•
JH	ˆTÐ’ÒÕTÐÓQÓÔ—ÓPTÒÊCBˆÙYš[™HTÐ’ÒÕTÐÓQÐUÑS—ÓPTÒÈ
LJCBˆÙYš[™HTÐ’ÒÕTÐÓQÐUÑS—ÔÒQ•
JCB‹ÊˆHUÑSˆHU\Ý[˜X›YƒBˆ
‹ÃBˆÙYš[™HTÐ’ÒÕTÐÓQÐUÑSŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÒÕTÐÓQÐUÑS—ÔÒQ•
JH	ˆTÐ’ÒÕTÐÓQÐUÑS—ÓPTÒÊCBˆÙYš[™HTÐ’ÒÕTÐÓQÒTÓ×ÑS—ÓPTÒÈ
ŒJCBˆÙYš[™HTÐ’ÒÕTÐÓQÒTÓ×ÑS—ÔÒQ•
UJCB‹ÊˆHTÓ×ÑSˆHTÓÈ\Ý[˜X›YƒBˆ
‹ÃBˆÙYš[™HTÐ’ÒÕTÐÓQÒTÓ×ÑSŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÒÕTÐÓQÒTÓ×ÑS—ÔÒQ•
JH	ˆTÐ’ÒÕTÐÓQÒTÓ×ÑS—ÓPTÒÊCBˆÙYš[™HTÐ’ÒÕTÐÓQÒS•ÑS—ÓPTÒÈ
JCBˆÙYš[™HTÐ’ÒÕTÐÓQÒS•ÑS—ÔÒQ•
LJCB‹ÊˆHS•ÑSˆHS•\Ý[˜X›YƒBˆ
‹ÃBˆÙYš[™HTÐ’ÒÕTÐÓQÒS•ÑSŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÒÕTÐÓQÒS•ÑS—ÔÒQ•
JH	ˆTÐ’ÒÕTÐÓQÒS•ÑS—ÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHTÐ”ÕÈHTÐˆ[\œ\Ý]\È™YÚ\Ý\ˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ’ÒÕTÐ”Õ×ÔÑÓPTÒÈ
JCBˆÙYš[™HTÐ’ÒÕTÐ”Õ×ÔÑÔÒQ•
•JCB‹ÊˆHÑHÜÚ[™ÙH]XÝˆHÜÝÛÛ›Û\ˆÙ]È\Èš]ÈÙÚXÈHÚ[ˆ[žHÜ\ÈCBˆ
ˆÚ[™ÙHš]˜[œÚ][Ûˆœ›ÛHHÈHÛ™HÜˆH›Ü˜ÙHÜ™\Ý[YHš]˜[œÚ][Ûˆœ›ÛHHÈHH\ÈCBˆ
ˆ™\Ý[ÙˆH‹RÈ˜[œÚ][Ûˆ]XÝYÛˆHÝ\Ü[™YÜƒBˆ
‹ÃBˆÙYš[™HTÐ’ÒÕTÐ”Õ×ÔÑ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÒÕTÐ”Õ×ÔÑÔÒQ•
JH	ˆTÐ’ÒÕTÐ”Õ×ÔÑÓPTÒÊCBˆÙYš[™HTÐ’ÒÕTÐ”Õ×Ñ“—ÓPTÒÈ
JCBˆÙYš[™HTÐ’ÒÕTÐ”Õ×Ñ“—ÔÒQ•
ÕJCB‹ÊˆH“ˆHœ˜[YH\Ý›ÛÝ™\ŽˆHÜÝÛÛ›Û\ˆÙ]È\Èš]ÈÙÚXÈHÚ[ˆHœ˜[YH\ÝBˆ
ˆ[™^›ÛÈÝ™\ˆ]ÈX^[][H˜[YHÈƒBˆ
‹ÃBˆÙYš[™HTÐ’ÒÕTÐ”Õ×Ñ“Š
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÒÕTÐ”Õ×Ñ“—ÔÒQ•
JH	ˆTÐ’ÒÕTÐ”Õ×Ñ“—ÓPTÒÊCBˆÙYš[™HTÐ’ÒÕTÐ”Õ×ÐUÒT”WÓPTÒÈ
LJCBˆÙYš[™HTÐ’ÒÕTÐ”Õ×ÐUÒT”WÔÒQ•
M•JCB‹ÊˆHUÒT”HHUT”Nˆ[™XØ]\È][ˆU
Ú]KXš]Ù]
HØ\ÈÛÛ\]YƒBˆ
‹ÃBˆÙYš[™HTÐ’ÒÕTÐ”Õ×ÐUÒT”J
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÒÕTÐ”Õ×ÐUÒT”WÔÒQ•
JH	ˆTÐ’ÒÕTÐ”Õ×ÐUÒT”WÓPTÒÊCBˆÙYš[™HTÐ’ÒÕTÐ”Õ×ÒTÓ×ÒT”WÓPTÒÈ
ŒJCBˆÙYš[™HTÐ’ÒÕTÐ”Õ×ÒTÓ×ÒT”WÔÒQ•
MÕJCB‹ÊˆHTÓ×ÒT”HHTÓÈT”Nˆ[™XØ]\È][ˆTÓÈ
Ú]KXš]Ù]
HØ\ÈÛÛ\]YƒBˆ
‹ÃBˆÙYš[™HTÐ’ÒÕTÐ”Õ×ÒTÓ×ÒT”J
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÒÕTÐ”Õ×ÒTÓ×ÒT”WÔÒQ•
JH	ˆTÐ’ÒÕTÐ”Õ×ÒTÓ×ÒT”WÓPTÒÊCBˆÙYš[™HTÐ’ÒÕTÐ”Õ×ÒS•ÒT”WÓPTÒÈ
JCBˆÙYš[™HTÐ’ÒÕTÐ”Õ×ÒS•ÒT”WÔÒQ•
NJCB‹ÊˆHS•ÒT”HHS•T”Nˆ[™XØ]\È][ˆS•
Ú]KXš]Ù]
HØ\ÈÛÛ\]YƒBˆ
‹ÃBˆÙYš[™HTÐ’ÒÕTÐ”Õ×ÒS•ÒT”J
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÒÕTÐ”Õ×ÒS•ÒT”WÔÒQ•
JH	ˆTÐ’ÒÕTÐ”Õ×ÒS•ÒT”WÓPTÒÊCBˆÙYš[™HTÐ’ÒÕTÐ”Õ×ÔÓÑ—ÒT”WÓPTÒÈ
JCBˆÙYš[™HTÐ’ÒÕTÐ”Õ×ÔÓÑ—ÒT”WÔÒQ•
NUJCB‹ÊˆHÓÑ—ÒT”HHÓÑˆ[\œ\ˆ]™\žH[YHÚ[ˆHÜÝÙ[™ÈHÝ\Ùˆœ˜[YHÚÙ[ˆÛˆHTÐˆ\Ë\Èš]\ÈÙ]ƒBˆ
‹ÃBˆÙYš[™HTÐ’ÒÕTÐ”Õ×ÔÓÑ—ÒT”J
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÒÕTÐ”Õ×ÔÓÑ—ÒT”WÔÒQ•
JH	ˆTÐ’ÒÕTÐ”Õ×ÔÓÑ—ÒT”WÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHTÐ’S•ˆHTÐˆ[\œ\[˜X›H™YÚ\Ý\ˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ’ÒÕTÐ’S•—ÔÑWÓPTÒÈ
JCBˆÙYš[™HTÐ’ÒÕTÐ’S•—ÔÑWÔÒQ•
•JCB‹ÊˆHÑHHÜÚ[™ÙH]XÝ[\œ\[˜X›NˆNˆ[˜X›Hˆ\ØX›KƒBˆ
‹ÃBˆÙYš[™HTÐ’ÒÕTÐ’S•—ÔÑJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÒÕTÐ’S•—ÔÑWÔÒQ•
JH	ˆTÐ’ÒÕTÐ’S•—ÔÑWÓPTÒÊCBˆÙYš[™HTÐ’ÒÕTÐ’S•—Ñ“‘WÓPTÒÈ
JCBˆÙYš[™HTÐ’ÒÕTÐ’S•—Ñ“‘WÔÒQ•
ÕJCB‹ÊˆH“‘HHœ˜[YH\Ý›ÛÝ™\ˆ[\œ\[˜X›NˆNˆ[˜X›Hˆ\ØX›KƒBˆ
‹ÃBˆÙYš[™HTÐ’ÒÕTÐ’S•—Ñ“‘J
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÒÕTÐ’S•—Ñ“‘WÔÒQ•
JH	ˆTÐ’ÒÕTÐ’S•—Ñ“‘WÓPTÒÊCBˆÙYš[™HTÐ’ÒÕTÐ’S•—ÐUÒT”WÑWÓPTÒÈ
LJCBˆÙYš[™HTÐ’ÒÕTÐ’S•—ÐUÒT”WÑWÔÒQ•
M•JCB‹ÊˆHUÒT”WÑHHUT”H[˜X›Hš]ˆNˆ[˜X›Hˆ\ØX›KƒBˆ
‹ÃBˆÙYš[™HTÐ’ÒÕTÐ’S•—ÐUÒT”WÑJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÒÕTÐ’S•—ÐUÒT”WÑWÔÒQ•
JH	ˆTÐ’ÒÕTÐ’S•—ÐUÒT”WÑWÓPTÒÊCBˆÙYš[™HTÐ’ÒÕTÐ’S•—ÒTÓ×ÒT”WÑWÓPTÒÈ
ŒJCBˆÙYš[™HTÐ’ÒÕTÐ’S•—ÒTÓ×ÒT”WÑWÔÒQ•
MÕJCB‹ÊˆHTÓ×ÒT”WÑHHTÓÈT”H[˜X›Hš]ˆNˆ[˜X›Hˆ\ØX›KƒBˆ
‹ÃBˆÙYš[™HTÐ’ÒÕTÐ’S•—ÒTÓ×ÒT”WÑJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÒÕTÐ’S•—ÒTÓ×ÒT”WÑWÔÒQ•
JH	ˆTÐ’ÒÕTÐ’S•—ÒTÓ×ÒT”WÑWÓPTÒÊCBˆÙYš[™HTÐ’ÒÕTÐ’S•—ÒS•ÒT”WÑWÓPTÒÈ
JCBˆÙYš[™HTÐ’ÒÕTÐ’S•—ÒS•ÒT”WÑWÔÒQ•
NJCB‹ÊˆHS•ÒT”WÑHHS•T”H[˜X›Hš]ˆNˆ[˜X›Hˆ\ØX›KƒBˆ
‹ÃBˆÙYš[™HTÐ’ÒÕTÐ’S•—ÒS•ÒT”WÑJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÒÕTÐ’S•—ÒS•ÒT”WÑWÔÒQ•
JH	ˆTÐ’ÒÕTÐ’S•—ÒS•ÒT”WÑWÓPTÒÊCBˆÙYš[™HTÐ’ÒÕTÐ’S•—ÔÓÑ—ÑWÓPTÒÈ
JCBˆÙYš[™HTÐ’ÒÕTÐ’S•—ÔÓÑ—ÑWÔÒQ•
NUJCB‹ÊˆHÓÑ—ÑHHÓÑˆ[\œ\[˜X›Hš]ˆNˆ[˜X›Hˆ\ØX›KƒBˆ
‹ÃBˆÙYš[™HTÐ’ÒÕTÐ’S•—ÔÓÑ—ÑJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÒÕTÐ’S•—ÔÓÑ—ÑWÔÒQ•
JH	ˆTÐ’ÒÕTÐ’S•—ÔÓÑ—ÑWÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHÔ•ÐÌHHÜÝ]\È[™ÛÛ›Û™YÚ\Ý\ˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ’ÒÔÔ•ÐÌWÐÐÔ×ÓPTÒÈ
UJCBˆÙYš[™HTÐ’ÒÔÔ•ÐÌWÐÐÔ×ÔÒQ•
JCB‹ÊˆHÐÔÈHÝ\œ™[ÛÛ›™XÝÝ]\ÎˆÙÚXÈH[™XØ]\ÈH]šXÙH\È™\Ù[ÛˆHÜƒBˆ
‹ÃBˆÙYš[™HTÐ’ÒÔÔ•ÐÌWÐÐÔÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÒÔÔ•ÐÌWÐÐÔ×ÔÒQ•
JH	ˆTÐ’ÒÔÔ•ÐÌWÐÐÔ×ÓPTÒÊCBˆÙYš[™HTÐ’ÒÔÔ•ÐÌWÐÔÐ×ÓPTÒÈ
•JCBˆÙYš[™HTÐ’ÒÔÔ•ÐÌWÐÔÐ×ÔÒQ•
UJCB‹ÊˆHÔÐÈHÛÛ›™XÝÝ]\ÈÚ[™ÙNˆÙÚXÈHYX[œÈ]H˜[YHÙˆÐÔÈ\ÈÚ[™ÙYƒBˆ
‹ÃBˆÙYš[™HTÐ’ÒÔÔ•ÐÌWÐÔÐÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÒÔÔ•ÐÌWÐÔÐ×ÔÒQ•
JH	ˆTÐ’ÒÔÔ•ÐÌWÐÔÐ×ÓPTÒÊCBˆÙYš[™HTÐ’ÒÔÔ•ÐÌWÔQÓPTÒÈ
JCBˆÙYš[™HTÐ’ÒÔÔ•ÐÌWÔQÔÒQ•
•JCB‹ÊˆHQHÜ[˜X›YÑ\ØX›YƒBˆ
‹ÃBˆÙYš[™HTÐ’ÒÔÔ•ÐÌWÔQ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÒÔÔ•ÐÌWÔQÔÒQ•
JH	ˆTÐ’ÒÔÔ•ÐÌWÔQÓPTÒÊCBˆÙYš[™HTÐ’ÒÔÔ•ÐÌWÔQ×ÓPTÒÈ
JCBˆÙYš[™HTÐ’ÒÔÔ•ÐÌWÔQ×ÔÒQ•
ÕJCB‹ÊˆHQÈHÜ[˜X›YÑ\ØX›YÚ[™ÙNˆÙÚXÈHYX[œÈ]H˜[YHÙˆQ\ÈÚ[™ÙYƒBˆ
‹ÃBˆÙYš[™HTÐ’ÒÔÔ•ÐÌWÔQÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÒÔÔ•ÐÌWÔQ×ÔÒQ•
JH	ˆTÐ’ÒÔÔ•ÐÌWÔQ×ÓPTÒÊCBˆÙYš[™HTÐ’ÒÔÔ•ÐÌWÓÐÐWÓPTÒÈ
LJCBˆÙYš[™HTÐ’ÒÔÔ•ÐÌWÓÐÐWÔÒQ•
JCB‹ÊˆHÐÐHHÝ™\‹XÝ\œ™[XÝ]™NˆÙÚXÈHYX[œÈ]\ÈÜ\È[ˆÝ™\‹XÝ\œ™[ÛÛ™][Û‹ƒBˆ
‹ÃBˆÙYš[™HTÐ’ÒÔÔ•ÐÌWÓÐÐJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÒÔÔ•ÐÌWÓÐÐWÔÒQ•
JH	ˆTÐ’ÒÔÔ•ÐÌWÓÐÐWÓPTÒÊCBˆÙYš[™HTÐ’ÒÔÔ•ÐÌWÓÐÐ×ÓPTÒÈ
ŒJCBˆÙYš[™HTÐ’ÒÔÔ•ÐÌWÓÐÐ×ÔÒQ•
UJCB‹ÊˆHÐÐÈHÝ™\‹XÝ\œ™[Ú[™ÙNˆÙÚXÈHYX[œÈ]H˜[YHÙˆÐÐH\ÈÚ[™ÙYƒBˆ
‹ÃBˆÙYš[™HTÐ’ÒÔÔ•ÐÌWÓÐÐÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÒÔÔ•ÐÌWÓÐÐ×ÔÒQ•
JH	ˆTÐ’ÒÔÔ•ÐÌWÓÐÐ×ÓPTÒÊCBˆÙYš[™HTÐ’ÒÔÔ•ÐÌWÑ”—ÓPTÒÈ
JCBˆÙYš[™HTÐ’ÒÔÔ•ÐÌWÑ”—ÔÒQ•
•JCB‹ÊˆH”ˆH›Ü˜ÙHÜ™\Ý[YNˆÙÚXÈHYX[œÈ™\Ý[YH
Ë\Ý]JH]XÝYÜˆš]™[ˆÛˆHÜƒBˆ
‹ÃBˆÙYš[™HTÐ’ÒÔÔ•ÐÌWÑ”Š
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÒÔÔ•ÐÌWÑ”—ÔÒQ•
JH	ˆTÐ’ÒÔÔ•ÐÌWÑ”—ÓPTÒÊCBˆÙYš[™HTÐ’ÒÔÔ•ÐÌWÔÕTÔÓPTÒÈ
JCBˆÙYš[™HTÐ’ÒÔÔ•ÐÌWÔÕTÔÔÒQ•
ÕJCB‹ÊˆHÕTÔHÝ\Ü[™ˆÙÚXÈHYX[œÈÜ\È[ˆHÝ\Ü[™Ý]KƒBˆ
‹ÃBˆÙYš[™HTÐ’ÒÔÔ•ÐÌWÔÕTÔ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÒÔÔ•ÐÌWÔÕTÔÔÒQ•
JH	ˆTÐ’ÒÔÔ•ÐÌWÔÕTÔÓPTÒÊCBˆÙYš[™HTÐ’ÒÔÔ•ÐÌWÔ—ÓPTÒÈ
LJCBˆÙYš[™HTÐ’ÒÔÔ•ÐÌWÔ—ÔÒQ•
JCB‹ÊˆHˆHÜ™\Ù]ˆÙÚXÈHYX[œÈHÜ\È[ˆH™\Ù]Ý]KƒBˆ
‹ÃBˆÙYš[™HTÐ’ÒÔÔ•ÐÌWÔŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÒÔÔ•ÐÌWÔ—ÔÒQ•
JH	ˆTÐ’ÒÔÔ•ÐÌWÔ—ÓPTÒÊCBˆÙYš[™HTÐ’ÒÔÔ•ÐÌWÓ×ÓPTÒÈ
ÌJCBˆÙYš[™HTÐ’ÒÔÔ•ÐÌWÓ×ÔÒQ•
LJCB‹ÊˆHÈH[™HÝ]\Îˆ\ÈšY[™Y›XÝÈHÝ\œ™[ÙÚXØ[]™[ÈÙˆH
š]LJH[™H
š]L
HÚYÛ˜[[™\ËƒBˆ
‹ÃBˆÙYš[™HTÐ’ÒÔÔ•ÐÌWÓÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÒÔÔ•ÐÌWÓ×ÔÒQ•
JH	ˆTÐ’ÒÔÔ•ÐÌWÓ×ÓPTÒÊCBˆÙYš[™HTÐ’ÒÔÔ•ÐÌWÔÓPTÒÈ
LJCBˆÙYš[™HTÐ’ÒÔÔ•ÐÌWÔÔÒQ•
L•JCB‹ÊˆHHÜÝÙ\ŽˆH[˜Ý[ÛˆÙˆ\Èš]\[™ÈÛˆH˜[YHÙˆHÜÝÙ\ˆÛÛ›Û
ÊHš][ˆHÔÔTSTÈ™YÚ\Ý\‹ƒBˆ
‹ÃBˆÙYš[™HTÐ’ÒÔÔ•ÐÌWÔ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÒÔÔ•ÐÌWÔÔÒQ•
JH	ˆTÐ’ÒÔÔ•ÐÌWÔÓPTÒÊCBˆÙYš[™HTÐ’ÒÔÔ•ÐÌWÔP×ÓPTÒÈ
ÌJCBˆÙYš[™HTÐ’ÒÔÔ•ÐÌWÔP×ÔÒQ•
MJCB‹ÊˆHPÈHÜ[™XØ]ÜˆÛÛ›ÛˆÜš][™ÈÈ\ÈšY[\È›ÈY™™XÝYˆHÒS‘PÐUÔˆš][ˆCBˆ
ˆÔÔTSTÈ™YÚ\Ý\ˆ\ÈÙÚXÈƒBˆ
‹ÃBˆÙYš[™HTÐ’ÒÔÔ•ÐÌWÔPÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÒÔÔ•ÐÌWÔP×ÔÒQ•
JH	ˆTÐ’ÒÔÔ•ÐÌWÔP×ÓPTÒÊCBˆÙYš[™HTÐ’ÒÔÔ•ÐÌWÔ×ÓPTÒÈ
ŒJCBˆÙYš[™HTÐ’ÒÔÔ•ÐÌWÔ×ÔÒQ•
M•JCB‹ÊˆHÈHÜ\ÝÛÛ›ÛˆH›Û‹^™\›È˜[YH[™XØ]\È]HÜ\ÈÜ\˜][™È[ˆH\Ý[ÙH\È[™XØ]YžHH˜[YKƒBˆ
‹ÃBˆÙYš[™HTÐ’ÒÔÔ•ÐÌWÔÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÒÔÔ•ÐÌWÔ×ÔÒQ•
JH	ˆTÐ’ÒÔÔ•ÐÌWÔ×ÓPTÒÊCBˆÙYš[™HTÐ’ÒÔÔ•ÐÌWÔÔÓPTÒÈ
ÌJCBˆÙYš[™HTÐ’ÒÔÔ•ÐÌWÔÔÔÒQ•
ŒJCB‹ÊˆHÔHÜÜYYˆŽˆÝË\ÜYYXŽˆ[\ÜYYLŽˆYÚ\ÜYYLXŽˆ™\Ù\™YƒBˆ
‹ÃBˆÙYš[™HTÐ’ÒÔÔ•ÐÌWÔÔ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÒÔÔ•ÐÌWÔÔÔÒQ•
JH	ˆTÐ’ÒÔÔ•ÐÌWÔÔÓPTÒÊCBˆÙYš[™HTÐ’ÒÔÔ•ÐÌWÕÓÓ×ÓPTÒÈ
JCBˆÙYš[™HTÐ’ÒÔÔ•ÐÌWÕÓÓ×ÔÒQ•
Œ•JCB‹ÊˆHÓÓÈHØZÙHÛˆÝ™\˜Ý\œ™[[˜X›NˆÜš][™È\Èš]ÈHÛ™H[˜X›\ÈHÜÈ™HÙ[œÚ]]™HÃBˆ
ˆÝ™\˜Ý\œ™[ÛÛ™][ÛœÈ\ÈØZÙK]\]™[ËƒBˆ
‹ÃBˆÙYš[™HTÐ’ÒÔÔ•ÐÌWÕÓÓÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÒÔÔ•ÐÌWÕÓÓ×ÔÒQ•
JH	ˆTÐ’ÒÔÔ•ÐÌWÕÓÓ×ÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHUHÛ™HX\›ÜˆXXÚU
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ’ÒÐUÐUÑÓ‘WÓPTÒÈ
‘‘‘‘‘‘‘•JCBˆÙYš[™HTÐ’ÒÐUÐUÑÓ‘WÔÒQ•
JCB‹ÊˆHUÑÓ‘HHHš]ÛÜœ™\ÜÛ™[™ÈÈHÙ\Z[ˆÚ[™HÙ]ÈÙÚXÈH\ÈÛÛÛˆ\È]^XÝ][Ûˆ\ÈÛÛ\]YƒBˆ
‹ÃBˆÙYš[™HTÐ’ÒÐUÐUÑÓ‘J
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÒÐUÐUÑÓ‘WÔÒQ•
JH	ˆTÐ’ÒÐUÐUÑÓ‘WÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHUÈHÚÚ\X\›ÜˆXXÚU
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ’ÒÐU×ÐUÔÒÒTÓPTÒÈ
‘‘‘‘‘‘‘•JCBˆÙYš[™HTÐ’ÒÐU×ÐUÔÒÒTÔÒQ•
JCB‹ÊˆHUÔÒÒTHÚ[ˆHš][ˆHÚÚ\X\\ÈÙ]ÈÙÚXÈKHÛÜœ™\ÜÛ™[™ÈÚ[™CBˆ
ˆÚÚ\Y[™\[™[ÙˆHˆš]Ù][™ËƒBˆ
‹ÃBˆÙYš[™HTÐ’ÒÐU×ÐUÔÒÒT

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÒÐU×ÐUÔÒÒTÔÒQ•
JH	ˆTÐ’ÒÐU×ÐUÔÒÒTÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHTÓÔHÛ™HX\›ÜˆXXÚTÓÈ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ’ÒÒTÓÔÒTÓ×ÑÓ‘WÓPTÒÈ
‘‘‘‘‘‘‘•JCBˆÙYš[™HTÐ’ÒÒTÓÔÒTÓ×ÑÓ‘WÔÒQ•
JCB‹ÊˆHTÓ×ÑÓ‘HHHš]ÛÜœ™\ÜÛ™[™ÈÈHÙ\Z[ˆÚ[™HÙ]ÈÙÚXÈH\ÈÛÛÛˆ\È]^XÝ][Ûˆ\ÈÛÛ\]YƒBˆ
‹ÃBˆÙYš[™HTÐ’ÒÒTÓÔÒTÓ×ÑÓ‘J
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÒÒTÓÔÒTÓ×ÑÓ‘WÔÒQ•
JH	ˆTÐ’ÒÒTÓÔÒTÓ×ÑÓ‘WÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHTÓÔÈHÚÚ\X\›ÜˆXXÚTÓÈ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ’ÒÒTÓÔ×ÒTÓ×ÔÒÒTÓPTÒÈ
‘‘‘‘‘‘‘•JCBˆÙYš[™HTÐ’ÒÒTÓÔ×ÒTÓ×ÔÒÒTÔÒQ•
JCB‹ÊˆHTÓ×ÔÒÒTHHš]ÛÜœ™\ÜÛ™[™ÈÈHÙ\Z[ˆÚ[™HÙ]ÈÙÚXÈH\ÈÛÛÛˆ\È]^XÝ][Ûˆ\ÈÛÛ\]YƒBˆ
‹ÃBˆÙYš[™HTÐ’ÒÒTÓÔ×ÒTÓ×ÔÒÒT

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÒÒTÓÔ×ÒTÓ×ÔÒÒTÔÒQ•
JH	ˆTÐ’ÒÒTÓÔ×ÒTÓ×ÔÒÒTÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHS•HÛ™HX\›ÜˆXXÚS•
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ’ÒÒS•ÒS•ÑÓ‘WÓPTÒÈ
‘‘‘‘‘‘‘•JCBˆÙYš[™HTÐ’ÒÒS•ÒS•ÑÓ‘WÔÒQ•
JCB‹ÊˆHS•ÑÓ‘HHHš]ÛÜœ™\ÜÛ™[™ÈÈHÙ\Z[ˆÚ[™HÙ]ÈÙÚXÈH\ÈÛÛÛˆ\È]^XÝ][Ûˆ\ÈÛÛ\]YƒBˆ
‹ÃBˆÙYš[™HTÐ’ÒÒS•ÒS•ÑÓ‘J
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÒÒS•ÒS•ÑÓ‘WÔÒQ•
JH	ˆTÐ’ÒÒS•ÒS•ÑÓ‘WÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHS•ÈHÚÚ\X\›ÜˆXXÚS•
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ’ÒÒS•×ÒS•ÔÒÒTÓPTÒÈ
‘‘‘‘‘‘‘•JCBˆÙYš[™HTÐ’ÒÒS•×ÒS•ÔÒÒTÔÒQ•
JCB‹ÊˆHS•ÔÒÒTHÚ[ˆHš][ˆHÚÚ\X\\ÈÙ]ÈÙÚXÈKHÛÜœ™\ÜÛ™[™ÈÚ[™CBˆ
ˆÚÚ\Y[™\[™[ÙˆHˆš]Ù][™ËƒBˆ
‹ÃBˆÙYš[™HTÐ’ÒÒS•×ÒS•ÔÒÒT

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÒÒS•×ÒS•ÔÒÒTÔÒQ•
JH	ˆTÐ’ÒÒS•×ÒS•ÔÒÒTÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHTÕHX\šÜÈH\Ý[ˆH\Ý›ÜˆTÓËS•[™U
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ’ÒÓTÕÐUÓTÕÓPTÒÈ
Q•JCBˆÙYš[™HTÐ’ÒÓTÕÐUÓTÕÔÒQ•
JCB‹ÊˆHUÓTÕHYˆ\™Ø\™H\È™XXÚY\È[™Hˆš]\È›ÝÙ]]Ú[ÛÈÈ\ÈH™^È™H›ØÙ\ÜÙYƒBˆ
‹ÃBˆÙYš[™HTÐ’ÒÓTÕÐUÓTÕ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÒÓTÕÐUÓTÕÔÒQ•
JH	ˆTÐ’ÒÓTÕÐUÓTÕÓPTÒÊCBˆÙYš[™HTÐ’ÒÓTÕÒTÓ×ÓTÕÓPTÒÈ
QŒJCBˆÙYš[™HTÐ’ÒÓTÕÒTÓ×ÓTÕÔÒQ•
JCB‹ÊˆHTÓ×ÓTÕH\È[™XØ]\ÈH\Ý[ˆHTÓÈ\ÝƒBˆ
‹ÃBˆÙYš[™HTÐ’ÒÓTÕÒTÓ×ÓTÕ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÒÓTÕÒTÓ×ÓTÕÔÒQ•
JH	ˆTÐ’ÒÓTÕÒTÓ×ÓTÕÓPTÒÊCBˆÙYš[™HTÐ’ÒÓTÕÒS•ÓTÕÓPTÒÈ
QŒJCBˆÙYš[™HTÐ’ÒÓTÕÒS•ÓTÕÔÒQ•
M•JCB‹ÊˆHS•ÓTÕH\È[™XØ]\ÈH\Ý[ˆHS•\ÝƒBˆ
‹ÃBˆÙYš[™HTÐ’ÒÓTÕÒS•ÓTÕ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÒÓTÕÒS•ÓTÕÔÒQ•
JH	ˆTÐ’ÒÓTÕÒS•ÓTÕÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHÔ•SÑHHÛÛ›ÛÈHÜYˆ]\È]XÚYÈHÜÝ›ØÚÈÜˆH]šXÙH›ØÚÈ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ’ÒÔÔ•SÑWÑU—ÑSP“WÓPTÒÈ
LJCBˆÙYš[™HTÐ’ÒÔÔ•SÑWÑU—ÑSP“WÔÒQ•
M•JCB‹ÊˆHU—ÑSP“HHYˆ\Èš]\ÈÙ]ÈÛ™KÛ™HÙˆHÜÈÚ[™Z]™H\ÈHTÐˆ]šXÙKƒBˆ
‹ÃBˆÙYš[™HTÐ’ÒÔÔ•SÑWÑU—ÑSP“J
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÒÔÔ•SÑWÑU—ÑSP“WÔÒQ•
JH	ˆTÐ’ÒÔÔ•SÑWÑU—ÑSP“WÓPTÒÊCBˆÙYš[™HTÐ’ÒÔÔ•SÑWÔÕ×ÐÕ“ÔÓÓWÓPTÒÈ
JCBˆÙYš[™HTÐ’ÒÔÔ•SÑWÔÕ×ÐÕ“ÔÓÓWÔÒQ•
NJCB‹ÊˆHÕ×ÐÕ“ÔÓÓHH\Èš][™XØ]\ÈYˆHHÝÙ\‹YÝÛˆ[œ]\ÈÛÛ›ÛYžHÛÙØ\™HÜˆžH\™Ø\™KƒBˆ
‹ÃBˆÙYš[™HTÐ’ÒÔÔ•SÑWÔÕ×ÐÕ“ÔÓÓJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÒÔÔ•SÑWÔÕ×ÐÕ“ÔÓÓWÔÒQ•
JH	ˆTÐ’ÒÔÔ•SÑWÔÕ×ÐÕ“ÔÓÓWÓPTÒÊCBˆÙYš[™HTÐ’ÒÔÔ•SÑWÔÕ×ÔÓÓWÓPTÒÈ
JCBˆÙYš[™HTÐ’ÒÔÔ•SÑWÔÕ×ÔÓÓWÔÒQ•
NUJCB‹ÊˆHÕ×ÔÓÓHH\Èš]\ÈÛ›H\ÙYÚ[ˆÕ×ÐÕ“ÔÓÓH\ÈÙ]ÈX‹ƒBˆ
‹ÃBˆÙYš[™HTÐ’ÒÔÔ•SÑWÔÕ×ÔÓÓJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ’ÒÔÔ•SÑWÔÕ×ÔÓÓWÔÒQ•
JH	ˆTÐ’ÒÔÔ•SÑWÔÕ×ÔÓÓWÓPTÒÊCB‹ÊˆHH
‹ÃBƒBƒB‹ÊˆCBˆ
ˆCBˆ
‹ÈÊˆ[™ÙˆÜ›Ý\TÐ’ÒÔ™YÚ\Ý\—ÓX\ÚÜÈ
‹ÃBƒBƒB‹ÊˆTÐ’ÒH\š\\˜[[œÝ[˜ÙH˜\ÙHY™\ÜÙ\È
‹ÃBˆÚYˆ
×ÐT“WÑ‘PUT‘WÐÓTÑH	ˆŠCBˆÊŠˆ\š\\˜[TÐ’Ò˜\ÙHY™\ÜÈ
‹ÃBˆÙYš[™HTÐ’ÒÐTÑH
LLÌJCBˆÊŠˆ\š\\˜[TÐ’Ò˜\ÙHY™\ÜÈ
‹ÃBˆÙYš[™HTÐ’ÒÐTÑWÓ”È
LÌJCBˆÊŠˆ\š\\˜[TÐ’Ò˜\ÙHÚ[\ˆ
‹ÃBˆÙYš[™HTÐ’Ò

TÐ’ÒÕ\H
ŠUTÐ’ÒÐTÑJCBˆÊŠˆ\š\\˜[TÐ’Ò˜\ÙHÚ[\ˆ
‹ÃBˆÙYš[™HTÐ’ÒÓ”È

TÐ’ÒÕ\H
ŠUTÐ’ÒÐTÑWÓ”ÊCBˆÊŠˆ\œ˜^H[š]X[^™\ˆÙˆTÐ’Ò\š\\˜[˜\ÙHY™\ÜÙ\È
‹ÃBˆÙYš[™HTÐ’ÒÐTÑWÐQ”ÈÈTÐ’ÒÐTÑHCBˆÊŠˆ\œ˜^H[š]X[^™\ˆÙˆTÐ’Ò\š\\˜[˜\ÙHÚ[\œÈ
‹ÃBˆÙYš[™HTÐ’ÒÐTÑWÔ”ÈÈTÐ’ÒCBˆÊŠˆ\œ˜^H[š]X[^™\ˆÙˆTÐ’Ò\š\\˜[˜\ÙHY™\ÜÙ\È
‹ÃBˆÙYš[™HTÐ’ÒÐTÑWÐQ”×Ó”ÈÈTÐ’ÒÐTÑWÓ”ÈCBˆÊŠˆ\œ˜^H[š]X[^™\ˆÙˆTÐ’Ò\š\\˜[˜\ÙHÚ[\œÈ
‹ÃBˆÙYš[™HTÐ’ÒÐTÑWÔ”×Ó”ÈÈTÐ’ÒÓ”ÈCBˆÙ[ÙCBˆÊŠˆ\š\\˜[TÐ’Ò˜\ÙHY™\ÜÈ
‹ÃBˆÙYš[™HTÐ’ÒÐTÑH
LÌJCBˆÊŠˆ\š\\˜[TÐ’Ò˜\ÙHÚ[\ˆ
‹ÃBˆÙYš[™HTÐ’Ò

TÐ’ÒÕ\H
ŠUTÐ’ÒÐTÑJCBˆÊŠˆ\œ˜^H[š]X[^™\ˆÙˆTÐ’Ò\š\\˜[˜\ÙHY™\ÜÙ\È
‹ÃBˆÙYš[™HTÐ’ÒÐTÑWÐQ”ÈÈTÐ’ÒÐTÑHCBˆÊŠˆ\œ˜^H[š]X[^™\ˆÙˆTÐ’Ò\š\\˜[˜\ÙHÚ[\œÈ
‹ÃBˆÙYš[™HTÐ’ÒÐTÑWÔ”ÈÈTÐ’ÒCBˆÙ[™YƒB‹ÊŠˆ[\œ\™XÝÜœÈ›ÜˆHTÐ’Ò\š\\˜[\H
‹ÃBˆÙYš[™HTÐ’ÒÒT”TÈÈTÐŒWÒT”[ˆCBˆÙYš[™HTÐ’ÒÓ‘QQÓ×ÒT”TÈÈTÐŒWÓ‘QQÓ×ÒT”[ˆCBƒB‹ÊˆCBˆ
ˆCBˆ
‹ÈÊˆ[™ÙˆÜ›Ý\TÐ’ÒÔ\š\\˜[ÐXØÙ\Ü×Ó^Y\ˆ
‹ÃBƒBƒB‹ÊˆKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKCBˆKHTÐ”H\š\\˜[XØÙ\ÜÈ^Y\ƒBˆKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKH
‹ÃBƒB‹ÊˆCBˆ
ˆYÙÜ›Ý\TÐ”WÔ\š\\˜[ÐXØÙ\Ü×Ó^Y\ˆTÐ”H\š\\˜[XØÙ\ÜÈ^Y\ƒBˆ
ˆÃBˆ
‹ÃBƒB‹ÊŠˆTÐ”HH™YÚ\Ý\ˆ^[Ý]\YYˆ
‹ÃB\YYˆÝXÝÃBˆ×ÒSÈZ[Ì—ÝÑÈÊŠTÐˆHÝÙ\‹QÝÛˆ™YÚ\Ý\‹Ù™œÙ]ˆ
‹ÃBˆ×ÒSÈZ[Ì—ÝÑÔÑUÈÊŠTÐˆHÝÙ\‹QÝÛˆ™YÚ\Ý\‹Ù™œÙ]ˆ
‹ÃBˆ×ÒSÈZ[Ì—ÝÑÐÓŽÈÊŠTÐˆHÝÙ\‹QÝÛˆ™YÚ\Ý\‹Ù™œÙ]ˆ
‹ÃBˆ×ÒSÈZ[Ì—ÝÑÕÑÎÈÊŠTÐˆHÝÙ\‹QÝÛˆ™YÚ\Ý\‹Ù™œÙ]ˆÈ
‹ÃBˆ×ÒSÈZ[Ì—ÝÈÊŠTÐˆH˜[œÛZ]\ˆÛÛ›Û™YÚ\Ý\‹Ù™œÙ]ˆL
‹ÃBˆ×ÒSÈZ[Ì—ÝÔÑUÈÊŠTÐˆH˜[œÛZ]\ˆÛÛ›Û™YÚ\Ý\‹Ù™œÙ]ˆM
‹ÃBˆ×ÒSÈZ[Ì—ÝÐÓŽÈÊŠTÐˆH˜[œÛZ]\ˆÛÛ›Û™YÚ\Ý\‹Ù™œÙ]ˆN
‹ÃBˆ×ÒSÈZ[Ì—ÝÕÑÎÈÊŠTÐˆH˜[œÛZ]\ˆÛÛ›Û™YÚ\Ý\‹Ù™œÙ]ˆPÈ
‹ÃBˆ×ÒSÈZ[Ì—Ý–ÈÊŠTÐˆH™XÙZ]™\ˆÛÛ›Û™YÚ\Ý\‹Ù™œÙ]ˆŒ
‹ÃBˆ×ÒSÈZ[Ì—Ý–ÔÑUÈÊŠTÐˆH™XÙZ]™\ˆÛÛ›Û™YÚ\Ý\‹Ù™œÙ]ˆ
‹ÃBˆ×ÒSÈZ[Ì—Ý–ÐÓŽÈÊŠTÐˆH™XÙZ]™\ˆÛÛ›Û™YÚ\Ý\‹Ù™œÙ]ˆŽ
‹ÃBˆ×ÒSÈZ[Ì—Ý–ÕÑÎÈÊŠTÐˆH™XÙZ]™\ˆÛÛ›Û™YÚ\Ý\‹Ù™œÙ]ˆÈ
‹ÃBˆ×ÒSÈZ[Ì—ÝÕ“ÈÊŠTÐˆHÙ[™\˜[ÛÛ›Û™YÚ\Ý\‹Ù™œÙ]ˆÌ
‹ÃBˆ×ÒSÈZ[Ì—ÝÕ“ÔÑUÈÊŠTÐˆHÙ[™\˜[ÛÛ›Û™YÚ\Ý\‹Ù™œÙ]ˆÍ
‹ÃBˆ×ÒSÈZ[Ì—ÝÕ“ÐÓŽÈÊŠTÐˆHÙ[™\˜[ÛÛ›Û™YÚ\Ý\‹Ù™œÙ]ˆÎ
‹ÃBˆ×ÒSÈZ[Ì—ÝÕ“ÕÑÎÈÊŠTÐˆHÙ[™\˜[ÛÛ›Û™YÚ\Ý\‹Ù™œÙ]ˆÐÈ
‹ÃBˆ×ÒHZ[Ì—ÝÕUTÎÈÊŠTÐˆHÝ]\È™YÚ\Ý\‹Ù™œÙ]ˆ
‹ÃBˆZ[Ý‘TÑT•‘QÌÎL—NÃBˆ×ÒSÈZ[Ì—ÝÔÒPÎÈÊŠTÐˆHÛÛ›ÛÔÝ]\È™YÚ\Ý\‹Ù™œÙ]ˆL
‹ÃBˆ×ÒSÈZ[Ì—ÝÔÒP×ÔÑUÈÊŠTÐˆHÛÛ›ÛÔÝ]\È™YÚ\Ý\‹Ù™œÙ]ˆM
‹ÃBˆ×ÒSÈZ[Ì—ÝÔÒP×ÐÓŽÈÊŠTÐˆHÛÛ›ÛÔÝ]\È™YÚ\Ý\‹Ù™œÙ]ˆN
‹ÃBˆ×ÒSÈZ[Ì—ÝÔÒP×ÕÑÎÈÊŠTÐˆHÛÛ›ÛÔÝ]\È™YÚ\Ý\‹Ù™œÙ]ˆPÈ
‹ÃBˆZ[Ý‘TÑT•‘QÌVÌM—NÃBˆ×ÒSÈZ[Ì—ÝTÐŒWÕ•T×ÑUPÕÈÊŠTÐˆH•TÈ]XÝÛÛ›Û™YÚ\Ý\‹Ù™œÙ]ˆÌ
‹ÃBˆ×ÒSÈZ[Ì—ÝTÐŒWÕ•T×ÑUPÕÔÑUÈÊŠTÐˆH•TÈ]XÝÛÛ›Û™YÚ\Ý\‹Ù™œÙ]ˆÍ
‹ÃBˆ×ÒSÈZ[Ì—ÝTÐŒWÕ•T×ÑUPÕÐÓŽÈÊŠTÐˆH•TÈ]XÝÛÛ›Û™YÚ\Ý\‹Ù™œÙ]ˆÎ
‹ÃBˆ×ÒSÈZ[Ì—ÝTÐŒWÕ•T×ÑUPÕÕÑÎÈÊŠTÐˆH•TÈ]XÝÛÛ›Û™YÚ\Ý\‹Ù™œÙ]ˆÐÈ
‹ÃBˆZ[Ý‘TÑT•‘QÌ–ÍNÃBˆ×ÒSÈZ[Ì—ÝSPÕ“ŽÈÊŠTÐˆH[˜[ÙÈÛÛ›Û™YÚ\Ý\‹Ù™œÙ]ˆL
‹ÃBˆ×ÒSÈZ[Ì—ÝSPÕ“ÔÑUÈÊŠTÐˆH[˜[ÙÈÛÛ›Û™YÚ\Ý\‹Ù™œÙ]ˆL
‹ÃBˆ×ÒSÈZ[Ì—ÝSPÕ“ÐÓŽÈÊŠTÐˆH[˜[ÙÈÛÛ›Û™YÚ\Ý\‹Ù™œÙ]ˆL
‹ÃBˆ×ÒSÈZ[Ì—ÝSPÕ“ÕÑÎÈÊŠTÐˆH[˜[ÙÈÛÛ›Û™YÚ\Ý\‹Ù™œÙ]ˆLÈ
‹ÃBŸHTÐ”WÕ\NÃBƒB‹ÊˆKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKCBˆKHTÐ”H™YÚ\Ý\ˆX\ÚÜÃBˆKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKH
‹ÃBƒB‹ÊˆCBˆ
ˆYÙÜ›Ý\TÐ”WÔ™YÚ\Ý\—ÓX\ÚÜÈTÐ”H™YÚ\Ý\ˆX\ÚÜÃBˆ
ˆÃBˆ
‹ÃBƒB‹ÊˆH˜[YHÑHTÐˆHÝÙ\‹QÝÛˆ™YÚ\Ý\ˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ”WÔÑÕÑ”×ÓPTÒÈ
JCBˆÙYš[™HTÐ”WÔÑÕÑ”×ÔÒQ•
LJCB‹ÊˆHÑ”ÃBˆ
ˆŒ‹“›Ü›X[Ü\˜][Û‹ƒBˆ
ˆŒK‹”ÝÙ\‹YÝÛˆHTÐˆ[\ÜYYš]™\œËˆ\È\›œÈÙ™ˆHÝ\œ™[Ý\˜][ÛˆÛÝ\˜Ù\È[™]ÈCBˆ
‹ÃBˆÙYš[™HTÐ”WÔÑÕÑ”Ê
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÔÑÕÑ”×ÔÒQ•
JH	ˆTÐ”WÔÑÕÑ”×ÓPTÒÊCBˆÙYš[™HTÐ”WÔÑÕÑP’PT×ÓPTÒÈ
JCBˆÙYš[™HTÐ”WÔÑÕÑP’PT×ÔÒQ•
LUJCB‹ÊˆHÑP’PTÃBˆ
ˆŒ‹“›Ü›X[Ü\˜][Û‹ƒBˆ
ˆŒK‹”ÝÙ\‹YÝÛˆHTÐˆHÝ\œ™[šX\È›ØÚÈ›ÜˆH˜[œÛZ]\‹ˆ\Èš]ÚÝ[™HÙ]Û›HÚ[ˆCBˆ
‹ÃBˆÙYš[™HTÐ”WÔÑÕÑP’PTÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÔÑÕÑP’PT×ÔÒQ•
JH	ˆTÐ”WÔÑÕÑP’PT×ÓPTÒÊCBˆÙYš[™HTÐ”WÔÑÕÑŒ’WÓPTÒÈ
LJCBˆÙYš[™HTÐ”WÔÑÕÑŒ’WÔÒQ•
L•JCB‹ÊˆHÑŒ’CBˆ
ˆŒ‹“›Ü›X[Ü\˜][Û‹ƒBˆ
ˆŒK‹”ÝÙ\‹YÝÛˆHTÐˆH˜[œÛZ]‹]ËRHÛÛ™\\ˆ[™HÝ\œ™[Z\œ›ÜƒBˆ
‹ÃBˆÙYš[™HTÐ”WÔÑÕÑŒ’J
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÔÑÕÑŒ’WÔÒQ•
JH	ˆTÐ”WÔÑÕÑŒ’WÓPTÒÊCBˆÙYš[™HTÐ”WÔÑÔ–ÑS•—ÓPTÒÈ
ŒJCBˆÙYš[™HTÐ”WÔÑÔ–ÑS•—ÔÒQ•
MÕJCB‹ÊˆH–ÑS•ƒBˆ
ˆŒ‹“›Ü›X[Ü\˜][Û‹ƒBˆ
ˆŒK‹”ÝÙ\‹YÝÛˆHTÐˆYÚ\ÜYY™XÙZ]™\ˆ[™[ÜH]XÝÜˆ
Ü]Y[ÚÚYÛ˜[
CBˆ
‹ÃBˆÙYš[™HTÐ”WÔÑÔ–ÑS•Š
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÔÑÔ–ÑS•—ÔÒQ•
JH	ˆTÐ”WÔÑÔ–ÑS•—ÓPTÒÊCBˆÙYš[™HTÐ”WÔÑÔ–ÑTWÓPTÒÈ
JCBˆÙYš[™HTÐ”WÔÑÔ–ÑTWÔÒQ•
NJCB‹ÊˆH–ÑTCBˆ
ˆŒ‹“›Ü›X[Ü\˜][Û‹ƒBˆ
ˆŒK‹”ÝÙ\‹YÝÛˆHTÐˆ[\ÜYYY™™\™[X[™XÙZ]™\‹ƒBˆ
‹ÃBˆÙYš[™HTÐ”WÔÑÔ–ÑTJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÔÑÔ–ÑTWÔÒQ•
JH	ˆTÐ”WÔÑÔ–ÑTWÓPTÒÊCBˆÙYš[™HTÐ”WÔÑÔ–ÑQ‘—ÓPTÒÈ
JCBˆÙYš[™HTÐ”WÔÑÔ–ÑQ‘—ÔÒQ•
NUJCB‹ÊˆH–ÑQ‘ƒBˆ
ˆŒ‹“›Ü›X[Ü\˜][Û‹ƒBˆ
ˆŒK‹”ÝÙ\‹YÝÛˆHTÐˆYÚ\ÜYYY™™\™[X[™XÙZ]™CBˆ
‹ÃBˆÙYš[™HTÐ”WÔÑÔ–ÑQ‘Š
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÔÑÔ–ÑQ‘—ÔÒQ•
JH	ˆTÐ”WÔÑÔ–ÑQ‘—ÓPTÒÊCBˆÙYš[™HTÐ”WÔÑÔ–Ñ–ÓPTÒÈ
LJCBˆÙYš[™HTÐ”WÔÑÔ–Ñ–ÔÒQ•
ŒJCB‹ÊˆH–Ñ–Bˆ
ˆŒ‹“›Ü›X[Ü\˜][Û‹ƒBˆ
ˆŒK‹”ÝÙ\‹YÝÛˆH[\™HTÐˆH™XÙZ]™\ˆ›ØÚÈ^Ù\›ÜˆH[\ÜYYY™™\™[X[™XÙZ]™\ƒBˆ
‹ÃBˆÙYš[™HTÐ”WÔÑÔ–Ñ–

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÔÑÔ–Ñ–ÔÒQ•
JH	ˆTÐ”WÔÑÔ–Ñ–ÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHÑÔÑUHTÐˆHÝÙ\‹QÝÛˆ™YÚ\Ý\ˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ”WÔÑÔÑUÕÑ”×ÓPTÒÈ
JCBˆÙYš[™HTÐ”WÔÑÔÑUÕÑ”×ÔÒQ•
LJCB‹ÊˆHÑ”ÃBˆ
ˆŒ‹“›Ü›X[Ü\˜][Û‹ƒBˆ
ˆŒK‹”ÝÙ\‹YÝÛˆHTÐˆ[\ÜYYš]™\œËˆ\È\›œÈÙ™ˆHÝ\œ™[Ý\˜][ÛˆÛÝ\˜Ù\È[™]ÈCBˆ
‹ÃBˆÙYš[™HTÐ”WÔÑÔÑUÕÑ”Ê
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÔÑÔÑUÕÑ”×ÔÒQ•
JH	ˆTÐ”WÔÑÔÑUÕÑ”×ÓPTÒÊCBˆÙYš[™HTÐ”WÔÑÔÑUÕÑP’PT×ÓPTÒÈ
JCBˆÙYš[™HTÐ”WÔÑÔÑUÕÑP’PT×ÔÒQ•
LUJCB‹ÊˆHÑP’PTÃBˆ
ˆŒ‹“›Ü›X[Ü\˜][Û‹ƒBˆ
ˆŒK‹”ÝÙ\‹YÝÛˆHTÐˆHÝ\œ™[šX\È›ØÚÈ›ÜˆH˜[œÛZ]\‹ˆ\Èš]ÚÝ[™HÙ]Û›HÚ[ˆCBˆ
‹ÃBˆÙYš[™HTÐ”WÔÑÔÑUÕÑP’PTÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÔÑÔÑUÕÑP’PT×ÔÒQ•
JH	ˆTÐ”WÔÑÔÑUÕÑP’PT×ÓPTÒÊCBˆÙYš[™HTÐ”WÔÑÔÑUÕÑŒ’WÓPTÒÈ
LJCBˆÙYš[™HTÐ”WÔÑÔÑUÕÑŒ’WÔÒQ•
L•JCB‹ÊˆHÑŒ’CBˆ
ˆŒ‹“›Ü›X[Ü\˜][Û‹ƒBˆ
ˆŒK‹”ÝÙ\‹YÝÛˆHTÐˆH˜[œÛZ]‹]ËRHÛÛ™\\ˆ[™HÝ\œ™[Z\œ›ÜƒBˆ
‹ÃBˆÙYš[™HTÐ”WÔÑÔÑUÕÑŒ’J
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÔÑÔÑUÕÑŒ’WÔÒQ•
JH	ˆTÐ”WÔÑÔÑUÕÑŒ’WÓPTÒÊCBˆÙYš[™HTÐ”WÔÑÔÑUÔ–ÑS•—ÓPTÒÈ
ŒJCBˆÙYš[™HTÐ”WÔÑÔÑUÔ–ÑS•—ÔÒQ•
MÕJCB‹ÊˆH–ÑS•ƒBˆ
ˆŒ‹“›Ü›X[Ü\˜][Û‹ƒBˆ
ˆŒK‹”ÝÙ\‹YÝÛˆHTÐˆYÚ\ÜYY™XÙZ]™\ˆ[™[ÜH]XÝÜˆ
Ü]Y[ÚÚYÛ˜[
CBˆ
‹ÃBˆÙYš[™HTÐ”WÔÑÔÑUÔ–ÑS•Š
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÔÑÔÑUÔ–ÑS•—ÔÒQ•
JH	ˆTÐ”WÔÑÔÑUÔ–ÑS•—ÓPTÒÊCBˆÙYš[™HTÐ”WÔÑÔÑUÔ–ÑTWÓPTÒÈ
JCBˆÙYš[™HTÐ”WÔÑÔÑUÔ–ÑTWÔÒQ•
NJCB‹ÊˆH–ÑTCBˆ
ˆŒ‹“›Ü›X[Ü\˜][Û‹ƒBˆ
ˆŒK‹”ÝÙ\‹YÝÛˆHTÐˆ[\ÜYYY™™\™[X[™XÙZ]™\‹ƒBˆ
‹ÃBˆÙYš[™HTÐ”WÔÑÔÑUÔ–ÑTJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÔÑÔÑUÔ–ÑTWÔÒQ•
JH	ˆTÐ”WÔÑÔÑUÔ–ÑTWÓPTÒÊCBˆÙYš[™HTÐ”WÔÑÔÑUÔ–ÑQ‘—ÓPTÒÈ
JCBˆÙYš[™HTÐ”WÔÑÔÑUÔ–ÑQ‘—ÔÒQ•
NUJCB‹ÊˆH–ÑQ‘ƒBˆ
ˆŒ‹“›Ü›X[Ü\˜][Û‹ƒBˆ
ˆŒK‹”ÝÙ\‹YÝÛˆHTÐˆYÚ\ÜYYY™™\™[X[™XÙZ]™CBˆ
‹ÃBˆÙYš[™HTÐ”WÔÑÔÑUÔ–ÑQ‘Š
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÔÑÔÑUÔ–ÑQ‘—ÔÒQ•
JH	ˆTÐ”WÔÑÔÑUÔ–ÑQ‘—ÓPTÒÊCBˆÙYš[™HTÐ”WÔÑÔÑUÔ–Ñ–ÓPTÒÈ
LJCBˆÙYš[™HTÐ”WÔÑÔÑUÔ–Ñ–ÔÒQ•
ŒJCB‹ÊˆH–Ñ–Bˆ
ˆŒ‹“›Ü›X[Ü\˜][Û‹ƒBˆ
ˆŒK‹”ÝÙ\‹YÝÛˆH[\™HTÐˆH™XÙZ]™\ˆ›ØÚÈ^Ù\›ÜˆH[\ÜYYY™™\™[X[™XÙZ]™\ƒBˆ
‹ÃBˆÙYš[™HTÐ”WÔÑÔÑUÔ–Ñ–

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÔÑÔÑUÔ–Ñ–ÔÒQ•
JH	ˆTÐ”WÔÑÔÑUÔ–Ñ–ÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHÑÐÓˆHTÐˆHÝÙ\‹QÝÛˆ™YÚ\Ý\ˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ”WÔÑÐÓ—ÕÑ”×ÓPTÒÈ
JCBˆÙYš[™HTÐ”WÔÑÐÓ—ÕÑ”×ÔÒQ•
LJCB‹ÊˆHÑ”ÃBˆ
ˆŒ‹“›Ü›X[Ü\˜][Û‹ƒBˆ
ˆŒK‹”ÝÙ\‹YÝÛˆHTÐˆ[\ÜYYš]™\œËˆ\È\›œÈÙ™ˆHÝ\œ™[Ý\˜][ÛˆÛÝ\˜Ù\È[™]ÈCBˆ
‹ÃBˆÙYš[™HTÐ”WÔÑÐÓ—ÕÑ”Ê
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÔÑÐÓ—ÕÑ”×ÔÒQ•
JH	ˆTÐ”WÔÑÐÓ—ÕÑ”×ÓPTÒÊCBˆÙYš[™HTÐ”WÔÑÐÓ—ÕÑP’PT×ÓPTÒÈ
JCBˆÙYš[™HTÐ”WÔÑÐÓ—ÕÑP’PT×ÔÒQ•
LUJCB‹ÊˆHÑP’PTÃBˆ
ˆŒ‹“›Ü›X[Ü\˜][Û‹ƒBˆ
ˆŒK‹”ÝÙ\‹YÝÛˆHTÐˆHÝ\œ™[šX\È›ØÚÈ›ÜˆH˜[œÛZ]\‹ˆ\Èš]ÚÝ[™HÙ]Û›HÚ[ˆCBˆ
‹ÃBˆÙYš[™HTÐ”WÔÑÐÓ—ÕÑP’PTÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÔÑÐÓ—ÕÑP’PT×ÔÒQ•
JH	ˆTÐ”WÔÑÐÓ—ÕÑP’PT×ÓPTÒÊCBˆÙYš[™HTÐ”WÔÑÐÓ—ÕÑŒ’WÓPTÒÈ
LJCBˆÙYš[™HTÐ”WÔÑÐÓ—ÕÑŒ’WÔÒQ•
L•JCB‹ÊˆHÑŒ’CBˆ
ˆŒ‹“›Ü›X[Ü\˜][Û‹ƒBˆ
ˆŒK‹”ÝÙ\‹YÝÛˆHTÐˆH˜[œÛZ]‹]ËRHÛÛ™\\ˆ[™HÝ\œ™[Z\œ›ÜƒBˆ
‹ÃBˆÙYš[™HTÐ”WÔÑÐÓ—ÕÑŒ’J
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÔÑÐÓ—ÕÑŒ’WÔÒQ•
JH	ˆTÐ”WÔÑÐÓ—ÕÑŒ’WÓPTÒÊCBˆÙYš[™HTÐ”WÔÑÐÓ—Ô–ÑS•—ÓPTÒÈ
ŒJCBˆÙYš[™HTÐ”WÔÑÐÓ—Ô–ÑS•—ÔÒQ•
MÕJCB‹ÊˆH–ÑS•ƒBˆ
ˆŒ‹“›Ü›X[Ü\˜][Û‹ƒBˆ
ˆŒK‹”ÝÙ\‹YÝÛˆHTÐˆYÚ\ÜYY™XÙZ]™\ˆ[™[ÜH]XÝÜˆ
Ü]Y[ÚÚYÛ˜[
CBˆ
‹ÃBˆÙYš[™HTÐ”WÔÑÐÓ—Ô–ÑS•Š
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÔÑÐÓ—Ô–ÑS•—ÔÒQ•
JH	ˆTÐ”WÔÑÐÓ—Ô–ÑS•—ÓPTÒÊCBˆÙYš[™HTÐ”WÔÑÐÓ—Ô–ÑTWÓPTÒÈ
JCBˆÙYš[™HTÐ”WÔÑÐÓ—Ô–ÑTWÔÒQ•
NJCB‹ÊˆH–ÑTCBˆ
ˆŒ‹“›Ü›X[Ü\˜][Û‹ƒBˆ
ˆŒK‹”ÝÙ\‹YÝÛˆHTÐˆ[\ÜYYY™™\™[X[™XÙZ]™\‹ƒBˆ
‹ÃBˆÙYš[™HTÐ”WÔÑÐÓ—Ô–ÑTJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÔÑÐÓ—Ô–ÑTWÔÒQ•
JH	ˆTÐ”WÔÑÐÓ—Ô–ÑTWÓPTÒÊCBˆÙYš[™HTÐ”WÔÑÐÓ—Ô–ÑQ‘—ÓPTÒÈ
JCBˆÙYš[™HTÐ”WÔÑÐÓ—Ô–ÑQ‘—ÔÒQ•
NUJCB‹ÊˆH–ÑQ‘ƒBˆ
ˆŒ‹“›Ü›X[Ü\˜][Û‹ƒBˆ
ˆŒK‹”ÝÙ\‹YÝÛˆHTÐˆYÚ\ÜYYY™™\™[X[™XÙZ]™CBˆ
‹ÃBˆÙYš[™HTÐ”WÔÑÐÓ—Ô–ÑQ‘Š
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÔÑÐÓ—Ô–ÑQ‘—ÔÒQ•
JH	ˆTÐ”WÔÑÐÓ—Ô–ÑQ‘—ÓPTÒÊCBˆÙYš[™HTÐ”WÔÑÐÓ—Ô–Ñ–ÓPTÒÈ
LJCBˆÙYš[™HTÐ”WÔÑÐÓ—Ô–Ñ–ÔÒQ•
ŒJCB‹ÊˆH–Ñ–Bˆ
ˆŒ‹“›Ü›X[Ü\˜][Û‹ƒBˆ
ˆŒK‹”ÝÙ\‹YÝÛˆH[\™HTÐˆH™XÙZ]™\ˆ›ØÚÈ^Ù\›ÜˆH[\ÜYYY™™\™[X[™XÙZ]™\ƒBˆ
‹ÃBˆÙYš[™HTÐ”WÔÑÐÓ—Ô–Ñ–

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÔÑÐÓ—Ô–Ñ–ÔÒQ•
JH	ˆTÐ”WÔÑÐÓ—Ô–Ñ–ÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHÑÕÑÈHTÐˆHÝÙ\‹QÝÛˆ™YÚ\Ý\ˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ”WÔÑÕÑ×ÕÑ”×ÓPTÒÈ
JCBˆÙYš[™HTÐ”WÔÑÕÑ×ÕÑ”×ÔÒQ•
LJCB‹ÊˆHÑ”ÃBˆ
ˆŒ‹“›Ü›X[Ü\˜][Û‹ƒBˆ
ˆŒK‹”ÝÙ\‹YÝÛˆHTÐˆ[\ÜYYš]™\œËˆ\È\›œÈÙ™ˆHÝ\œ™[Ý\˜][ÛˆÛÝ\˜Ù\È[™]ÈCBˆ
‹ÃBˆÙYš[™HTÐ”WÔÑÕÑ×ÕÑ”Ê
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÔÑÕÑ×ÕÑ”×ÔÒQ•
JH	ˆTÐ”WÔÑÕÑ×ÕÑ”×ÓPTÒÊCBˆÙYš[™HTÐ”WÔÑÕÑ×ÕÑP’PT×ÓPTÒÈ
JCBˆÙYš[™HTÐ”WÔÑÕÑ×ÕÑP’PT×ÔÒQ•
LUJCB‹ÊˆHÑP’PTÃBˆ
ˆŒ‹“›Ü›X[Ü\˜][Û‹ƒBˆ
ˆŒK‹”ÝÙ\‹YÝÛˆHTÐˆHÝ\œ™[šX\È›ØÚÈ›ÜˆH˜[œÛZ]\‹ˆ\Èš]ÚÝ[™HÙ]Û›HÚ[ˆCBˆ
‹ÃBˆÙYš[™HTÐ”WÔÑÕÑ×ÕÑP’PTÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÔÑÕÑ×ÕÑP’PT×ÔÒQ•
JH	ˆTÐ”WÔÑÕÑ×ÕÑP’PT×ÓPTÒÊCBˆÙYš[™HTÐ”WÔÑÕÑ×ÕÑŒ’WÓPTÒÈ
LJCBˆÙYš[™HTÐ”WÔÑÕÑ×ÕÑŒ’WÔÒQ•
L•JCB‹ÊˆHÑŒ’CBˆ
ˆŒ‹“›Ü›X[Ü\˜][Û‹ƒBˆ
ˆŒK‹”ÝÙ\‹YÝÛˆHTÐˆH˜[œÛZ]‹]ËRHÛÛ™\\ˆ[™HÝ\œ™[Z\œ›ÜƒBˆ
‹ÃBˆÙYš[™HTÐ”WÔÑÕÑ×ÕÑŒ’J
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÔÑÕÑ×ÕÑŒ’WÔÒQ•
JH	ˆTÐ”WÔÑÕÑ×ÕÑŒ’WÓPTÒÊCBˆÙYš[™HTÐ”WÔÑÕÑ×Ô–ÑS•—ÓPTÒÈ
ŒJCBˆÙYš[™HTÐ”WÔÑÕÑ×Ô–ÑS•—ÔÒQ•
MÕJCB‹ÊˆH–ÑS•ƒBˆ
ˆŒ‹“›Ü›X[Ü\˜][Û‹ƒBˆ
ˆŒK‹”ÝÙ\‹YÝÛˆHTÐˆYÚ\ÜYY™XÙZ]™\ˆ[™[ÜH]XÝÜˆ
Ü]Y[ÚÚYÛ˜[
CBˆ
‹ÃBˆÙYš[™HTÐ”WÔÑÕÑ×Ô–ÑS•Š
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÔÑÕÑ×Ô–ÑS•—ÔÒQ•
JH	ˆTÐ”WÔÑÕÑ×Ô–ÑS•—ÓPTÒÊCBˆÙYš[™HTÐ”WÔÑÕÑ×Ô–ÑTWÓPTÒÈ
JCBˆÙYš[™HTÐ”WÔÑÕÑ×Ô–ÑTWÔÒQ•
NJCB‹ÊˆH–ÑTCBˆ
ˆŒ‹“›Ü›X[Ü\˜][Û‹ƒBˆ
ˆŒK‹”ÝÙ\‹YÝÛˆHTÐˆ[\ÜYYY™™\™[X[™XÙZ]™\‹ƒBˆ
‹ÃBˆÙYš[™HTÐ”WÔÑÕÑ×Ô–ÑTJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÔÑÕÑ×Ô–ÑTWÔÒQ•
JH	ˆTÐ”WÔÑÕÑ×Ô–ÑTWÓPTÒÊCBˆÙYš[™HTÐ”WÔÑÕÑ×Ô–ÑQ‘—ÓPTÒÈ
JCBˆÙYš[™HTÐ”WÔÑÕÑ×Ô–ÑQ‘—ÔÒQ•
NUJCB‹ÊˆH–ÑQ‘ƒBˆ
ˆŒ‹“›Ü›X[Ü\˜][Û‹ƒBˆ
ˆŒK‹”ÝÙ\‹YÝÛˆHTÐˆYÚ\ÜYYY™™\™[X[™XÙZ]™CBˆ
‹ÃBˆÙYš[™HTÐ”WÔÑÕÑ×Ô–ÑQ‘Š
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÔÑÕÑ×Ô–ÑQ‘—ÔÒQ•
JH	ˆTÐ”WÔÑÕÑ×Ô–ÑQ‘—ÓPTÒÊCBˆÙYš[™HTÐ”WÔÑÕÑ×Ô–Ñ–ÓPTÒÈ
LJCBˆÙYš[™HTÐ”WÔÑÕÑ×Ô–Ñ–ÔÒQ•
ŒJCB‹ÊˆH–Ñ–Bˆ
ˆŒ‹“›Ü›X[Ü\˜][Û‹ƒBˆ
ˆŒK‹”ÝÙ\‹YÝÛˆH[\™HTÐˆH™XÙZ]™\ˆ›ØÚÈ^Ù\›ÜˆH[\ÜYYY™™\™[X[™XÙZ]™\ƒBˆ
‹ÃBˆÙYš[™HTÐ”WÔÑÕÑ×Ô–Ñ–

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÔÑÕÑ×Ô–Ñ–ÔÒQ•
JH	ˆTÐ”WÔÑÕÑ×Ô–Ñ–ÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHHTÐˆH˜[œÛZ]\ˆÛÛ›Û™YÚ\Ý\ˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ”WÕÑÐÐSÓPTÒÈ
•JCBˆÙYš[™HTÐ”WÕÑÐÐSÔÒQ•
JCB‹ÊˆHÐÐSBˆ
ˆŒ‹“X^[][HÝ\œ™[\›Þ[X][HNIHX›Ý™H›ÛZ[˜[ƒBˆ
ˆŒLLK‹“›ÛZ[˜[Bˆ
ˆŒLLLK‹“Z[š[][HÝ\œ™[\›Þ[X][HNIH™[ÝÈ›ÛZ[˜[ƒBˆ
‹ÃBˆÙYš[™HTÐ”WÕÑÐÐS

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÕÑÐÐSÔÒQ•
JH	ˆTÐ”WÕÑÐÐSÓPTÒÊCBˆÙYš[™HTÐ”WÕÕÐSQWÓPTÒÈ
ŒJCBˆÙYš[™HTÐ”WÕÕÐSQWÔÒQ•
JCBˆÙYš[™HTÐ”WÕÕÐSQJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÕÕÐSQWÔÒQ•
JH	ˆTÐ”WÕÕÐSQWÓPTÒÊCBˆÙYš[™HTÐ”WÕÕSÐSQ—ÓPTÒÈ
ŒJCBˆÙYš[™HTÐ”WÕÕSÐSQ—ÔÒQ•
LÕJCBˆÙYš[™HTÐ”WÕÕSÐSQŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÕÕSÐSQ—ÔÒQ•
JH	ˆTÐ”WÕÕSÐSQ—ÓPTÒÊCBˆÙYš[™HTÐ”WÕÕÐSQÓPTÒÈ
ŒJCBˆÙYš[™HTÐ”WÕÕÐSQÔÒQ•
M•JCBˆÙYš[™HTÐ”WÕÕÐSQ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÕÕÐSQÔÒQ•
JH	ˆTÐ”WÕÕÐSQÓPTÒÊCBˆÙYš[™HTÐ”WÕÕSÐSQÓPTÒÈ
ŒJCBˆÙYš[™HTÐ”WÕÕSÐSQÔÒQ•
ŒUJCBˆÙYš[™HTÐ”WÕÕSÐSQ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÕÕSÐSQÔÒQ•
JH	ˆTÐ”WÕÕSÐSQÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHÔÑUHTÐˆH˜[œÛZ]\ˆÛÛ›Û™YÚ\Ý\ˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ”WÕÔÑUÑÐÐSÓPTÒÈ
•JCBˆÙYš[™HTÐ”WÕÔÑUÑÐÐSÔÒQ•
JCB‹ÊˆHÐÐSBˆ
ˆŒ‹“X^[][HÝ\œ™[\›Þ[X][HNIHX›Ý™H›ÛZ[˜[ƒBˆ
ˆŒLLK‹“›ÛZ[˜[Bˆ
ˆŒLLLK‹“Z[š[][HÝ\œ™[\›Þ[X][HNIH™[ÝÈ›ÛZ[˜[ƒBˆ
‹ÃBˆÙYš[™HTÐ”WÕÔÑUÑÐÐS

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÕÔÑUÑÐÐSÔÒQ•
JH	ˆTÐ”WÕÔÑUÑÐÐSÓPTÒÊCBˆÙYš[™HTÐ”WÕÔÑUÕÐSQWÓPTÒÈ
ŒJCBˆÙYš[™HTÐ”WÕÔÑUÕÐSQWÔÒQ•
JCBˆÙYš[™HTÐ”WÕÔÑUÕÐSQJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÕÔÑUÕÐSQWÔÒQ•
JH	ˆTÐ”WÕÔÑUÕÐSQWÓPTÒÊCBˆÙYš[™HTÐ”WÕÔÑUÕSÐSQ—ÓPTÒÈ
ŒJCBˆÙYš[™HTÐ”WÕÔÑUÕSÐSQ—ÔÒQ•
LÕJCBˆÙYš[™HTÐ”WÕÔÑUÕSÐSQŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÕÔÑUÕSÐSQ—ÔÒQ•
JH	ˆTÐ”WÕÔÑUÕSÐSQ—ÓPTÒÊCBˆÙYš[™HTÐ”WÕÔÑUÕÐSQÓPTÒÈ
ŒJCBˆÙYš[™HTÐ”WÕÔÑUÕÐSQÔÒQ•
M•JCBˆÙYš[™HTÐ”WÕÔÑUÕÐSQ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÕÔÑUÕÐSQÔÒQ•
JH	ˆTÐ”WÕÔÑUÕÐSQÓPTÒÊCBˆÙYš[™HTÐ”WÕÔÑUÕSÐSQÓPTÒÈ
ŒJCBˆÙYš[™HTÐ”WÕÔÑUÕSÐSQÔÒQ•
ŒUJCBˆÙYš[™HTÐ”WÕÔÑUÕSÐSQ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÕÔÑUÕSÐSQÔÒQ•
JH	ˆTÐ”WÕÔÑUÕSÐSQÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHÐÓˆHTÐˆH˜[œÛZ]\ˆÛÛ›Û™YÚ\Ý\ˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ”WÕÐÓ—ÑÐÐSÓPTÒÈ
•JCBˆÙYš[™HTÐ”WÕÐÓ—ÑÐÐSÔÒQ•
JCB‹ÊˆHÐÐSBˆ
ˆŒ‹“X^[][HÝ\œ™[\›Þ[X][HNIHX›Ý™H›ÛZ[˜[ƒBˆ
ˆŒLLK‹“›ÛZ[˜[Bˆ
ˆŒLLLK‹“Z[š[][HÝ\œ™[\›Þ[X][HNIH™[ÝÈ›ÛZ[˜[ƒBˆ
‹ÃBˆÙYš[™HTÐ”WÕÐÓ—ÑÐÐS

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÕÐÓ—ÑÐÐSÔÒQ•
JH	ˆTÐ”WÕÐÓ—ÑÐÐSÓPTÒÊCBˆÙYš[™HTÐ”WÕÐÓ—ÕÐSQWÓPTÒÈ
ŒJCBˆÙYš[™HTÐ”WÕÐÓ—ÕÐSQWÔÒQ•
JCBˆÙYš[™HTÐ”WÕÐÓ—ÕÐSQJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÕÐÓ—ÕÐSQWÔÒQ•
JH	ˆTÐ”WÕÐÓ—ÕÐSQWÓPTÒÊCBˆÙYš[™HTÐ”WÕÐÓ—ÕSÐSQ—ÓPTÒÈ
ŒJCBˆÙYš[™HTÐ”WÕÐÓ—ÕSÐSQ—ÔÒQ•
LÕJCBˆÙYš[™HTÐ”WÕÐÓ—ÕSÐSQŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÕÐÓ—ÕSÐSQ—ÔÒQ•
JH	ˆTÐ”WÕÐÓ—ÕSÐSQ—ÓPTÒÊCBˆÙYš[™HTÐ”WÕÐÓ—ÕÐSQÓPTÒÈ
ŒJCBˆÙYš[™HTÐ”WÕÐÓ—ÕÐSQÔÒQ•
M•JCBˆÙYš[™HTÐ”WÕÐÓ—ÕÐSQ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÕÐÓ—ÕÐSQÔÒQ•
JH	ˆTÐ”WÕÐÓ—ÕÐSQÓPTÒÊCBˆÙYš[™HTÐ”WÕÐÓ—ÕSÐSQÓPTÒÈ
ŒJCBˆÙYš[™HTÐ”WÕÐÓ—ÕSÐSQÔÒQ•
ŒUJCBˆÙYš[™HTÐ”WÕÐÓ—ÕSÐSQ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÕÐÓ—ÕSÐSQÔÒQ•
JH	ˆTÐ”WÕÐÓ—ÕSÐSQÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHÕÑÈHTÐˆH˜[œÛZ]\ˆÛÛ›Û™YÚ\Ý\ˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ”WÕÕÑ×ÑÐÐSÓPTÒÈ
•JCBˆÙYš[™HTÐ”WÕÕÑ×ÑÐÐSÔÒQ•
JCB‹ÊˆHÐÐSBˆ
ˆŒ‹“X^[][HÝ\œ™[\›Þ[X][HNIHX›Ý™H›ÛZ[˜[ƒBˆ
ˆŒLLK‹“›ÛZ[˜[Bˆ
ˆŒLLLK‹“Z[š[][HÝ\œ™[\›Þ[X][HNIH™[ÝÈ›ÛZ[˜[ƒBˆ
‹ÃBˆÙYš[™HTÐ”WÕÕÑ×ÑÐÐS

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÕÕÑ×ÑÐÐSÔÒQ•
JH	ˆTÐ”WÕÕÑ×ÑÐÐSÓPTÒÊCBˆÙYš[™HTÐ”WÕÕÑ×ÕÐSQWÓPTÒÈ
ŒJCBˆÙYš[™HTÐ”WÕÕÑ×ÕÐSQWÔÒQ•
JCBˆÙYš[™HTÐ”WÕÕÑ×ÕÐSQJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÕÕÑ×ÕÐSQWÔÒQ•
JH	ˆTÐ”WÕÕÑ×ÕÐSQWÓPTÒÊCBˆÙYš[™HTÐ”WÕÕÑ×ÕSÐSQ—ÓPTÒÈ
ŒJCBˆÙYš[™HTÐ”WÕÕÑ×ÕSÐSQ—ÔÒQ•
LÕJCBˆÙYš[™HTÐ”WÕÕÑ×ÕSÐSQŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÕÕÑ×ÕSÐSQ—ÔÒQ•
JH	ˆTÐ”WÕÕÑ×ÕSÐSQ—ÓPTÒÊCBˆÙYš[™HTÐ”WÕÕÑ×ÕÐSQÓPTÒÈ
ŒJCBˆÙYš[™HTÐ”WÕÕÑ×ÕÐSQÔÒQ•
M•JCBˆÙYš[™HTÐ”WÕÕÑ×ÕÐSQ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÕÕÑ×ÕÐSQÔÒQ•
JH	ˆTÐ”WÕÕÑ×ÕÐSQÓPTÒÊCBˆÙYš[™HTÐ”WÕÕÑ×ÕSÐSQÓPTÒÈ
ŒJCBˆÙYš[™HTÐ”WÕÕÑ×ÕSÐSQÔÒQ•
ŒUJCBˆÙYš[™HTÐ”WÕÕÑ×ÕSÐSQ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÕÕÑ×ÕSÐSQÔÒQ•
JH	ˆTÐ”WÕÕÑ×ÕSÐSQÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YH–HTÐˆH™XÙZ]™\ˆÛÛ›Û™YÚ\Ý\ˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ”WÔ–ÑS•Q—ÓPTÒÈ
ÕJCBˆÙYš[™HTÐ”WÔ–ÑS•Q—ÔÒQ•
JCB‹ÊˆHS•QƒBˆ
ˆŒ‹•š\S]™[›ÛYÙH\ÈŒLƒBˆ
ˆŒK‹•š\S]™[›ÛYÙH\ÈŒLLHƒBˆ
ˆŒL‹•š\S]™[›ÛYÙH\ÈŒLLƒBˆ
ˆŒLK‹•š\S]™[›ÛYÙH\ÈŒÍHƒBˆ
ˆŒL‹œ™\Ù\™YBˆ
ˆŒLK‹œ™\Ù\™YBˆ
ˆŒLL‹œ™\Ù\™YBˆ
ˆŒLLK‹œ™\Ù\™YBˆ
‹ÃBˆÙYš[™HTÐ”WÔ–ÑS•QŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÔ–ÑS•Q—ÔÒQ•
JH	ˆTÐ”WÔ–ÑS•Q—ÓPTÒÊCBˆÙYš[™HTÐ”WÔ–ÑTÐÓÓQ—ÓPTÒÈ
ÌJCBˆÙYš[™HTÐ”WÔ–ÑTÐÓÓQ—ÔÒQ•
JCB‹ÊˆHTÐÓÓQƒBˆ
ˆŒ‹•š\S]™[›ÛYÙH\ÈMŽÍHƒBˆ
ˆŒK‹•š\S]™[›ÛYÙH\ÈMLƒBˆ
ˆŒL‹•š\S]™[›ÛYÙH\ÈNLHƒBˆ
ˆŒLK‹•š\S]™[›ÛYÙH\ÈŒƒBˆ
ˆŒL‹œ™\Ù\™YBˆ
ˆŒLK‹œ™\Ù\™YBˆ
ˆŒLL‹œ™\Ù\™YBˆ
ˆŒLLK‹œ™\Ù\™YBˆ
‹ÃBˆÙYš[™HTÐ”WÔ–ÑTÐÓÓQŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÔ–ÑTÐÓÓQ—ÔÒQ•
JH	ˆTÐ”WÔ–ÑTÐÓÓQ—ÓPTÒÊCBˆÙYš[™HTÐ”WÔ–Ô––TTÔ×ÓPTÒÈ
JCBˆÙYš[™HTÐ”WÔ–Ô––TTÔ×ÔÒQ•
Œ•JCB‹ÊˆH––TTÔÃBˆ
ˆŒ‹“›Ü›X[Ü\˜][Û‹ƒBˆ
ˆŒK‹•\ÙHHÝ]]ÙˆHTÐ—ÑÚ[™ÛKY[™Y™XÙZ]™\ˆ[ˆXÙHÙˆH[\ÜYYY™™\™[X[™XÙZ]™\ƒBˆ
‹ÃBˆÙYš[™HTÐ”WÔ–Ô––TTÔÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÔ–Ô––TTÔ×ÔÒQ•
JH	ˆTÐ”WÔ–Ô––TTÔ×ÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YH–ÔÑUHTÐˆH™XÙZ]™\ˆÛÛ›Û™YÚ\Ý\ˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ”WÔ–ÔÑUÑS•Q—ÓPTÒÈ
ÕJCBˆÙYš[™HTÐ”WÔ–ÔÑUÑS•Q—ÔÒQ•
JCB‹ÊˆHS•QƒBˆ
ˆŒ‹•š\S]™[›ÛYÙH\ÈŒLƒBˆ
ˆŒK‹•š\S]™[›ÛYÙH\ÈŒLLHƒBˆ
ˆŒL‹•š\S]™[›ÛYÙH\ÈŒLLƒBˆ
ˆŒLK‹•š\S]™[›ÛYÙH\ÈŒÍHƒBˆ
ˆŒL‹œ™\Ù\™YBˆ
ˆŒLK‹œ™\Ù\™YBˆ
ˆŒLL‹œ™\Ù\™YBˆ
ˆŒLLK‹œ™\Ù\™YBˆ
‹ÃBˆÙYš[™HTÐ”WÔ–ÔÑUÑS•QŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÔ–ÔÑUÑS•Q—ÔÒQ•
JH	ˆTÐ”WÔ–ÔÑUÑS•Q—ÓPTÒÊCBˆÙYš[™HTÐ”WÔ–ÔÑUÑTÐÓÓQ—ÓPTÒÈ
ÌJCBˆÙYš[™HTÐ”WÔ–ÔÑUÑTÐÓÓQ—ÔÒQ•
JCB‹ÊˆHTÐÓÓQƒBˆ
ˆŒ‹•š\S]™[›ÛYÙH\ÈMŽÍHƒBˆ
ˆŒK‹•š\S]™[›ÛYÙH\ÈMLƒBˆ
ˆŒL‹•š\S]™[›ÛYÙH\ÈNLHƒBˆ
ˆŒLK‹•š\S]™[›ÛYÙH\ÈŒƒBˆ
ˆŒL‹œ™\Ù\™YBˆ
ˆŒLK‹œ™\Ù\™YBˆ
ˆŒLL‹œ™\Ù\™YBˆ
ˆŒLLK‹œ™\Ù\™YBˆ
‹ÃBˆÙYš[™HTÐ”WÔ–ÔÑUÑTÐÓÓQŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÔ–ÔÑUÑTÐÓÓQ—ÔÒQ•
JH	ˆTÐ”WÔ–ÔÑUÑTÐÓÓQ—ÓPTÒÊCBˆÙYš[™HTÐ”WÔ–ÔÑUÔ––TTÔ×ÓPTÒÈ
JCBˆÙYš[™HTÐ”WÔ–ÔÑUÔ––TTÔ×ÔÒQ•
Œ•JCB‹ÊˆH––TTÔÃBˆ
ˆŒ‹“›Ü›X[Ü\˜][Û‹ƒBˆ
ˆŒK‹•\ÙHHÝ]]ÙˆHTÐ—ÑÚ[™ÛKY[™Y™XÙZ]™\ˆ[ˆXÙHÙˆH[\ÜYYY™™\™[X[™XÙZ]™\ƒBˆ
‹ÃBˆÙYš[™HTÐ”WÔ–ÔÑUÔ––TTÔÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÔ–ÔÑUÔ––TTÔ×ÔÒQ•
JH	ˆTÐ”WÔ–ÔÑUÔ––TTÔ×ÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YH–ÐÓˆHTÐˆH™XÙZ]™\ˆÛÛ›Û™YÚ\Ý\ˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ”WÔ–ÐÓ—ÑS•Q—ÓPTÒÈ
ÕJCBˆÙYš[™HTÐ”WÔ–ÐÓ—ÑS•Q—ÔÒQ•
JCB‹ÊˆHS•QƒBˆ
ˆŒ‹•š\S]™[›ÛYÙH\ÈŒLƒBˆ
ˆŒK‹•š\S]™[›ÛYÙH\ÈŒLLHƒBˆ
ˆŒL‹•š\S]™[›ÛYÙH\ÈŒLLƒBˆ
ˆŒLK‹•š\S]™[›ÛYÙH\ÈŒÍHƒBˆ
ˆŒL‹œ™\Ù\™YBˆ
ˆŒLK‹œ™\Ù\™YBˆ
ˆŒLL‹œ™\Ù\™YBˆ
ˆŒLLK‹œ™\Ù\™YBˆ
‹ÃBˆÙYš[™HTÐ”WÔ–ÐÓ—ÑS•QŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÔ–ÐÓ—ÑS•Q—ÔÒQ•
JH	ˆTÐ”WÔ–ÐÓ—ÑS•Q—ÓPTÒÊCBˆÙYš[™HTÐ”WÔ–ÐÓ—ÑTÐÓÓQ—ÓPTÒÈ
ÌJCBˆÙYš[™HTÐ”WÔ–ÐÓ—ÑTÐÓÓQ—ÔÒQ•
JCB‹ÊˆHTÐÓÓQƒBˆ
ˆŒ‹•š\S]™[›ÛYÙH\ÈMŽÍHƒBˆ
ˆŒK‹•š\S]™[›ÛYÙH\ÈMLƒBˆ
ˆŒL‹•š\S]™[›ÛYÙH\ÈNLHƒBˆ
ˆŒLK‹•š\S]™[›ÛYÙH\ÈŒƒBˆ
ˆŒL‹œ™\Ù\™YBˆ
ˆŒLK‹œ™\Ù\™YBˆ
ˆŒLL‹œ™\Ù\™YBˆ
ˆŒLLK‹œ™\Ù\™YBˆ
‹ÃBˆÙYš[™HTÐ”WÔ–ÐÓ—ÑTÐÓÓQŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÔ–ÐÓ—ÑTÐÓÓQ—ÔÒQ•
JH	ˆTÐ”WÔ–ÐÓ—ÑTÐÓÓQ—ÓPTÒÊCBˆÙYš[™HTÐ”WÔ–ÐÓ—Ô––TTÔ×ÓPTÒÈ
JCBˆÙYš[™HTÐ”WÔ–ÐÓ—Ô––TTÔ×ÔÒQ•
Œ•JCB‹ÊˆH––TTÔÃBˆ
ˆŒ‹“›Ü›X[Ü\˜][Û‹ƒBˆ
ˆŒK‹•\ÙHHÝ]]ÙˆHTÐ—ÑÚ[™ÛKY[™Y™XÙZ]™\ˆ[ˆXÙHÙˆH[\ÜYYY™™\™[X[™XÙZ]™\ƒBˆ
‹ÃBˆÙYš[™HTÐ”WÔ–ÐÓ—Ô––TTÔÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÔ–ÐÓ—Ô––TTÔ×ÔÒQ•
JH	ˆTÐ”WÔ–ÐÓ—Ô––TTÔ×ÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YH–ÕÑÈHTÐˆH™XÙZ]™\ˆÛÛ›Û™YÚ\Ý\ˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ”WÔ–ÕÑ×ÑS•Q—ÓPTÒÈ
ÕJCBˆÙYš[™HTÐ”WÔ–ÕÑ×ÑS•Q—ÔÒQ•
JCB‹ÊˆHS•QƒBˆ
ˆŒ‹•š\S]™[›ÛYÙH\ÈŒLƒBˆ
ˆŒK‹•š\S]™[›ÛYÙH\ÈŒLLHƒBˆ
ˆŒL‹•š\S]™[›ÛYÙH\ÈŒLLƒBˆ
ˆŒLK‹•š\S]™[›ÛYÙH\ÈŒÍHƒBˆ
ˆŒL‹œ™\Ù\™YBˆ
ˆŒLK‹œ™\Ù\™YBˆ
ˆŒLL‹œ™\Ù\™YBˆ
ˆŒLLK‹œ™\Ù\™YBˆ
‹ÃBˆÙYš[™HTÐ”WÔ–ÕÑ×ÑS•QŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÔ–ÕÑ×ÑS•Q—ÔÒQ•
JH	ˆTÐ”WÔ–ÕÑ×ÑS•Q—ÓPTÒÊCBˆÙYš[™HTÐ”WÔ–ÕÑ×ÑTÐÓÓQ—ÓPTÒÈ
ÌJCBˆÙYš[™HTÐ”WÔ–ÕÑ×ÑTÐÓÓQ—ÔÒQ•
JCB‹ÊˆHTÐÓÓQƒBˆ
ˆŒ‹•š\S]™[›ÛYÙH\ÈMŽÍHƒBˆ
ˆŒK‹•š\S]™[›ÛYÙH\ÈMLƒBˆ
ˆŒL‹•š\S]™[›ÛYÙH\ÈNLHƒBˆ
ˆŒLK‹•š\S]™[›ÛYÙH\ÈŒƒBˆ
ˆŒL‹œ™\Ù\™YBˆ
ˆŒLK‹œ™\Ù\™YBˆ
ˆŒLL‹œ™\Ù\™YBˆ
ˆŒLLK‹œ™\Ù\™YBˆ
‹ÃBˆÙYš[™HTÐ”WÔ–ÕÑ×ÑTÐÓÓQŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÔ–ÕÑ×ÑTÐÓÓQ—ÔÒQ•
JH	ˆTÐ”WÔ–ÕÑ×ÑTÐÓÓQ—ÓPTÒÊCBˆÙYš[™HTÐ”WÔ–ÕÑ×Ô––TTÔ×ÓPTÒÈ
JCBˆÙYš[™HTÐ”WÔ–ÕÑ×Ô––TTÔ×ÔÒQ•
Œ•JCB‹ÊˆH––TTÔÃBˆ
ˆŒ‹“›Ü›X[Ü\˜][Û‹ƒBˆ
ˆŒK‹•\ÙHHÝ]]ÙˆHTÐ—ÑÚ[™ÛKY[™Y™XÙZ]™\ˆ[ˆXÙHÙˆH[\ÜYYY™™\™[X[™XÙZ]™\ƒBˆ
‹ÃBˆÙYš[™HTÐ”WÔ–ÕÑ×Ô––TTÔÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÔ–ÕÑ×Ô––TTÔ×ÔÒQ•
JH	ˆTÐ”WÔ–ÕÑ×Ô––TTÔ×ÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHÕ“HTÐˆHÙ[™\˜[ÛÛ›Û™YÚ\Ý\ˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ”WÐÕ“ÑS’ÔÕTÐÓÓ‘UPÕÓPTÒÈ
•JCBˆÙYš[™HTÐ”WÐÕ“ÑS’ÔÕTÐÓÓ‘UPÕÔÒQ•
UJCBˆÙYš[™HTÐ”WÐÕ“ÑS’ÔÕTÐÓÓ‘UPÕ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÑS’ÔÕTÐÓÓ‘UPÕÔÒQ•
JH	ˆTÐ”WÐÕ“ÑS’ÔÕTÐÓÓ‘UPÕÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÑS’T”RÔÕTÐÓÓ—ÓPTÒÈ
JCBˆÙYš[™HTÐ”WÐÕ“ÑS’T”RÔÕTÐÓÓ—ÔÒQ•
•JCBˆÙYš[™HTÐ”WÐÕ“ÑS’T”RÔÕTÐÓÓŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÑS’T”RÔÕTÐÓÓ—ÔÒQ•
JH	ˆTÐ”WÐÕ“ÑS’T”RÔÕTÐÓÓ—ÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÒÔÕTÐÓÓ‘UPÕÒT”WÓPTÒÈ
JCBˆÙYš[™HTÐ”WÐÕ“ÒÔÕTÐÓÓ‘UPÕÒT”WÔÒQ•
ÕJCBˆÙYš[™HTÐ”WÐÕ“ÒÔÕTÐÓÓ‘UPÕÒT”J
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÒÔÕTÐÓÓ‘UPÕÒT”WÔÒQ•
JH	ˆTÐ”WÐÕ“ÒÔÕTÐÓÓ‘UPÕÒT”WÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÑS‘U”QÒS‘UÓPTÒÈ
LJCBˆÙYš[™HTÐ”WÐÕ“ÑS‘U”QÒS‘UÔÒQ•
JCB‹ÊˆHS‘U”QÒS‘UBˆ
ˆŒ‹‘\ØX›\ÈŒÛÚH[\™\Ú\ÝÜœÈÛˆTÐ—Ñ[™TÐ—ÑH[œÈ
Y˜][
CBˆ
ˆŒK‹‘[˜X›\ÈŒÛÚH[\™\Ú\ÝÜœÈÛˆTÐ—Ñ[™TÐ—ÑH[œÃBˆ
‹ÃBˆÙYš[™HTÐ”WÐÕ“ÑS‘U”QÒS‘U

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÑS‘U”QÒS‘UÔÒQ•
JH	ˆTÐ”WÐÕ“ÑS‘U”QÒS‘UÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÑU”QÒS—ÔÓT’UWÓPTÒÈ
ŒJCBˆÙYš[™HTÐ”WÐÕ“ÑU”QÒS—ÔÓT’UWÔÒQ•
UJCBˆÙYš[™HTÐ”WÐÕ“ÑU”QÒS—ÔÓT’UJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÑU”QÒS—ÔÓT’UWÔÒQ•
JH	ˆTÐ”WÐÕ“ÑU”QÒS—ÔÓT’UWÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“Ô‘TÕSQRT”TÕPÒÖWÓPTÒÈ
LJCBˆÙYš[™HTÐ”WÐÕ“Ô‘TÕSQRT”TÕPÒÖWÔÒQ•
JCBˆÙYš[™HTÐ”WÐÕ“Ô‘TÕSQRT”TÕPÒÖJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“Ô‘TÕSQRT”TÕPÒÖWÔÒQ•
JH	ˆTÐ”WÐÕ“Ô‘TÕSQRT”TÕPÒÖWÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÑS’T”T‘TÕSQQUPÕÓPTÒÈ
ŒJCBˆÙYš[™HTÐ”WÐÕ“ÑS’T”T‘TÕSQQUPÕÔÒQ•
UJCBˆÙYš[™HTÐ”WÐÕ“ÑS’T”T‘TÕSQQUPÕ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÑS’T”T‘TÕSQQUPÕÔÒQ•
JH	ˆTÐ”WÐÕ“ÑS’T”T‘TÕSQQUPÕÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“Ô‘TÕSQWÒT”WÓPTÒÈ
JCBˆÙYš[™HTÐ”WÐÕ“Ô‘TÕSQWÒT”WÔÒQ•
LJCBˆÙYš[™HTÐ”WÐÕ“Ô‘TÕSQWÒT”J
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“Ô‘TÕSQWÒT”WÔÒQ•
JH	ˆTÐ”WÐÕ“Ô‘TÕSQWÒT”WÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÑU”QÒS—ÒT”WÓPTÒÈ
LJCBˆÙYš[™HTÐ”WÐÕ“ÑU”QÒS—ÒT”WÔÒQ•
L•JCBˆÙYš[™HTÐ”WÐÕ“ÑU”QÒS—ÒT”J
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÑU”QÒS—ÒT”WÔÒQ•
JH	ˆTÐ”WÐÕ“ÑU”QÒS—ÒT”WÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÑS•URSU‘S—ÓPTÒÈ
JCBˆÙYš[™HTÐ”WÐÕ“ÑS•URSU‘S—ÔÒQ•
MJCBˆÙYš[™HTÐ”WÐÕ“ÑS•URSU‘SŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÑS•URSU‘S—ÔÒQ•
JH	ˆTÐ”WÐÕ“ÑS•URSU‘S—ÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÑS•URSU‘S×ÓPTÒÈ
JCBˆÙYš[™HTÐ”WÐÕ“ÑS•URSU‘S×ÔÒQ•
MUJCBˆÙYš[™HTÐ”WÐÕ“ÑS•URSU‘SÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÑS•URSU‘S×ÔÒQ•
JH	ˆTÐ”WÐÕ“ÑS•URSU‘S×ÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÑS’T”UÐRÑUTÓPTÒÈ
LJCBˆÙYš[™HTÐ”WÐÕ“ÑS’T”UÐRÑUTÔÒQ•
M•JCBˆÙYš[™HTÐ”WÐÕ“ÑS’T”UÐRÑUT

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÑS’T”UÐRÑUTÔÒQ•
JH	ˆTÐ”WÐÕ“ÑS’T”UÐRÑUTÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÕÐRÑUTÒT”WÓPTÒÈ
ŒJCBˆÙYš[™HTÐ”WÐÕ“ÕÐRÑUTÒT”WÔÒQ•
MÕJCBˆÙYš[™HTÐ”WÐÕ“ÕÐRÑUTÒT”J
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÕÐRÑUTÒT”WÔÒQ•
JH	ˆTÐ”WÐÕ“ÕÐRÑUTÒT”WÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÐUUÔ‘TÕSQWÑS—ÓPTÒÈ
JCBˆÙYš[™HTÐ”WÐÕ“ÐUUÔ‘TÕSQWÑS—ÔÒQ•
NJCBˆÙYš[™HTÐ”WÐÕ“ÐUUÔ‘TÕSQWÑSŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÐUUÔ‘TÕSQWÑS—ÔÒQ•
JH	ˆTÐ”WÐÕ“ÐUUÔ‘TÕSQWÑS—ÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÑSUUÐÓ—ÐÓÑÐUWÓPTÒÈ
JCBˆÙYš[™HTÐ”WÐÕ“ÑSUUÐÓ—ÐÓÑÐUWÔÒQ•
NUJCBˆÙYš[™HTÐ”WÐÕ“ÑSUUÐÓ—ÐÓÑÐUJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÑSUUÐÓ—ÐÓÑÐUWÔÒQ•
JH	ˆTÐ”WÐÕ“ÑSUUÐÓ—ÐÓÑÐUWÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÑSUUÐÓ—ÔWÔÑÓPTÒÈ
LJCBˆÙYš[™HTÐ”WÐÕ“ÑSUUÐÓ—ÔWÔÑÔÒQ•
ŒJCBˆÙYš[™HTÐ”WÐÕ“ÑSUUÐÓ—ÔWÔÑ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÑSUUÐÓ—ÔWÔÑÔÒQ•
JH	ˆTÐ”WÐÕ“ÑSUUÐÓ—ÔWÔÑÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÑS‘PÒ×ÕÒÕTÓPTÒÈ
ŒJCBˆÙYš[™HTÐ”WÐÕ“ÑS‘PÒ×ÕÒÕTÔÒQ•
ŒUJCBˆÙYš[™HTÐ”WÐÕ“ÑS‘PÒ×ÕÒÕT

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÑS‘PÒ×ÕÒÕTÔÒQ•
JH	ˆTÐ”WÐÕ“ÑS‘PÒ×ÕÒÕTÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÑS••TÐÒ×ÕÒÕTÓPTÒÈ
JCBˆÙYš[™HTÐ”WÐÕ“ÑS••TÐÒ×ÕÒÕTÔÒQ•
ŒÕJCBˆÙYš[™HTÐ”WÐÕ“ÑS••TÐÒ×ÕÒÕT

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÑS••TÐÒ×ÕÒÕTÔÒQ•
JH	ˆTÐ”WÐÕ“ÑS••TÐÒ×ÕÒÕTÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÑSUUÐÓ—ÕTÐÓÑÐUWÓPTÒÈ
ŒJCBˆÙYš[™HTÐ”WÐÕ“ÑSUUÐÓ—ÕTÐÓÑÐUWÔÒQ•
UJCBˆÙYš[™HTÐ”WÐÕ“ÑSUUÐÓ—ÕTÐÓÑÐUJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÑSUUÐÓ—ÕTÐÓÑÐUWÔÒQ•
JH	ˆTÐ”WÐÕ“ÑSUUÐÓ—ÕTÐÓÑÐUWÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÑSUUÔÑUÕTÐÓÔ×ÓPTÒÈ
JCBˆÙYš[™HTÐ”WÐÕ“ÑSUUÔÑUÕTÐÓÔ×ÔÒQ•
•JCBˆÙYš[™HTÐ”WÐÕ“ÑSUUÔÑUÕTÐÓÔÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÑSUUÔÑUÕTÐÓÔ×ÔÒQ•
JH	ˆTÐ”WÐÕ“ÑSUUÔÑUÕTÐÓÔ×ÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÒÔÕÑ“ÔÑWÓ×ÔÑLÓPTÒÈ
LJCBˆÙYš[™HTÐ”WÐÕ“ÒÔÕÑ“ÔÑWÓ×ÔÑLÔÒQ•
ŽJCBˆÙYš[™HTÐ”WÐÕ“ÒÔÕÑ“ÔÑWÓ×ÔÑL

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÒÔÕÑ“ÔÑWÓ×ÔÑLÔÒQ•
JH	ˆTÐ”WÐÕ“ÒÔÕÑ“ÔÑWÓ×ÔÑLÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÕURWÔÕTÔS‘WÓPTÒÈ
ŒJCBˆÙYš[™HTÐ”WÐÕ“ÕURWÔÕTÔS‘WÔÒQ•
ŽUJCBˆÙYš[™HTÐ”WÐÕ“ÕURWÔÕTÔS‘J
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÕURWÔÕTÔS‘WÔÒQ•
JH	ˆTÐ”WÐÕ“ÕURWÔÕTÔS‘WÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÐÓÑÐUWÓPTÒÈ
JCBˆÙYš[™HTÐ”WÐÕ“ÐÓÑÐUWÔÒQ•
ÌJCBˆÙYš[™HTÐ”WÐÕ“ÐÓÑÐUJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÐÓÑÐUWÔÒQ•
JH	ˆTÐ”WÐÕ“ÐÓÑÐUWÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÔÑ•”ÕÓPTÒÈ
JCBˆÙYš[™HTÐ”WÐÕ“ÔÑ•”ÕÔÒQ•
ÌUJCBˆÙYš[™HTÐ”WÐÕ“ÔÑ•”Õ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÔÑ•”ÕÔÒQ•
JH	ˆTÐ”WÐÕ“ÔÑ•”ÕÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHÕ“ÔÑUHTÐˆHÙ[™\˜[ÛÛ›Û™YÚ\Ý\ˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ”WÐÕ“ÔÑUÑS’ÔÕTÐÓÓ‘UPÕÓPTÒÈ
•JCBˆÙYš[™HTÐ”WÐÕ“ÔÑUÑS’ÔÕTÐÓÓ‘UPÕÔÒQ•
UJCBˆÙYš[™HTÐ”WÐÕ“ÔÑUÑS’ÔÕTÐÓÓ‘UPÕ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÔÑUÑS’ÔÕTÐÓÓ‘UPÕÔÒQ•
JH	ˆTÐ”WÐÕ“ÔÑUÑS’ÔÕTÐÓÓ‘UPÕÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÔÑUÑS’T”RÔÕTÐÓÓ—ÓPTÒÈ
JCBˆÙYš[™HTÐ”WÐÕ“ÔÑUÑS’T”RÔÕTÐÓÓ—ÔÒQ•
•JCBˆÙYš[™HTÐ”WÐÕ“ÔÑUÑS’T”RÔÕTÐÓÓŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÔÑUÑS’T”RÔÕTÐÓÓ—ÔÒQ•
JH	ˆTÐ”WÐÕ“ÔÑUÑS’T”RÔÕTÐÓÓ—ÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÔÑUÒÔÕTÐÓÓ‘UPÕÒT”WÓPTÒÈ
JCBˆÙYš[™HTÐ”WÐÕ“ÔÑUÒÔÕTÐÓÓ‘UPÕÒT”WÔÒQ•
ÕJCBˆÙYš[™HTÐ”WÐÕ“ÔÑUÒÔÕTÐÓÓ‘UPÕÒT”J
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÔÑUÒÔÕTÐÓÓ‘UPÕÒT”WÔÒQ•
JH	ˆTÐ”WÐÕ“ÔÑUÒÔÕTÐÓÓ‘UPÕÒT”WÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÔÑUÑS‘U”QÒS‘UÓPTÒÈ
LJCBˆÙYš[™HTÐ”WÐÕ“ÔÑUÑS‘U”QÒS‘UÔÒQ•
JCB‹ÊˆHS‘U”QÒS‘UBˆ
ˆŒ‹‘\ØX›\ÈŒÛÚH[\™\Ú\ÝÜœÈÛˆTÐ—Ñ[™TÐ—ÑH[œÈ
Y˜][
CBˆ
ˆŒK‹‘[˜X›\ÈŒÛÚH[\™\Ú\ÝÜœÈÛˆTÐ—Ñ[™TÐ—ÑH[œÃBˆ
‹ÃBˆÙYš[™HTÐ”WÐÕ“ÔÑUÑS‘U”QÒS‘U

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÔÑUÑS‘U”QÒS‘UÔÒQ•
JH	ˆTÐ”WÐÕ“ÔÑUÑS‘U”QÒS‘UÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÔÑUÑU”QÒS—ÔÓT’UWÓPTÒÈ
ŒJCBˆÙYš[™HTÐ”WÐÕ“ÔÑUÑU”QÒS—ÔÓT’UWÔÒQ•
UJCBˆÙYš[™HTÐ”WÐÕ“ÔÑUÑU”QÒS—ÔÓT’UJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÔÑUÑU”QÒS—ÔÓT’UWÔÒQ•
JH	ˆTÐ”WÐÕ“ÔÑUÑU”QÒS—ÔÓT’UWÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÔÑUÔ‘TÕSQRT”TÕPÒÖWÓPTÒÈ
LJCBˆÙYš[™HTÐ”WÐÕ“ÔÑUÔ‘TÕSQRT”TÕPÒÖWÔÒQ•
JCBˆÙYš[™HTÐ”WÐÕ“ÔÑUÔ‘TÕSQRT”TÕPÒÖJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÔÑUÔ‘TÕSQRT”TÕPÒÖWÔÒQ•
JH	ˆTÐ”WÐÕ“ÔÑUÔ‘TÕSQRT”TÕPÒÖWÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÔÑUÑS’T”T‘TÕSQQUPÕÓPTÒÈ
ŒJCBˆÙYš[™HTÐ”WÐÕ“ÔÑUÑS’T”T‘TÕSQQUPÕÔÒQ•
UJCBˆÙYš[™HTÐ”WÐÕ“ÔÑUÑS’T”T‘TÕSQQUPÕ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÔÑUÑS’T”T‘TÕSQQUPÕÔÒQ•
JH	ˆTÐ”WÐÕ“ÔÑUÑS’T”T‘TÕSQQUPÕÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÔÑUÔ‘TÕSQWÒT”WÓPTÒÈ
JCBˆÙYš[™HTÐ”WÐÕ“ÔÑUÔ‘TÕSQWÒT”WÔÒQ•
LJCBˆÙYš[™HTÐ”WÐÕ“ÔÑUÔ‘TÕSQWÒT”J
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÔÑUÔ‘TÕSQWÒT”WÔÒQ•
JH	ˆTÐ”WÐÕ“ÔÑUÔ‘TÕSQWÒT”WÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÔÑUÑU”QÒS—ÒT”WÓPTÒÈ
LJCBˆÙYš[™HTÐ”WÐÕ“ÔÑUÑU”QÒS—ÒT”WÔÒQ•
L•JCBˆÙYš[™HTÐ”WÐÕ“ÔÑUÑU”QÒS—ÒT”J
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÔÑUÑU”QÒS—ÒT”WÔÒQ•
JH	ˆTÐ”WÐÕ“ÔÑUÑU”QÒS—ÒT”WÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÔÑUÑS•URSU‘S—ÓPTÒÈ
JCBˆÙYš[™HTÐ”WÐÕ“ÔÑUÑS•URSU‘S—ÔÒQ•
MJCBˆÙYš[™HTÐ”WÐÕ“ÔÑUÑS•URSU‘SŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÔÑUÑS•URSU‘S—ÔÒQ•
JH	ˆTÐ”WÐÕ“ÔÑUÑS•URSU‘S—ÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÔÑUÑS•URSU‘S×ÓPTÒÈ
JCBˆÙYš[™HTÐ”WÐÕ“ÔÑUÑS•URSU‘S×ÔÒQ•
MUJCBˆÙYš[™HTÐ”WÐÕ“ÔÑUÑS•URSU‘SÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÔÑUÑS•URSU‘S×ÔÒQ•
JH	ˆTÐ”WÐÕ“ÔÑUÑS•URSU‘S×ÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÔÑUÑS’T”UÐRÑUTÓPTÒÈ
LJCBˆÙYš[™HTÐ”WÐÕ“ÔÑUÑS’T”UÐRÑUTÔÒQ•
M•JCBˆÙYš[™HTÐ”WÐÕ“ÔÑUÑS’T”UÐRÑUT

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÔÑUÑS’T”UÐRÑUTÔÒQ•
JH	ˆTÐ”WÐÕ“ÔÑUÑS’T”UÐRÑUTÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÔÑUÕÐRÑUTÒT”WÓPTÒÈ
ŒJCBˆÙYš[™HTÐ”WÐÕ“ÔÑUÕÐRÑUTÒT”WÔÒQ•
MÕJCBˆÙYš[™HTÐ”WÐÕ“ÔÑUÕÐRÑUTÒT”J
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÔÑUÕÐRÑUTÒT”WÔÒQ•
JH	ˆTÐ”WÐÕ“ÔÑUÕÐRÑUTÒT”WÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÔÑUÐUUÔ‘TÕSQWÑS—ÓPTÒÈ
JCBˆÙYš[™HTÐ”WÐÕ“ÔÑUÐUUÔ‘TÕSQWÑS—ÔÒQ•
NJCBˆÙYš[™HTÐ”WÐÕ“ÔÑUÐUUÔ‘TÕSQWÑSŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÔÑUÐUUÔ‘TÕSQWÑS—ÔÒQ•
JH	ˆTÐ”WÐÕ“ÔÑUÐUUÔ‘TÕSQWÑS—ÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÔÑUÑSUUÐÓ—ÐÓÑÐUWÓPTÒÈ
JCBˆÙYš[™HTÐ”WÐÕ“ÔÑUÑSUUÐÓ—ÐÓÑÐUWÔÒQ•
NUJCBˆÙYš[™HTÐ”WÐÕ“ÔÑUÑSUUÐÓ—ÐÓÑÐUJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÔÑUÑSUUÐÓ—ÐÓÑÐUWÔÒQ•
JH	ˆTÐ”WÐÕ“ÔÑUÑSUUÐÓ—ÐÓÑÐUWÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÔÑUÑSUUÐÓ—ÔWÔÑÓPTÒÈ
LJCBˆÙYš[™HTÐ”WÐÕ“ÔÑUÑSUUÐÓ—ÔWÔÑÔÒQ•
ŒJCBˆÙYš[™HTÐ”WÐÕ“ÔÑUÑSUUÐÓ—ÔWÔÑ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÔÑUÑSUUÐÓ—ÔWÔÑÔÒQ•
JH	ˆTÐ”WÐÕ“ÔÑUÑSUUÐÓ—ÔWÔÑÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÔÑUÑS‘PÒ×ÕÒÕTÓPTÒÈ
ŒJCBˆÙYš[™HTÐ”WÐÕ“ÔÑUÑS‘PÒ×ÕÒÕTÔÒQ•
ŒUJCBˆÙYš[™HTÐ”WÐÕ“ÔÑUÑS‘PÒ×ÕÒÕT

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÔÑUÑS‘PÒ×ÕÒÕTÔÒQ•
JH	ˆTÐ”WÐÕ“ÔÑUÑS‘PÒ×ÕÒÕTÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÔÑUÑS••TÐÒ×ÕÒÕTÓPTÒÈ
JCBˆÙYš[™HTÐ”WÐÕ“ÔÑUÑS••TÐÒ×ÕÒÕTÔÒQ•
ŒÕJCBˆÙYš[™HTÐ”WÐÕ“ÔÑUÑS••TÐÒ×ÕÒÕT

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÔÑUÑS••TÐÒ×ÕÒÕTÔÒQ•
JH	ˆTÐ”WÐÕ“ÔÑUÑS••TÐÒ×ÕÒÕTÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÔÑUÑSUUÐÓ—ÕTÐÓÑÐUWÓPTÒÈ
ŒJCBˆÙYš[™HTÐ”WÐÕ“ÔÑUÑSUUÐÓ—ÕTÐÓÑÐUWÔÒQ•
UJCBˆÙYš[™HTÐ”WÐÕ“ÔÑUÑSUUÐÓ—ÕTÐÓÑÐUJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÔÑUÑSUUÐÓ—ÕTÐÓÑÐUWÔÒQ•
JH	ˆTÐ”WÐÕ“ÔÑUÑSUUÐÓ—ÕTÐÓÑÐUWÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÔÑUÑSUUÔÑUÕTÐÓÔ×ÓPTÒÈ
JCBˆÙYš[™HTÐ”WÐÕ“ÔÑUÑSUUÔÑUÕTÐÓÔ×ÔÒQ•
•JCBˆÙYš[™HTÐ”WÐÕ“ÔÑUÑSUUÔÑUÕTÐÓÔÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÔÑUÑSUUÔÑUÕTÐÓÔ×ÔÒQ•
JH	ˆTÐ”WÐÕ“ÔÑUÑSUUÔÑUÕTÐÓÔ×ÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÔÑUÒÔÕÑ“ÔÑWÓ×ÔÑLÓPTÒÈ
LJCBˆÙYš[™HTÐ”WÐÕ“ÔÑUÒÔÕÑ“ÔÑWÓ×ÔÑLÔÒQ•
ŽJCBˆÙYš[™HTÐ”WÐÕ“ÔÑUÒÔÕÑ“ÔÑWÓ×ÔÑL

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÔÑUÒÔÕÑ“ÔÑWÓ×ÔÑLÔÒQ•
JH	ˆTÐ”WÐÕ“ÔÑUÒÔÕÑ“ÔÑWÓ×ÔÑLÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÔÑUÕURWÔÕTÔS‘WÓPTÒÈ
ŒJCBˆÙYš[™HTÐ”WÐÕ“ÔÑUÕURWÔÕTÔS‘WÔÒQ•
ŽUJCBˆÙYš[™HTÐ”WÐÕ“ÔÑUÕURWÔÕTÔS‘J
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÔÑUÕURWÔÕTÔS‘WÔÒQ•
JH	ˆTÐ”WÐÕ“ÔÑUÕURWÔÕTÔS‘WÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÔÑUÐÓÑÐUWÓPTÒÈ
JCBˆÙYš[™HTÐ”WÐÕ“ÔÑUÐÓÑÐUWÔÒQ•
ÌJCBˆÙYš[™HTÐ”WÐÕ“ÔÑUÐÓÑÐUJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÔÑUÐÓÑÐUWÔÒQ•
JH	ˆTÐ”WÐÕ“ÔÑUÐÓÑÐUWÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÔÑUÔÑ•”ÕÓPTÒÈ
JCBˆÙYš[™HTÐ”WÐÕ“ÔÑUÔÑ•”ÕÔÒQ•
ÌUJCBˆÙYš[™HTÐ”WÐÕ“ÔÑUÔÑ•”Õ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÔÑUÔÑ•”ÕÔÒQ•
JH	ˆTÐ”WÐÕ“ÔÑUÔÑ•”ÕÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHÕ“ÐÓˆHTÐˆHÙ[™\˜[ÛÛ›Û™YÚ\Ý\ˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ”WÐÕ“ÐÓ—ÑS’ÔÕTÐÓÓ‘UPÕÓPTÒÈ
•JCBˆÙYš[™HTÐ”WÐÕ“ÐÓ—ÑS’ÔÕTÐÓÓ‘UPÕÔÒQ•
UJCBˆÙYš[™HTÐ”WÐÕ“ÐÓ—ÑS’ÔÕTÐÓÓ‘UPÕ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÐÓ—ÑS’ÔÕTÐÓÓ‘UPÕÔÒQ•
JH	ˆTÐ”WÐÕ“ÐÓ—ÑS’ÔÕTÐÓÓ‘UPÕÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÐÓ—ÑS’T”RÔÕTÐÓÓ—ÓPTÒÈ
JCBˆÙYš[™HTÐ”WÐÕ“ÐÓ—ÑS’T”RÔÕTÐÓÓ—ÔÒQ•
•JCBˆÙYš[™HTÐ”WÐÕ“ÐÓ—ÑS’T”RÔÕTÐÓÓŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÐÓ—ÑS’T”RÔÕTÐÓÓ—ÔÒQ•
JH	ˆTÐ”WÐÕ“ÐÓ—ÑS’T”RÔÕTÐÓÓ—ÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÐÓ—ÒÔÕTÐÓÓ‘UPÕÒT”WÓPTÒÈ
JCBˆÙYš[™HTÐ”WÐÕ“ÐÓ—ÒÔÕTÐÓÓ‘UPÕÒT”WÔÒQ•
ÕJCBˆÙYš[™HTÐ”WÐÕ“ÐÓ—ÒÔÕTÐÓÓ‘UPÕÒT”J
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÐÓ—ÒÔÕTÐÓÓ‘UPÕÒT”WÔÒQ•
JH	ˆTÐ”WÐÕ“ÐÓ—ÒÔÕTÐÓÓ‘UPÕÒT”WÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÐÓ—ÑS‘U”QÒS‘UÓPTÒÈ
LJCBˆÙYš[™HTÐ”WÐÕ“ÐÓ—ÑS‘U”QÒS‘UÔÒQ•
JCB‹ÊˆHS‘U”QÒS‘UBˆ
ˆŒ‹‘\ØX›\ÈŒÛÚH[\™\Ú\ÝÜœÈÛˆTÐ—Ñ[™TÐ—ÑH[œÈ
Y˜][
CBˆ
ˆŒK‹‘[˜X›\ÈŒÛÚH[\™\Ú\ÝÜœÈÛˆTÐ—Ñ[™TÐ—ÑH[œÃBˆ
‹ÃBˆÙYš[™HTÐ”WÐÕ“ÐÓ—ÑS‘U”QÒS‘U

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÐÓ—ÑS‘U”QÒS‘UÔÒQ•
JH	ˆTÐ”WÐÕ“ÐÓ—ÑS‘U”QÒS‘UÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÐÓ—ÑU”QÒS—ÔÓT’UWÓPTÒÈ
ŒJCBˆÙYš[™HTÐ”WÐÕ“ÐÓ—ÑU”QÒS—ÔÓT’UWÔÒQ•
UJCBˆÙYš[™HTÐ”WÐÕ“ÐÓ—ÑU”QÒS—ÔÓT’UJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÐÓ—ÑU”QÒS—ÔÓT’UWÔÒQ•
JH	ˆTÐ”WÐÕ“ÐÓ—ÑU”QÒS—ÔÓT’UWÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÐÓ—Ô‘TÕSQRT”TÕPÒÖWÓPTÒÈ
LJCBˆÙYš[™HTÐ”WÐÕ“ÐÓ—Ô‘TÕSQRT”TÕPÒÖWÔÒQ•
JCBˆÙYš[™HTÐ”WÐÕ“ÐÓ—Ô‘TÕSQRT”TÕPÒÖJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÐÓ—Ô‘TÕSQRT”TÕPÒÖWÔÒQ•
JH	ˆTÐ”WÐÕ“ÐÓ—Ô‘TÕSQRT”TÕPÒÖWÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÐÓ—ÑS’T”T‘TÕSQQUPÕÓPTÒÈ
ŒJCBˆÙYš[™HTÐ”WÐÕ“ÐÓ—ÑS’T”T‘TÕSQQUPÕÔÒQ•
UJCBˆÙYš[™HTÐ”WÐÕ“ÐÓ—ÑS’T”T‘TÕSQQUPÕ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÐÓ—ÑS’T”T‘TÕSQQUPÕÔÒQ•
JH	ˆTÐ”WÐÕ“ÐÓ—ÑS’T”T‘TÕSQQUPÕÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÐÓ—Ô‘TÕSQWÒT”WÓPTÒÈ
JCBˆÙYš[™HTÐ”WÐÕ“ÐÓ—Ô‘TÕSQWÒT”WÔÒQ•
LJCBˆÙYš[™HTÐ”WÐÕ“ÐÓ—Ô‘TÕSQWÒT”J
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÐÓ—Ô‘TÕSQWÒT”WÔÒQ•
JH	ˆTÐ”WÐÕ“ÐÓ—Ô‘TÕSQWÒT”WÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÐÓ—ÑU”QÒS—ÒT”WÓPTÒÈ
LJCBˆÙYš[™HTÐ”WÐÕ“ÐÓ—ÑU”QÒS—ÒT”WÔÒQ•
L•JCBˆÙYš[™HTÐ”WÐÕ“ÐÓ—ÑU”QÒS—ÒT”J
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÐÓ—ÑU”QÒS—ÒT”WÔÒQ•
JH	ˆTÐ”WÐÕ“ÐÓ—ÑU”QÒS—ÒT”WÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÐÓ—ÑS•URSU‘S—ÓPTÒÈ
JCBˆÙYš[™HTÐ”WÐÕ“ÐÓ—ÑS•URSU‘S—ÔÒQ•
MJCBˆÙYš[™HTÐ”WÐÕ“ÐÓ—ÑS•URSU‘SŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÐÓ—ÑS•URSU‘S—ÔÒQ•
JH	ˆTÐ”WÐÕ“ÐÓ—ÑS•URSU‘S—ÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÐÓ—ÑS•URSU‘S×ÓPTÒÈ
JCBˆÙYš[™HTÐ”WÐÕ“ÐÓ—ÑS•URSU‘S×ÔÒQ•
MUJCBˆÙYš[™HTÐ”WÐÕ“ÐÓ—ÑS•URSU‘SÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÐÓ—ÑS•URSU‘S×ÔÒQ•
JH	ˆTÐ”WÐÕ“ÐÓ—ÑS•URSU‘S×ÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÐÓ—ÑS’T”UÐRÑUTÓPTÒÈ
LJCBˆÙYš[™HTÐ”WÐÕ“ÐÓ—ÑS’T”UÐRÑUTÔÒQ•
M•JCBˆÙYš[™HTÐ”WÐÕ“ÐÓ—ÑS’T”UÐRÑUT

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÐÓ—ÑS’T”UÐRÑUTÔÒQ•
JH	ˆTÐ”WÐÕ“ÐÓ—ÑS’T”UÐRÑUTÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÐÓ—ÕÐRÑUTÒT”WÓPTÒÈ
ŒJCBˆÙYš[™HTÐ”WÐÕ“ÐÓ—ÕÐRÑUTÒT”WÔÒQ•
MÕJCBˆÙYš[™HTÐ”WÐÕ“ÐÓ—ÕÐRÑUTÒT”J
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÐÓ—ÕÐRÑUTÒT”WÔÒQ•
JH	ˆTÐ”WÐÕ“ÐÓ—ÕÐRÑUTÒT”WÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÐÓ—ÐUUÔ‘TÕSQWÑS—ÓPTÒÈ
JCBˆÙYš[™HTÐ”WÐÕ“ÐÓ—ÐUUÔ‘TÕSQWÑS—ÔÒQ•
NJCBˆÙYš[™HTÐ”WÐÕ“ÐÓ—ÐUUÔ‘TÕSQWÑSŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÐÓ—ÐUUÔ‘TÕSQWÑS—ÔÒQ•
JH	ˆTÐ”WÐÕ“ÐÓ—ÐUUÔ‘TÕSQWÑS—ÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÐÓ—ÑSUUÐÓ—ÐÓÑÐUWÓPTÒÈ
JCBˆÙYš[™HTÐ”WÐÕ“ÐÓ—ÑSUUÐÓ—ÐÓÑÐUWÔÒQ•
NUJCBˆÙYš[™HTÐ”WÐÕ“ÐÓ—ÑSUUÐÓ—ÐÓÑÐUJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÐÓ—ÑSUUÐÓ—ÐÓÑÐUWÔÒQ•
JH	ˆTÐ”WÐÕ“ÐÓ—ÑSUUÐÓ—ÐÓÑÐUWÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÐÓ—ÑSUUÐÓ—ÔWÔÑÓPTÒÈ
LJCBˆÙYš[™HTÐ”WÐÕ“ÐÓ—ÑSUUÐÓ—ÔWÔÑÔÒQ•
ŒJCBˆÙYš[™HTÐ”WÐÕ“ÐÓ—ÑSUUÐÓ—ÔWÔÑ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÐÓ—ÑSUUÐÓ—ÔWÔÑÔÒQ•
JH	ˆTÐ”WÐÕ“ÐÓ—ÑSUUÐÓ—ÔWÔÑÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÐÓ—ÑS‘PÒ×ÕÒÕTÓPTÒÈ
ŒJCBˆÙYš[™HTÐ”WÐÕ“ÐÓ—ÑS‘PÒ×ÕÒÕTÔÒQ•
ŒUJCBˆÙYš[™HTÐ”WÐÕ“ÐÓ—ÑS‘PÒ×ÕÒÕT

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÐÓ—ÑS‘PÒ×ÕÒÕTÔÒQ•
JH	ˆTÐ”WÐÕ“ÐÓ—ÑS‘PÒ×ÕÒÕTÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÐÓ—ÑS••TÐÒ×ÕÒÕTÓPTÒÈ
JCBˆÙYš[™HTÐ”WÐÕ“ÐÓ—ÑS••TÐÒ×ÕÒÕTÔÒQ•
ŒÕJCBˆÙYš[™HTÐ”WÐÕ“ÐÓ—ÑS••TÐÒ×ÕÒÕT

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÐÓ—ÑS••TÐÒ×ÕÒÕTÔÒQ•
JH	ˆTÐ”WÐÕ“ÐÓ—ÑS••TÐÒ×ÕÒÕTÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÐÓ—ÑSUUÐÓ—ÕTÐÓÑÐUWÓPTÒÈ
ŒJCBˆÙYš[™HTÐ”WÐÕ“ÐÓ—ÑSUUÐÓ—ÕTÐÓÑÐUWÔÒQ•
UJCBˆÙYš[™HTÐ”WÐÕ“ÐÓ—ÑSUUÐÓ—ÕTÐÓÑÐUJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÐÓ—ÑSUUÐÓ—ÕTÐÓÑÐUWÔÒQ•
JH	ˆTÐ”WÐÕ“ÐÓ—ÑSUUÐÓ—ÕTÐÓÑÐUWÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÐÓ—ÑSUUÔÑUÕTÐÓÔ×ÓPTÒÈ
JCBˆÙYš[™HTÐ”WÐÕ“ÐÓ—ÑSUUÔÑUÕTÐÓÔ×ÔÒQ•
•JCBˆÙYš[™HTÐ”WÐÕ“ÐÓ—ÑSUUÔÑUÕTÐÓÔÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÐÓ—ÑSUUÔÑUÕTÐÓÔ×ÔÒQ•
JH	ˆTÐ”WÐÕ“ÐÓ—ÑSUUÔÑUÕTÐÓÔ×ÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÐÓ—ÒÔÕÑ“ÔÑWÓ×ÔÑLÓPTÒÈ
LJCBˆÙYš[™HTÐ”WÐÕ“ÐÓ—ÒÔÕÑ“ÔÑWÓ×ÔÑLÔÒQ•
ŽJCBˆÙYš[™HTÐ”WÐÕ“ÐÓ—ÒÔÕÑ“ÔÑWÓ×ÔÑL

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÐÓ—ÒÔÕÑ“ÔÑWÓ×ÔÑLÔÒQ•
JH	ˆTÐ”WÐÕ“ÐÓ—ÒÔÕÑ“ÔÑWÓ×ÔÑLÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÐÓ—ÕURWÔÕTÔS‘WÓPTÒÈ
ŒJCBˆÙYš[™HTÐ”WÐÕ“ÐÓ—ÕURWÔÕTÔS‘WÔÒQ•
ŽUJCBˆÙYš[™HTÐ”WÐÕ“ÐÓ—ÕURWÔÕTÔS‘J
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÐÓ—ÕURWÔÕTÔS‘WÔÒQ•
JH	ˆTÐ”WÐÕ“ÐÓ—ÕURWÔÕTÔS‘WÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÐÓ—ÐÓÑÐUWÓPTÒÈ
JCBˆÙYš[™HTÐ”WÐÕ“ÐÓ—ÐÓÑÐUWÔÒQ•
ÌJCBˆÙYš[™HTÐ”WÐÕ“ÐÓ—ÐÓÑÐUJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÐÓ—ÐÓÑÐUWÔÒQ•
JH	ˆTÐ”WÐÕ“ÐÓ—ÐÓÑÐUWÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÐÓ—ÔÑ•”ÕÓPTÒÈ
JCBˆÙYš[™HTÐ”WÐÕ“ÐÓ—ÔÑ•”ÕÔÒQ•
ÌUJCBˆÙYš[™HTÐ”WÐÕ“ÐÓ—ÔÑ•”Õ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÐÓ—ÔÑ•”ÕÔÒQ•
JH	ˆTÐ”WÐÕ“ÐÓ—ÔÑ•”ÕÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHÕ“ÕÑÈHTÐˆHÙ[™\˜[ÛÛ›Û™YÚ\Ý\ˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ”WÐÕ“ÕÑ×ÑS’ÔÕTÐÓÓ‘UPÕÓPTÒÈ
•JCBˆÙYš[™HTÐ”WÐÕ“ÕÑ×ÑS’ÔÕTÐÓÓ‘UPÕÔÒQ•
UJCBˆÙYš[™HTÐ”WÐÕ“ÕÑ×ÑS’ÔÕTÐÓÓ‘UPÕ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÕÑ×ÑS’ÔÕTÐÓÓ‘UPÕÔÒQ•
JH	ˆTÐ”WÐÕ“ÕÑ×ÑS’ÔÕTÐÓÓ‘UPÕÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÕÑ×ÑS’T”RÔÕTÐÓÓ—ÓPTÒÈ
JCBˆÙYš[™HTÐ”WÐÕ“ÕÑ×ÑS’T”RÔÕTÐÓÓ—ÔÒQ•
•JCBˆÙYš[™HTÐ”WÐÕ“ÕÑ×ÑS’T”RÔÕTÐÓÓŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÕÑ×ÑS’T”RÔÕTÐÓÓ—ÔÒQ•
JH	ˆTÐ”WÐÕ“ÕÑ×ÑS’T”RÔÕTÐÓÓ—ÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÕÑ×ÒÔÕTÐÓÓ‘UPÕÒT”WÓPTÒÈ
JCBˆÙYš[™HTÐ”WÐÕ“ÕÑ×ÒÔÕTÐÓÓ‘UPÕÒT”WÔÒQ•
ÕJCBˆÙYš[™HTÐ”WÐÕ“ÕÑ×ÒÔÕTÐÓÓ‘UPÕÒT”J
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÕÑ×ÒÔÕTÐÓÓ‘UPÕÒT”WÔÒQ•
JH	ˆTÐ”WÐÕ“ÕÑ×ÒÔÕTÐÓÓ‘UPÕÒT”WÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÕÑ×ÑS‘U”QÒS‘UÓPTÒÈ
LJCBˆÙYš[™HTÐ”WÐÕ“ÕÑ×ÑS‘U”QÒS‘UÔÒQ•
JCB‹ÊˆHS‘U”QÒS‘UBˆ
ˆŒ‹‘\ØX›\ÈŒÛÚH[\™\Ú\ÝÜœÈÛˆTÐ—Ñ[™TÐ—ÑH[œÈ
Y˜][
CBˆ
ˆŒK‹‘[˜X›\ÈŒÛÚH[\™\Ú\ÝÜœÈÛˆTÐ—Ñ[™TÐ—ÑH[œÃBˆ
‹ÃBˆÙYš[™HTÐ”WÐÕ“ÕÑ×ÑS‘U”QÒS‘U

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÕÑ×ÑS‘U”QÒS‘UÔÒQ•
JH	ˆTÐ”WÐÕ“ÕÑ×ÑS‘U”QÒS‘UÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÕÑ×ÑU”QÒS—ÔÓT’UWÓPTÒÈ
ŒJCBˆÙYš[™HTÐ”WÐÕ“ÕÑ×ÑU”QÒS—ÔÓT’UWÔÒQ•
UJCBˆÙYš[™HTÐ”WÐÕ“ÕÑ×ÑU”QÒS—ÔÓT’UJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÕÑ×ÑU”QÒS—ÔÓT’UWÔÒQ•
JH	ˆTÐ”WÐÕ“ÕÑ×ÑU”QÒS—ÔÓT’UWÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÕÑ×Ô‘TÕSQRT”TÕPÒÖWÓPTÒÈ
LJCBˆÙYš[™HTÐ”WÐÕ“ÕÑ×Ô‘TÕSQRT”TÕPÒÖWÔÒQ•
JCBˆÙYš[™HTÐ”WÐÕ“ÕÑ×Ô‘TÕSQRT”TÕPÒÖJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÕÑ×Ô‘TÕSQRT”TÕPÒÖWÔÒQ•
JH	ˆTÐ”WÐÕ“ÕÑ×Ô‘TÕSQRT”TÕPÒÖWÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÕÑ×ÑS’T”T‘TÕSQQUPÕÓPTÒÈ
ŒJCBˆÙYš[™HTÐ”WÐÕ“ÕÑ×ÑS’T”T‘TÕSQQUPÕÔÒQ•
UJCBˆÙYš[™HTÐ”WÐÕ“ÕÑ×ÑS’T”T‘TÕSQQUPÕ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÕÑ×ÑS’T”T‘TÕSQQUPÕÔÒQ•
JH	ˆTÐ”WÐÕ“ÕÑ×ÑS’T”T‘TÕSQQUPÕÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÕÑ×Ô‘TÕSQWÒT”WÓPTÒÈ
JCBˆÙYš[™HTÐ”WÐÕ“ÕÑ×Ô‘TÕSQWÒT”WÔÒQ•
LJCBˆÙYš[™HTÐ”WÐÕ“ÕÑ×Ô‘TÕSQWÒT”J
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÕÑ×Ô‘TÕSQWÒT”WÔÒQ•
JH	ˆTÐ”WÐÕ“ÕÑ×Ô‘TÕSQWÒT”WÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÕÑ×ÑU”QÒS—ÒT”WÓPTÒÈ
LJCBˆÙYš[™HTÐ”WÐÕ“ÕÑ×ÑU”QÒS—ÒT”WÔÒQ•
L•JCBˆÙYš[™HTÐ”WÐÕ“ÕÑ×ÑU”QÒS—ÒT”J
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÕÑ×ÑU”QÒS—ÒT”WÔÒQ•
JH	ˆTÐ”WÐÕ“ÕÑ×ÑU”QÒS—ÒT”WÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÕÑ×ÑS•URSU‘S—ÓPTÒÈ
JCBˆÙYš[™HTÐ”WÐÕ“ÕÑ×ÑS•URSU‘S—ÔÒQ•
MJCBˆÙYš[™HTÐ”WÐÕ“ÕÑ×ÑS•URSU‘SŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÕÑ×ÑS•URSU‘S—ÔÒQ•
JH	ˆTÐ”WÐÕ“ÕÑ×ÑS•URSU‘S—ÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÕÑ×ÑS•URSU‘S×ÓPTÒÈ
JCBˆÙYš[™HTÐ”WÐÕ“ÕÑ×ÑS•URSU‘S×ÔÒQ•
MUJCBˆÙYš[™HTÐ”WÐÕ“ÕÑ×ÑS•URSU‘SÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÕÑ×ÑS•URSU‘S×ÔÒQ•
JH	ˆTÐ”WÐÕ“ÕÑ×ÑS•URSU‘S×ÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÕÑ×ÑS’T”UÐRÑUTÓPTÒÈ
LJCBˆÙYš[™HTÐ”WÐÕ“ÕÑ×ÑS’T”UÐRÑUTÔÒQ•
M•JCBˆÙYš[™HTÐ”WÐÕ“ÕÑ×ÑS’T”UÐRÑUT

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÕÑ×ÑS’T”UÐRÑUTÔÒQ•
JH	ˆTÐ”WÐÕ“ÕÑ×ÑS’T”UÐRÑUTÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÕÑ×ÕÐRÑUTÒT”WÓPTÒÈ
ŒJCBˆÙYš[™HTÐ”WÐÕ“ÕÑ×ÕÐRÑUTÒT”WÔÒQ•
MÕJCBˆÙYš[™HTÐ”WÐÕ“ÕÑ×ÕÐRÑUTÒT”J
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÕÑ×ÕÐRÑUTÒT”WÔÒQ•
JH	ˆTÐ”WÐÕ“ÕÑ×ÕÐRÑUTÒT”WÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÕÑ×ÐUUÔ‘TÕSQWÑS—ÓPTÒÈ
JCBˆÙYš[™HTÐ”WÐÕ“ÕÑ×ÐUUÔ‘TÕSQWÑS—ÔÒQ•
NJCBˆÙYš[™HTÐ”WÐÕ“ÕÑ×ÐUUÔ‘TÕSQWÑSŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÕÑ×ÐUUÔ‘TÕSQWÑS—ÔÒQ•
JH	ˆTÐ”WÐÕ“ÕÑ×ÐUUÔ‘TÕSQWÑS—ÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÕÑ×ÑSUUÐÓ—ÐÓÑÐUWÓPTÒÈ
JCBˆÙYš[™HTÐ”WÐÕ“ÕÑ×ÑSUUÐÓ—ÐÓÑÐUWÔÒQ•
NUJCBˆÙYš[™HTÐ”WÐÕ“ÕÑ×ÑSUUÐÓ—ÐÓÑÐUJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÕÑ×ÑSUUÐÓ—ÐÓÑÐUWÔÒQ•
JH	ˆTÐ”WÐÕ“ÕÑ×ÑSUUÐÓ—ÐÓÑÐUWÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÕÑ×ÑSUUÐÓ—ÔWÔÑÓPTÒÈ
LJCBˆÙYš[™HTÐ”WÐÕ“ÕÑ×ÑSUUÐÓ—ÔWÔÑÔÒQ•
ŒJCBˆÙYš[™HTÐ”WÐÕ“ÕÑ×ÑSUUÐÓ—ÔWÔÑ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÕÑ×ÑSUUÐÓ—ÔWÔÑÔÒQ•
JH	ˆTÐ”WÐÕ“ÕÑ×ÑSUUÐÓ—ÔWÔÑÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÕÑ×ÑS‘PÒ×ÕÒÕTÓPTÒÈ
ŒJCBˆÙYš[™HTÐ”WÐÕ“ÕÑ×ÑS‘PÒ×ÕÒÕTÔÒQ•
ŒUJCBˆÙYš[™HTÐ”WÐÕ“ÕÑ×ÑS‘PÒ×ÕÒÕT

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÕÑ×ÑS‘PÒ×ÕÒÕTÔÒQ•
JH	ˆTÐ”WÐÕ“ÕÑ×ÑS‘PÒ×ÕÒÕTÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÕÑ×ÑS••TÐÒ×ÕÒÕTÓPTÒÈ
JCBˆÙYš[™HTÐ”WÐÕ“ÕÑ×ÑS••TÐÒ×ÕÒÕTÔÒQ•
ŒÕJCBˆÙYš[™HTÐ”WÐÕ“ÕÑ×ÑS••TÐÒ×ÕÒÕT

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÕÑ×ÑS••TÐÒ×ÕÒÕTÔÒQ•
JH	ˆTÐ”WÐÕ“ÕÑ×ÑS••TÐÒ×ÕÒÕTÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÕÑ×ÑSUUÐÓ—ÕTÐÓÑÐUWÓPTÒÈ
ŒJCBˆÙYš[™HTÐ”WÐÕ“ÕÑ×ÑSUUÐÓ—ÕTÐÓÑÐUWÔÒQ•
UJCBˆÙYš[™HTÐ”WÐÕ“ÕÑ×ÑSUUÐÓ—ÕTÐÓÑÐUJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÕÑ×ÑSUUÐÓ—ÕTÐÓÑÐUWÔÒQ•
JH	ˆTÐ”WÐÕ“ÕÑ×ÑSUUÐÓ—ÕTÐÓÑÐUWÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÕÑ×ÑSUUÔÑUÕTÐÓÔ×ÓPTÒÈ
JCBˆÙYš[™HTÐ”WÐÕ“ÕÑ×ÑSUUÔÑUÕTÐÓÔ×ÔÒQ•
•JCBˆÙYš[™HTÐ”WÐÕ“ÕÑ×ÑSUUÔÑUÕTÐÓÔÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÕÑ×ÑSUUÔÑUÕTÐÓÔ×ÔÒQ•
JH	ˆTÐ”WÐÕ“ÕÑ×ÑSUUÔÑUÕTÐÓÔ×ÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÕÑ×ÒÔÕÑ“ÔÑWÓ×ÔÑLÓPTÒÈ
LJCBˆÙYš[™HTÐ”WÐÕ“ÕÑ×ÒÔÕÑ“ÔÑWÓ×ÔÑLÔÒQ•
ŽJCBˆÙYš[™HTÐ”WÐÕ“ÕÑ×ÒÔÕÑ“ÔÑWÓ×ÔÑL

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÕÑ×ÒÔÕÑ“ÔÑWÓ×ÔÑLÔÒQ•
JH	ˆTÐ”WÐÕ“ÕÑ×ÒÔÕÑ“ÔÑWÓ×ÔÑLÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÕÑ×ÕURWÔÕTÔS‘WÓPTÒÈ
ŒJCBˆÙYš[™HTÐ”WÐÕ“ÕÑ×ÕURWÔÕTÔS‘WÔÒQ•
ŽUJCBˆÙYš[™HTÐ”WÐÕ“ÕÑ×ÕURWÔÕTÔS‘J
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÕÑ×ÕURWÔÕTÔS‘WÔÒQ•
JH	ˆTÐ”WÐÕ“ÕÑ×ÕURWÔÕTÔS‘WÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÕÑ×ÐÓÑÐUWÓPTÒÈ
JCBˆÙYš[™HTÐ”WÐÕ“ÕÑ×ÐÓÑÐUWÔÒQ•
ÌJCBˆÙYš[™HTÐ”WÐÕ“ÕÑ×ÐÓÑÐUJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÕÑ×ÐÓÑÐUWÔÒQ•
JH	ˆTÐ”WÐÕ“ÕÑ×ÐÓÑÐUWÓPTÒÊCBˆÙYš[™HTÐ”WÐÕ“ÕÑ×ÔÑ•”ÕÓPTÒÈ
JCBˆÙYš[™HTÐ”WÐÕ“ÕÑ×ÔÑ•”ÕÔÒQ•
ÌUJCBˆÙYš[™HTÐ”WÐÕ“ÕÑ×ÔÑ•”Õ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐÕ“ÕÑ×ÔÑ•”ÕÔÒQ•
JH	ˆTÐ”WÐÕ“ÕÑ×ÔÑ•”ÕÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHÕUTÈHTÐˆHÝ]\È™YÚ\Ý\ˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ”WÔÕUT×ÓÒ×ÔÕUT×ÌÕ—ÓPTÒÈ
UJCBˆÙYš[™HTÐ”WÔÕUT×ÓÒ×ÔÕUT×ÌÕ—ÔÒQ•
JCBˆÙYš[™HTÐ”WÔÕUT×ÓÒ×ÔÕUT×ÌÕŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÔÕUT×ÓÒ×ÔÕUT×ÌÕ—ÔÒQ•
JH	ˆTÐ”WÔÕUT×ÓÒ×ÔÕUT×ÌÕ—ÓPTÒÊCBˆÙYš[™HTÐ”WÔÕUT×ÒÔÕTÐÓÓ‘UPÕÔÕUT×ÓPTÒÈ
JCBˆÙYš[™HTÐ”WÔÕUT×ÒÔÕTÐÓÓ‘UPÕÔÕUT×ÔÒQ•
ÕJCB‹ÊˆHÔÕTÐÓÓ‘UPÕÔÕUTÃBˆ
ˆŒ‹•TÐˆØX›H\ØÛÛ›™XÝ\È›Ý™Y[ˆ]XÝY]HØØ[ÜÝBˆ
ˆŒK‹•TÐˆØX›H\ØÛÛ›™XÝ\È™Y[ˆ]XÝY]HØØ[ÜÝBˆ
‹ÃBˆÙYš[™HTÐ”WÔÕUT×ÒÔÕTÐÓÓ‘UPÕÔÕUTÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÔÕUT×ÒÔÕTÐÓÓ‘UPÕÔÕUT×ÔÒQ•
JH	ˆTÐ”WÔÕUT×ÒÔÕTÐÓÓ‘UPÕÔÕUT×ÓPTÒÊCBˆÙYš[™HTÐ”WÔÕUT×ÑU”QÒS—ÔÕUT×ÓPTÒÈ
JCBˆÙYš[™HTÐ”WÔÕUT×ÑU”QÒS—ÔÕUT×ÔÒQ•
•JCB‹ÊˆHU”QÒS—ÔÕUTÃBˆ
ˆŒ‹“›È]XÚY[ÈHTÐˆÜÝ\È]XÝYBˆ
ˆŒK‹ØX›H]XÚY[ÈHTÐˆÜÝ\È]XÝYBˆ
‹ÃBˆÙYš[™HTÐ”WÔÕUT×ÑU”QÒS—ÔÕUTÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÔÕUT×ÑU”QÒS—ÔÕUT×ÔÒQ•
JH	ˆTÐ”WÔÕUT×ÑU”QÒS—ÔÕUT×ÓPTÒÊCBˆÙYš[™HTÐ”WÔÕUT×Ô‘TÕSQWÔÕUT×ÓPTÒÈ
JCBˆÙYš[™HTÐ”WÔÕUT×Ô‘TÕSQWÔÕUT×ÔÒQ•
LJCBˆÙYš[™HTÐ”WÔÕUT×Ô‘TÕSQWÔÕUTÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÔÕUT×Ô‘TÕSQWÔÕUT×ÔÒQ•
JH	ˆTÐ”WÔÕUT×Ô‘TÕSQWÔÕUT×ÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHÔÒPÈHTÐˆHÛÛ›ÛÔÝ]\È™YÚ\Ý\ˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ”WÔÔÒP×ÔÑS—ÕTÐ—ÐÓÔ×ÓPTÒÈ
JCBˆÙYš[™HTÐ”WÔÔÒP×ÔÑS—ÕTÐ—ÐÓÔ×ÔÒQ•
•JCBˆÙYš[™HTÐ”WÔÔÒP×ÔÑS—ÕTÐ—ÐÓÔÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÔÔÒP×ÔÑS—ÕTÐ—ÐÓÔ×ÔÒQ•
JH	ˆTÐ”WÔÔÒP×ÔÑS—ÕTÐ—ÐÓÔ×ÓPTÒÊCBˆÙYš[™HTÐ”WÔÔÒP×ÔÔÕÑT—ÓPTÒÈ
LJCBˆÙYš[™HTÐ”WÔÔÒP×ÔÔÕÑT—ÔÒQ•
L•JCBˆÙYš[™HTÐ”WÔÔÒP×ÔÔÕÑTŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÔÔÒP×ÔÔÕÑT—ÔÒQ•
JH	ˆTÐ”WÔÔÒP×ÔÔÕÑT—ÓPTÒÊCBˆÙYš[™HTÐ”WÔÔÒP×ÔÑSP“WÓPTÒÈ
ŒJCBˆÙYš[™HTÐ”WÔÔÒP×ÔÑSP“WÔÒQ•
LÕJCBˆÙYš[™HTÐ”WÔÔÒP×ÔÑSP“J
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÔÔÒP×ÔÑSP“WÔÒQ•
JH	ˆTÐ”WÔÔÒP×ÔÑSP“WÓPTÒÊCBˆÙYš[™HTÐ”WÔÔÒP×Ô‘Q’PT×ÔÑÔÑSÓPTÒÈ
JCBˆÙYš[™HTÐ”WÔÔÒP×Ô‘Q’PT×ÔÑÔÑSÔÒQ•
NUJCB‹ÊˆH‘Q’PT×ÔÑÔÑSBˆ
ˆŒ‹”Ù[XÝÈÔÕÑTˆÈÛÛ›ÛH™Y™\™[˜ÙHšX\ÃBˆ
ˆŒK‹”Ù[XÝÈ‘Q’PT×ÔÑÈÛÛ›ÛH™Y™\™[˜ÙHšX\ÃBˆ
‹ÃBˆÙYš[™HTÐ”WÔÔÒP×Ô‘Q’PT×ÔÑÔÑS

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÔÔÒP×Ô‘Q’PT×ÔÑÔÑSÔÒQ•
JH	ˆTÐ”WÔÔÒP×Ô‘Q’PT×ÔÑÔÑSÓPTÒÊCBˆÙYš[™HTÐ”WÔÔÒP×Ô‘Q’PT×ÔÑÓPTÒÈ
LJCBˆÙYš[™HTÐ”WÔÔÒP×Ô‘Q’PT×ÔÑÔÒQ•
ŒJCBˆÙYš[™HTÐ”WÔÔÒP×Ô‘Q’PT×ÔÑ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÔÔÒP×Ô‘Q’PT×ÔÑÔÒQ•
JH	ˆTÐ”WÔÔÒP×Ô‘Q’PT×ÔÑÓPTÒÊCBˆÙYš[™HTÐ”WÔÔÒP×ÔÔ‘Q×ÑSP“WÓPTÒÈ
ŒJCBˆÙYš[™HTÐ”WÔÔÒP×ÔÔ‘Q×ÑSP“WÔÒQ•
ŒUJCBˆÙYš[™HTÐ”WÔÔÒP×ÔÔ‘Q×ÑSP“J
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÔÔÒP×ÔÔ‘Q×ÑSP“WÔÒQ•
JH	ˆTÐ”WÔÔÒP×ÔÔ‘Q×ÑSP“WÓPTÒÊCBˆÙYš[™HTÐ”WÔÔÒP×ÔÑU—ÔÑSÓPTÒÈ
PÌJCBˆÙYš[™HTÐ”WÔÔÒP×ÔÑU—ÔÑSÔÒQ•
Œ•JCB‹ÊˆHÑU—ÔÑSBˆ
ˆŒ‹‘]šYHžHLÃBˆ
ˆŒK‹‘]šYHžHMCBˆ
ˆŒL‹‘]šYHžHMƒBˆ
ˆŒLK‹‘]šYHžHŒBˆ
ˆŒL‹‘]šYHžHŒƒBˆ
ˆŒLK‹‘]šYHžHCBˆ
ˆŒLL‹‘]šYHžHÌBˆ
ˆŒLLK‹‘]šYHžHBˆ
‹ÃBˆÙYš[™HTÐ”WÔÔÒP×ÔÑU—ÔÑS

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÔÔÒP×ÔÑU—ÔÑSÔÒQ•
JH	ˆTÐ”WÔÔÒP×ÔÑU—ÔÑSÓPTÒÊCBˆÙYš[™HTÐ”WÔÔÒP×ÔÔ‘QU—ÓPTÒÈ
JCBˆÙYš[™HTÐ”WÔÔÒP×ÔÔ‘QU—ÔÒQ•
ÌJCBˆÙYš[™HTÐ”WÔÔÒP×ÔÔ‘QUŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÔÔÒP×ÔÔ‘QU—ÔÒQ•
JH	ˆTÐ”WÔÔÒP×ÔÔ‘QU—ÓPTÒÊCBˆÙYš[™HTÐ”WÔÔÒP×ÔÓÐÒ×ÓPTÒÈ
JCBˆÙYš[™HTÐ”WÔÔÒP×ÔÓÐÒ×ÔÒQ•
ÌUJCB‹ÊˆHÓÐÒÃBˆ
ˆŒ‹”\È›ÝÝ\œ™[HØÚÙYBˆ
ˆŒK‹”\ÈÝ\œ™[HØÚÙYBˆ
‹ÃBˆÙYš[™HTÐ”WÔÔÒP×ÔÓÐÒÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÔÔÒP×ÔÓÐÒ×ÔÒQ•
JH	ˆTÐ”WÔÔÒP×ÔÓÐÒ×ÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHÔÒP×ÔÑUHTÐˆHÛÛ›ÛÔÝ]\È™YÚ\Ý\ˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ”WÔÔÒP×ÔÑUÔÑS—ÕTÐ—ÐÓÔ×ÓPTÒÈ
JCBˆÙYš[™HTÐ”WÔÔÒP×ÔÑUÔÑS—ÕTÐ—ÐÓÔ×ÔÒQ•
•JCBˆÙYš[™HTÐ”WÔÔÒP×ÔÑUÔÑS—ÕTÐ—ÐÓÔÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÔÔÒP×ÔÑUÔÑS—ÕTÐ—ÐÓÔ×ÔÒQ•
JH	ˆTÐ”WÔÔÒP×ÔÑUÔÑS—ÕTÐ—ÐÓÔ×ÓPTÒÊCBˆÙYš[™HTÐ”WÔÔÒP×ÔÑUÔÔÕÑT—ÓPTÒÈ
LJCBˆÙYš[™HTÐ”WÔÔÒP×ÔÑUÔÔÕÑT—ÔÒQ•
L•JCBˆÙYš[™HTÐ”WÔÔÒP×ÔÑUÔÔÕÑTŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÔÔÒP×ÔÑUÔÔÕÑT—ÔÒQ•
JH	ˆTÐ”WÔÔÒP×ÔÑUÔÔÕÑT—ÓPTÒÊCBˆÙYš[™HTÐ”WÔÔÒP×ÔÑUÔÑSP“WÓPTÒÈ
ŒJCBˆÙYš[™HTÐ”WÔÔÒP×ÔÑUÔÑSP“WÔÒQ•
LÕJCBˆÙYš[™HTÐ”WÔÔÒP×ÔÑUÔÑSP“J
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÔÔÒP×ÔÑUÔÑSP“WÔÒQ•
JH	ˆTÐ”WÔÔÒP×ÔÑUÔÑSP“WÓPTÒÊCBˆÙYš[™HTÐ”WÔÔÒP×ÔÑUÔ‘Q’PT×ÔÑÔÑSÓPTÒÈ
JCBˆÙYš[™HTÐ”WÔÔÒP×ÔÑUÔ‘Q’PT×ÔÑÔÑSÔÒQ•
NUJCB‹ÊˆH‘Q’PT×ÔÑÔÑSBˆ
ˆŒ‹”Ù[XÝÈÔÕÑTˆÈÛÛ›ÛH™Y™\™[˜ÙHšX\ÃBˆ
ˆŒK‹”Ù[XÝÈ‘Q’PT×ÔÑÈÛÛ›ÛH™Y™\™[˜ÙHšX\ÃBˆ
‹ÃBˆÙYš[™HTÐ”WÔÔÒP×ÔÑUÔ‘Q’PT×ÔÑÔÑS

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÔÔÒP×ÔÑUÔ‘Q’PT×ÔÑÔÑSÔÒQ•
JH	ˆTÐ”WÔÔÒP×ÔÑUÔ‘Q’PT×ÔÑÔÑSÓPTÒÊCBˆÙYš[™HTÐ”WÔÔÒP×ÔÑUÔ‘Q’PT×ÔÑÓPTÒÈ
LJCBˆÙYš[™HTÐ”WÔÔÒP×ÔÑUÔ‘Q’PT×ÔÑÔÒQ•
ŒJCBˆÙYš[™HTÐ”WÔÔÒP×ÔÑUÔ‘Q’PT×ÔÑ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÔÔÒP×ÔÑUÔ‘Q’PT×ÔÑÔÒQ•
JH	ˆTÐ”WÔÔÒP×ÔÑUÔ‘Q’PT×ÔÑÓPTÒÊCBˆÙYš[™HTÐ”WÔÔÒP×ÔÑUÔÔ‘Q×ÑSP“WÓPTÒÈ
ŒJCBˆÙYš[™HTÐ”WÔÔÒP×ÔÑUÔÔ‘Q×ÑSP“WÔÒQ•
ŒUJCBˆÙYš[™HTÐ”WÔÔÒP×ÔÑUÔÔ‘Q×ÑSP“J
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÔÔÒP×ÔÑUÔÔ‘Q×ÑSP“WÔÒQ•
JH	ˆTÐ”WÔÔÒP×ÔÑUÔÔ‘Q×ÑSP“WÓPTÒÊCBˆÙYš[™HTÐ”WÔÔÒP×ÔÑUÔÑU—ÔÑSÓPTÒÈ
PÌJCBˆÙYš[™HTÐ”WÔÔÒP×ÔÑUÔÑU—ÔÑSÔÒQ•
Œ•JCB‹ÊˆHÑU—ÔÑSBˆ
ˆŒ‹‘]šYHžHLÃBˆ
ˆŒK‹‘]šYHžHMCBˆ
ˆŒL‹‘]šYHžHMƒBˆ
ˆŒLK‹‘]šYHžHŒBˆ
ˆŒL‹‘]šYHžHŒƒBˆ
ˆŒLK‹‘]šYHžHCBˆ
ˆŒLL‹‘]šYHžHÌBˆ
ˆŒLLK‹‘]šYHžHBˆ
‹ÃBˆÙYš[™HTÐ”WÔÔÒP×ÔÑUÔÑU—ÔÑS

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÔÔÒP×ÔÑUÔÑU—ÔÑSÔÒQ•
JH	ˆTÐ”WÔÔÒP×ÔÑUÔÑU—ÔÑSÓPTÒÊCBˆÙYš[™HTÐ”WÔÔÒP×ÔÑUÔÔ‘QU—ÓPTÒÈ
JCBˆÙYš[™HTÐ”WÔÔÒP×ÔÑUÔÔ‘QU—ÔÒQ•
ÌJCBˆÙYš[™HTÐ”WÔÔÒP×ÔÑUÔÔ‘QUŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÔÔÒP×ÔÑUÔÔ‘QU—ÔÒQ•
JH	ˆTÐ”WÔÔÒP×ÔÑUÔÔ‘QU—ÓPTÒÊCBˆÙYš[™HTÐ”WÔÔÒP×ÔÑUÔÓÐÒ×ÓPTÒÈ
JCBˆÙYš[™HTÐ”WÔÔÒP×ÔÑUÔÓÐÒ×ÔÒQ•
ÌUJCB‹ÊˆHÓÐÒÃBˆ
ˆŒ‹”\È›ÝÝ\œ™[HØÚÙYBˆ
ˆŒK‹”\ÈÝ\œ™[HØÚÙYBˆ
‹ÃBˆÙYš[™HTÐ”WÔÔÒP×ÔÑUÔÓÐÒÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÔÔÒP×ÔÑUÔÓÐÒ×ÔÒQ•
JH	ˆTÐ”WÔÔÒP×ÔÑUÔÓÐÒ×ÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHÔÒP×ÐÓˆHTÐˆHÛÛ›ÛÔÝ]\È™YÚ\Ý\ˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ”WÔÔÒP×ÐÓ—ÔÑS—ÕTÐ—ÐÓÔ×ÓPTÒÈ
JCBˆÙYš[™HTÐ”WÔÔÒP×ÐÓ—ÔÑS—ÕTÐ—ÐÓÔ×ÔÒQ•
•JCBˆÙYš[™HTÐ”WÔÔÒP×ÐÓ—ÔÑS—ÕTÐ—ÐÓÔÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÔÔÒP×ÐÓ—ÔÑS—ÕTÐ—ÐÓÔ×ÔÒQ•
JH	ˆTÐ”WÔÔÒP×ÐÓ—ÔÑS—ÕTÐ—ÐÓÔ×ÓPTÒÊCBˆÙYš[™HTÐ”WÔÔÒP×ÐÓ—ÔÔÕÑT—ÓPTÒÈ
LJCBˆÙYš[™HTÐ”WÔÔÒP×ÐÓ—ÔÔÕÑT—ÔÒQ•
L•JCBˆÙYš[™HTÐ”WÔÔÒP×ÐÓ—ÔÔÕÑTŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÔÔÒP×ÐÓ—ÔÔÕÑT—ÔÒQ•
JH	ˆTÐ”WÔÔÒP×ÐÓ—ÔÔÕÑT—ÓPTÒÊCBˆÙYš[™HTÐ”WÔÔÒP×ÐÓ—ÔÑSP“WÓPTÒÈ
ŒJCBˆÙYš[™HTÐ”WÔÔÒP×ÐÓ—ÔÑSP“WÔÒQ•
LÕJCBˆÙYš[™HTÐ”WÔÔÒP×ÐÓ—ÔÑSP“J
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÔÔÒP×ÐÓ—ÔÑSP“WÔÒQ•
JH	ˆTÐ”WÔÔÒP×ÐÓ—ÔÑSP“WÓPTÒÊCBˆÙYš[™HTÐ”WÔÔÒP×ÐÓ—Ô‘Q’PT×ÔÑÔÑSÓPTÒÈ
JCBˆÙYš[™HTÐ”WÔÔÒP×ÐÓ—Ô‘Q’PT×ÔÑÔÑSÔÒQ•
NUJCB‹ÊˆH‘Q’PT×ÔÑÔÑSBˆ
ˆŒ‹”Ù[XÝÈÔÕÑTˆÈÛÛ›ÛH™Y™\™[˜ÙHšX\ÃBˆ
ˆŒK‹”Ù[XÝÈ‘Q’PT×ÔÑÈÛÛ›ÛH™Y™\™[˜ÙHšX\ÃBˆ
‹ÃBˆÙYš[™HTÐ”WÔÔÒP×ÐÓ—Ô‘Q’PT×ÔÑÔÑS

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÔÔÒP×ÐÓ—Ô‘Q’PT×ÔÑÔÑSÔÒQ•
JH	ˆTÐ”WÔÔÒP×ÐÓ—Ô‘Q’PT×ÔÑÔÑSÓPTÒÊCBˆÙYš[™HTÐ”WÔÔÒP×ÐÓ—Ô‘Q’PT×ÔÑÓPTÒÈ
LJCBˆÙYš[™HTÐ”WÔÔÒP×ÐÓ—Ô‘Q’PT×ÔÑÔÒQ•
ŒJCBˆÙYš[™HTÐ”WÔÔÒP×ÐÓ—Ô‘Q’PT×ÔÑ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÔÔÒP×ÐÓ—Ô‘Q’PT×ÔÑÔÒQ•
JH	ˆTÐ”WÔÔÒP×ÐÓ—Ô‘Q’PT×ÔÑÓPTÒÊCBˆÙYš[™HTÐ”WÔÔÒP×ÐÓ—ÔÔ‘Q×ÑSP“WÓPTÒÈ
ŒJCBˆÙYš[™HTÐ”WÔÔÒP×ÐÓ—ÔÔ‘Q×ÑSP“WÔÒQ•
ŒUJCBˆÙYš[™HTÐ”WÔÔÒP×ÐÓ—ÔÔ‘Q×ÑSP“J
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÔÔÒP×ÐÓ—ÔÔ‘Q×ÑSP“WÔÒQ•
JH	ˆTÐ”WÔÔÒP×ÐÓ—ÔÔ‘Q×ÑSP“WÓPTÒÊCBˆÙYš[™HTÐ”WÔÔÒP×ÐÓ—ÔÑU—ÔÑSÓPTÒÈ
PÌJCBˆÙYš[™HTÐ”WÔÔÒP×ÐÓ—ÔÑU—ÔÑSÔÒQ•
Œ•JCB‹ÊˆHÑU—ÔÑSBˆ
ˆŒ‹‘]šYHžHLÃBˆ
ˆŒK‹‘]šYHžHMCBˆ
ˆŒL‹‘]šYHžHMƒBˆ
ˆŒLK‹‘]šYHžHŒBˆ
ˆŒL‹‘]šYHžHŒƒBˆ
ˆŒLK‹‘]šYHžHCBˆ
ˆŒLL‹‘]šYHžHÌBˆ
ˆŒLLK‹‘]šYHžHBˆ
‹ÃBˆÙYš[™HTÐ”WÔÔÒP×ÐÓ—ÔÑU—ÔÑS

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÔÔÒP×ÐÓ—ÔÑU—ÔÑSÔÒQ•
JH	ˆTÐ”WÔÔÒP×ÐÓ—ÔÑU—ÔÑSÓPTÒÊCBˆÙYš[™HTÐ”WÔÔÒP×ÐÓ—ÔÔ‘QU—ÓPTÒÈ
JCBˆÙYš[™HTÐ”WÔÔÒP×ÐÓ—ÔÔ‘QU—ÔÒQ•
ÌJCBˆÙYš[™HTÐ”WÔÔÒP×ÐÓ—ÔÔ‘QUŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÔÔÒP×ÐÓ—ÔÔ‘QU—ÔÒQ•
JH	ˆTÐ”WÔÔÒP×ÐÓ—ÔÔ‘QU—ÓPTÒÊCBˆÙYš[™HTÐ”WÔÔÒP×ÐÓ—ÔÓÐÒ×ÓPTÒÈ
JCBˆÙYš[™HTÐ”WÔÔÒP×ÐÓ—ÔÓÐÒ×ÔÒQ•
ÌUJCB‹ÊˆHÓÐÒÃBˆ
ˆŒ‹”\È›ÝÝ\œ™[HØÚÙYBˆ
ˆŒK‹”\ÈÝ\œ™[HØÚÙYBˆ
‹ÃBˆÙYš[™HTÐ”WÔÔÒP×ÐÓ—ÔÓÐÒÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÔÔÒP×ÐÓ—ÔÓÐÒ×ÔÒQ•
JH	ˆTÐ”WÔÔÒP×ÐÓ—ÔÓÐÒ×ÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHÔÒP×ÕÑÈHTÐˆHÛÛ›ÛÔÝ]\È™YÚ\Ý\ˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ”WÔÔÒP×ÕÑ×ÔÑS—ÕTÐ—ÐÓÔ×ÓPTÒÈ
JCBˆÙYš[™HTÐ”WÔÔÒP×ÕÑ×ÔÑS—ÕTÐ—ÐÓÔ×ÔÒQ•
•JCBˆÙYš[™HTÐ”WÔÔÒP×ÕÑ×ÔÑS—ÕTÐ—ÐÓÔÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÔÔÒP×ÕÑ×ÔÑS—ÕTÐ—ÐÓÔ×ÔÒQ•
JH	ˆTÐ”WÔÔÒP×ÕÑ×ÔÑS—ÕTÐ—ÐÓÔ×ÓPTÒÊCBˆÙYš[™HTÐ”WÔÔÒP×ÕÑ×ÔÔÕÑT—ÓPTÒÈ
LJCBˆÙYš[™HTÐ”WÔÔÒP×ÕÑ×ÔÔÕÑT—ÔÒQ•
L•JCBˆÙYš[™HTÐ”WÔÔÒP×ÕÑ×ÔÔÕÑTŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÔÔÒP×ÕÑ×ÔÔÕÑT—ÔÒQ•
JH	ˆTÐ”WÔÔÒP×ÕÑ×ÔÔÕÑT—ÓPTÒÊCBˆÙYš[™HTÐ”WÔÔÒP×ÕÑ×ÔÑSP“WÓPTÒÈ
ŒJCBˆÙYš[™HTÐ”WÔÔÒP×ÕÑ×ÔÑSP“WÔÒQ•
LÕJCBˆÙYš[™HTÐ”WÔÔÒP×ÕÑ×ÔÑSP“J
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÔÔÒP×ÕÑ×ÔÑSP“WÔÒQ•
JH	ˆTÐ”WÔÔÒP×ÕÑ×ÔÑSP“WÓPTÒÊCBˆÙYš[™HTÐ”WÔÔÒP×ÕÑ×Ô‘Q’PT×ÔÑÔÑSÓPTÒÈ
JCBˆÙYš[™HTÐ”WÔÔÒP×ÕÑ×Ô‘Q’PT×ÔÑÔÑSÔÒQ•
NUJCB‹ÊˆH‘Q’PT×ÔÑÔÑSBˆ
ˆŒ‹”Ù[XÝÈÔÕÑTˆÈÛÛ›ÛH™Y™\™[˜ÙHšX\ÃBˆ
ˆŒK‹”Ù[XÝÈ‘Q’PT×ÔÑÈÛÛ›ÛH™Y™\™[˜ÙHšX\ÃBˆ
‹ÃBˆÙYš[™HTÐ”WÔÔÒP×ÕÑ×Ô‘Q’PT×ÔÑÔÑS

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÔÔÒP×ÕÑ×Ô‘Q’PT×ÔÑÔÑSÔÒQ•
JH	ˆTÐ”WÔÔÒP×ÕÑ×Ô‘Q’PT×ÔÑÔÑSÓPTÒÊCBˆÙYš[™HTÐ”WÔÔÒP×ÕÑ×Ô‘Q’PT×ÔÑÓPTÒÈ
LJCBˆÙYš[™HTÐ”WÔÔÒP×ÕÑ×Ô‘Q’PT×ÔÑÔÒQ•
ŒJCBˆÙYš[™HTÐ”WÔÔÒP×ÕÑ×Ô‘Q’PT×ÔÑ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÔÔÒP×ÕÑ×Ô‘Q’PT×ÔÑÔÒQ•
JH	ˆTÐ”WÔÔÒP×ÕÑ×Ô‘Q’PT×ÔÑÓPTÒÊCBˆÙYš[™HTÐ”WÔÔÒP×ÕÑ×ÔÔ‘Q×ÑSP“WÓPTÒÈ
ŒJCBˆÙYš[™HTÐ”WÔÔÒP×ÕÑ×ÔÔ‘Q×ÑSP“WÔÒQ•
ŒUJCBˆÙYš[™HTÐ”WÔÔÒP×ÕÑ×ÔÔ‘Q×ÑSP“J
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÔÔÒP×ÕÑ×ÔÔ‘Q×ÑSP“WÔÒQ•
JH	ˆTÐ”WÔÔÒP×ÕÑ×ÔÔ‘Q×ÑSP“WÓPTÒÊCBˆÙYš[™HTÐ”WÔÔÒP×ÕÑ×ÔÑU—ÔÑSÓPTÒÈ
PÌJCBˆÙYš[™HTÐ”WÔÔÒP×ÕÑ×ÔÑU—ÔÑSÔÒQ•
Œ•JCB‹ÊˆHÑU—ÔÑSBˆ
ˆŒ‹‘]šYHžHLÃBˆ
ˆŒK‹‘]šYHžHMCBˆ
ˆŒL‹‘]šYHžHMƒBˆ
ˆŒLK‹‘]šYHžHŒBˆ
ˆŒL‹‘]šYHžHŒƒBˆ
ˆŒLK‹‘]šYHžHCBˆ
ˆŒLL‹‘]šYHžHÌBˆ
ˆŒLLK‹‘]šYHžHBˆ
‹ÃBˆÙYš[™HTÐ”WÔÔÒP×ÕÑ×ÔÑU—ÔÑS

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÔÔÒP×ÕÑ×ÔÑU—ÔÑSÔÒQ•
JH	ˆTÐ”WÔÔÒP×ÕÑ×ÔÑU—ÔÑSÓPTÒÊCBˆÙYš[™HTÐ”WÔÔÒP×ÕÑ×ÔÔ‘QU—ÓPTÒÈ
JCBˆÙYš[™HTÐ”WÔÔÒP×ÕÑ×ÔÔ‘QU—ÔÒQ•
ÌJCBˆÙYš[™HTÐ”WÔÔÒP×ÕÑ×ÔÔ‘QUŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÔÔÒP×ÕÑ×ÔÔ‘QU—ÔÒQ•
JH	ˆTÐ”WÔÔÒP×ÕÑ×ÔÔ‘QU—ÓPTÒÊCBˆÙYš[™HTÐ”WÔÔÒP×ÕÑ×ÔÓÐÒ×ÓPTÒÈ
JCBˆÙYš[™HTÐ”WÔÔÒP×ÕÑ×ÔÓÐÒ×ÔÒQ•
ÌUJCB‹ÊˆHÓÐÒÃBˆ
ˆŒ‹”\È›ÝÝ\œ™[HØÚÙYBˆ
ˆŒK‹”\ÈÝ\œ™[HØÚÙYBˆ
‹ÃBˆÙYš[™HTÐ”WÔÔÒP×ÕÑ×ÔÓÐÒÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÔÔÒP×ÕÑ×ÔÓÐÒ×ÔÒQ•
JH	ˆTÐ”WÔÔÒP×ÕÑ×ÔÓÐÒ×ÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHTÐŒWÕ•T×ÑUPÕHTÐˆH•TÈ]XÝÛÛ›Û™YÚ\Ý\ˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÕ•TÕSQÕ‘TÒÓPTÒÈ
ÕJCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÕ•TÕSQÕ‘TÒÔÒQ•
JCB‹ÊˆH•TÕSQÕ‘TÒBˆ
ˆŒ‹ŒƒBˆ
ˆŒK‹ŒUƒBˆ
ˆŒL‹Œ•ƒBˆ
ˆŒLK‹ŒÕƒBˆ
ˆŒL‹ŠY˜][
CBˆ
ˆŒLK‹UƒBˆ
ˆŒLL‹•ƒBˆ
ˆŒLLK‹ÕƒBˆ
‹ÃBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÕ•TÕSQÕ‘TÒ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÕTÐŒWÕ•T×ÑUPÕÕ•TÕSQÕ‘TÒÔÒQ•
JH	ˆTÐ”WÕTÐŒWÕ•T×ÑUPÕÕ•TÕSQÕ‘TÒÓPTÒÊCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÕ•T×ÓÕ‘T”’QWÑS—ÓPTÒÈ
JCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÕ•T×ÓÕ‘T”’QWÑS—ÔÒQ•
ÕJCB‹ÊˆH•T×ÓÕ‘T”’QWÑSƒBˆ
ˆŒ‹•\ÙHH™\Ý[ÈÙˆH[\›˜[•T×ÕSQ[™Ù\ÜÚ[Ûˆ˜[YÛÛ\\˜]ÜœÈ›Üˆ•T×ÕSQUSQ•SQ[™ÑTÔÑS‘
Y˜][
CBˆ
ˆŒK‹•\ÙHHÝ™\œšYH˜[Y\È›Üˆ•T×ÕSQUSQ•SQ[™ÑTÔÑS‘Bˆ
‹ÃBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÕ•T×ÓÕ‘T”’QWÑSŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÕTÐŒWÕ•T×ÑUPÕÕ•T×ÓÕ‘T”’QWÑS—ÔÒQ•
JH	ˆTÐ”WÕTÐŒWÕ•T×ÑUPÕÕ•T×ÓÕ‘T”’QWÑS—ÓPTÒÊCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÑTÔÑS‘ÓÕ‘T”’QWÓPTÒÈ
LJCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÑTÔÑS‘ÓÕ‘T”’QWÔÒQ•
JCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÑTÔÑS‘ÓÕ‘T”’QJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÑTÔÑS‘ÓÕ‘T”’QWÔÒQ•
JH	ˆTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÑTÔÑS‘ÓÕ‘T”’QWÓPTÒÊCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÐ•SQÓÕ‘T”’QWÓPTÒÈ
ŒJCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÐ•SQÓÕ‘T”’QWÔÒQ•
UJCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÐ•SQÓÕ‘T”’QJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÕTÐŒWÕ•T×ÑUPÕÐ•SQÓÕ‘T”’QWÔÒQ•
JH	ˆTÐ”WÕTÐŒWÕ•T×ÑUPÕÐ•SQÓÕ‘T”’QWÓPTÒÊCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÐUSQÓÕ‘T”’QWÓPTÒÈ
JCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÐUSQÓÕ‘T”’QWÔÒQ•
•JCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÐUSQÓÕ‘T”’QJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÕTÐŒWÕ•T×ÑUPÕÐUSQÓÕ‘T”’QWÔÒQ•
JH	ˆTÐ”WÕTÐŒWÕ•T×ÑUPÕÐUSQÓÕ‘T”’QWÓPTÒÊCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÕ•TÕSQÓÕ‘T”’QWÓPTÒÈ
JCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÕ•TÕSQÓÕ‘T”’QWÔÒQ•
ÕJCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÕ•TÕSQÓÕ‘T”’QJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÕTÐŒWÕ•T×ÑUPÕÕ•TÕSQÓÕ‘T”’QWÔÒQ•
JH	ˆTÐ”WÕTÐŒWÕ•T×ÑUPÕÕ•TÕSQÓÕ‘T”’QWÓPTÒÊCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÕ•TÕSQÔÑSÓPTÒÈ
LJCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÕ•TÕSQÔÑSÔÒQ•
JCB‹ÊˆH•TÕSQÔÑSBˆ
ˆŒ‹•\ÙHH•T×ÕSQÛÛ\\˜]Üˆ™\Ý[È›ÜˆÚYÛ˜[™\ÜYÈHTÐˆÛÛ›Û\ˆ
Y˜][
CBˆ
ˆŒK‹•\ÙHH•T×ÕSQÌÕˆ]XÝÜˆ™\Ý[È›ÜˆÚYÛ˜[™\ÜYÈHTÐˆÛÛ›Û\ƒBˆ
‹ÃBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÕ•TÕSQÔÑS

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÕTÐŒWÕ•T×ÑUPÕÕ•TÕSQÔÑSÔÒQ•
JH	ˆTÐ”WÕTÐŒWÕ•T×ÑUPÕÕ•TÕSQÔÑSÓPTÒÊCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÕ•T×ÔÓÕTÑWÔÑSÓPTÒÈ
ŒJCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÕ•T×ÔÓÕTÑWÔÑSÔÒQ•
UJCB‹ÊˆH•T×ÔÓÕTÑWÔÑSBˆ
ˆŒ‹•\ÙHH•T×ÕSQÛÛ\\˜]Üˆ™\Ý[È›ÜˆÚYÛ˜[™\ÜYÈHTÐˆÛÛ›Û\ˆ
Y˜][
CBˆ
ˆŒK‹•\ÙHHÙ\ÜÚ[Ûˆ˜[YÛÛ\\˜]Üˆ™\Ý[È›ÜˆÚYÛ˜[™\ÜYÈHTÐˆÛÛ›Û\ƒBˆ
ˆŒL‹•\ÙHHÙ\ÜÚ[Ûˆ˜[YÛÛ\\˜]Üˆ™\Ý[È›ÜˆÚYÛ˜[™\ÜYÈHTÐˆÛÛ›Û\ƒBˆ
ˆŒLK‹”™\Ù\™YÈ›Ý\ÙCBˆ
‹ÃBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÕ•T×ÔÓÕTÑWÔÑS

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÕTÐŒWÕ•T×ÑUPÕÕ•T×ÔÓÕTÑWÔÑSÔÒQ•
JH	ˆTÐ”WÕTÐŒWÕ•T×ÑUPÕÕ•T×ÔÓÕTÑWÔÑSÓPTÒÊCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÒQÓÕ‘T”’QWÑS—ÓPTÒÈ
JCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÒQÓÕ‘T”’QWÑS—ÔÒQ•
LUJCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÒQÓÕ‘T”’QWÑSŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÕTÐŒWÕ•T×ÑUPÕÒQÓÕ‘T”’QWÑS—ÔÒQ•
JH	ˆTÐ”WÕTÐŒWÕ•T×ÑUPÕÒQÓÕ‘T”’QWÑS—ÓPTÒÊCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÒQÓÕ‘T”’QWÓPTÒÈ
LJCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÒQÓÕ‘T”’QWÔÒQ•
L•JCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÒQÓÕ‘T”’QJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÕTÐŒWÕ•T×ÑUPÕÒQÓÕ‘T”’QWÔÒQ•
JH	ˆTÐ”WÕTÐŒWÕ•T×ÑUPÕÒQÓÕ‘T”’QWÓPTÒÊCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÑVÒQÓÕ‘T”’QWÑS—ÓPTÒÈ
ŒJCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÑVÒQÓÕ‘T”’QWÑS—ÔÒQ•
LÕJCB‹ÊˆHVÒQÓÕ‘T”’QWÑSƒBˆ
ˆŒ‹”Ù[XÝH]^Y˜[YHÚÜÙ[ˆ\Ú[™ÈQÓÕ‘T”’QWÑS‹ƒBˆ
ˆŒK‹”Ù[XÝH^\›˜[Q˜[YKƒBˆ
‹ÃBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÑVÒQÓÕ‘T”’QWÑSŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÕTÐŒWÕ•T×ÑUPÕÑVÒQÓÕ‘T”’QWÑS—ÔÒQ•
JH	ˆTÐ”WÕTÐŒWÕ•T×ÑUPÕÑVÒQÓÕ‘T”’QWÑS—ÓPTÒÊCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÑVÕ•T×ÓÕ‘T”’QWÑS—ÓPTÒÈ
JCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÑVÕ•T×ÓÕ‘T”’QWÑS—ÔÒQ•
MJCB‹ÊˆHVÕ•T×ÓÕ‘T”’QWÑSƒBˆ
ˆŒ‹”Ù[XÝH]^Y˜[YHÚÜÙ[ˆ\Ú[™È•T×ÓÕ‘T”’QWÑS‹ƒBˆ
ˆŒK‹”Ù[XÝH^\›˜[•TÈSQ˜[YKƒBˆ
‹ÃBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÑVÕ•T×ÓÕ‘T”’QWÑSŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÕTÐŒWÕ•T×ÑUPÕÑVÕ•T×ÓÕ‘T”’QWÑS—ÔÒQ•
JH	ˆTÐ”WÕTÐŒWÕ•T×ÑUPÕÑVÕ•T×ÓÕ‘T”’QWÑS—ÓPTÒÊCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÕ•TÕSQÕ×ÔÑTÔÕSQÓPTÒÈ
JCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÕ•TÕSQÕ×ÔÑTÔÕSQÔÒQ•
NJCB‹ÊˆH•TÕSQÕ×ÔÑTÔÕSQBˆ
ˆŒ‹•\ÙHH•T×ÕSQÛÛ\\˜]Üˆ›Üˆ•T×ÕSQ™\Ý[ÃBˆ
ˆŒK‹•\ÙHHÙ\ÜÚ[Ûˆ[™ÛÛ\\˜]Üˆ›Üˆ•T×ÕSQ™\Ý[ËˆHÙ\ÜÚ[Ûˆ[™™\ÚÛ\ÈŒŽˆ[™Œ‹ƒBˆ
‹ÃBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÕ•TÕSQÕ×ÔÑTÔÕSQ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÕTÐŒWÕ•T×ÑUPÕÕ•TÕSQÕ×ÔÑTÔÕSQÔÒQ•
JH	ˆTÐ”WÕTÐŒWÕ•T×ÑUPÕÕ•TÕSQÕ×ÔÑTÔÕSQÓPTÒÊCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÕ•TÕSQÍU‘UPÕÓPTÒÈ
JCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÕ•TÕSQÍU‘UPÕÔÒQ•
NUJCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÕ•TÕSQÍU‘UPÕ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÕTÐŒWÕ•T×ÑUPÕÕ•TÕSQÍU‘UPÕÔÒQ•
JH	ˆTÐ”WÕTÐŒWÕ•T×ÑUPÕÕ•TÕSQÍU‘UPÕÓPTÒÊCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÔ•TÐÓT×ÓPTÒÈ
ÌJCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÔ•TÐÓT×ÔÒQ•
ŒJCB‹ÊˆHÔ•TÐÓTÃBˆ
ˆŒ‹”ÝÙ\œÈÝÛˆH•T×ÕSQÛÛ\\˜]ÜƒBˆ
ˆŒLLK‹‘[˜X›\ÈH•T×ÕSQÛÛ\\˜]Üˆ
Y˜][
CBˆ
‹ÃBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÔ•TÐÓTÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÔ•TÐÓT×ÔÒQ•
JH	ˆTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÔ•TÐÓT×ÓPTÒÊCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÑTÐÒT‘ÑWÕ•T×ÓPTÒÈ
JCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÑTÐÒT‘ÑWÕ•T×ÔÒQ•
•JCB‹ÊˆHTÐÒT‘ÑWÕ•TÃBˆ
ˆŒ‹••TÈ\ØÚ\™ÙH™\Ú\ÝÜˆ\È\ØX›Y
Y˜][
CBˆ
ˆŒK‹••TÈ\ØÚ\™ÙH™\Ú\ÝÜˆ\È[˜X›YBˆ
‹ÃBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÑTÐÒT‘ÑWÕ•TÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÕTÐŒWÕ•T×ÑUPÕÑTÐÒT‘ÑWÕ•T×ÔÒQ•
JH	ˆTÐ”WÕTÐŒWÕ•T×ÑUPÕÑTÐÒT‘ÑWÕ•T×ÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHTÐŒWÕ•T×ÑUPÕÔÑUHTÐˆH•TÈ]XÝÛÛ›Û™YÚ\Ý\ˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÑUÕ•TÕSQÕ‘TÒÓPTÒÈ
ÕJCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÑUÕ•TÕSQÕ‘TÒÔÒQ•
JCB‹ÊˆH•TÕSQÕ‘TÒBˆ
ˆŒ‹ŒƒBˆ
ˆŒK‹ŒUƒBˆ
ˆŒL‹Œ•ƒBˆ
ˆŒLK‹ŒÕƒBˆ
ˆŒL‹ŠY˜][
CBˆ
ˆŒLK‹UƒBˆ
ˆŒLL‹•ƒBˆ
ˆŒLLK‹ÕƒBˆ
‹ÃBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÑUÕ•TÕSQÕ‘TÒ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÑUÕ•TÕSQÕ‘TÒÔÒQ•
JH	ˆTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÑUÕ•TÕSQÕ‘TÒÓPTÒÊCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÑUÕ•T×ÓÕ‘T”’QWÑS—ÓPTÒÈ
JCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÑUÕ•T×ÓÕ‘T”’QWÑS—ÔÒQ•
ÕJCB‹ÊˆH•T×ÓÕ‘T”’QWÑSƒBˆ
ˆŒ‹•\ÙHH™\Ý[ÈÙˆH[\›˜[•T×ÕSQ[™Ù\ÜÚ[Ûˆ˜[YÛÛ\\˜]ÜœÈ›Üˆ•T×ÕSQUSQ•SQ[™ÑTÔÑS‘
Y˜][
CBˆ
ˆŒK‹•\ÙHHÝ™\œšYH˜[Y\È›Üˆ•T×ÕSQUSQ•SQ[™ÑTÔÑS‘Bˆ
‹ÃBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÑUÕ•T×ÓÕ‘T”’QWÑSŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÑUÕ•T×ÓÕ‘T”’QWÑS—ÔÒQ•
JH	ˆTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÑUÕ•T×ÓÕ‘T”’QWÑS—ÓPTÒÊCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÑUÔÑTÔÑS‘ÓÕ‘T”’QWÓPTÒÈ
LJCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÑUÔÑTÔÑS‘ÓÕ‘T”’QWÔÒQ•
JCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÑUÔÑTÔÑS‘ÓÕ‘T”’QJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÑUÔÑTÔÑS‘ÓÕ‘T”’QWÔÒQ•
JH	ˆTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÑUÔÑTÔÑS‘ÓÕ‘T”’QWÓPTÒÊCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÑUÐ•SQÓÕ‘T”’QWÓPTÒÈ
ŒJCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÑUÐ•SQÓÕ‘T”’QWÔÒQ•
UJCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÑUÐ•SQÓÕ‘T”’QJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÑUÐ•SQÓÕ‘T”’QWÔÒQ•
JH	ˆTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÑUÐ•SQÓÕ‘T”’QWÓPTÒÊCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÑUÐUSQÓÕ‘T”’QWÓPTÒÈ
JCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÑUÐUSQÓÕ‘T”’QWÔÒQ•
•JCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÑUÐUSQÓÕ‘T”’QJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÑUÐUSQÓÕ‘T”’QWÔÒQ•
JH	ˆTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÑUÐUSQÓÕ‘T”’QWÓPTÒÊCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÑUÕ•TÕSQÓÕ‘T”’QWÓPTÒÈ
JCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÑUÕ•TÕSQÓÕ‘T”’QWÔÒQ•
ÕJCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÑUÕ•TÕSQÓÕ‘T”’QJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÑUÕ•TÕSQÓÕ‘T”’QWÔÒQ•
JH	ˆTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÑUÕ•TÕSQÓÕ‘T”’QWÓPTÒÊCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÑUÕ•TÕSQÔÑSÓPTÒÈ
LJCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÑUÕ•TÕSQÔÑSÔÒQ•
JCB‹ÊˆH•TÕSQÔÑSBˆ
ˆŒ‹•\ÙHH•T×ÕSQÛÛ\\˜]Üˆ™\Ý[È›ÜˆÚYÛ˜[™\ÜYÈHTÐˆÛÛ›Û\ˆ
Y˜][
CBˆ
ˆŒK‹•\ÙHH•T×ÕSQÌÕˆ]XÝÜˆ™\Ý[È›ÜˆÚYÛ˜[™\ÜYÈHTÐˆÛÛ›Û\ƒBˆ
‹ÃBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÑUÕ•TÕSQÔÑS

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÑUÕ•TÕSQÔÑSÔÒQ•
JH	ˆTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÑUÕ•TÕSQÔÑSÓPTÒÊCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÑUÕ•T×ÔÓÕTÑWÔÑSÓPTÒÈ
ŒJCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÑUÕ•T×ÔÓÕTÑWÔÑSÔÒQ•
UJCB‹ÊˆH•T×ÔÓÕTÑWÔÑSBˆ
ˆŒ‹•\ÙHH•T×ÕSQÛÛ\\˜]Üˆ™\Ý[È›ÜˆÚYÛ˜[™\ÜYÈHTÐˆÛÛ›Û\ˆ
Y˜][
CBˆ
ˆŒK‹•\ÙHHÙ\ÜÚ[Ûˆ˜[YÛÛ\\˜]Üˆ™\Ý[È›ÜˆÚYÛ˜[™\ÜYÈHTÐˆÛÛ›Û\ƒBˆ
ˆŒL‹•\ÙHHÙ\ÜÚ[Ûˆ˜[YÛÛ\\˜]Üˆ™\Ý[È›ÜˆÚYÛ˜[™\ÜYÈHTÐˆÛÛ›Û\ƒBˆ
ˆŒLK‹”™\Ù\™YÈ›Ý\ÙCBˆ
‹ÃBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÑUÕ•T×ÔÓÕTÑWÔÑS

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÑUÕ•T×ÔÓÕTÑWÔÑSÔÒQ•
JH	ˆTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÑUÕ•T×ÔÓÕTÑWÔÑSÓPTÒÊCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÑUÒQÓÕ‘T”’QWÑS—ÓPTÒÈ
JCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÑUÒQÓÕ‘T”’QWÑS—ÔÒQ•
LUJCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÑUÒQÓÕ‘T”’QWÑSŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÑUÒQÓÕ‘T”’QWÑS—ÔÒQ•
JH	ˆTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÑUÒQÓÕ‘T”’QWÑS—ÓPTÒÊCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÑUÒQÓÕ‘T”’QWÓPTÒÈ
LJCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÑUÒQÓÕ‘T”’QWÔÒQ•
L•JCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÑUÒQÓÕ‘T”’QJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÑUÒQÓÕ‘T”’QWÔÒQ•
JH	ˆTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÑUÒQÓÕ‘T”’QWÓPTÒÊCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÑUÑVÒQÓÕ‘T”’QWÑS—ÓPTÒÈ
ŒJCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÑUÑVÒQÓÕ‘T”’QWÑS—ÔÒQ•
LÕJCB‹ÊˆHVÒQÓÕ‘T”’QWÑSƒBˆ
ˆŒ‹”Ù[XÝH]^Y˜[YHÚÜÙ[ˆ\Ú[™ÈQÓÕ‘T”’QWÑS‹ƒBˆ
ˆŒK‹”Ù[XÝH^\›˜[Q˜[YKƒBˆ
‹ÃBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÑUÑVÒQÓÕ‘T”’QWÑSŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÑUÑVÒQÓÕ‘T”’QWÑS—ÔÒQ•
JH	ˆTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÑUÑVÒQÓÕ‘T”’QWÑS—ÓPTÒÊCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÑUÑVÕ•T×ÓÕ‘T”’QWÑS—ÓPTÒÈ
JCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÑUÑVÕ•T×ÓÕ‘T”’QWÑS—ÔÒQ•
MJCB‹ÊˆHVÕ•T×ÓÕ‘T”’QWÑSƒBˆ
ˆŒ‹”Ù[XÝH]^Y˜[YHÚÜÙ[ˆ\Ú[™È•T×ÓÕ‘T”’QWÑS‹ƒBˆ
ˆŒK‹”Ù[XÝH^\›˜[•TÈSQ˜[YKƒBˆ
‹ÃBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÑUÑVÕ•T×ÓÕ‘T”’QWÑSŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÑUÑVÕ•T×ÓÕ‘T”’QWÑS—ÔÒQ•
JH	ˆTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÑUÑVÕ•T×ÓÕ‘T”’QWÑS—ÓPTÒÊCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÑUÕ•TÕSQÕ×ÔÑTÔÕSQÓPTÒÈ
JCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÑUÕ•TÕSQÕ×ÔÑTÔÕSQÔÒQ•
NJCB‹ÊˆH•TÕSQÕ×ÔÑTÔÕSQBˆ
ˆŒ‹•\ÙHH•T×ÕSQÛÛ\\˜]Üˆ›Üˆ•T×ÕSQ™\Ý[ÃBˆ
ˆŒK‹•\ÙHHÙ\ÜÚ[Ûˆ[™ÛÛ\\˜]Üˆ›Üˆ•T×ÕSQ™\Ý[ËˆHÙ\ÜÚ[Ûˆ[™™\ÚÛ\ÈŒŽˆ[™Œ‹ƒBˆ
‹ÃBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÑUÕ•TÕSQÕ×ÔÑTÔÕSQ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÑUÕ•TÕSQÕ×ÔÑTÔÕSQÔÒQ•
JH	ˆTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÑUÕ•TÕSQÕ×ÔÑTÔÕSQÓPTÒÊCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÑUÕ•TÕSQÍU‘UPÕÓPTÒÈ
JCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÑUÕ•TÕSQÍU‘UPÕÔÒQ•
NUJCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÑUÕ•TÕSQÍU‘UPÕ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÑUÕ•TÕSQÍU‘UPÕÔÒQ•
JH	ˆTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÑUÕ•TÕSQÍU‘UPÕÓPTÒÊCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÑUÔÔ•TÐÓT×ÓPTÒÈ
ÌJCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÑUÔÔ•TÐÓT×ÔÒQ•
ŒJCB‹ÊˆHÔ•TÐÓTÃBˆ
ˆŒ‹”ÝÙ\œÈÝÛˆH•T×ÕSQÛÛ\\˜]ÜƒBˆ
ˆŒLLK‹‘[˜X›\ÈH•T×ÕSQÛÛ\\˜]Üˆ
Y˜][
CBˆ
‹ÃBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÑUÔÔ•TÐÓTÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÑUÔÔ•TÐÓT×ÔÒQ•
JH	ˆTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÑUÔÔ•TÐÓT×ÓPTÒÊCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÑUÑTÐÒT‘ÑWÕ•T×ÓPTÒÈ
JCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÑUÑTÐÒT‘ÑWÕ•T×ÔÒQ•
•JCB‹ÊˆHTÐÒT‘ÑWÕ•TÃBˆ
ˆŒ‹••TÈ\ØÚ\™ÙH™\Ú\ÝÜˆ\È\ØX›Y
Y˜][
CBˆ
ˆŒK‹••TÈ\ØÚ\™ÙH™\Ú\ÝÜˆ\È[˜X›YBˆ
‹ÃBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÑUÑTÐÒT‘ÑWÕ•TÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÑUÑTÐÒT‘ÑWÕ•T×ÔÒQ•
JH	ˆTÐ”WÕTÐŒWÕ•T×ÑUPÕÔÑUÑTÐÒT‘ÑWÕ•T×ÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHTÐŒWÕ•T×ÑUPÕÐÓˆHTÐˆH•TÈ]XÝÛÛ›Û™YÚ\Ý\ˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÐÓ—Õ•TÕSQÕ‘TÒÓPTÒÈ
ÕJCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÐÓ—Õ•TÕSQÕ‘TÒÔÒQ•
JCB‹ÊˆH•TÕSQÕ‘TÒBˆ
ˆŒ‹ŒƒBˆ
ˆŒK‹ŒUƒBˆ
ˆŒL‹Œ•ƒBˆ
ˆŒLK‹ŒÕƒBˆ
ˆŒL‹ŠY˜][
CBˆ
ˆŒLK‹UƒBˆ
ˆŒLL‹•ƒBˆ
ˆŒLLK‹ÕƒBˆ
‹ÃBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÐÓ—Õ•TÕSQÕ‘TÒ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÕTÐŒWÕ•T×ÑUPÕÐÓ—Õ•TÕSQÕ‘TÒÔÒQ•
JH	ˆTÐ”WÕTÐŒWÕ•T×ÑUPÕÐÓ—Õ•TÕSQÕ‘TÒÓPTÒÊCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÐÓ—Õ•T×ÓÕ‘T”’QWÑS—ÓPTÒÈ
JCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÐÓ—Õ•T×ÓÕ‘T”’QWÑS—ÔÒQ•
ÕJCB‹ÊˆH•T×ÓÕ‘T”’QWÑSƒBˆ
ˆŒ‹•\ÙHH™\Ý[ÈÙˆH[\›˜[•T×ÕSQ[™Ù\ÜÚ[Ûˆ˜[YÛÛ\\˜]ÜœÈ›Üˆ•T×ÕSQUSQ•SQ[™ÑTÔÑS‘
Y˜][
CBˆ
ˆŒK‹•\ÙHHÝ™\œšYH˜[Y\È›Üˆ•T×ÕSQUSQ•SQ[™ÑTÔÑS‘Bˆ
‹ÃBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÐÓ—Õ•T×ÓÕ‘T”’QWÑSŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÕTÐŒWÕ•T×ÑUPÕÐÓ—Õ•T×ÓÕ‘T”’QWÑS—ÔÒQ•
JH	ˆTÐ”WÕTÐŒWÕ•T×ÑUPÕÐÓ—Õ•T×ÓÕ‘T”’QWÑS—ÓPTÒÊCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÐÓ—ÔÑTÔÑS‘ÓÕ‘T”’QWÓPTÒÈ
LJCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÐÓ—ÔÑTÔÑS‘ÓÕ‘T”’QWÔÒQ•
JCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÐÓ—ÔÑTÔÑS‘ÓÕ‘T”’QJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÕTÐŒWÕ•T×ÑUPÕÐÓ—ÔÑTÔÑS‘ÓÕ‘T”’QWÔÒQ•
JH	ˆTÐ”WÕTÐŒWÕ•T×ÑUPÕÐÓ—ÔÑTÔÑS‘ÓÕ‘T”’QWÓPTÒÊCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÐÓ—Ð•SQÓÕ‘T”’QWÓPTÒÈ
ŒJCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÐÓ—Ð•SQÓÕ‘T”’QWÔÒQ•
UJCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÐÓ—Ð•SQÓÕ‘T”’QJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÕTÐŒWÕ•T×ÑUPÕÐÓ—Ð•SQÓÕ‘T”’QWÔÒQ•
JH	ˆTÐ”WÕTÐŒWÕ•T×ÑUPÕÐÓ—Ð•SQÓÕ‘T”’QWÓPTÒÊCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÐÓ—ÐUSQÓÕ‘T”’QWÓPTÒÈ
JCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÐÓ—ÐUSQÓÕ‘T”’QWÔÒQ•
•JCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÐÓ—ÐUSQÓÕ‘T”’QJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÕTÐŒWÕ•T×ÑUPÕÐÓ—ÐUSQÓÕ‘T”’QWÔÒQ•
JH	ˆTÐ”WÕTÐŒWÕ•T×ÑUPÕÐÓ—ÐUSQÓÕ‘T”’QWÓPTÒÊCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÐÓ—Õ•TÕSQÓÕ‘T”’QWÓPTÒÈ
JCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÐÓ—Õ•TÕSQÓÕ‘T”’QWÔÒQ•
ÕJCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÐÓ—Õ•TÕSQÓÕ‘T”’QJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÕTÐŒWÕ•T×ÑUPÕÐÓ—Õ•TÕSQÓÕ‘T”’QWÔÒQ•
JH	ˆTÐ”WÕTÐŒWÕ•T×ÑUPÕÐÓ—Õ•TÕSQÓÕ‘T”’QWÓPTÒÊCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÐÓ—Õ•TÕSQÔÑSÓPTÒÈ
LJCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÐÓ—Õ•TÕSQÔÑSÔÒQ•
JCB‹ÊˆH•TÕSQÔÑSBˆ
ˆŒ‹•\ÙHH•T×ÕSQÛÛ\\˜]Üˆ™\Ý[È›ÜˆÚYÛ˜[™\ÜYÈHTÐˆÛÛ›Û\ˆ
Y˜][
CBˆ
ˆŒK‹•\ÙHH•T×ÕSQÌÕˆ]XÝÜˆ™\Ý[È›ÜˆÚYÛ˜[™\ÜYÈHTÐˆÛÛ›Û\ƒBˆ
‹ÃBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÐÓ—Õ•TÕSQÔÑS

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÕTÐŒWÕ•T×ÑUPÕÐÓ—Õ•TÕSQÔÑSÔÒQ•
JH	ˆTÐ”WÕTÐŒWÕ•T×ÑUPÕÐÓ—Õ•TÕSQÔÑSÓPTÒÊCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÐÓ—Õ•T×ÔÓÕTÑWÔÑSÓPTÒÈ
ŒJCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÐÓ—Õ•T×ÔÓÕTÑWÔÑSÔÒQ•
UJCB‹ÊˆH•T×ÔÓÕTÑWÔÑSBˆ
ˆŒ‹•\ÙHH•T×ÕSQÛÛ\\˜]Üˆ™\Ý[È›ÜˆÚYÛ˜[™\ÜYÈHTÐˆÛÛ›Û\ˆ
Y˜][
CBˆ
ˆŒK‹•\ÙHHÙ\ÜÚ[Ûˆ˜[YÛÛ\\˜]Üˆ™\Ý[È›ÜˆÚYÛ˜[™\ÜYÈHTÐˆÛÛ›Û\ƒBˆ
ˆŒL‹•\ÙHHÙ\ÜÚ[Ûˆ˜[YÛÛ\\˜]Üˆ™\Ý[È›ÜˆÚYÛ˜[™\ÜYÈHTÐˆÛÛ›Û\ƒBˆ
ˆŒLK‹”™\Ù\™YÈ›Ý\ÙCBˆ
‹ÃBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÐÓ—Õ•T×ÔÓÕTÑWÔÑS

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÕTÐŒWÕ•T×ÑUPÕÐÓ—Õ•T×ÔÓÕTÑWÔÑSÔÒQ•
JH	ˆTÐ”WÕTÐŒWÕ•T×ÑUPÕÐÓ—Õ•T×ÔÓÕTÑWÔÑSÓPTÒÊCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÐÓ—ÒQÓÕ‘T”’QWÑS—ÓPTÒÈ
JCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÐÓ—ÒQÓÕ‘T”’QWÑS—ÔÒQ•
LUJCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÐÓ—ÒQÓÕ‘T”’QWÑSŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÕTÐŒWÕ•T×ÑUPÕÐÓ—ÒQÓÕ‘T”’QWÑS—ÔÒQ•
JH	ˆTÐ”WÕTÐŒWÕ•T×ÑUPÕÐÓ—ÒQÓÕ‘T”’QWÑS—ÓPTÒÊCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÐÓ—ÒQÓÕ‘T”’QWÓPTÒÈ
LJCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÐÓ—ÒQÓÕ‘T”’QWÔÒQ•
L•JCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÐÓ—ÒQÓÕ‘T”’QJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÕTÐŒWÕ•T×ÑUPÕÐÓ—ÒQÓÕ‘T”’QWÔÒQ•
JH	ˆTÐ”WÕTÐŒWÕ•T×ÑUPÕÐÓ—ÒQÓÕ‘T”’QWÓPTÒÊCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÐÓ—ÑVÒQÓÕ‘T”’QWÑS—ÓPTÒÈ
ŒJCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÐÓ—ÑVÒQÓÕ‘T”’QWÑS—ÔÒQ•
LÕJCB‹ÊˆHVÒQÓÕ‘T”’QWÑSƒBˆ
ˆŒ‹”Ù[XÝH]^Y˜[YHÚÜÙ[ˆ\Ú[™ÈQÓÕ‘T”’QWÑS‹ƒBˆ
ˆŒK‹”Ù[XÝH^\›˜[Q˜[YKƒBˆ
‹ÃBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÐÓ—ÑVÒQÓÕ‘T”’QWÑSŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÕTÐŒWÕ•T×ÑUPÕÐÓ—ÑVÒQÓÕ‘T”’QWÑS—ÔÒQ•
JH	ˆTÐ”WÕTÐŒWÕ•T×ÑUPÕÐÓ—ÑVÒQÓÕ‘T”’QWÑS—ÓPTÒÊCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÐÓ—ÑVÕ•T×ÓÕ‘T”’QWÑS—ÓPTÒÈ
JCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÐÓ—ÑVÕ•T×ÓÕ‘T”’QWÑS—ÔÒQ•
MJCB‹ÊˆHVÕ•T×ÓÕ‘T”’QWÑSƒBˆ
ˆŒ‹”Ù[XÝH]^Y˜[YHÚÜÙ[ˆ\Ú[™È•T×ÓÕ‘T”’QWÑS‹ƒBˆ
ˆŒK‹”Ù[XÝH^\›˜[•TÈSQ˜[YKƒBˆ
‹ÃBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÐÓ—ÑVÕ•T×ÓÕ‘T”’QWÑSŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÕTÐŒWÕ•T×ÑUPÕÐÓ—ÑVÕ•T×ÓÕ‘T”’QWÑS—ÔÒQ•
JH	ˆTÐ”WÕTÐŒWÕ•T×ÑUPÕÐÓ—ÑVÕ•T×ÓÕ‘T”’QWÑS—ÓPTÒÊCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÐÓ—Õ•TÕSQÕ×ÔÑTÔÕSQÓPTÒÈ
JCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÐÓ—Õ•TÕSQÕ×ÔÑTÔÕSQÔÒQ•
NJCB‹ÊˆH•TÕSQÕ×ÔÑTÔÕSQBˆ
ˆŒ‹•\ÙHH•T×ÕSQÛÛ\\˜]Üˆ›Üˆ•T×ÕSQ™\Ý[ÃBˆ
ˆŒK‹•\ÙHHÙ\ÜÚ[Ûˆ[™ÛÛ\\˜]Üˆ›Üˆ•T×ÕSQ™\Ý[ËˆHÙ\ÜÚ[Ûˆ[™™\ÚÛ\ÈŒŽˆ[™Œ‹ƒBˆ
‹ÃBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÐÓ—Õ•TÕSQÕ×ÔÑTÔÕSQ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÕTÐŒWÕ•T×ÑUPÕÐÓ—Õ•TÕSQÕ×ÔÑTÔÕSQÔÒQ•
JH	ˆTÐ”WÕTÐŒWÕ•T×ÑUPÕÐÓ—Õ•TÕSQÕ×ÔÑTÔÕSQÓPTÒÊCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÐÓ—Õ•TÕSQÍU‘UPÕÓPTÒÈ
JCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÐÓ—Õ•TÕSQÍU‘UPÕÔÒQ•
NUJCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÐÓ—Õ•TÕSQÍU‘UPÕ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÕTÐŒWÕ•T×ÑUPÕÐÓ—Õ•TÕSQÍU‘UPÕÔÒQ•
JH	ˆTÐ”WÕTÐŒWÕ•T×ÑUPÕÐÓ—Õ•TÕSQÍU‘UPÕÓPTÒÊCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÐÓ—ÔÔ•TÐÓT×ÓPTÒÈ
ÌJCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÐÓ—ÔÔ•TÐÓT×ÔÒQ•
ŒJCB‹ÊˆHÔ•TÐÓTÃBˆ
ˆŒ‹”ÝÙ\œÈÝÛˆH•T×ÕSQÛÛ\\˜]ÜƒBˆ
ˆŒLLK‹‘[˜X›\ÈH•T×ÕSQÛÛ\\˜]Üˆ
Y˜][
CBˆ
‹ÃBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÐÓ—ÔÔ•TÐÓTÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÕTÐŒWÕ•T×ÑUPÕÐÓ—ÔÔ•TÐÓT×ÔÒQ•
JH	ˆTÐ”WÕTÐŒWÕ•T×ÑUPÕÐÓ—ÔÔ•TÐÓT×ÓPTÒÊCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÐÓ—ÑTÐÒT‘ÑWÕ•T×ÓPTÒÈ
JCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÐÓ—ÑTÐÒT‘ÑWÕ•T×ÔÒQ•
•JCB‹ÊˆHTÐÒT‘ÑWÕ•TÃBˆ
ˆŒ‹••TÈ\ØÚ\™ÙH™\Ú\ÝÜˆ\È\ØX›Y
Y˜][
CBˆ
ˆŒK‹••TÈ\ØÚ\™ÙH™\Ú\ÝÜˆ\È[˜X›YBˆ
‹ÃBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÐÓ—ÑTÐÒT‘ÑWÕ•TÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÕTÐŒWÕ•T×ÑUPÕÐÓ—ÑTÐÒT‘ÑWÕ•T×ÔÒQ•
JH	ˆTÐ”WÕTÐŒWÕ•T×ÑUPÕÐÓ—ÑTÐÒT‘ÑWÕ•T×ÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHTÐŒWÕ•T×ÑUPÕÕÑÈHTÐˆH•TÈ]XÝÛÛ›Û™YÚ\Ý\ˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÕÑ×Õ•TÕSQÕ‘TÒÓPTÒÈ
ÕJCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÕÑ×Õ•TÕSQÕ‘TÒÔÒQ•
JCB‹ÊˆH•TÕSQÕ‘TÒBˆ
ˆŒ‹ŒƒBˆ
ˆŒK‹ŒUƒBˆ
ˆŒL‹Œ•ƒBˆ
ˆŒLK‹ŒÕƒBˆ
ˆŒL‹ŠY˜][
CBˆ
ˆŒLK‹UƒBˆ
ˆŒLL‹•ƒBˆ
ˆŒLLK‹ÕƒBˆ
‹ÃBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÕÑ×Õ•TÕSQÕ‘TÒ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÕTÐŒWÕ•T×ÑUPÕÕÑ×Õ•TÕSQÕ‘TÒÔÒQ•
JH	ˆTÐ”WÕTÐŒWÕ•T×ÑUPÕÕÑ×Õ•TÕSQÕ‘TÒÓPTÒÊCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÕÑ×Õ•T×ÓÕ‘T”’QWÑS—ÓPTÒÈ
JCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÕÑ×Õ•T×ÓÕ‘T”’QWÑS—ÔÒQ•
ÕJCB‹ÊˆH•T×ÓÕ‘T”’QWÑSƒBˆ
ˆŒ‹•\ÙHH™\Ý[ÈÙˆH[\›˜[•T×ÕSQ[™Ù\ÜÚ[Ûˆ˜[YÛÛ\\˜]ÜœÈ›Üˆ•T×ÕSQUSQ•SQ[™ÑTÔÑS‘
Y˜][
CBˆ
ˆŒK‹•\ÙHHÝ™\œšYH˜[Y\È›Üˆ•T×ÕSQUSQ•SQ[™ÑTÔÑS‘Bˆ
‹ÃBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÕÑ×Õ•T×ÓÕ‘T”’QWÑSŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÕTÐŒWÕ•T×ÑUPÕÕÑ×Õ•T×ÓÕ‘T”’QWÑS—ÔÒQ•
JH	ˆTÐ”WÕTÐŒWÕ•T×ÑUPÕÕÑ×Õ•T×ÓÕ‘T”’QWÑS—ÓPTÒÊCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÕÑ×ÔÑTÔÑS‘ÓÕ‘T”’QWÓPTÒÈ
LJCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÕÑ×ÔÑTÔÑS‘ÓÕ‘T”’QWÔÒQ•
JCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÕÑ×ÔÑTÔÑS‘ÓÕ‘T”’QJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÕTÐŒWÕ•T×ÑUPÕÕÑ×ÔÑTÔÑS‘ÓÕ‘T”’QWÔÒQ•
JH	ˆTÐ”WÕTÐŒWÕ•T×ÑUPÕÕÑ×ÔÑTÔÑS‘ÓÕ‘T”’QWÓPTÒÊCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÕÑ×Ð•SQÓÕ‘T”’QWÓPTÒÈ
ŒJCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÕÑ×Ð•SQÓÕ‘T”’QWÔÒQ•
UJCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÕÑ×Ð•SQÓÕ‘T”’QJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÕTÐŒWÕ•T×ÑUPÕÕÑ×Ð•SQÓÕ‘T”’QWÔÒQ•
JH	ˆTÐ”WÕTÐŒWÕ•T×ÑUPÕÕÑ×Ð•SQÓÕ‘T”’QWÓPTÒÊCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÕÑ×ÐUSQÓÕ‘T”’QWÓPTÒÈ
JCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÕÑ×ÐUSQÓÕ‘T”’QWÔÒQ•
•JCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÕÑ×ÐUSQÓÕ‘T”’QJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÕTÐŒWÕ•T×ÑUPÕÕÑ×ÐUSQÓÕ‘T”’QWÔÒQ•
JH	ˆTÐ”WÕTÐŒWÕ•T×ÑUPÕÕÑ×ÐUSQÓÕ‘T”’QWÓPTÒÊCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÕÑ×Õ•TÕSQÓÕ‘T”’QWÓPTÒÈ
JCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÕÑ×Õ•TÕSQÓÕ‘T”’QWÔÒQ•
ÕJCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÕÑ×Õ•TÕSQÓÕ‘T”’QJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÕTÐŒWÕ•T×ÑUPÕÕÑ×Õ•TÕSQÓÕ‘T”’QWÔÒQ•
JH	ˆTÐ”WÕTÐŒWÕ•T×ÑUPÕÕÑ×Õ•TÕSQÓÕ‘T”’QWÓPTÒÊCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÕÑ×Õ•TÕSQÔÑSÓPTÒÈ
LJCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÕÑ×Õ•TÕSQÔÑSÔÒQ•
JCB‹ÊˆH•TÕSQÔÑSBˆ
ˆŒ‹•\ÙHH•T×ÕSQÛÛ\\˜]Üˆ™\Ý[È›ÜˆÚYÛ˜[™\ÜYÈHTÐˆÛÛ›Û\ˆ
Y˜][
CBˆ
ˆŒK‹•\ÙHH•T×ÕSQÌÕˆ]XÝÜˆ™\Ý[È›ÜˆÚYÛ˜[™\ÜYÈHTÐˆÛÛ›Û\ƒBˆ
‹ÃBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÕÑ×Õ•TÕSQÔÑS

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÕTÐŒWÕ•T×ÑUPÕÕÑ×Õ•TÕSQÔÑSÔÒQ•
JH	ˆTÐ”WÕTÐŒWÕ•T×ÑUPÕÕÑ×Õ•TÕSQÔÑSÓPTÒÊCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÕÑ×Õ•T×ÔÓÕTÑWÔÑSÓPTÒÈ
ŒJCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÕÑ×Õ•T×ÔÓÕTÑWÔÑSÔÒQ•
UJCB‹ÊˆH•T×ÔÓÕTÑWÔÑSBˆ
ˆŒ‹•\ÙHH•T×ÕSQÛÛ\\˜]Üˆ™\Ý[È›ÜˆÚYÛ˜[™\ÜYÈHTÐˆÛÛ›Û\ˆ
Y˜][
CBˆ
ˆŒK‹•\ÙHHÙ\ÜÚ[Ûˆ˜[YÛÛ\\˜]Üˆ™\Ý[È›ÜˆÚYÛ˜[™\ÜYÈHTÐˆÛÛ›Û\ƒBˆ
ˆŒL‹•\ÙHHÙ\ÜÚ[Ûˆ˜[YÛÛ\\˜]Üˆ™\Ý[È›ÜˆÚYÛ˜[™\ÜYÈHTÐˆÛÛ›Û\ƒBˆ
ˆŒLK‹”™\Ù\™YÈ›Ý\ÙCBˆ
‹ÃBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÕÑ×Õ•T×ÔÓÕTÑWÔÑS

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÕTÐŒWÕ•T×ÑUPÕÕÑ×Õ•T×ÔÓÕTÑWÔÑSÔÒQ•
JH	ˆTÐ”WÕTÐŒWÕ•T×ÑUPÕÕÑ×Õ•T×ÔÓÕTÑWÔÑSÓPTÒÊCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÕÑ×ÒQÓÕ‘T”’QWÑS—ÓPTÒÈ
JCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÕÑ×ÒQÓÕ‘T”’QWÑS—ÔÒQ•
LUJCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÕÑ×ÒQÓÕ‘T”’QWÑSŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÕTÐŒWÕ•T×ÑUPÕÕÑ×ÒQÓÕ‘T”’QWÑS—ÔÒQ•
JH	ˆTÐ”WÕTÐŒWÕ•T×ÑUPÕÕÑ×ÒQÓÕ‘T”’QWÑS—ÓPTÒÊCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÕÑ×ÒQÓÕ‘T”’QWÓPTÒÈ
LJCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÕÑ×ÒQÓÕ‘T”’QWÔÒQ•
L•JCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÕÑ×ÒQÓÕ‘T”’QJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÕTÐŒWÕ•T×ÑUPÕÕÑ×ÒQÓÕ‘T”’QWÔÒQ•
JH	ˆTÐ”WÕTÐŒWÕ•T×ÑUPÕÕÑ×ÒQÓÕ‘T”’QWÓPTÒÊCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÕÑ×ÑVÒQÓÕ‘T”’QWÑS—ÓPTÒÈ
ŒJCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÕÑ×ÑVÒQÓÕ‘T”’QWÑS—ÔÒQ•
LÕJCB‹ÊˆHVÒQÓÕ‘T”’QWÑSƒBˆ
ˆŒ‹”Ù[XÝH]^Y˜[YHÚÜÙ[ˆ\Ú[™ÈQÓÕ‘T”’QWÑS‹ƒBˆ
ˆŒK‹”Ù[XÝH^\›˜[Q˜[YKƒBˆ
‹ÃBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÕÑ×ÑVÒQÓÕ‘T”’QWÑSŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÕTÐŒWÕ•T×ÑUPÕÕÑ×ÑVÒQÓÕ‘T”’QWÑS—ÔÒQ•
JH	ˆTÐ”WÕTÐŒWÕ•T×ÑUPÕÕÑ×ÑVÒQÓÕ‘T”’QWÑS—ÓPTÒÊCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÕÑ×ÑVÕ•T×ÓÕ‘T”’QWÑS—ÓPTÒÈ
JCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÕÑ×ÑVÕ•T×ÓÕ‘T”’QWÑS—ÔÒQ•
MJCB‹ÊˆHVÕ•T×ÓÕ‘T”’QWÑSƒBˆ
ˆŒ‹”Ù[XÝH]^Y˜[YHÚÜÙ[ˆ\Ú[™È•T×ÓÕ‘T”’QWÑS‹ƒBˆ
ˆŒK‹”Ù[XÝH^\›˜[•TÈSQ˜[YKƒBˆ
‹ÃBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÕÑ×ÑVÕ•T×ÓÕ‘T”’QWÑSŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÕTÐŒWÕ•T×ÑUPÕÕÑ×ÑVÕ•T×ÓÕ‘T”’QWÑS—ÔÒQ•
JH	ˆTÐ”WÕTÐŒWÕ•T×ÑUPÕÕÑ×ÑVÕ•T×ÓÕ‘T”’QWÑS—ÓPTÒÊCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÕÑ×Õ•TÕSQÕ×ÔÑTÔÕSQÓPTÒÈ
JCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÕÑ×Õ•TÕSQÕ×ÔÑTÔÕSQÔÒQ•
NJCB‹ÊˆH•TÕSQÕ×ÔÑTÔÕSQBˆ
ˆŒ‹•\ÙHH•T×ÕSQÛÛ\\˜]Üˆ›Üˆ•T×ÕSQ™\Ý[ÃBˆ
ˆŒK‹•\ÙHHÙ\ÜÚ[Ûˆ[™ÛÛ\\˜]Üˆ›Üˆ•T×ÕSQ™\Ý[ËˆHÙ\ÜÚ[Ûˆ[™™\ÚÛ\ÈŒŽˆ[™Œ‹ƒBˆ
‹ÃBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÕÑ×Õ•TÕSQÕ×ÔÑTÔÕSQ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÕTÐŒWÕ•T×ÑUPÕÕÑ×Õ•TÕSQÕ×ÔÑTÔÕSQÔÒQ•
JH	ˆTÐ”WÕTÐŒWÕ•T×ÑUPÕÕÑ×Õ•TÕSQÕ×ÔÑTÔÕSQÓPTÒÊCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÕÑ×Õ•TÕSQÍU‘UPÕÓPTÒÈ
JCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÕÑ×Õ•TÕSQÍU‘UPÕÔÒQ•
NUJCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÕÑ×Õ•TÕSQÍU‘UPÕ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÕTÐŒWÕ•T×ÑUPÕÕÑ×Õ•TÕSQÍU‘UPÕÔÒQ•
JH	ˆTÐ”WÕTÐŒWÕ•T×ÑUPÕÕÑ×Õ•TÕSQÍU‘UPÕÓPTÒÊCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÕÑ×ÔÔ•TÐÓT×ÓPTÒÈ
ÌJCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÕÑ×ÔÔ•TÐÓT×ÔÒQ•
ŒJCB‹ÊˆHÔ•TÐÓTÃBˆ
ˆŒ‹”ÝÙ\œÈÝÛˆH•T×ÕSQÛÛ\\˜]ÜƒBˆ
ˆŒLLK‹‘[˜X›\ÈH•T×ÕSQÛÛ\\˜]Üˆ
Y˜][
CBˆ
‹ÃBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÕÑ×ÔÔ•TÐÓTÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÕTÐŒWÕ•T×ÑUPÕÕÑ×ÔÔ•TÐÓT×ÔÒQ•
JH	ˆTÐ”WÕTÐŒWÕ•T×ÑUPÕÕÑ×ÔÔ•TÐÓT×ÓPTÒÊCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÕÑ×ÑTÐÒT‘ÑWÕ•T×ÓPTÒÈ
JCBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÕÑ×ÑTÐÒT‘ÑWÕ•T×ÔÒQ•
•JCB‹ÊˆHTÐÒT‘ÑWÕ•TÃBˆ
ˆŒ‹••TÈ\ØÚ\™ÙH™\Ú\ÝÜˆ\È\ØX›Y
Y˜][
CBˆ
ˆŒK‹••TÈ\ØÚ\™ÙH™\Ú\ÝÜˆ\È[˜X›YBˆ
‹ÃBˆÙYš[™HTÐ”WÕTÐŒWÕ•T×ÑUPÕÕÑ×ÑTÐÒT‘ÑWÕ•TÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÕTÐŒWÕ•T×ÑUPÕÕÑ×ÑTÐÒT‘ÑWÕ•T×ÔÒQ•
JH	ˆTÐ”WÕTÐŒWÕ•T×ÑUPÕÕÑ×ÑTÐÒT‘ÑWÕ•T×ÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHSPÕ“HTÐˆH[˜[ÙÈÛÛ›Û™YÚ\Ý\ˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ”WÐSPÕ“Ó’WÑS—ÓPTÒÈ
•JCBˆÙYš[™HTÐ”WÐSPÕ“Ó’WÑS—ÔÒQ•
UJCBˆÙYš[™HTÐ”WÐSPÕ“Ó’WÑSŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐSPÕ“Ó’WÑS—ÔÒQ•
JH	ˆTÐ”WÐSPÕ“Ó’WÑS—ÓPTÒÊCBˆÙYš[™HTÐ”WÐSPÕ“Ô‘ÐÓ×ÔÑSÓPTÒÈ
ÕJCBˆÙYš[™HTÐ”WÐSPÕ“Ô‘ÐÓ×ÔÑSÔÒQ•
•JCBˆÙYš[™HTÐ”WÐSPÕ“Ô‘ÐÓ×ÔÑS

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐSPÕ“Ô‘ÐÓ×ÔÑSÔÒQ•
JH	ˆTÐ”WÐSPÕ“Ô‘ÐÓ×ÔÑSÓPTÒÊCBˆÙYš[™HTÐ”WÐSPÕ“ÑU—ÔSÕÓ—ÓPTÒÈ
JCBˆÙYš[™HTÐ”WÐSPÕ“ÑU—ÔSÕÓ—ÔÒQ•
LJCB‹ÊˆHU—ÔSÕÓƒBˆ
ˆŒ‹•HMZÛÚH›ÛZ[˜[[ÝÛœÈÛˆHTÐ—Ñ[™TÐ—ÑH[œØ\™H\ØX›Y[ˆ]šXÙH[ÙKƒBˆ
ˆŒK‹•HMZÛÚH›ÛZ[˜[[ÝÛœÈÛˆHTÐ—Ñ[™TÐ—ÑH[œØ\™H[˜X›Y[ˆ]šXÙH[ÙKƒBˆ
‹ÃBˆÙYš[™HTÐ”WÐSPÕ“ÑU—ÔSÕÓŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐSPÕ“ÑU—ÔSÕÓ—ÔÒQ•
JH	ˆTÐ”WÐSPÕ“ÑU—ÔSÕÓ—ÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHSPÕ“ÔÑUHTÐˆH[˜[ÙÈÛÛ›Û™YÚ\Ý\ˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ”WÐSPÕ“ÔÑUÓ’WÑS—ÓPTÒÈ
•JCBˆÙYš[™HTÐ”WÐSPÕ“ÔÑUÓ’WÑS—ÔÒQ•
UJCBˆÙYš[™HTÐ”WÐSPÕ“ÔÑUÓ’WÑSŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐSPÕ“ÔÑUÓ’WÑS—ÔÒQ•
JH	ˆTÐ”WÐSPÕ“ÔÑUÓ’WÑS—ÓPTÒÊCBˆÙYš[™HTÐ”WÐSPÕ“ÔÑUÔ‘ÐÓ×ÔÑSÓPTÒÈ
ÕJCBˆÙYš[™HTÐ”WÐSPÕ“ÔÑUÔ‘ÐÓ×ÔÑSÔÒQ•
•JCBˆÙYš[™HTÐ”WÐSPÕ“ÔÑUÔ‘ÐÓ×ÔÑS

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐSPÕ“ÔÑUÔ‘ÐÓ×ÔÑSÔÒQ•
JH	ˆTÐ”WÐSPÕ“ÔÑUÔ‘ÐÓ×ÔÑSÓPTÒÊCBˆÙYš[™HTÐ”WÐSPÕ“ÔÑUÑU—ÔSÕÓ—ÓPTÒÈ
JCBˆÙYš[™HTÐ”WÐSPÕ“ÔÑUÑU—ÔSÕÓ—ÔÒQ•
LJCB‹ÊˆHU—ÔSÕÓƒBˆ
ˆŒ‹•HMZÛÚH›ÛZ[˜[[ÝÛœÈÛˆHTÐ—Ñ[™TÐ—ÑH[œØ\™H\ØX›Y[ˆ]šXÙH[ÙKƒBˆ
ˆŒK‹•HMZÛÚH›ÛZ[˜[[ÝÛœÈÛˆHTÐ—Ñ[™TÐ—ÑH[œØ\™H[˜X›Y[ˆ]šXÙH[ÙKƒBˆ
‹ÃBˆÙYš[™HTÐ”WÐSPÕ“ÔÑUÑU—ÔSÕÓŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐSPÕ“ÔÑUÑU—ÔSÕÓ—ÔÒQ•
JH	ˆTÐ”WÐSPÕ“ÔÑUÑU—ÔSÕÓ—ÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHSPÕ“ÐÓˆHTÐˆH[˜[ÙÈÛÛ›Û™YÚ\Ý\ˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ”WÐSPÕ“ÐÓ—Ó’WÑS—ÓPTÒÈ
•JCBˆÙYš[™HTÐ”WÐSPÕ“ÐÓ—Ó’WÑS—ÔÒQ•
UJCBˆÙYš[™HTÐ”WÐSPÕ“ÐÓ—Ó’WÑSŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐSPÕ“ÐÓ—Ó’WÑS—ÔÒQ•
JH	ˆTÐ”WÐSPÕ“ÐÓ—Ó’WÑS—ÓPTÒÊCBˆÙYš[™HTÐ”WÐSPÕ“ÐÓ—Ô‘ÐÓ×ÔÑSÓPTÒÈ
ÕJCBˆÙYš[™HTÐ”WÐSPÕ“ÐÓ—Ô‘ÐÓ×ÔÑSÔÒQ•
•JCBˆÙYš[™HTÐ”WÐSPÕ“ÐÓ—Ô‘ÐÓ×ÔÑS

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐSPÕ“ÐÓ—Ô‘ÐÓ×ÔÑSÔÒQ•
JH	ˆTÐ”WÐSPÕ“ÐÓ—Ô‘ÐÓ×ÔÑSÓPTÒÊCBˆÙYš[™HTÐ”WÐSPÕ“ÐÓ—ÑU—ÔSÕÓ—ÓPTÒÈ
JCBˆÙYš[™HTÐ”WÐSPÕ“ÐÓ—ÑU—ÔSÕÓ—ÔÒQ•
LJCB‹ÊˆHU—ÔSÕÓƒBˆ
ˆŒ‹•HMZÛÚH›ÛZ[˜[[ÝÛœÈÛˆHTÐ—Ñ[™TÐ—ÑH[œØ\™H\ØX›Y[ˆ]šXÙH[ÙKƒBˆ
ˆŒK‹•HMZÛÚH›ÛZ[˜[[ÝÛœÈÛˆHTÐ—Ñ[™TÐ—ÑH[œØ\™H[˜X›Y[ˆ]šXÙH[ÙKƒBˆ
‹ÃBˆÙYš[™HTÐ”WÐSPÕ“ÐÓ—ÑU—ÔSÕÓŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐSPÕ“ÐÓ—ÑU—ÔSÕÓ—ÔÒQ•
JH	ˆTÐ”WÐSPÕ“ÐÓ—ÑU—ÔSÕÓ—ÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHSPÕ“ÕÑÈHTÐˆH[˜[ÙÈÛÛ›Û™YÚ\Ý\ˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HTÐ”WÐSPÕ“ÕÑ×Ó’WÑS—ÓPTÒÈ
•JCBˆÙYš[™HTÐ”WÐSPÕ“ÕÑ×Ó’WÑS—ÔÒQ•
UJCBˆÙYš[™HTÐ”WÐSPÕ“ÕÑ×Ó’WÑSŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐSPÕ“ÕÑ×Ó’WÑS—ÔÒQ•
JH	ˆTÐ”WÐSPÕ“ÕÑ×Ó’WÑS—ÓPTÒÊCBˆÙYš[™HTÐ”WÐSPÕ“ÕÑ×Ô‘ÐÓ×ÔÑSÓPTÒÈ
ÕJCBˆÙYš[™HTÐ”WÐSPÕ“ÕÑ×Ô‘ÐÓ×ÔÑSÔÒQ•
•JCBˆÙYš[™HTÐ”WÐSPÕ“ÕÑ×Ô‘ÐÓ×ÔÑS

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐSPÕ“ÕÑ×Ô‘ÐÓ×ÔÑSÔÒQ•
JH	ˆTÐ”WÐSPÕ“ÕÑ×Ô‘ÐÓ×ÔÑSÓPTÒÊCBˆÙYš[™HTÐ”WÐSPÕ“ÕÑ×ÑU—ÔSÕÓ—ÓPTÒÈ
JCBˆÙYš[™HTÐ”WÐSPÕ“ÕÑ×ÑU—ÔSÕÓ—ÔÒQ•
LJCB‹ÊˆHU—ÔSÕÓƒBˆ
ˆŒ‹•HMZÛÚH›ÛZ[˜[[ÝÛœÈÛˆHTÐ—Ñ[™TÐ—ÑH[œØ\™H\ØX›Y[ˆ]šXÙH[ÙKƒBˆ
ˆŒK‹•HMZÛÚH›ÛZ[˜[[ÝÛœÈÛˆHTÐ—Ñ[™TÐ—ÑH[œØ\™H[˜X›Y[ˆ]šXÙH[ÙKƒBˆ
‹ÃBˆÙYš[™HTÐ”WÐSPÕ“ÕÑ×ÑU—ÔSÕÓŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHTÐ”WÐSPÕ“ÕÑ×ÑU—ÔSÕÓ—ÔÒQ•
JH	ˆTÐ”WÐSPÕ“ÕÑ×ÑU—ÔSÕÓ—ÓPTÒÊCB‹ÊˆHH
‹ÃBƒBƒB‹ÊˆCBˆ
ˆCBˆ
‹ÈÊˆ[™ÙˆÜ›Ý\TÐ”WÔ™YÚ\Ý\—ÓX\ÚÜÈ
‹ÃBƒBƒB‹ÊˆTÐ”HH\š\\˜[[œÝ[˜ÙH˜\ÙHY™\ÜÙ\È
‹ÃBˆÚYˆ
×ÐT“WÑ‘PUT‘WÐÓTÑH	ˆŠCBˆÊŠˆ\š\\˜[TÐ”H˜\ÙHY™\ÜÈ
‹ÃBˆÙYš[™HTÐ”WÐTÑH
LÎJCBˆÊŠˆ\š\\˜[TÐ”H˜\ÙHY™\ÜÈ
‹ÃBˆÙYš[™HTÐ”WÐTÑWÓ”È
ÎJCBˆÊŠˆ\š\\˜[TÐ”H˜\ÙHÚ[\ˆ
‹ÃBˆÙYš[™HTÐ”H

TÐ”WÕ\H
ŠUTÐ”WÐTÑJCBˆÊŠˆ\š\\˜[TÐ”H˜\ÙHÚ[\ˆ
‹ÃBˆÙYš[™HTÐ”WÓ”È

TÐ”WÕ\H
ŠUTÐ”WÐTÑWÓ”ÊCBˆÊŠˆ\œ˜^H[š]X[^™\ˆÙˆTÐ”H\š\\˜[˜\ÙHY™\ÜÙ\È
‹ÃBˆÙYš[™HTÐ”WÐTÑWÐQ”ÈÈTÐ”WÐTÑHCBˆÊŠˆ\œ˜^H[š]X[^™\ˆÙˆTÐ”H\š\\˜[˜\ÙHÚ[\œÈ
‹ÃBˆÙYš[™HTÐ”WÐTÑWÔ”ÈÈTÐ”HCBˆÊŠˆ\œ˜^H[š]X[^™\ˆÙˆTÐ”H\š\\˜[˜\ÙHY™\ÜÙ\È
‹ÃBˆÙYš[™HTÐ”WÐTÑWÐQ”×Ó”ÈÈTÐ”WÐTÑWÓ”ÈCBˆÊŠˆ\œ˜^H[š]X[^™\ˆÙˆTÐ”H\š\\˜[˜\ÙHÚ[\œÈ
‹ÃBˆÙYš[™HTÐ”WÐTÑWÔ”×Ó”ÈÈTÐ”WÓ”ÈCBˆÙ[ÙCBˆÊŠˆ\š\\˜[TÐ”H˜\ÙHY™\ÜÈ
‹ÃBˆÙYš[™HTÐ”WÐTÑH
ÎJCBˆÊŠˆ\š\\˜[TÐ”H˜\ÙHÚ[\ˆ
‹ÃBˆÙYš[™HTÐ”H

TÐ”WÕ\H
ŠUTÐ”WÐTÑJCBˆÊŠˆ\œ˜^H[š]X[^™\ˆÙˆTÐ”H\š\\˜[˜\ÙHY™\ÜÙ\È
‹ÃBˆÙYš[™HTÐ”WÐTÑWÐQ”ÈÈTÐ”WÐTÑHCBˆÊŠˆ\œ˜^H[š]X[^™\ˆÙˆTÐ”H\š\\˜[˜\ÙHÚ[\œÈ
‹ÃBˆÙYš[™HTÐ”WÐTÑWÔ”ÈÈTÐ”HCBˆÙ[™YƒB‹ÊŠˆ[\œ\™XÝÜœÈ›ÜˆHTÐ”H\š\\˜[\H
‹ÃBˆÙYš[™HTÐ”WÒT”TÈÈTÐŒWÔWÒT”[ˆCBƒB‹ÊˆCBˆ
ˆCBˆ
‹ÈÊˆ[™ÙˆÜ›Ý\TÐ”WÔ\š\\˜[ÐXØÙ\Ü×Ó^Y\ˆ
‹ÃBƒBƒB‹ÊˆKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKCBˆKHUPÒÈ\š\\˜[XØÙ\ÜÈ^Y\ƒBˆKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKH
‹ÃBƒB‹ÊˆCBˆ
ˆYÙÜ›Ý\UPÒ×Ô\š\\˜[ÐXØÙ\Ü×Ó^Y\ˆUPÒÈ\š\\˜[XØÙ\ÜÈ^Y\ƒBˆ
ˆÃBˆ
‹ÃBƒB‹ÊŠˆUPÒÈH™YÚ\Ý\ˆ^[Ý]\YYˆ
‹ÃB\YYˆÝXÝÃBˆ×ÒSÈZ[Ì—ÝÕ“ÈÊŠÛÛ›Û™YÚ\Ý\‹‹Ù™œÙ]ˆ
‹ÃBˆ×ÒSÈZ[Ì—ÝÕUÈÊŠÝ]\È™YÚ\Ý\‹‹Ù™œÙ]ˆ
‹ÃBˆ×ÒSÈZ[Ì—ÝÑ‘ÎÈÊŠØ\\™HÛÛ™šYÝ\˜][Ûˆ™YÚ\Ý\‹‹Ù™œÙ]ˆ
‹ÃBˆ×ÓÈZ[Ì—ÝÐTÓŽÈÊŠØ\\™HÛX\ˆ™YÚ\Ý\‹‹Ù™œÙ]ˆÈ
‹ÃBˆ×ÒHZ[Ì—ÝÐTÍNÈÊŠØ\\™H™YÚ\Ý\ˆ‹\œ˜^HÙ™œÙ]ˆL\œ˜^HÝ\ˆ
‹ÃBŸHUPÒ×Õ\NÃBƒB‹ÊˆKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKCBˆKHUPÒÈ™YÚ\Ý\ˆX\ÚÜÃBˆKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKH
‹ÃBƒB‹ÊˆCBˆ
ˆYÙÜ›Ý\UPÒ×Ô™YÚ\Ý\—ÓX\ÚÜÈUPÒÈ™YÚ\Ý\ˆX\ÚÜÃBˆ
ˆÃBˆ
‹ÃBƒB‹ÊˆH˜[YHÕ“HÛÛ›Û™YÚ\Ý\‹ˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HUPÒ×ÐÕ“ÑSVUSÓPTÒÈ
Ñ‘‘‘‘‘‘•JCBˆÙYš[™HUPÒ×ÐÕ“ÑSVUSÔÒQ•
JCB‹ÊˆHSVUSHXÚÈ[\˜[˜[YKˆH[^HÚ[™H\]X[ÈSVUS
ÈH\š[ÙÈÙˆH[Y\ƒBˆ
ˆÛØÚËˆHZ[š[][H\ØX›H˜[YH\ÈK›ÜˆH[^HÙˆˆ[Y\ˆÛØÚÜËˆH˜[YHÙˆÝÜÈH[Y\‹ƒBˆ
‹ÃBˆÙYš[™HUPÒ×ÐÕ“ÑSVUS

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHUPÒ×ÐÕ“ÑSVUSÔÒQ•
JH	ˆUPÒ×ÐÕ“ÑSVUSÓPTÒÊCBˆÙYš[™HUPÒ×ÐÕ“Ô‘TPUÓPTÒÈ
JCBˆÙYš[™HUPÒ×ÐÕ“Ô‘TPUÔÒQ•
ÌUJCB‹ÊˆH‘TPUH™\X][^KˆHÛ™K][YH[^KˆHH[^H™\X]ÈÛÛ[[Ý\ÛKƒBˆ
‹ÃBˆÙYš[™HUPÒ×ÐÕ“Ô‘TPU

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHUPÒ×ÐÕ“Ô‘TPUÔÒQ•
JH	ˆUPÒ×ÐÕ“Ô‘TPUÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHÕUHÝ]\È™YÚ\Ý\‹ˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HUPÒ×ÔÕUÒS•—ÓPTÒÈ
UJCBˆÙYš[™HUPÒ×ÔÕUÒS•—ÔÒQ•
JCB‹ÊˆHS•ˆH[\œ\›YËˆH›È[\œ\\È[™[™ËˆHH[ˆ[\œ\\È[™[™ËˆHÜš]HÙˆ[žCBˆ
ˆ˜[YHÈ\È™YÚ\Ý\ˆÛX\œÈ\È›YËƒBˆ
‹ÃBˆÙYš[™HUPÒ×ÔÕUÒS•Š
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHUPÒ×ÔÕUÒS•—ÔÒQ•
JH	ˆUPÒ×ÔÕUÒS•—ÓPTÒÊCBˆÙYš[™HUPÒ×ÔÕUÐPÕU‘WÓPTÒÈ
•JCBˆÙYš[™HUPÒ×ÔÕUÐPÕU‘WÔÒQ•
UJCB‹ÊˆHPÕU‘HHXÝ]™H›YËˆHHZXÜ›ËUXÚÈ[Y\ˆ\ÈÝÜYˆHHHZXÜ›ËUXÚÈ[Y\ˆ\ÈÝ\œ™[HXÝ]™KƒBˆ
‹ÃBˆÙYš[™HUPÒ×ÔÕUÐPÕU‘J
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHUPÒ×ÔÕUÐPÕU‘WÔÒQ•
JH	ˆUPÒ×ÔÕUÐPÕU‘WÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHÑ‘ÈHØ\\™HÛÛ™šYÝ\˜][Ûˆ™YÚ\Ý\‹ˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HUPÒ×ÐÑ‘×ÐÐTSŒÓPTÒÈ
UJCBˆÙYš[™HUPÒ×ÐÑ‘×ÐÐTSŒÔÒQ•
JCB‹ÊˆHÐTSŒH[˜X›HØ\\™HˆHH[˜X›YH\ØX›YƒBˆ
‹ÃBˆÙYš[™HUPÒ×ÐÑ‘×ÐÐTSŒ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHUPÒ×ÐÑ‘×ÐÐTSŒÔÒQ•
JH	ˆUPÒ×ÐÑ‘×ÐÐTSŒÓPTÒÊCBˆÙYš[™HUPÒ×ÐÑ‘×ÐÐTSŒWÓPTÒÈ
•JCBˆÙYš[™HUPÒ×ÐÑ‘×ÐÐTSŒWÔÒQ•
UJCB‹ÊˆHÐTSŒHH[˜X›HØ\\™HKˆHH[˜X›YH\ØX›YƒBˆ
‹ÃBˆÙYš[™HUPÒ×ÐÑ‘×ÐÐTSŒJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHUPÒ×ÐÑ‘×ÐÐTSŒWÔÒQ•
JH	ˆUPÒ×ÐÑ‘×ÐÐTSŒWÓPTÒÊCBˆÙYš[™HUPÒ×ÐÑ‘×ÐÐTSŒ—ÓPTÒÈ
JCBˆÙYš[™HUPÒ×ÐÑ‘×ÐÐTSŒ—ÔÒQ•
•JCB‹ÊˆHÐTSŒˆH[˜X›HØ\\™H‹ˆHH[˜X›YH\ØX›YƒBˆ
‹ÃBˆÙYš[™HUPÒ×ÐÑ‘×ÐÐTSŒŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHUPÒ×ÐÑ‘×ÐÐTSŒ—ÔÒQ•
JH	ˆUPÒ×ÐÑ‘×ÐÐTSŒ—ÓPTÒÊCBˆÙYš[™HUPÒ×ÐÑ‘×ÐÐTSŒ×ÓPTÒÈ
JCBˆÙYš[™HUPÒ×ÐÑ‘×ÐÐTSŒ×ÔÒQ•
ÕJCB‹ÊˆHÐTSŒÈH[˜X›HØ\\™HËˆHH[˜X›YH\ØX›YƒBˆ
‹ÃBˆÙYš[™HUPÒ×ÐÑ‘×ÐÐTSŒÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHUPÒ×ÐÑ‘×ÐÐTSŒ×ÔÒQ•
JH	ˆUPÒ×ÐÑ‘×ÐÐTSŒ×ÓPTÒÊCBˆÙYš[™HUPÒ×ÐÑ‘×ÐÐTÓÓPTÒÈ
LJCBˆÙYš[™HUPÒ×ÐÑ‘×ÐÐTÓÔÒQ•
JCB‹ÊˆHÐTÓHØ\\™HÛ\š]HˆHÜÚ]]™HYÙHØ\\™KHH™YØ]]™HYÙHØ\\™KƒBˆ
‹ÃBˆÙYš[™HUPÒ×ÐÑ‘×ÐÐTÓ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHUPÒ×ÐÑ‘×ÐÐTÓÔÒQ•
JH	ˆUPÒ×ÐÑ‘×ÐÐTÓÓPTÒÊCBˆÙYš[™HUPÒ×ÐÑ‘×ÐÐTÓWÓPTÒÈ
ŒJCBˆÙYš[™HUPÒ×ÐÑ‘×ÐÐTÓWÔÒQ•
UJCB‹ÊˆHÐTÓHHØ\\™HÛ\š]HKˆHÜÚ]]™HYÙHØ\\™KHH™YØ]]™HYÙHØ\\™KƒBˆ
‹ÃBˆÙYš[™HUPÒ×ÐÑ‘×ÐÐTÓJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHUPÒ×ÐÑ‘×ÐÐTÓWÔÒQ•
JH	ˆUPÒ×ÐÑ‘×ÐÐTÓWÓPTÒÊCBˆÙYš[™HUPÒ×ÐÑ‘×ÐÐTÓ—ÓPTÒÈ
JCBˆÙYš[™HUPÒ×ÐÑ‘×ÐÐTÓ—ÔÒQ•
LJCB‹ÊˆHÐTÓˆHØ\\™HÛ\š]H‹ˆHÜÚ]]™HYÙHØ\\™KHH™YØ]]™HYÙHØ\\™KƒBˆ
‹ÃBˆÙYš[™HUPÒ×ÐÑ‘×ÐÐTÓŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHUPÒ×ÐÑ‘×ÐÐTÓ—ÔÒQ•
JH	ˆUPÒ×ÐÑ‘×ÐÐTÓ—ÓPTÒÊCBˆÙYš[™HUPÒ×ÐÑ‘×ÐÐTÓ×ÓPTÒÈ
JCBˆÙYš[™HUPÒ×ÐÑ‘×ÐÐTÓ×ÔÒQ•
LUJCB‹ÊˆHÐTÓÈHØ\\™HÛ\š]HËˆHÜÚ]]™HYÙHØ\\™KHH™YØ]]™HYÙHØ\\™KƒBˆ
‹ÃBˆÙYš[™HUPÒ×ÐÑ‘×ÐÐTÓÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHUPÒ×ÐÑ‘×ÐÐTÓ×ÔÒQ•
JH	ˆUPÒ×ÐÑ‘×ÐÐTÓ×ÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHÐTÓˆHØ\\™HÛX\ˆ™YÚ\Ý\‹ˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HUPÒ×ÐÐTÓ—ÐÐTÓŒÓPTÒÈ
UJCBˆÙYš[™HUPÒ×ÐÐTÓ—ÐÐTÓŒÔÒQ•
JCB‹ÊˆHÐTÓŒHÛX\ˆØ\\™HˆÜš][™ÈHÈ\Èš]ÛX\œÈHÐT™YÚ\Ý\ˆ˜[YKƒBˆ
‹ÃBˆÙYš[™HUPÒ×ÐÐTÓ—ÐÐTÓŒ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHUPÒ×ÐÐTÓ—ÐÐTÓŒÔÒQ•
JH	ˆUPÒ×ÐÐTÓ—ÐÐTÓŒÓPTÒÊCBˆÙYš[™HUPÒ×ÐÐTÓ—ÐÐTÓŒWÓPTÒÈ
•JCBˆÙYš[™HUPÒ×ÐÐTÓ—ÐÐTÓŒWÔÒQ•
UJCB‹ÊˆHÐTÓŒHHÛX\ˆØ\\™HKˆÜš][™ÈHÈ\Èš]ÛX\œÈHÐTH™YÚ\Ý\ˆ˜[YKƒBˆ
‹ÃBˆÙYš[™HUPÒ×ÐÐTÓ—ÐÐTÓŒJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHUPÒ×ÐÐTÓ—ÐÐTÓŒWÔÒQ•
JH	ˆUPÒ×ÐÐTÓ—ÐÐTÓŒWÓPTÒÊCBˆÙYš[™HUPÒ×ÐÐTÓ—ÐÐTÓŒ—ÓPTÒÈ
JCBˆÙYš[™HUPÒ×ÐÐTÓ—ÐÐTÓŒ—ÔÒQ•
•JCB‹ÊˆHÐTÓŒˆHÛX\ˆØ\\™H‹ˆÜš][™ÈHÈ\Èš]ÛX\œÈHÐTˆ™YÚ\Ý\ˆ˜[YKƒBˆ
‹ÃBˆÙYš[™HUPÒ×ÐÐTÓ—ÐÐTÓŒŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHUPÒ×ÐÐTÓ—ÐÐTÓŒ—ÔÒQ•
JH	ˆUPÒ×ÐÐTÓ—ÐÐTÓŒ—ÓPTÒÊCBˆÙYš[™HUPÒ×ÐÐTÓ—ÐÐTÓŒ×ÓPTÒÈ
JCBˆÙYš[™HUPÒ×ÐÐTÓ—ÐÐTÓŒ×ÔÒQ•
ÕJCB‹ÊˆHÐTÓŒÈHÛX\ˆØ\\™HËˆÜš][™ÈHÈ\Èš]ÛX\œÈHÐTÈ™YÚ\Ý\ˆ˜[YKƒBˆ
‹ÃBˆÙYš[™HUPÒ×ÐÐTÓ—ÐÐTÓŒÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHUPÒ×ÐÐTÓ—ÐÐTÓŒ×ÔÒQ•
JH	ˆUPÒ×ÐÐTÓ—ÐÐTÓŒ×ÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHÐTHØ\\™H™YÚ\Ý\ˆˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HUPÒ×ÐÐTÐÐTÕSQWÓPTÒÈ
Ñ‘‘‘‘‘‘•JCBˆÙYš[™HUPÒ×ÐÐTÐÐTÕSQWÔÒQ•
JCB‹ÊˆHÐTÕSQHHØ\\™H˜[YH›ÜˆH™[]YØ\\™H]™[
UPÒ×ÐÐT‹ˆ›ÝNˆH˜[YH\ÈHÝÙ\ƒBˆ
ˆ[ˆHXÝX[˜[YHÙˆHZXÜ›Ë]XÚÈ[Y\ˆ]H[ÛY[ÙˆHØ\\™H]™[ƒBˆ
‹ÃBˆÙYš[™HUPÒ×ÐÐTÐÐTÕSQJ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHUPÒ×ÐÐTÐÐTÕSQWÔÒQ•
JH	ˆUPÒ×ÐÐTÐÐTÕSQWÓPTÒÊCBˆÙYš[™HUPÒ×ÐÐTÕSQÓPTÒÈ
JCBˆÙYš[™HUPÒ×ÐÐTÕSQÔÒQ•
ÌUJCB‹ÊˆHSQHØ\\™H˜[YˆÚ[ˆKH˜[YH\È™Y[ˆØ\\™Y˜\ÙYÛˆH˜[œÚ][ÛˆÙˆH™[]YBˆ
ˆUPÒ×ÐÐTˆ[‹ˆÛX\™YžHÜš][™ÈÈH™[]Yš][ˆHÐTÓˆ™YÚ\Ý\‹ƒBˆ
‹ÃBˆÙYš[™HUPÒ×ÐÐTÕSQ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHUPÒ×ÐÐTÕSQÔÒQ•
JH	ˆUPÒ×ÐÐTÕSQÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆHÛÝ[ÙˆUPÒ×ÐÐT
‹ÃBˆÙYš[™HUPÒ×ÐÐTÐÓÕS•
JCBƒBƒB‹ÊˆCBˆ
ˆCBˆ
‹ÈÊˆ[™ÙˆÜ›Ý\UPÒ×Ô™YÚ\Ý\—ÓX\ÚÜÈ
‹ÃBƒBƒB‹ÊˆUPÒÈH\š\\˜[[œÝ[˜ÙH˜\ÙHY™\ÜÙ\È
‹ÃBˆÚYˆ
×ÐT“WÑ‘PUT‘WÐÓTÑH	ˆŠCBˆÊŠˆ\š\\˜[UPÒÌ˜\ÙHY™\ÜÈ
‹ÃBˆÙYš[™HUPÒÌÐTÑH
LLJCBˆÊŠˆ\š\\˜[UPÒÌ˜\ÙHY™\ÜÈ
‹ÃBˆÙYš[™HUPÒÌÐTÑWÓ”È
LJCBˆÊŠˆ\š\\˜[UPÒÌ˜\ÙHÚ[\ˆ
‹ÃBˆÙYš[™HUPÒÌ

UPÒ×Õ\H
ŠUUPÒÌÐTÑJCBˆÊŠˆ\š\\˜[UPÒÌ˜\ÙHÚ[\ˆ
‹ÃBˆÙYš[™HUPÒÌÓ”È

UPÒ×Õ\H
ŠUUPÒÌÐTÑWÓ”ÊCBˆÊŠˆ\œ˜^H[š]X[^™\ˆÙˆUPÒÈ\š\\˜[˜\ÙHY™\ÜÙ\È
‹ÃBˆÙYš[™HUPÒ×ÐTÑWÐQ”ÈÈUPÒÌÐTÑHCBˆÊŠˆ\œ˜^H[š]X[^™\ˆÙˆUPÒÈ\š\\˜[˜\ÙHÚ[\œÈ
‹ÃBˆÙYš[™HUPÒ×ÐTÑWÔ”ÈÈUPÒÌCBˆÊŠˆ\œ˜^H[š]X[^™\ˆÙˆUPÒÈ\š\\˜[˜\ÙHY™\ÜÙ\È
‹ÃBˆÙYš[™HUPÒ×ÐTÑWÐQ”×Ó”ÈÈUPÒÌÐTÑWÓ”ÈCBˆÊŠˆ\œ˜^H[š]X[^™\ˆÙˆUPÒÈ\š\\˜[˜\ÙHÚ[\œÈ
‹ÃBˆÙYš[™HUPÒ×ÐTÑWÔ”×Ó”ÈÈUPÒÌÓ”ÈCBˆÙ[ÙCBˆÊŠˆ\š\\˜[UPÒÌ˜\ÙHY™\ÜÈ
‹ÃBˆÙYš[™HUPÒÌÐTÑH
LJCBˆÊŠˆ\š\\˜[UPÒÌ˜\ÙHÚ[\ˆ
‹ÃBˆÙYš[™HUPÒÌ

UPÒ×Õ\H
ŠUUPÒÌÐTÑJCBˆÊŠˆ\œ˜^H[š]X[^™\ˆÙˆUPÒÈ\š\\˜[˜\ÙHY™\ÜÙ\È
‹ÃBˆÙYš[™HUPÒ×ÐTÑWÐQ”ÈÈUPÒÌÐTÑHCBˆÊŠˆ\œ˜^H[š]X[^™\ˆÙˆUPÒÈ\š\\˜[˜\ÙHÚ[\œÈ
‹ÃBˆÙYš[™HUPÒ×ÐTÑWÔ”ÈÈUPÒÌCBˆÙ[™YƒB‹ÊŠˆ[\œ\™XÝÜœÈ›ÜˆHUPÒÈ\š\\˜[\H
‹ÃBˆÙYš[™HUPÒ×ÒT”TÈÈUPÒÌÒT”[ˆCBƒB‹ÊˆCBˆ
ˆCBˆ
‹ÈÊˆ[™ÙˆÜ›Ý\UPÒ×Ô\š\\˜[ÐXØÙ\Ü×Ó^Y\ˆ
‹ÃBƒBƒB‹ÊˆKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKCBˆKHÕÑ\š\\˜[XØÙ\ÜÈ^Y\ƒBˆKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKH
‹ÃBƒB‹ÊˆCBˆ
ˆYÙÜ›Ý\ÕÑÔ\š\\˜[ÐXØÙ\Ü×Ó^Y\ˆÕÑ\š\\˜[XØÙ\ÜÈ^Y\ƒBˆ
ˆÃBˆ
‹ÃBƒB‹ÊŠˆÕÑH™YÚ\Ý\ˆ^[Ý]\YYˆ
‹ÃB\YYˆÝXÝÃBˆ×ÒSÈZ[Ì—ÝSÑÈÊŠØ]ÚÙÈ[ÙH™YÚ\Ý\‹ˆ\È™YÚ\Ý\ˆÛÛZ[œÈH˜\ÚXÈ[ÙH[™Ý]\ÈÙˆHØ]ÚÙÈ[Y\‹‹Ù™œÙ]ˆ
‹ÃBˆ×ÒSÈZ[Ì—ÝÎÈÊŠØ]ÚÙÈ[Y\ˆÛÛœÝ[™YÚ\Ý\‹ˆ\ÈXš]™YÚ\Ý\ˆ]\›Z[™\ÈH[YK[Ý]˜[YK‹Ù™œÙ]ˆ
‹ÃBˆ×ÓÈZ[Ì—Ý‘QQÈÊŠØ]ÚÙÈ™YYÙ\]Y[˜ÙH™YÚ\Ý\‹ˆÜš][™ÈPH›ÛÝÙYžHMHÈ\È™YÚ\Ý\ˆ™[ØYÈHØ]ÚÙÈ[Y\ˆÚ]H˜[YHÛÛZ[™Y[ˆË‹Ù™œÙ]ˆ
‹ÃBˆ×ÒHZ[Ì—ÝŽÈÊŠØ]ÚÙÈ[Y\ˆ˜[YH™YÚ\Ý\‹ˆ\ÈXš]™YÚ\Ý\ˆ™XYÈÝ]HÝ\œ™[˜[YHÙˆHØ]ÚÙÈ[Y\‹‹Ù™œÙ]ˆÈ
‹ÃBˆZ[Ý‘TÑT•‘QÌÍNÃBˆ×ÒSÈZ[Ì—ÝÐT“’S•ÈÊŠØ]ÚÙÈØ\›š[™È[\œ\ÛÛ\\™H˜[YK‹Ù™œÙ]ˆM
‹ÃBˆ×ÒSÈZ[Ì—ÝÒS‘ÕÎÈÊŠØ]ÚÙÈÚ[™ÝÈÛÛ\\™H˜[YK‹Ù™œÙ]ˆN
‹ÃBŸHÕÑÕ\NÃBƒB‹ÊˆKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKCBˆKHÕÑ™YÚ\Ý\ˆX\ÚÜÃBˆKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKH
‹ÃBƒB‹ÊˆCBˆ
ˆYÙÜ›Ý\ÕÑÔ™YÚ\Ý\—ÓX\ÚÜÈÕÑ™YÚ\Ý\ˆX\ÚÜÃBˆ
ˆÃBˆ
‹ÃBƒB‹ÊˆH˜[YHSÑHØ]ÚÙÈ[ÙH™YÚ\Ý\‹ˆ\È™YÚ\Ý\ˆÛÛZ[œÈH˜\ÚXÈ[ÙH[™Ý]\ÈÙˆHØ]ÚÙÈ[Y\‹ˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HÕÑÓSÑÕÑS—ÓPTÒÈ
UJCBˆÙYš[™HÕÑÓSÑÕÑS—ÔÒQ•
JCB‹ÊˆHÑSˆHØ]ÚÙÈ[˜X›Hš]ˆÛ˜ÙH\Èš]\ÈÙ]ÈÛ™H[™HØ]ÚÙÈ™YY\È\™›Ü›YYCBˆ
ˆØ]ÚÙÈ[Y\ˆÚ[[ˆ\›X[™[KƒBˆ
ˆŒ‹”ÝÜˆHØ]ÚÙÈ[Y\ˆ\ÈÝÜYƒBˆ
ˆŒK‹”[‹ˆHØ]ÚÙÈ[Y\ˆ\È[›š[™ËƒBˆ
‹ÃBˆÙYš[™HÕÑÓSÑÕÑSŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÕÑÓSÑÕÑS—ÔÒQ•
JH	ˆÕÑÓSÑÕÑS—ÓPTÒÊCBˆÙYš[™HÕÑÓSÑÕÑ‘TÑUÓPTÒÈ
•JCBˆÙYš[™HÕÑÓSÑÕÑ‘TÑUÔÒQ•
UJCB‹ÊˆHÑ‘TÑUHØ]ÚÙÈ™\Ù][˜X›Hš]ˆÛ˜ÙH\Èš]\È™Y[ˆÜš][ˆÚ]HH]Ø[››Ý™H™K]Üš][ˆÚ]HƒBˆ
ˆŒ‹’[\œ\ˆHØ]ÚÙÈ[YK[Ý]Ú[›ÝØ]\ÙHHÚ\™\Ù]ƒBˆ
ˆŒK‹”™\Ù]ˆHØ]ÚÙÈ[YK[Ý]Ú[Ø]\ÙHHÚ\™\Ù]ƒBˆ
‹ÃBˆÙYš[™HÕÑÓSÑÕÑ‘TÑU

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÕÑÓSÑÕÑ‘TÑUÔÒQ•
JH	ˆÕÑÓSÑÕÑ‘TÑUÓPTÒÊCBˆÙYš[™HÕÑÓSÑÕÑÑ—ÓPTÒÈ
JCBˆÙYš[™HÕÑÓSÑÕÑÑ—ÔÒQ•
•JCB‹ÊˆHÑÑˆHØ]ÚÙÈ[YK[Ý]›YËˆÙ]Ú[ˆHØ]ÚÙÈ[Y\ˆ[Y\ÈÝ]žHH™YY\œ›Ü‹ÜˆžCBˆ
ˆ]™[È\ÜÛØÚX]YÚ]Ñ“ÕPÕˆÛX\™YžHÛÙØ\™HÜš][™ÈHÈ\Èš]ÜÚ][Û‹ˆØ]\Ù\ÈCBˆ
ˆÚ\™\Ù]YˆÑ‘TÑUHKƒBˆ
‹ÃBˆÙYš[™HÕÑÓSÑÕÑÑŠ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÕÑÓSÑÕÑÑ—ÔÒQ•
JH	ˆÕÑÓSÑÕÑÑ—ÓPTÒÊCBˆÙYš[™HÕÑÓSÑÕÑS•ÓPTÒÈ
JCBˆÙYš[™HÕÑÓSÑÕÑS•ÔÒQ•
ÕJCB‹ÊˆHÑS•HØ\›š[™È[\œ\›YËˆÙ]Ú[ˆH[Y\ˆ\È]Üˆ™[ÝÈH˜[YH[ˆÑÐT“’S•ƒBˆ
ˆÛX\™YžHÛÙØ\™HÜš][™ÈHHÈ\Èš]ÜÚ][Û‹ˆ›ÝH]\Èš]Ø[››Ý™HÛX\™YÚ[HCBˆ
ˆÐT“’S•˜[YH\È\]X[ÈH˜[YHÙˆHˆ™YÚ\Ý\‹ˆ\ÈØ[ˆØØÝ\ˆYˆH˜[YHÙƒBˆ
ˆÐT“’S•\È[™HÑ‘TÑUš]\ÈÚ[ˆˆXÜ™[Y[ÈÈƒBˆ
‹ÃBˆÙYš[™HÕÑÓSÑÕÑS•

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÕÑÓSÑÕÑS•ÔÒQ•
JH	ˆÕÑÓSÑÕÑS•ÓPTÒÊCBˆÙYš[™HÕÑÓSÑÕÑ“ÕPÕÓPTÒÈ
LJCBˆÙYš[™HÕÑÓSÑÕÑ“ÕPÕÔÒQ•
JCB‹ÊˆHÑ“ÕPÕHØ]ÚÙÈ\]H[ÙKˆ\Èš]Ø[ˆ™HÙ]Û˜ÙHžHÛÙØ\™H[™\ÈÛ›HÛX\™YžHH™\Ù]ƒBˆ
ˆŒ‹‘›^X›KˆHØ]ÚÙÈ[YK[Ý]˜[YH
ÊHØ[ˆ™HÚ[™ÙY][žH[YKƒBˆ
ˆŒK‹•™\ÚÛˆHØ]ÚÙÈ[YK[Ý]˜[YH
ÊHØ[ˆ™HÚ[™ÙYÛ›HY\ˆHÛÝ[\ˆ\È™[ÝÈH˜[YHÙˆÑÐT“’S•[™ÑÒS‘ÕËƒBˆ
‹ÃBˆÙYš[™HÕÑÓSÑÕÑ“ÕPÕ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÕÑÓSÑÕÑ“ÕPÕÔÒQ•
JH	ˆÕÑÓSÑÕÑ“ÕPÕÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHÈHØ]ÚÙÈ[Y\ˆÛÛœÝ[™YÚ\Ý\‹ˆ\ÈXš]™YÚ\Ý\ˆ]\›Z[™\ÈH[YK[Ý]˜[YKˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HÕÑÕ×ÐÓÕS•ÓPTÒÈ
‘‘‘‘‘•JCBˆÙYš[™HÕÑÕ×ÐÓÕS•ÔÒQ•
JCB‹ÊˆHÓÕS•HØ]ÚÙÈ[YK[Ý]˜[YKƒBˆ
‹ÃBˆÙYš[™HÕÑÕ×ÐÓÕS•

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÕÑÕ×ÐÓÕS•ÔÒQ•
JH	ˆÕÑÕ×ÐÓÕS•ÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YH‘QQHØ]ÚÙÈ™YYÙ\]Y[˜ÙH™YÚ\Ý\‹ˆÜš][™ÈPH›ÛÝÙYžHMHÈ\È™YÚ\Ý\ˆ™[ØYÈHØ]ÚÙÈ[Y\ˆÚ]H˜[YHÛÛZ[™Y[ˆËˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HÕÑÑ‘QQÑ‘QQÓPTÒÈ
‘•JCBˆÙYš[™HÕÑÑ‘QQÑ‘QQÔÒQ•
JCB‹ÊˆH‘QQH™YY˜[YHÚÝ[™HPH›ÛÝÙYžHMKƒBˆ
‹ÃBˆÙYš[™HÕÑÑ‘QQÑ‘QQ

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÕÑÑ‘QQÑ‘QQÔÒQ•
JH	ˆÕÑÑ‘QQÑ‘QQÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHˆHØ]ÚÙÈ[Y\ˆ˜[YH™YÚ\Ý\‹ˆ\ÈXš]™YÚ\Ý\ˆ™XYÈÝ]HÝ\œ™[˜[YHÙˆHØ]ÚÙÈ[Y\‹ˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HÕÑÕ—ÐÓÕS•ÓPTÒÈ
‘‘‘‘‘•JCBˆÙYš[™HÕÑÕ—ÐÓÕS•ÔÒQ•
JCB‹ÊˆHÓÕS•HÛÝ[\ˆ[Y\ˆ˜[YKƒBˆ
‹ÃBˆÙYš[™HÕÑÕ—ÐÓÕS•

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÕÑÕ—ÐÓÕS•ÔÒQ•
JH	ˆÕÑÕ—ÐÓÕS•ÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHÐT“’S•HØ]ÚÙÈØ\›š[™È[\œ\ÛÛ\\™H˜[YKˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HÕÑÕÐT“’S•ÕÐT“’S•ÓPTÒÈ
Ñ‘•JCBˆÙYš[™HÕÑÕÐT“’S•ÕÐT“’S•ÔÒQ•
JCB‹ÊˆHÐT“’S•HØ]ÚÙÈØ\›š[™È[\œ\ÛÛ\\™H˜[YKƒBˆ
‹ÃBˆÙYš[™HÕÑÕÐT“’S•ÕÐT“’S•

H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÕÑÕÐT“’S•ÕÐT“’S•ÔÒQ•
JH	ˆÕÑÕÐT“’S•ÕÐT“’S•ÓPTÒÊCB‹ÊˆHH
‹ÃBƒB‹ÊˆH˜[YHÒS‘ÕÈHØ]ÚÙÈÚ[™ÝÈÛÛ\\™H˜[YKˆ
‹ÃB‹ÊˆHÈ
‹ÃBˆÙYš[™HÕÑÕÒS‘Õ×ÕÒS‘Õ×ÓPTÒÈ
‘‘‘‘‘•JCBˆÙYš[™HÕÑÕÒS‘Õ×ÕÒS‘Õ×ÔÒQ•
JCB‹ÊˆHÒS‘ÕÈHØ]ÚÙÈÚ[™ÝÈ˜[YKƒBˆ
‹ÃBˆÙYš[™HÕÑÕÒS‘Õ×ÕÒS‘ÕÊ
H


Z[Ì—Ý
J

Z[Ì—Ý
J
JHÕÑÕÒS‘Õ×ÕÒS‘Õ×ÔÒQ•
JH	ˆÕÑÕÒS‘Õ×ÕÒS‘Õ×ÓPTÒÊCB‹ÊˆHH
‹ÃBƒBƒB‹ÊˆCBˆ
ˆCBˆ
‹ÈÊˆ[™ÙˆÜ›Ý\ÕÑÔ™YÚ\Ý\—ÓX\ÚÜÈ
‹ÃBƒBƒB‹ÊˆÕÑH\š\\˜[[œÝ[˜ÙH˜\ÙHY™\ÜÙ\È
‹ÃBˆÚYˆ
×ÐT“WÑ‘PUT‘WÐÓTÑH	ˆŠCBˆÊŠˆ\š\\˜[ÕÑ˜\ÙHY™\ÜÈ
‹ÃBˆÙYš[™HÕÑÐTÑH
LÌJCBˆÊŠˆ\š\\˜[ÕÑ˜\ÙHY™\ÜÈ
‹ÃBˆÙYš[™HÕÑÐTÑWÓ”È
ÌJCBˆÊŠˆ\š\\˜[ÕÑ˜\ÙHÚ[\ˆ
‹ÃBˆÙYš[™HÕÑ

ÕÑÕ\H
ŠUÕÑÐTÑJCBˆÊŠˆ\š\\˜[ÕÑ˜\ÙHÚ[\ˆ
‹ÃBˆÙYš[™HÕÑÓ”È

ÕÑÕ\H
ŠUÕÑÐTÑWÓ”ÊCBˆÊŠˆ\œ˜^H[š]X[^™\ˆÙˆÕÑ\š\\˜[˜\ÙHY™\ÜÙ\È
‹ÃBˆÙYš[™HÕÑÐTÑWÐQ”ÈÈÕÑÐTÑHCBˆÊŠˆ\œ˜^H[š]X[^™\ˆÙˆÕÑ\š\\˜[˜\ÙHÚ[\œÈ
‹ÃBˆÙYš[™HÕÑÐTÑWÔ”ÈÈÕÑCBˆÊŠˆ\œ˜^H[š]X[^™\ˆÙˆÕÑ\š\\˜[˜\ÙHY™\ÜÙ\È
‹ÃBˆÙYš[™HÕÑÐTÑWÐQ”×Ó”ÈÈÕÑÐTÑWÓ”ÈCBˆÊŠˆ\œ˜^H[š]X[^™\ˆÙˆÕÑ\š\\˜[˜\ÙHÚ[\œÈ
‹ÃBˆÙYš[™HÕÑÐTÑWÔ”×Ó”ÈÈÕÑÓ”ÈCBˆÙ[ÙCBˆÊŠˆ\š\\˜[ÕÑ˜\ÙHY™\ÜÈ
‹ÃBˆÙYš[™HÕÑÐTÑH
ÌJCBˆÊŠˆ\š\\˜[ÕÑ˜\ÙHÚ[\ˆ
‹ÃBˆÙYš[™HÕÑ

ÕÑÕ\H
ŠUÕÑÐTÑJCBˆÊŠˆ\œ˜^H[š]X[^™\ˆÙˆÕÑ\š\\˜[˜\ÙHY™\ÜÙ\È
‹ÃBˆÙYš[™HÕÑÐTÑWÐQ”ÈÈÕÑÐTÑHCBˆÊŠˆ\œ˜^H[š]X[^™\ˆÙˆÕÑ\š\\˜[˜\ÙHÚ[\œÈ
‹ÃBˆÙYš[™HÕÑÐTÑWÔ”ÈÈÕÑCBˆÙ[™YƒB‹ÊŠˆ[\œ\™XÝÜœÈ›ÜˆHÕÑ\š\\˜[\H
‹ÃBˆÙYš[™HÕÑÒT”TÈÈÑÐ“ÑÒT”[ˆCBƒB‹ÊˆCBˆ
ˆCBˆ
‹ÈÊˆ[™ÙˆÜ›Ý\ÕÑÔ\š\\˜[ÐXØÙ\Ü×Ó^Y\ˆ
‹ÃBƒBƒB‹ÊƒBŠŠˆ[™ÙˆÙXÝ[Ûˆ\Ú[™È[›Ûž[[Ý\È[š[ÛœÃBŠ‹ÃBƒBˆÚYˆYš[™Y
×ÐT“PÐ×Õ‘T”ÒSÓŠCBˆÚYˆ
×ÐT“PÐ×Õ‘T”ÒSÓˆHŒLL
CBˆÜ˜YÛXHÛ[™ÈXYÛ›ÜÝXÈÜBˆÙ[ÙCBˆÜ˜YÛXHÜBˆÙ[™YƒBˆÙ[YˆYš[™Y
×ÑÓ•P××ÊCBˆÊˆX]™H[›Ûž[[Ý\È[š[ÛœÈ[˜X›Y
‹ÃBˆÙ[YˆYš[™Y
×ÒPT—ÔÖTÕST×ÒPÐ××ÊCBˆÜ˜YÛXH[™ÝXYÙOYY˜][BˆÙ[ÙCBˆÙ\œ›Üˆ›ÝÝ\ÜYÛÛ\[\ˆ\CBˆÙ[™YƒBƒB‹ÊˆCBˆ
ˆCBˆ
‹ÈÊˆ[™ÙˆÜ›Ý\\š\\˜[ØXØÙ\Ü×Û^Y\ˆ
‹ÃBƒBƒB‹ÊˆKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKCBˆKHXXÜ›ÜÈ›Üˆ\ÙHÚ]š]šY[Yš[š][ÛœÈ
ÔÒQ•ÓPTÒÊKƒBˆKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKH
‹ÃBƒB‹ÊˆCBˆ
ˆYÙÜ›Ý\š]ÑšY[ÑÙ[™\šX×ÓXXÜ›ÜÈXXÜ›ÜÈ›Üˆ\ÙHÚ]š]šY[Yš[š][ÛœÈ
ÔÒQ•ÓPTÒÊKƒBˆ
ˆÃBˆ
‹ÃBƒBˆÚYˆYš[™Y
×ÐT“PÐ×Õ‘T”ÒSÓŠCBˆÚYˆ
×ÐT“PÐ×Õ‘T”ÒSÓˆHŒLL
CBˆÜ˜YÛXHÛ[™ÈÞ\Ý[WÚXY\ƒBˆÙ[™YƒBˆÙ[YˆYš[™Y
×ÒPT—ÔÖTÕST×ÒPÐ××ÊCBˆÜ˜YÛXHÞ\Ý[WÚ[˜ÛYCBˆÙ[™YƒBƒB‹ÊŠƒBˆ
ˆœšYYˆX\ÚÈ[™Y\ÚYHš]šY[˜[YH›Üˆ\ÙH[ˆH™YÚ\Ý\ˆš]˜[™ÙKƒBˆ
ˆ\˜[HšY[˜[YHÙˆH™YÚ\Ý\ˆš]šY[ƒBˆ
ˆ\˜[H˜[YH˜[YHÙˆHš]šY[ƒBˆ
ˆ™]\›ˆX\ÚÙY[™ÚYY˜[YKƒBˆ
‹ÃBˆÙYš[™H–ÕS‘“
šY[˜[YJH


˜[YJH
šY[ÈÈÔÒQ•
JH	ˆ
šY[ÈÈÓPTÒÊJCB‹ÊŠƒBˆ
ˆœšYYˆX\ÚÈ[™šYÚ\ÚYH™YÚ\Ý\ˆ˜[YHÈ^˜XÝHš]šY[˜[YKƒBˆ
ˆ\˜[HšY[˜[YHÙˆH™YÚ\Ý\ˆš]šY[ƒBˆ
ˆ\˜[H˜[YH˜[YHÙˆH™YÚ\Ý\‹ƒBˆ
ˆ™]\›ˆX\ÚÙY[™ÚYYš]šY[˜[YKƒBˆ
‹ÃBˆÙYš[™H–Ñ“•S
šY[˜[YJH


˜[YJH	ˆ
šY[ÈÈÓPTÒÊJHˆ
šY[ÈÈÔÒQ•
JCBƒB‹ÊˆCBˆ
ˆCBˆ
‹ÈÊˆ[™ÙˆÜ›Ý\š]ÑšY[ÑÙ[™\šX×ÓXXÜ›ÜÈ
‹ÃBƒBƒB‹ÊˆKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKCBˆKHÑÈÛÛ\]Xš[]CBˆKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKH
‹ÃBƒB‹ÊˆCBˆ
ˆYÙÜ›Ý\Ñ×ÐÛÛ\]Xš[]WÔÞ[X›ÛÈÑÈÛÛ\]Xš[]CBˆ
ˆÃBˆ
‹ÃBƒB‹ÊŠˆYÚÜYYÔH
›^ÛÛ[H
H[\œ\˜[YH
‹ÃBˆÙYš[™HÔWÒ×ÒT”[ˆ“VÓÓSNÒT”[ƒBƒB‹ÊˆCBˆ
ˆœšYYˆÙ]HÚ\˜[YKƒBˆ
ƒBˆ
ˆ™]\›ˆÚ\™\œÚ[Û‹ˆL™\œÚ[ÛˆÚ\NˆLH™\œÚ[ÛˆÚ\‘Žˆ[˜[Y™\œÚ[Û‹ƒBˆ
‹ÃBœÝ]XÈ[›[™HZ[Ì—ÝÚ\ÑÙ]™\œÚ[ÛŠ›ÚY
CBžÃBˆZ[Ì—Ý]šXÙT™]š\Ú[ÛŽÃBƒBˆ]šXÙT™]š\Ú[ÛˆHÖTÐÓÓ‹O‘QRQ	ˆÖTÐÓÓ—ÑQRQÔ‘U—ÒQÓPTÒÎÃBƒBˆYŠSOH]šXÙT™]š\Ú[ÛŠHÊˆL]šXÙH™]š\Ú[Ûˆ\È
‹ÃBˆÃBˆ™]\›ˆÃBˆCBˆ[ÙHYŠUSOH]šXÙT™]š\Ú[ÛŠHÊˆLH]šXÙH™]š\Ú[Ûˆ\ÈH
‹ÃBˆÃBˆ™]\›ˆNÃBˆCBˆ[ÙCBˆÃBˆ™]\›ˆ‘ŽÃBˆCBŸCBƒBƒB‹ÊˆCBˆ
ˆCBˆ
‹ÈÊˆ[™ÙˆÜ›Ý\Ñ×ÐÛÛ\]Xš[]WÔÞ[X›ÛÈ
‹ÃBƒBƒBˆÙ[™YˆÊˆÓÍMTÍŽWÐÓLÌ×ÐÓÔ‘LÒÈ
‹ÃBƒB