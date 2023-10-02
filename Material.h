#pragma once
#include "Quality.h"

#ifndef MATERIAL_H
#define MATERIAL_H

class Material :
    public Quality
{
protected:
    char* _materialName;

protected:
    Material() : Quality(), _materialName{} {}
    Material(char* materialName, char* quality, short hadrdness, short resielence) : 
        Quality(quality, hadrdness, resielence), _materialName((char*)materialName) {}

    ~Material() {
        _materialName = nullptr;
    }

public:
    char* getMaterialName() const;
}
;
#endif