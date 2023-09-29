#pragma once
#include "Data.h"
#include "Material.h"
#include "LowSteel.h"

#ifndef MIDDLESTEEL_H
#define MIDDLESTEEL_H

class LowSteel;

class MiddleSteel final:
    public Material
{
private:
    char* _treatment;


public:
    MiddleSteel() : Material(arrMaterial[STEEL], arrQuality[MIDDLE], arrHardSteel[MIDDLE], arrResielenceSteel[MIDDLE]), _treatment(arrTreatment[NO_TREAT]) {}
    ~MiddleSteel() {
        _treatment = nullptr;
    }

public:
    char* getTreatment() const;
    friend void LowSteel::setTreatment();
}
;
#endif