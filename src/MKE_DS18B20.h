#ifndef MKE_DS18B20_H
#define MKE_DS18B20_H
#include "MKL_DS18B20.h"

class MKE_DS18B20: public MKL_DS18B20
{
  public:
  MKE_DS18B20(OneWire * ow, uint8_t resolution = 9):MKL_DS18B20(ow, resolution) {}
};

#endif