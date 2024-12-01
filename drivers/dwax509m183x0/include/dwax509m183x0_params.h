#ifndef DWAX509M183x0_PARAMS_H
#define DWAX509M183x0_PARAMS_H
#include "board.h"

#ifndef DWAX509M183x0_PARAMS
#define DWAX509M183x0_PARAMS { \
                           .adc_line = 0, \
                           .resolution = ADC_RES_10BIT, \
                        }
#endif

static const dwax509m183x0_params_t  dwax509m183x0_params[] =
{
    DWAX509M183x0_PARAMS
};

#endif
