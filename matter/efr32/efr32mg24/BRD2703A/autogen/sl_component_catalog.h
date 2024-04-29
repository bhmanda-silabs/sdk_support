#ifndef SL_COMPONENT_CATALOG_H
#define SL_COMPONENT_CATALOG_H

// APIs present in project
#define SL_CATALOG_BLUETOOTH_CONFIGURATION_PRESENT
#define SL_CATALOG_BLUETOOTH_CTE_SUPPORT_PRESENT
#define SL_CATALOG_BLUETOOTH_CS_SUPPORT_PRESENT
#define SL_CATALOG_BLUETOOTH_FEATURE_ADVERTISER_PRESENT
#define SL_CATALOG_BLUETOOTH_FEATURE_CONNECTION_PRESENT
#define SL_CATALOG_BLUETOOTH_FEATURE_GATT_SERVER_PRESENT
#define SL_CATALOG_BLUETOOTH_FEATURE_LEGACY_ADVERTISER_PRESENT
#define SL_CATALOG_BLUETOOTH_FEATURE_SYSTEM_PRESENT
#define SL_CATALOG_BLUETOOTH_RTOS_ADAPTATION_PRESENT
#define SL_CATALOG_BLUETOOTH_PRESENT
#define SL_CATALOG_BLUETOOTH_FEATURE_MULTIPROTOCOL_PRESENT
#define SL_CATALOG_CMSIS_OS_COMMON_PRESENT
#define SL_CATALOG_DEVICE_INIT_PRESENT
#define SL_CATALOG_DEVICE_INIT_CLOCKS_PRESENT
#define SL_CATALOG_DEVICE_INIT_CORE_PRESENT
#define SL_CATALOG_DEVICE_INIT_DCDC_PRESENT
#define SL_CATALOG_DEVICE_INIT_DPLL_PRESENT
#define SL_CATALOG_DEVICE_INIT_EMU_PRESENT
#define SL_CATALOG_DEVICE_INIT_HFXO_PRESENT
#define SL_CATALOG_DEVICE_INIT_LFRCO_PRESENT
#define SL_CATALOG_DEVICE_INIT_LFXO_PRESENT
#define SL_CATALOG_DEVICE_INIT_NVIC_PRESENT
#define SL_CATALOG_EMLIB_CORE_PRESENT
#define SL_CATALOG_EMLIB_CORE_DEBUG_CONFIG_PRESENT
#define SL_CATALOG_FREERTOS_KERNEL_PRESENT
#define SL_CATALOG_KERNEL_PRESENT
#define SL_CATALOG_GATT_CONFIGURATION_PRESENT
#define SL_CATALOG_HFXO_MANAGER_PRESENT
#define SL_CATALOG_IOSTREAM_PRESENT
#define SL_CATALOG_NVM3_PRESENT
#define SL_CATALOG_POWER_MANAGER_PRESENT
#define SL_CATALOG_PSA_CRYPTO_PRESENT
#define SL_CATALOG_RAIL_LIB_PRESENT
#define SL_CATALOG_RAIL_UTIL_PTI_PRESENT
#define SL_CATALOG_SE_MANAGER_PRESENT
#define SL_CATALOG_BTN0_PRESENT
#define SL_CATALOG_SIMPLE_BUTTON_PRESENT
#define SL_CATALOG_SIMPLE_BUTTON_BTN0_PRESENT
#define SL_CATALOG_BTN1_PRESENT
#define SL_CATALOG_SIMPLE_BUTTON_BTN1_PRESENT
#define SL_CATALOG_LED0_PRESENT
#define SL_CATALOG_SIMPLE_LED_PRESENT
#define SL_CATALOG_SIMPLE_LED_LED0_PRESENT
#define SL_CATALOG_LED1_PRESENT
#define SL_CATALOG_SIMPLE_LED_LED1_PRESENT
#define SL_CATALOG_SLEEPTIMER_PRESENT
#define SL_CATALOG_SLI_PROTOCOL_CRYPTO_PRESENT
#if defined(CONFIG_ENABLE_UART)
#define SL_CATALOG_UARTDRV_EUSART_PRESENT
#endif

#endif // SL_COMPONENT_CATALOG_H
