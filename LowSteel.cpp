#include "LowSteel.h"

void LowSteel::setHardness(char* treatment, short quality) 
{
	if (treatment == arrTreatment[FORGED])
		_hardness = static_cast<int>(arrHardSteel[quality] * 1.2);
	else if (treatment == arrTreatment[HARDED])
		_hardness = static_cast<int>(arrHardSteel[quality] * 1.5);
	else
		_hardness = arrHardSteel[quality];
}
;
void LowSteel::setResielence(char* treatment, short quality) {
	if (treatment == arrTreatment[FORGED])
		_resielence = static_cast<int>(arrResielenceSteel[quality] * 1.2);
	else if (treatment == arrTreatment[HARDED])
		_resielence = static_cast<int>(arrResielenceSteel[quality] * 1.5);
	else
		_resielence = arrResielenceSteel[quality];
}
;
char* LowSteel::getTreatment() const {
	return _treatment;
}
;
void LowSteel::setTreatment() {

	static short increment = 0;
	increment += 1;
	increment = (increment == sizeTreat ? increment = 0 : increment);
	_treatment = arrTreatment[increment];

	setHardness(arrTreatment[increment]);
	setResielence(arrTreatment[increment]);
}
;