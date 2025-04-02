#include <iostream>
#include "raumschiff.h"
#include "rettungskapsel.h"
using namespace std;

int main()
{
    Raumschiff *r = new Raumschiff("Enterprise", 12345);

    r->printData();

    Rettungskapsel* save;
    save = r->getRettung();
    delete r;

    cout << save->getSerienNr() << endl;
    return 0;
}
