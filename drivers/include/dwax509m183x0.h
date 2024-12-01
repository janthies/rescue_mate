#ifndef DWAX509M183X0_H
#define DWAX509M183X0_H

#include <stdint.h>

#include "periph/adc.h"

#define DWAX509M183X0_MAX_VOLTAGE_OUTPUT 10

typedef struct dwax509m183x0_params
{
    adc_t adc_line;
    adc_res_t resolution;
} dwax509m183x0_params_t;

typedef dwax509m183x0_params_t dwax509m183x0_t;

int dwax509m183x0_init(dwax509m183x0_t* dev, const dwax509m183x0_params_t* params);
int dwax509m183x0_distance_um(dwax509m183x0_t* dev);
#endif 
