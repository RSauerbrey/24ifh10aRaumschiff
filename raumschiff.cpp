#include "raumschiff.h"

Raumschiff::Raumschiff()
{
    rk = new Rettungskapsel;
    cout << "Raumschiff erstellt" << endl;
}

Raumschiff::Raumschiff(string n, int e):Raumschiff()
{
    name = n;
    energie = e;
    cout << "Überladener Konstruktor" << endl;
}

Raumschiff::~Raumschiff()
{
    cout << "Raumschiff wurde zerstört" << endl;
}

void Raumschiff::setName(string n)
{
    name = n;
}

void Raumschiff::setEnergie(int e)
{
    energie = e;
}

string Raumschiff::getName()
{
    return name;
}

int Raumschiff::getEnergie()
{
    return energie;
}

void Raumschiff::printData()
{
    cout << name << endl;
    cout << energie << endl;
    cout << rk->getSerienNr() << endl;
}

Rettungskapsel *Raumschiff::getRettung()
{
    return rk;
}
