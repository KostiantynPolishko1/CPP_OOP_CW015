#pragma once
#include "Data.h"
#include "Material.h"

#ifndef LOWSTEEL_H
#define LOWSTEEL_H

class LowSteel final:
    public Material
{
private:
    char* _treatment;

public:
    LowSteel() : Material(arrMaterial[STEEL], arrQuality[LOW], arrHardSteel[LOW], arrResielenceSteel[LOW]), _treatment(arrTreatment[NO_TREAT]) {}
    ~LowSteel() {
        _treatment = nullptr;
    }

public:
    char* getTreatment() const;
    inline void setTreatment(char* treatment);
}
;
#endif