#include "rettungskapsel.h"

Rettungskapsel::Rettungskapsel()
{
    cout << "Rettungskapsel erzeugt" << endl;
}

Rettungskapsel::~Rettungskapsel()
{
    cout << "Rettungskapsel zerstört" << "\n" << serienNr << endl;
}

int Rettungskapsel::getSerienNr()
{
    return serienNr;
}

int Rettungskapsel::getFreiePlaetze()
{
    return freiePlaetze;
}

void Rettungskapsel::setSerienNr(int s)
{
    serienNr = s;
}

void Rettungskapsel::setFreiePlaetze(int f)
{
    freiePlaetze = f;
}
