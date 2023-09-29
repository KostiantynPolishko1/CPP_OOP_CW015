#include "LowSteel.h"
#include "MiddleSteel.h"
#include "Output.h"

int main()
{
    LowSteel lowSteel;
    showData(lowSteel);
    cout << "\n";

    lowSteel.setTreatment();
    showData(lowSteel);
    cout << "\n";

    lowSteel.setTreatment();
    showData(lowSteel);
    cout << "\n";

    lowSteel.setTreatment();
    showData(lowSteel);
    cout << "\n";

    /*MiddleSteel midSteel;
    showData(midSteel);*/

    return 0;
}