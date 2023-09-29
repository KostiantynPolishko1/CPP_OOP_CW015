#pragma once
#ifndef PROPERTY_H
#define PROPERTY_H

class Property
{
private:
	short _hardness;
	short _resielence;

protected:
	Property() : _hardness{}, _resielence{} {}
	Property(short hardness, short resielence) : 
		_hardness(hardness), _resielence(resielence) {}

public:
	short getHardness() const;
	short getResielence() const;
}
;
#endif