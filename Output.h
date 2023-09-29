#pragma once
#include <iostream>

#ifndef OUTPUT_H
#define OUTPUT_H

using std::cout;

void showData(const LowSteel& data) {

    cout << data.getMaterialName() << "\n";
    cout << data.getTreatment() << "\n";
    cout << data.getQualityMaterial() << "\n";
    cout << data.getHardness() << "\n";
    cout << data.getResielence() << "\n";
}
;
void showData(const MiddleSteel& data) {

    cout << data.getMaterialName() << "\n";
    cout << data.getTreatment() << "\n";
    cout << data.getQualityMaterial() << "\n";
    cout << data.getHardness() << "\n";
    cout << data.getResielence() << "\n";
}
;
#endif // !OUTPUT_H