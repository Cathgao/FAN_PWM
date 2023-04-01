#ifndef __PRINTF_H__
#define __PRINTF_H__

#include "main.h"
#include <stdio.h>
#include <stdarg.h>

#define UART_PRINTF_MAX_LEN 256

extern uint8_t UART_printf_buffer[UART_PRINTF_MAX_LEN];
extern int fputc(int ch,FILE *f);
extern void _sys_exit(int x);
extern UART_HandleTypeDef huart1;
extern void printf_UART_DMA(UART_HandleTypeDef *huart, char *format, ...);

#endif