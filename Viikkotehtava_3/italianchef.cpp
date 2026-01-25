#include "ItalianChef.h"
#include <iostream>
#include <algorithm>

using namespace std;

ItalianChef::ItalianChef(string name) : Chef(name)

{
    cout << "ItalianChef " << chefName << " konstruktori" << endl;
}

ItalianChef::~ItalianChef()

{
    cout << "ItalianChef " << chefName << " destruktori" << endl;
}

bool ItalianChef::askSecret(string pw, int f, int w)

{
    if (pw.compare(password) == 0)

    {
        cout << "Password ok!" << endl;
        flour = f;
        water = w;

        int pizzas = makePizza();
        cout << "ItalianChef " << chefName << " with "
             << flour << " flour and " << water
             << " water can make " << pizzas << " pizzas" << endl;

        return true;

    }

    else

    {
        cout << "Wrong password!" << endl;
        return false;
    }
}

int ItalianChef::makePizza()

{
    int pizzasFromFlour = flour / 5;
    int pizzasFromWater = water / 5;

    return min(pizzasFromFlour, pizzasFromWater);
}
