#ifndef RAUMSCHIFF_H
#define RAUMSCHIFF_H
#include <iostream>
using namespace std;

class Raumschiff
{
private:
    string name;
    int energie;
public:
    Raumschiff(); // Konstruktor
    Raumschiff(string, int);
    ~Raumschiff(); // Destruktor
    void setName(string n);
    void setEnergie(int e);
    string getName();
    int getEnergie();
};

#endif // RAUMSCHIFF_H
