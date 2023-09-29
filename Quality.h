#pragma once
#include "Property.h"

#ifndef QUALITY_H
#define QUALITY_H

class Quality :
    public Property
{
private:
    char* _quality;

protected:
    Quality() : Property(), _quality{} {}
    Quality(char* quality, short hadrdness, short resielence) :
        Property(hadrdness, resielence), _quality((char*)quality) {}

    ~Quality() {
        _quality = nullptr;
    }

public:
    char* getQualityMaterial() const;
}
;
#endif