#pragma once
#include "Property.h"

#ifndef STEEL_H
#define STEEL_H

class Steel :
    public Property
{
private:
    char* _materialName;

protected:
    Steel() : Property(), _materialName{} {}
    Steel(char* materialName, short hardness, short durality) : 
        Property(hardness, durality), _materialName(materialName) {}

public:
    char* getMaterialName() const;
}
;
#endif