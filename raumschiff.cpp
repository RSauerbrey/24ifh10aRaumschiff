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

void Raumschiff::setRaumschiff(Raumschiff *r)
{
    rs = r;
}

void Raumschiff::setPosition(int x, int y)
{
    xpos = x;
    ypos = y;
}

void Raumschiff::sendNeuePosition(int x, int y)
{
    rs->setPosition(x, y);
}

Raumschiff *Raumschiff::getRaumschiff()
{
    return rs;
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
    cout << "Raumschiffname: " << name << endl;
    cout << "Eigene Adresse: " << this << endl;
    cout << "Energie: " << energie << endl;
    cout << "Rettungskapsel Snr: " << rk->getSerienNr() << endl;
    cout << "Raumschiffadresse: " << rs << endl;
    cout << "Rettungkapseladresse: " << rk << endl;
    cout << "Position: x=" << xpos << " y=" << ypos << endl;
}

Rettungskapsel *Raumschiff::getRettung()
{
    return rk;
}
