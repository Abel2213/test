/*
 * Copyright 2016-2024 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/**
 * @file    test.c
 * @brief   Application entry point.
 */
#include <stdio.h>
#include <stdint.h>
#include "MK64F12.h"
/* TODO: insert other include files here. */

/* TODO: insert other definitions and declarations here. */

/*
 * @brief   Application entry point.
 */
int main(void) {
	SIM->SCGC5 = 0x400;
	PORTB->PCR[22] = 0x00000100;
	GPIOB->PDOR= 0x00400000;
	GPIOB->PDOR= 0x00400000;

	while(1){
		GPIOB->PDOR= 0x00400000;
		GPIOB->PDOR= 0x00400000;
		GPIOB->PDOR= 0x00200000;
		printf("RED LED OFF\n");
	}
        return 0 ;
}
