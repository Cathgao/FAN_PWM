#ifndef __CH455_H__
#define __CH455_H__

#include "main.h"

#define CH455_port hi2c2

extern I2C_HandleTypeDef hi2c2;

uint8_t CH455_send_sig_number(uint8_t pos,uint8_t num);
uint8_t CH455_send_float(float num);
uint8_t CH455_ReadKey();
void CH455_display_Error();
void CH455_send_all_number(uint32_t num);
uint8_t CH455_init();

#endif
