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

protected:
    void setHardness(char* treatment, short quality = LOW);
    void setResielence(char* treatment, short quality = LOW);

public:
    LowSteel() : Material(arrMaterial[STEEL], arrQuality[LOW], arrHardSteel[LOW], arrResielenceSteel[LOW]), _treatment(arrTreatment[NO_TREAT]) {}
    ~LowSteel() {
        _treatment = nullptr;
    }

    char* getTreatment() const;
    void setTreatment();
}
;
#endif