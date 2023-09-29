#pragma once
#ifndef PROPERTY_H
#define PROPERTY_H

class Property
{
private:
	short _hardness;
	short _resielence;
	short _durality;

protected:
	Property() : _hardness(0), _resielence(0), _durality(0) {}
	Property(short hardness, short resielence, short durality) : _hardness(hardness), _resielence(resielence), _durality(durality) {}

public:
	short getHardness() const;
	short getResielence() const;
	short getDurality() const;
}
;
#endif