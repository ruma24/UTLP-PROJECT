#
# Makefile for the ulk modules test.
#

CROSS_COMPILE = /ulk/toolchain/CodeSourcery/Sourcery_G++_Lite/bin/arm-none-linux-gnueabi-

all:
	$(CROSS_COMPILE)gcc test.c -o test
glcd:
	$(CROSS_COMPILE)gcc ex_glcd.c -o ex_glcd
