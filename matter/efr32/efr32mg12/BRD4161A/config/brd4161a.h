#ifndef _BRD4161A_H_
#define _BRD4161A_H_

#ifndef LOGGING_STATS
#ifdef EXP_BOARD
#define WAKE_INDICATOR_PIN PIN(D, 10)
#else
#define WAKE_INDICATOR_PIN PIN(D, 11)
#endif /* EXP_BOARD */
#endif /* LOGGING_STATS */

#ifdef LOGGING_STATS
#ifdef EXP_BOARD
#define LOGGING_WAKE_INDICATOR_PIN PIN(D, 10)
#define LOGGING_STATS_PORT gpioPortD
#define LOGGING_STATS_PIN 10
#else
#define LOGGING_WAKE_INDICATOR_PIN PIN(D, 11)
#define LOGGING_STATS_PORT gpioPortD
#define LOGGING_STATS_PIN 11
#endif /* EXP_BOARD */
#endif /* LOGGING_STAT */

#define MY_USART USART2
#define MY_USART_TX_SIGNAL dmadrvPeripheralSignal_USART2_TXBL
#define MY_USART_RX_SIGNAL dmadrvPeripheralSignal_USART2_RXDATAV


#ifdef RS911X_WIFI
#define WFX_RESET_PIN     PIN(D, 12)
#define WFX_INTERRUPT_PIN PIN(C, 9)
#ifdef EXP_BOARD
#define WFX_SLEEP_CONFIRM_PIN PIN(D, 10) /* Exp hdr 7 */
#else
#define WFX_SLEEP_CONFIRM_PIN PIN(D, 11) /* Exp hdr 7 */
#endif /* EXP_BOARD */
#define SL_WFX_HOST_PINOUT_SPI_IRQ 9
#else /* WF200 */
#define SL_WFX_HOST_PINOUT_RESET_PORT gpioPortD
#define SL_WFX_HOST_PINOUT_RESET_PIN 10
#define SL_WFX_HOST_PINOUT_SPI_WIRQ_PORT gpioPortB /* SPI IRQ port*/
#define SL_WFX_HOST_PINOUT_SPI_WIRQ_PIN 6          /* SPI IRQ pin */
#define SL_WFX_HOST_PINOUT_WUP_PORT gpioPortD
#define SL_WFX_HOST_PINOUT_WUP_PIN 8
#define SL_WFX_HOST_PINOUT_SPI_IRQ 5
#endif /* WF200/9116 */

#endif /* _BRD4161A_H_ */
