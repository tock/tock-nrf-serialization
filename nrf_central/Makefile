PROJECT_NAME = $(shell basename "$(realpath ./)")

APPLICATION_SRCS = $(notdir $(wildcard ./*.c))
APPLICATION_SRCS += nrf_delay.c
APPLICATION_SRCS += sd_common/softdevice_handler.c
APPLICATION_SRCS += spi_slave/spi_slave.c
APPLICATION_SRCS += ble/ble_advdata.c

LIBRARY_PATHS += ../include

DEVICE = NRF51

ifndef TARGET
	TARGET = SQUALL
endif

TARGET_UPPER = $(shell echo $(TARGET) | tr a-z A-Z)
BOARD = BOARD_$(TARGET_UPPER)

USE_SOFTDEVICE = s120

SDK_PATH ?= $(HOME)/nrf51822_sdk/nrf51822/
TEMPLATE_PATH ?= $(HOME)/git/nrf51-pure-gcc-setup/template/

CFLAGS = -Os
GDB_PORT_NUMBER = 2331

include $(TEMPLATE_PATH)Makefile
