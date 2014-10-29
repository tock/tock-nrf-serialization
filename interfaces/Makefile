COMPONENT=SensysDemoC
# uncomment this for network programming support
# BOOTLOADER=tosboot

SDB_PUBLISH_NAME=helena:sensys-1.0
#This is the helena signing key
#If you do not have this key, get it from Michael
#SDB_PUBLISH_KEY=5ADE1428

CFLAGS += -DRF230_DEF_CHANNEL=26

################################################################################
### Set the addressing scheme
################################################################################

# Use IN6_PREFIX with static addressing modes
PFLAGS += -DIN6_PREFIX=\"2001:470:4889:9::\"
# Use BLIP Neighbor Discovery to autoconfigure an address
#PFLAGS += -DBLIP_ADDR_AUTOCONF=0
# Use RPL and prefix information in DIO messages to autoconfigure an address
#PFLAGS += -DRPL_ADDR_AUTOCONF=0

################################################################################
### Configure BLIP
################################################################################

# Configure the Neighbor Discovery mechanism
PFLAGS += -DBLIP_SEND_ROUTER_SOLICITATIONS=0
PFLAGS += -DBLIP_SEND_ROUTER_ADVERTISEMENTS=0

# Configure the number of times BLIP tries to send a packet and how long it
# waits between attempts
# I disabled hardware retries to improve ETX, so this is really 6
PFLAGS += -DBLIP_L2_RETRIES=6
PFLAGS += -DBLIP_L2_DELAY=103

# Configure how many of the 6LoWPAN headers we support
PFLAGS += -DLIB6LOWPAN_FULL=1

# Configure the header compression for 6LoWPAN
PFLAGS += -DLIB6LOWPAN_HC_VERSION=6

# Keep statistics about various ddBLIP/IPv6 parameters. See BlipStatistics.h

################################################################################
### Configure RPL
################################################################################

# Include the RPL layer if set to 1
PFLAGS += -DRPL_ROUTING=1

# If set keep routing information in each node. If not the root must keep all
# routing information.
PFLAGS += -DRPL_STORING_MODE=1

# Choose the objective function RPL should use
PFLAGS += -DRPL_OF_0=0
PFLAGS += -DRPL_OF_MRHOF=1

################################################################################
### Configure LPL
################################################################################

#PFLAGS += -DLOW_POWER_LISTENING
#PFLAGS += -DLPL_SLEEP_INTERVAL=512
#PFLAGS += -DLPL_DEF_LOCAL_WAKEUP=512
#PFLAGS += -DLPL_DEF_REMOTE_WAKEUP=512

################################################################################
### Configure printf() output
################################################################################

PFLAGS += -DNEW_PRINTF_SEMANTICS -DPRINTFUART_ENABLED

GOALS += blip rpl

TINYOS_ROOT_DIR?=$(HOME)/helena/stormport/
TOSMAKE_FIRST_FLAGS += -I$(TINYOS_ROOT_DIR)/tos/platforms/storm/lib/printf
include $(TINYOS_ROOT_DIR)/Makefile.include
