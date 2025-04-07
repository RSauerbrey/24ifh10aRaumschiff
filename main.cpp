#include <iostream>
#include "raumschiff.h"
#include "rettungskapsel.h"
using namespace std;

int main()
{
    Raumschiff *r1 = new Raumschiff("Enterprise", 12345);
    Raumschiff *r2 = new Raumschiff("Voyager", 54321);

    r1->printData();
    r2->printData();

    r1->setRaumschiff(r2);
    r1->sendNeuePosition(1,2);
    r2->setRaumschiff(r1);

    r1->printData();
    r2->printData();
    Rettungskapsel* save;
    save = r1->getRettung();
    delete r1;

    cout << "Letzte Ausgabe" << endl;
    // r1->printData();
    //r2->printData();

    return 0;
}
