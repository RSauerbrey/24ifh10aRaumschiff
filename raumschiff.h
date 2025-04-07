#ifndef RAUMSCHIFF_H
#define RAUMSCHIFF_H
#include "rettungskapsel.h"
#include <iostream>
using namespace std;

class Raumschiff
{
private:
    string name;
    int energie;
    Rettungskapsel *rk;
    Raumschiff *rs;
    int xpos = 0;
    int ypos = 0;
public:
    Raumschiff(); // Konstruktor
    Raumschiff(string, int);

    ~Raumschiff(); // Destruktor
    void setName(string n);
    void setEnergie(int e);
    void setRaumschiff(Raumschiff *r);
    void setPosition(int x, int y);
    void sendNeuePosition(int x, int y);

    Raumschiff* getRaumschiff();
    string getName();
    int getEnergie();
    void printData();
    Rettungskapsel* getRettung();
};

#endif // RAUMSCHIFF_H
