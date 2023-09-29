#pragma once
#include "Material.h"

#ifndef LOWSTEEL_H
#define LOWSTEEL_H

class LowSteel final:
    public Material
{
private:
    char* _treatment;

public:
    LowSteel() : Material((char*)"STEEL", (char*)"LOW ALLOYED", 40, 50), _treatment((char*)"NO DATA") {}
    ~LowSteel() {
        _treatment = nullptr;
    }

public:
    char* getTreatment() const;
    inline void setTreatment(char* treatment);
}
;
#endif