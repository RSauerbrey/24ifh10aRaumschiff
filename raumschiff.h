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
public:
    Raumschiff(); // Konstruktor
    Raumschiff(string, int);

    ~Raumschiff(); // Destruktor
    void setName(string n);
    void setEnergie(int e);
    string getName();
    int getEnergie();
    void printData();
    Rettungskapsel* getRettung();
};

#endif // RAUMSCHIFF_H
