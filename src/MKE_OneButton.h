#ifndef MKE_OneButton_H_
#define MKE_OneButton_H_

#include "OneButton.h"

class MKE_OneButton: public OneButton
{
  public:
  MKE_OneButton(const int pin, const boolean activeLow = true, const bool pullupActive = true):OneButton(pin, activeLow, pullupActive) {}
};

#endif