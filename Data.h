#pragma once

#ifndef DATA_H
#define DATA_H

enum arrMaterial {
	BONE,
	WOOD,
	STEEL
}
;
enum arrQuality {
	LOW,
	MIDDLE,
	HIGH
}
;
enum arrTreatment {
	NO_TREAT,
	FORGED,
	HARDED
}
;

char* arrMaterial[];
char* arrQuality[];
char* arrTreatment[];

short arrHardWood[];
short arrHardBone[];
short arrHardSteel[];

short arrResielenceWood[];
short arrResielenceBone[];
short arrResielenceSteel[];

#endif