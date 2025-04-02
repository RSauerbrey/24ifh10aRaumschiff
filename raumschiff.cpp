#include "raumschiff.h"

Raumschiff::Raumschiff()
{
    cout << "Raumschiff erstellt" << endl;
}

Raumschiff::Raumschiff(string n, int e)
{
    name = n;
    energie = e;
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
