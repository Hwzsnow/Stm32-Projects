/***************************************************************************************
 *	File Name				:		USART_Serial.h
 *	CopyRight				:
 *	ModuleName			:		
 *
 *	CPU						:
 *	RTOS					:
 *
 *	Create Data				:	2015/03/11
 *	Author/Corportation		:	Ray
 *
 *	Abstract Description	:	this will be used for USART_Serial.c
 *
 *--------------------------------Revision History--------------------------------------
 *	No	version		Data			Revised By			Item			Description
 *	1		v1.0			2015/3/11	Ray												Create this file
 *
 ***************************************************************************************/


/**************************************************************
*	Multi-Include-Prevent Section
**************************************************************/
#ifndef __USART_SERIAL_H
#define __USART_SERIAL_H


/**************************************************************
*	Debug switch Section
**************************************************************/



/**************************************************************
*	Include File Section
**************************************************************/
#include "stm32f10x.h"

/**************************************************************
*	Macro Define Section
**************************************************************/
#define USART_GPIO_GROUP	GPIOA
#define USART_APB_Periph	RCC_APB2Periph_GPIOA
#define TXD	GPIO_Pin_9
#define	RXD	GPIO_Pin_10



/**************************************************************
*	Struct Define Section
**************************************************************/



/**************************************************************
*	Prototype Declare Section
**************************************************************/
extern void USART_Configuration();
extern void USART_GPIO_Configuration();


/**************************************************************
*	End-Multi-Include-Prevent Section
**************************************************************/
#endif