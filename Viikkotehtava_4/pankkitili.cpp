#include "Pankkitili.h"
#include <iostream>

Pankkitili::Pankkitili(std::string nimi)
{
    omistaja = nimi;
    saldo = 0;
    std::cout << "Pankkitili luotu " << omistaja << ":lle" << std::endl;
}

bool Pankkitili::deposit(double summa)
{
    if (summa <= 0) return false;
    saldo += summa;
    std::cout << "Pankkitili: talletus " << summa << " tehty" << std::endl;
    return true;
}

bool Pankkitili::withdraw(double summa)
{
    if (summa <= 0 || summa > saldo) return false;
    saldo -= summa;
    std::cout << omistaja << " Pankkitili: nosto " << summa << " tehty" << std::endl;
    return true;
}

double Pankkitili::getBalance() const
{
    return saldo;
}
