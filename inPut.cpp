#include "inPut.h"

short indexMenu(short& indMenu, const short size) {

    short indMin = 0;
    char direct = ' ';

    cout << " w|s ";
    direct = cin.get();
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    system("CLS");

    while (true) {

        if (direct == '\n')
            return static_cast<int>(direct);
        else if (direct == 'w' || direct == 'W')
            indMenu++;
        else if (direct == 's' || direct == 'S')
            indMenu--;
        else
        {
            cout << "\n\tERROR!";
            cout << "\n\t\"w\" - Down, \"s\" - Up: -> ";
        }

        //reload index menu
        if (indMenu < indMin)
            indMenu = size;
        else if (indMenu > size)
            indMenu = indMin;

        return indMenu;
    }
}
;
void printMenu(std::string* const arr, const short size, std::string nameMenu, const short& indMenu) {

    cout << "\n MENU: " << nameMenu << "\n";

    for (short i = 0; i <= size; i++) {
        if (indMenu == i) {
            cout << " -> " << *(arr + i) << "\n";
            continue;
        }
        cout << "    " << *(arr + i) << "\n";
    }
}
;
void selectMenu(std::string* const arr, const short size, std::string nameMenu, short& indMenu) {
    do {
        printMenu(arr, size, nameMenu, indMenu);

    } while (static_cast<char>(indexMenu(indMenu, size)) != '\n');
}
;