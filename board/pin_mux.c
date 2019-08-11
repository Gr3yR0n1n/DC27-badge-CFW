/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Pins v4.1
processor: MKL27Z64xxx4
package_id: MKL27Z64VDA4
mcu_data: ksdk2_0
processor_version: 4.0.1
pin_labels:
- {pin_num: B4, pin_signal: CMP0_IN0/PTC6/LLWU_P10/SPI0_MOSI/EXTRG_IN/SPI0_MISO, label: LED_nINT, identifier: LED_nINT}
- {pin_num: C1, pin_signal: ADC0_DM1/ADC0_SE5a/PTE17/SPI0_SCK/UART2_RX/TPM_CLKIN1/LPTMR0_ALT3/FXIO0_D1, label: PTE17, identifier: PTE17}
- {pin_num: A5, pin_signal: PTC5/LLWU_P9/SPI0_SCK/LPTMR0_ALT2/CMP0_OUT, label: LED_EN, identifier: LED_EN}
- {pin_num: C6, pin_signal: ADC0_SE9/PTB1/I2C0_SDA/TPM1_CH1/SPI1_MISO/SPI1_MOSI, label: SDA, identifier: SDA}
- {pin_num: D6, pin_signal: ADC0_SE8/PTB0/LLWU_P5/I2C0_SCL/TPM1_CH0/SPI1_MOSI/SPI1_MISO, label: SCL, identifier: SCL}
- {pin_num: A2, pin_signal: PTD7/SPI1_MISO/LPUART0_TX/I2C1_SCL/SPI1_MOSI/FXIO0_D7, label: PTD7, identifier: PTD7}
- {pin_num: B2, pin_signal: ADC0_SE7b/PTD6/LLWU_P15/SPI1_MOSI/LPUART0_RX/I2C1_SDA/SPI1_MISO/FXIO0_D6, label: PTD6, identifier: PTD6}
- {pin_num: B3, pin_signal: ADC0_SE6b/PTD5/SPI1_SCK/UART2_TX/TPM0_CH5/FXIO0_D5, label: PTD5, identifier: PTD5}
- {pin_num: A6, pin_signal: PTC4/LLWU_P8/SPI0_PCS0/LPUART1_TX/TPM0_CH3/SPI1_PCS0, label: NXH_nRESET, identifier: NXH_nRESET}
- {pin_num: C2, pin_signal: ADC0_DP1/ADC0_SE1/PTE16/SPI0_PCS0/UART2_TX/TPM_CLKIN0/FXIO0_D0, label: PTE16, identifier: PTE16}
- {pin_num: D1, pin_signal: ADC0_DP2/ADC0_SE2/PTE18/SPI0_MOSI/I2C0_SDA/SPI0_MISO/FXIO0_D2, label: PTE18, identifier: PTE18}
- {pin_num: E3, pin_signal: ADC0_DP0/ADC0_SE0/PTE20/TPM1_CH0/LPUART0_TX/FXIO0_D4, label: PTE20, identifier: PTE20}
- {pin_num: E1, pin_signal: ADC0_DP3/ADC0_SE3/PTE22/TPM2_CH0/UART2_TX/FXIO0_D6, label: KL_TX, identifier: KL_TX}
- {pin_num: F1, pin_signal: ADC0_DM3/ADC0_SE7a/PTE23/TPM2_CH1/UART2_RX/FXIO0_D7, label: KL_RX, identifier: KL_RX}
- {pin_num: E2, pin_signal: ADC0_DM0/ADC0_SE4a/PTE21/TPM1_CH1/LPUART0_RX/FXIO0_D5, label: PTE21, identifier: PTE21}
- {pin_num: F2, pin_signal: ADC0_SE23/CMP0_IN4/VREF_OUT/PTE30/TPM0_CH3/TPM_CLKIN1/LPUART1_TX/LPTMR0_ALT1, label: VREF_OUT, identifier: VREF_OUT}
- {pin_num: B5, pin_signal: PTC3/LLWU_P7/SPI1_SCK/LPUART1_RX/TPM0_CH2/CLKOUT, label: NXH_REFCLK, identifier: NXH_REFCLK}
- {pin_num: F4, pin_signal: PTA1/LPUART0_RX/TPM2_CH0, label: NXH_RX, identifier: NXH_RX}
- {pin_num: E4, pin_signal: PTA2/LPUART0_TX/TPM2_CH1, label: NXH_TX, identifier: NXH_TX}
- {pin_num: A4, pin_signal: CMP0_IN1/PTC7/SPI0_MISO/USB_SOF_OUT/SPI0_MOSI, label: NXH_DETECT, identifier: NXH_DETECT}
- {pin_num: B6, pin_signal: ADC0_SE11/PTC2/I2C1_SDA/TPM0_CH1, label: NXH_CAL, identifier: NXH_CAL}
- {pin_num: C5, pin_signal: ADC0_SE15/PTC1/LLWU_P6/RTC_CLKIN/I2C1_SCL/TPM0_CH0, label: NXH_UPDATE, identifier: NXH_UPDATE}
- {pin_num: A3, pin_signal: PTD4/LLWU_P14/SPI1_PCS0/UART2_RX/TPM0_CH4/FXIO0_D4, label: KL_PIEZO, identifier: KL_PIEZO}
- {pin_num: F5, pin_signal: PTA4/I2C1_SDA/TPM0_CH1/NMI_b, label: BOOTCFG0, identifier: BOOTCFG0}
- {pin_num: D5, pin_signal: PTA20/RESET_b, label: KL_nRESET, identifier: KL_nRESET}
- {pin_num: E5, pin_signal: PTA3/I2C1_SCL/TPM0_CH0/SWD_DIO, label: KL_SWDIO, identifier: KL_SWDIO}
- {pin_num: F3, pin_signal: PTA0/TPM0_CH5/SWD_CLK, label: KL_SWCLK, identifier: KL_SWCLK}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

#include "fsl_common.h"
#include "fsl_port.h"
#include "fsl_gpio.h"
#include "pin_mux.h"

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitBootPins
 * Description   : Calls initialization functions.
 *
 * END ****************************************************************************************************************/
void BOARD_InitBootPins(void)
{
    BOARD_InitPins();
}

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitPins:
- options: {callFromInitBoot: 'true', coreID: core0, enableClock: 'true'}
- pin_list:
  - {pin_num: A1, peripheral: n/a, signal: disabled, pin_signal: PTE0/CLKOUT32K/SPI1_MISO/LPUART1_TX/RTC_CLKOUT/CMP0_OUT/I2C1_SDA, pull_select: up}
  - {pin_num: B4, peripheral: GPIOC, signal: 'GPIO, 6', pin_signal: CMP0_IN0/PTC6/LLWU_P10/SPI0_MOSI/EXTRG_IN/SPI0_MISO, direction: INPUT, pull_select: up, pull_enable: disable}
  - {pin_num: D6, peripheral: I2C0, signal: SCL, pin_signal: ADC0_SE8/PTB0/LLWU_P5/I2C0_SCL/TPM1_CH0/SPI1_MOSI/SPI1_MISO}
  - {pin_num: C6, peripheral: I2C0, signal: SDA, pin_signal: ADC0_SE9/PTB1/I2C0_SDA/TPM1_CH1/SPI1_MISO/SPI1_MOSI}
  - {pin_num: A5, peripheral: GPIOC, signal: 'GPIO, 5', pin_signal: PTC5/LLWU_P9/SPI0_SCK/LPTMR0_ALT2/CMP0_OUT, direction: OUTPUT}
  - {pin_num: A2, peripheral: n/a, signal: disabled, pin_signal: PTD7/SPI1_MISO/LPUART0_TX/I2C1_SCL/SPI1_MOSI/FXIO0_D7}
  - {pin_num: A6, peripheral: GPIOC, signal: 'GPIO, 4', pin_signal: PTC4/LLWU_P8/SPI0_PCS0/LPUART1_TX/TPM0_CH3/SPI1_PCS0, direction: OUTPUT, gpio_init_state: 'false'}
  - {pin_num: E1, peripheral: UART2, signal: TX, pin_signal: ADC0_DP3/ADC0_SE3/PTE22/TPM2_CH0/UART2_TX/FXIO0_D6}
  - {pin_num: F1, peripheral: UART2, signal: RX, pin_signal: ADC0_DM3/ADC0_SE7a/PTE23/TPM2_CH1/UART2_RX/FXIO0_D7}
  - {pin_num: B5, peripheral: SIM, signal: CLKOUT, pin_signal: PTC3/LLWU_P7/SPI1_SCK/LPUART1_RX/TPM0_CH2/CLKOUT}
  - {pin_num: F4, peripheral: LPUART0, signal: RX, pin_signal: PTA1/LPUART0_RX/TPM2_CH0}
  - {pin_num: E4, peripheral: LPUART0, signal: TX, pin_signal: PTA2/LPUART0_TX/TPM2_CH1}
  - {pin_num: A4, peripheral: GPIOC, signal: 'GPIO, 7', pin_signal: CMP0_IN1/PTC7/SPI0_MISO/USB_SOF_OUT/SPI0_MOSI, direction: INPUT, gpio_interrupt: kPORT_InterruptRisingEdge,
    pull_select: down, pull_enable: enable}
  - {pin_num: B6, peripheral: GPIOC, signal: 'GPIO, 2', pin_signal: ADC0_SE11/PTC2/I2C1_SDA/TPM0_CH1, direction: OUTPUT}
  - {pin_num: C5, peripheral: GPIOC, signal: 'GPIO, 1', pin_signal: ADC0_SE15/PTC1/LLWU_P6/RTC_CLKIN/I2C1_SCL/TPM0_CH0, direction: OUTPUT}
  - {pin_num: F5, peripheral: n/a, signal: disabled, pin_signal: PTA4/I2C1_SDA/TPM0_CH1/NMI_b}
  - {pin_num: A3, peripheral: TPM0, signal: 'CH, 4', pin_signal: PTD4/LLWU_P14/SPI1_PCS0/UART2_RX/TPM0_CH4/FXIO0_D4, direction: OUTPUT}
  - {pin_num: C4, peripheral: SUPPLY, signal: 'VSS, 0', pin_signal: VSS4}
  - {pin_num: D5, peripheral: RCM, signal: RESET, pin_signal: PTA20/RESET_b}
  - {pin_num: E5, peripheral: SWD, signal: DIO, pin_signal: PTA3/I2C1_SCL/TPM0_CH0/SWD_DIO}
  - {pin_num: E6, peripheral: OSC0, signal: XTAL0, pin_signal: XTAL0/PTA19/LPUART1_TX/TPM_CLKIN1/LPTMR0_ALT1}
  - {pin_num: F6, peripheral: OSC0, signal: EXTAL0, pin_signal: EXTAL0/PTA18/LPUART1_RX/TPM_CLKIN0}
  - {pin_num: F3, peripheral: SWD, signal: CLK, pin_signal: PTA0/TPM0_CH5/SWD_CLK}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_InitPins(void)
{
    /* Port A Clock Gate Control: Clock enabled */
    CLOCK_EnableClock(kCLOCK_PortA);
    /* Port B Clock Gate Control: Clock enabled */
    CLOCK_EnableClock(kCLOCK_PortB);
    /* Port C Clock Gate Control: Clock enabled */
    CLOCK_EnableClock(kCLOCK_PortC);
    /* Port D Clock Gate Control: Clock enabled */
    CLOCK_EnableClock(kCLOCK_PortD);
    /* Port E Clock Gate Control: Clock enabled */
    CLOCK_EnableClock(kCLOCK_PortE);

    gpio_pin_config_t NXH_UPDATE_config = {
        .pinDirection = kGPIO_DigitalOutput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PTC1 (pin C5)  */
    GPIO_PinInit(BOARD_INITPINS_NXH_UPDATE_GPIO, BOARD_INITPINS_NXH_UPDATE_PIN, &NXH_UPDATE_config);

    gpio_pin_config_t NXH_CAL_config = {
        .pinDirection = kGPIO_DigitalOutput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PTC2 (pin B6)  */
    GPIO_PinInit(BOARD_INITPINS_NXH_CAL_GPIO, BOARD_INITPINS_NXH_CAL_PIN, &NXH_CAL_config);

    gpio_pin_config_t NXH_nRESET_config = {
        .pinDirection = kGPIO_DigitalOutput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PTC4 (pin A6)  */
    GPIO_PinInit(BOARD_INITPINS_NXH_nRESET_GPIO, BOARD_INITPINS_NXH_nRESET_PIN, &NXH_nRESET_config);

    gpio_pin_config_t LED_EN_config = {
        .pinDirection = kGPIO_DigitalOutput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PTC5 (pin A5)  */
    GPIO_PinInit(BOARD_INITPINS_LED_EN_GPIO, BOARD_INITPINS_LED_EN_PIN, &LED_EN_config);

    gpio_pin_config_t LED_nINT_config = {
        .pinDirection = kGPIO_DigitalInput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PTC6 (pin B4)  */
    GPIO_PinInit(BOARD_INITPINS_LED_nINT_GPIO, BOARD_INITPINS_LED_nINT_PIN, &LED_nINT_config);

    gpio_pin_config_t NXH_DETECT_config = {
        .pinDirection = kGPIO_DigitalInput,
        .outputLogic = 0U
    };
    /* Initialize GPIO functionality on pin PTC7 (pin A4)  */
    GPIO_PinInit(BOARD_INITPINS_NXH_DETECT_GPIO, BOARD_INITPINS_NXH_DETECT_PIN, &NXH_DETECT_config);

    /* PORTA0 (pin F3) is configured as SWD_CLK */
    PORT_SetPinMux(BOARD_INITPINS_KL_SWCLK_PORT, BOARD_INITPINS_KL_SWCLK_PIN, kPORT_MuxAlt7);

    /* PORTA1 (pin F4) is configured as LPUART0_RX */
    PORT_SetPinMux(BOARD_INITPINS_NXH_RX_PORT, BOARD_INITPINS_NXH_RX_PIN, kPORT_MuxAlt2);

    /* PORTA18 (pin F6) is configured as EXTAL0 */
    PORT_SetPinMux(PORTA, 18U, kPORT_PinDisabledOrAnalog);

    /* PORTA19 (pin E6) is configured as XTAL0 */
    PORT_SetPinMux(PORTA, 19U, kPORT_PinDisabledOrAnalog);

    /* PORTA2 (pin E4) is configured as LPUART0_TX */
    PORT_SetPinMux(BOARD_INITPINS_NXH_TX_PORT, BOARD_INITPINS_NXH_TX_PIN, kPORT_MuxAlt2);

    /* PORTA20 (pin D5) is configured as RESET_b */
    PORT_SetPinMux(BOARD_INITPINS_KL_nRESET_PORT, BOARD_INITPINS_KL_nRESET_PIN, kPORT_MuxAlt7);

    /* PORTA3 (pin E5) is configured as SWD_DIO */
    PORT_SetPinMux(BOARD_INITPINS_KL_SWDIO_PORT, BOARD_INITPINS_KL_SWDIO_PIN, kPORT_MuxAlt7);

    /* PORTA4 (pin F5) is disabled */
    PORT_SetPinMux(BOARD_INITPINS_BOOTCFG0_PORT, BOARD_INITPINS_BOOTCFG0_PIN, kPORT_PinDisabledOrAnalog);

    /* PORTB0 (pin D6) is configured as I2C0_SCL */
    PORT_SetPinMux(BOARD_INITPINS_SCL_PORT, BOARD_INITPINS_SCL_PIN, kPORT_MuxAlt2);

    /* PORTB1 (pin C6) is configured as I2C0_SDA */
    PORT_SetPinMux(BOARD_INITPINS_SDA_PORT, BOARD_INITPINS_SDA_PIN, kPORT_MuxAlt2);

    /* PORTC1 (pin C5) is configured as PTC1 */
    PORT_SetPinMux(BOARD_INITPINS_NXH_UPDATE_PORT, BOARD_INITPINS_NXH_UPDATE_PIN, kPORT_MuxAsGpio);

    /* PORTC2 (pin B6) is configured as PTC2 */
    PORT_SetPinMux(BOARD_INITPINS_NXH_CAL_PORT, BOARD_INITPINS_NXH_CAL_PIN, kPORT_MuxAsGpio);

    /* PORTC3 (pin B5) is configured as CLKOUT */
    PORT_SetPinMux(BOARD_INITPINS_NXH_REFCLK_PORT, BOARD_INITPINS_NXH_REFCLK_PIN, kPORT_MuxAlt5);

    /* PORTC4 (pin A6) is configured as PTC4 */
    PORT_SetPinMux(BOARD_INITPINS_NXH_nRESET_PORT, BOARD_INITPINS_NXH_nRESET_PIN, kPORT_MuxAsGpio);

    /* PORTC5 (pin A5) is configured as PTC5 */
    PORT_SetPinMux(BOARD_INITPINS_LED_EN_PORT, BOARD_INITPINS_LED_EN_PIN, kPORT_MuxAsGpio);

    /* PORTC6 (pin B4) is configured as PTC6 */
    PORT_SetPinMux(BOARD_INITPINS_LED_nINT_PORT, BOARD_INITPINS_LED_nINT_PIN, kPORT_MuxAsGpio);

    PORTC->PCR[6] = ((PORTC->PCR[6] &
                      /* Mask bits to zero which are setting */
                      (~(PORT_PCR_PS_MASK | PORT_PCR_PE_MASK | PORT_PCR_ISF_MASK)))

                     /* Pull Select: Internal pullup resistor is enabled on the corresponding pin, if the
                      * corresponding PE field is set. */
                     | PORT_PCR_PS(kPORT_PullUp)

                     /* Pull Enable: Internal pullup or pulldown resistor is not enabled on the corresponding pin. */
                     | PORT_PCR_PE(kPORT_PullDisable));

    /* PORTC7 (pin A4) is configured as PTC7 */
    PORT_SetPinMux(BOARD_INITPINS_NXH_DETECT_PORT, BOARD_INITPINS_NXH_DETECT_PIN, kPORT_MuxAsGpio);

    /* Interrupt configuration on PORTC7 (pin A4): Interrupt on rising edge */
    PORT_SetPinInterruptConfig(BOARD_INITPINS_NXH_DETECT_PORT, BOARD_INITPINS_NXH_DETECT_PIN, kPORT_InterruptRisingEdge);

    PORTC->PCR[7] = ((PORTC->PCR[7] &
                      /* Mask bits to zero which are setting */
                      (~(PORT_PCR_PS_MASK | PORT_PCR_PE_MASK | PORT_PCR_ISF_MASK)))

                     /* Pull Select: Internal pulldown resistor is enabled on the corresponding pin, if the
                      * corresponding PE field is set. */
                     | (uint32_t)(kPORT_PullDown));

    /* PORTD4 (pin A3) is configured as TPM0_CH4 */
    PORT_SetPinMux(BOARD_INITPINS_KL_PIEZO_PORT, BOARD_INITPINS_KL_PIEZO_PIN, kPORT_MuxAlt4);

    /* PORTD7 (pin A2) is disabled */
    PORT_SetPinMux(BOARD_INITPINS_PTD7_PORT, BOARD_INITPINS_PTD7_PIN, kPORT_PinDisabledOrAnalog);

    /* PORTE0 (pin A1) is disabled */
    PORT_SetPinMux(PORTE, 0U, kPORT_PinDisabledOrAnalog);

    PORTE->PCR[0] = ((PORTE->PCR[0] &
                      /* Mask bits to zero which are setting */
                      (~(PORT_PCR_PS_MASK | PORT_PCR_ISF_MASK)))

                     /* Pull Select: Internal pullup resistor is enabled on the corresponding pin, if the
                      * corresponding PE field is set. */
                     | PORT_PCR_PS(kPORT_PullUp));

    /* PORTE22 (pin E1) is configured as UART2_TX */
    PORT_SetPinMux(BOARD_INITPINS_KL_TX_PORT, BOARD_INITPINS_KL_TX_PIN, kPORT_MuxAlt4);

    /* PORTE23 (pin F1) is configured as UART2_RX */
    PORT_SetPinMux(BOARD_INITPINS_KL_RX_PORT, BOARD_INITPINS_KL_RX_PIN, kPORT_MuxAlt4);

    SIM->SOPT5 = ((SIM->SOPT5 &
                   /* Mask bits to zero which are setting */
                   (~(SIM_SOPT5_LPUART0TXSRC_MASK | SIM_SOPT5_LPUART0RXSRC_MASK)))

                  /* LPUART0 Transmit Data Source Select: LPUART0_TX pin. */
                  | SIM_SOPT5_LPUART0TXSRC(SOPT5_LPUART0TXSRC_LPUART_TX)

                  /* LPUART0 Receive Data Source Select: LPUART_RX pin. */
                  | SIM_SOPT5_LPUART0RXSRC(SOPT5_LPUART0RXSRC_LPUART_RX));
}
/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/