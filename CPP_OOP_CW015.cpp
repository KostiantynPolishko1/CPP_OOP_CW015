#include <iostream>
#include "LowSteel.h"

using std::cout;

int main(void)
{
    std::cout << "Start!\n";
    LowSteel lowsteel;
    
    cout << lowsteel.getMaterialName() << "\n";
    cout << lowsteel.getTreatment() << "\n";
    cout << lowsteel.getQualityMaterial() << "\n";
    cout << lowsteel.getHardness() << "\n";
    cout << lowsteel.getResielence() << "\n";
    
    return 0;
}
