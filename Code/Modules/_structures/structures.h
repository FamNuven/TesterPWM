/**
  ******************************************************************************
  * @file    structures.h	
  * @brief   
  * @author  nchernov
  * @version 1.0
  * @date    Dec 26, 2023
  ******************************************************************************
  * @attention
  ******************************************************************************
  */
#ifndef STRUCTURES_STRUCTURES_H_
#define STRUCTURES_STRUCTURES_H_

#include "main.h"

typedef struct
{
	uint8_t  fillFactor;                                   // скважность
	uint16_t freq;                                         // частота
} PWMsettings;

#endif /* STRUCTURES_STRUCTURES_H_ */
