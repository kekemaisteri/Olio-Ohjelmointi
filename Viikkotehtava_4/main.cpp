#include "Asiakas.h"
#include <iostream>

int main()
{
    Asiakas Ari("Ari", 1000);

    Ari.talletus(250);
    Ari.luotonNosto(150);
    Ari.showSaldo();

    std::cout << std::endl;

    Asiakas Paula("Paula", 1000);

    std::cout << std::endl;
    std::cout << "Ari" << std::endl;
    Ari.showSaldo();

    Ari.tiliSiirto(100, Paula);

    std::cout << "Paula" << std::endl;
    Paula.showSaldo();

    return 0;
}
