#ifndef RT_CONFIG_H__
#define RT_CONFIG_H__

/* Automatically generated file; DO NOT EDIT. */
/* RT-Thread Configuration */

#define RTT_DIR "rt-thread"
#define SOC_STM32F469NI

/* RT-Thread Kernel */

#define RT_NAME_MAX 8
#define RT_ALIGN_SIZE 4
#define RT_THREAD_PRIORITY_32
#define RT_THREAD_PRIORITY_MAX 32
#define RT_TICK_PER_SECOND 1000
#define RT_USING_OVERFLOW_CHECK
#define RT_USING_HOOK
#define RT_USING_IDLE_HOOK
#define RT_IDEL_HOOK_LIST_SIZE 4
#define IDLE_THREAD_STACK_SIZE 256
#define RT_DEBUG

/* Inter-Thread communication */

#define RT_USING_SEMAPHORE
#define RT_USING_MUTEX
#define RT_USING_EVENT
#define RT_USING_MAILBOX
#define RT_USING_MESSAGEQUEUE

/* Memory Management */

#define RT_USING_MEMPOOL
#define RT_USING_MEMHEAP
#define RT_USING_MEMHEAP_AS_HEAP
#define RT_USING_HEAP

/* Kernel Device Object */

#define RT_USING_DEVICE
#define RT_USING_CONSOLE
#define RT_CONSOLEBUF_SIZE 10240
#define RT_CONSOLE_DEVICE_NAME "uart3"
#define RT_VER_NUM 0x40001
#define ARCH_ARM
#define ARCH_ARM_CORTEX_M
#define ARCH_ARM_CORTEX_M4

/* RT-Thread Components */

#define RT_USING_COMPONENTS_INIT
#define RT_USING_USER_MAIN
#define RT_MAIN_THREAD_STACK_SIZE 2048
#define RT_MAIN_THREAD_PRIORITY 10

/* C++ features */


/* Command shell */

#define RT_USING_FINSH
#define FINSH_THREAD_NAME "tshell"
#define FINSH_USING_HISTORY
#define FINSH_HISTORY_LINES 10
#define FINSH_USING_SYMTAB
#define FINSH_USING_DESCRIPTION
#define FINSH_THREAD_PRIORITY 20
#define FINSH_THREAD_STACK_SIZE 8192
#define FINSH_CMD_SIZE 256
#define FINSH_USING_MSH
#define FINSH_USING_MSH_DEFAULT
#define FINSH_USING_MSH_ONLY
#define FINSH_ARG_MAX 10

/* Device virtual file system */

#define RT_USING_DFS
#define DFS_USING_WORKDIR
#define DFS_FILESYSTEMS_MAX 4
#define DFS_FILESYSTEM_TYPES_MAX 4
#define DFS_FD_MAX 16
#define RT_USING_DFS_ELMFAT

/* elm-chan's FatFs, Generic FAT Filesystem Module */

#define RT_DFS_ELM_CODE_PAGE 437
#define RT_DFS_ELM_WORD_ACCESS
#define RT_DFS_ELM_USE_LFN_3
#define RT_DFS_ELM_USE_LFN 3
#define RT_DFS_ELM_MAX_LFN 255
#define RT_DFS_ELM_DRIVES 2
#define RT_DFS_ELM_MAX_SECTOR_SIZE 512
#define RT_DFS_ELM_REENTRANT
#define RT_USING_DFS_DEVFS
#define RT_USING_DFS_ROMFS

/* Device Drivers */

#define RT_USING_DEVICE_IPC
#define RT_PIPE_BUFSZ 512
#define RT_USING_SERIAL
#define RT_SERIAL_USING_DMA
#define RT_SERIAL_RB_BUFSZ 64
#define RT_USING_I2C
#define RT_USING_I2C_BITOPS
#define RT_USING_PIN
#define RT_USING_RTC
#define RT_USING_SPI

/* Using WiFi */


/* Using USB */


/* POSIX layer and C standard library */

#define RT_USING_LIBC
#define RT_USING_POSIX

/* Network */

/* Socket abstraction layer */

#define RT_USING_SAL

/* protocol stack implement */

#define SAL_USING_LWIP
#define SAL_USING_POSIX
#define SAL_PROTO_FAMILIES_NUM 4

/* light weight TCP/IP stack */

#define RT_USING_LWIP
#define RT_USING_LWIP202
#define RT_LWIP_IGMP
#define RT_LWIP_ICMP
#define RT_LWIP_DNS
#define RT_LWIP_DHCP
#define IP_SOF_BROADCAST 1
#define IP_SOF_BROADCAST_RECV 1

/* Static IPv4 Address */

#define RT_LWIP_IPADDR "192.168.1.30"
#define RT_LWIP_GWADDR "192.168.1.1"
#define RT_LWIP_MSKADDR "255.255.255.0"
#define RT_LWIP_UDP
#define RT_LWIP_TCP
#define RT_MEMP_NUM_NETCONN 8
#define RT_LWIP_PBUF_NUM 16
#define RT_LWIP_RAW_PCB_NUM 4
#define RT_LWIP_UDP_PCB_NUM 4
#define RT_LWIP_TCP_PCB_NUM 4
#define RT_LWIP_TCP_SEG_NUM 40
#define RT_LWIP_TCP_SND_BUF 8196
#define RT_LWIP_TCP_WND 8196
#define RT_LWIP_TCPTHREAD_PRIORITY 10
#define RT_LWIP_TCPTHREAD_MBOX_SIZE 8
#define RT_LWIP_TCPTHREAD_STACKSIZE 1024
#define RT_LWIP_ETHTHREAD_PRIORITY 12
#define RT_LWIP_ETHTHREAD_STACKSIZE 1024
#define RT_LWIP_ETHTHREAD_MBOX_SIZE 8
#define LWIP_NETIF_STATUS_CALLBACK 1
#define SO_REUSE 1
#define LWIP_SO_RCVTIMEO 1
#define LWIP_SO_SNDTIMEO 1
#define LWIP_SO_RCVBUF 1
#define LWIP_NETIF_LOOPBACK 0

/* Modbus master and slave stack */


/* AT commands */


/* VBUS(Virtual Software BUS) */


/* Utilities */


/* ARM CMSIS */


/* RT-Thread online packages */

/* IoT - internet of things */

#define PKG_USING_WEBCLIENT
#define PKG_USING_WEBCLIENT_V100
#define PKG_USING_CJSON
#define PKG_USING_CJSON_V102

/* Wi-Fi */

/* Marvell WiFi */


/* Wiced WiFi */

#define PKG_USING_RW007
#define PKG_USING_RW007_LATEST_VERSION
#define RW007_USING_STM32_DRIVERS
#define RW007_SPI_BUS_NAME "spi2"
#define RW007_CS_PIN 102
#define RW007_BOOT0_PIN 175
#define RW007_BOOT1_PIN 102
#define RW007_INT_BUSY_PIN 62
#define RW007_RST_PIN 187

/* IoT Cloud */


/* security packages */


/* language packages */


/* multimedia packages */


/* tools packages */


/* system packages */


/* peripheral libraries and drivers */

/* sensors drivers */


/* miscellaneous packages */

#define PKG_USING_OPTPARSE
#define PKG_USING_OPTPARSE_V100
#define PKG_USING_MULTIBUTTON
#define PKG_USING_MULTIBUTTON_V102

/* MultiButton Options */


/* samples: kernel and components samples */


/* STM32 Bsp Config */

#define BSP_FORCE_CONFIG

/* Uart */

#define BSP_ENABLE_UART
#define BSP_UART_ENABLE_PORT1
#define BSP_UART_ENABLE_PORT2
#define BSP_UART_ENABLE_PORT3
#define BSP_UART_ENABLE_PORT6

/* PIN */

#define BSP_ENABLE_PIN

/* I2C */

#define BSP_ENABLE_I2C
#define BSP_I2C_ENABLE_PORT4

/* SPI */

#define BSP_ENABLE_SPI
#define BSP_SPI_ENABLE_DMA
#define BSP_SPI_ENABLE_PORT1
#define BSP_SPI_ENABLE_PORT2

/* Audio */

#define BSP_ENABLE_AUDIO

/* LCD */

#define BSP_ENABLE_LCD

/* SDCRAD */

#define BSP_ENABLE_SDCARD
#define BSP_SDCARD_USING_BLOCK
#define BSP_SDCARD_ENABLE_AUTO_MOUNT
#define BSP_SDCARD_CONFIG_MOUNT_POINT "/mnt/sdcard"

/* Ramdisk */

#define BSP_ENABLE_RAMDISK

/* WIFI */

#define BSP_ENABLE_WIFI

/* STM32 App Config */

/* Kanime: an anime music FM */

#include "rtconfig_project.h"

#endif
