#include <iostream>
#include "raumschiff.h"
#include "rettungskapsel.h"
using namespace std;

int main()
{
    Raumschiff *r = new Raumschiff("Enterprise", 12345);
    cout << r->getName() << endl;
    cout << r->getEnergie() << endl;


    return 0;
}
