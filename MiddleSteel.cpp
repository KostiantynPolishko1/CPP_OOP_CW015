#include "MiddleSteel.h"

void MiddleSteel::setHardness(char* treatment, short hardness)
{
	if (treatment == arrTreatment[FORGED])
		_hardness = static_cast<int>(hardness * 1.2);
	else if (treatment == arrTreatment[HARDED])
		_hardness = static_cast<int>(hardness * 1.5);
	else
		_hardness = _hardness;
}
;
void MiddleSteel::setResielence(char* treatment, short resielence) {
	if (treatment == arrTreatment[FORGED])
		_resielence = static_cast<int>(resielence * 1.2);
	else if (treatment == arrTreatment[HARDED])
		_resielence = static_cast<int>(resielence * 1.5);
	else
		_resielence = _resielence;
}
;
char* MiddleSteel::getTreatment() const {
	return _treatment;
}
;
void MiddleSteel::setTreatment()
{
	static short increment = 0;
	increment += 1;
	increment = (increment == sizeTreat ? increment = 0 : increment);
	_treatment = arrTreatment[increment];

	setHardness(arrTreatment[increment], _hardness);
	setResielence(arrTreatment[increment], _resielence);
}
;