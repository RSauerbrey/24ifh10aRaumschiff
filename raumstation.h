#ifndef RAUMSTATION_H
#define RAUMSTATION_H
#include "raumschiff.h"
class Raumstation
{
private:
    string name;
    int energie;
    Raumschiff *raumschiffArray[10];
public:
    Raumstation(); // Konstruktor
    Raumstation(string, int);

    ~Raumstation(); // Destruktor
    void setName(string n);
    void setEnergie(int e);
    string getName();
    int getEnergie();
    void printData();
    //Fügt Raumschiff hinzu
    //Gib Position im Array als Wert zurück
    //Falls Array voll, dann gib -1 zurück
    //int addRaumschiff(Raumschiff *rk);
};

#endif // RAUMSTATION_H
