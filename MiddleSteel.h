#pragma once
#include "Data.h"
#include "Material.h"

#ifndef MIDDLESTEEL_H
#define MIDDLESTEEL_H

class MiddleSteel final:
    public Material
{
private:
    char* _treatment;

protected:
    void setHardness(char* treatment, short hardness);
    void setResielence(char* treatment, short resielence);

public:
    MiddleSteel() : Material(arrMaterial[STEEL], arrQuality[MIDDLE], arrHardSteel[MIDDLE], arrResielenceSteel[MIDDLE]), _treatment(arrTreatment[NO_TREAT]) {}
    ~MiddleSteel() {
        _treatment = nullptr;
    }

public:
    char* getTreatment() const;
    void setTreatment();
}
;
#endif