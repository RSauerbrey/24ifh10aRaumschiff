#include "raumstation.h"

Raumstation::Raumstation()
{
    cout << "Raumstation erzeugt" << endl;
}

Raumstation::Raumstation(string n, int e)
{
    name = n;
    energie = e;
}

Raumstation::~Raumstation()
{
    cout << "Raumstation zerstört" << endl;
}

void Raumstation::setName(string n)
{
    name = n;
}

void Raumstation::setEnergie(int e)
{
    energie = e;
}

string Raumstation::getName()
{
    return name;
}

int Raumstation::getEnergie()
{
    return energie;
}

void Raumstation::printData()
{
    cout << "Raumstation: ";
    cout << name << endl;
    cout << "Energie: " << energie << endl;

}
