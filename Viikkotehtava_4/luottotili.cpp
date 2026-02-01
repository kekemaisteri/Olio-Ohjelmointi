#include "Luottotili.h"
#include <iostream>

Luottotili::Luottotili(std::string nimi, double raja)
    : Pankkitili(nimi)
{
    luottoraja = raja;
    saldo = raja;
    std::cout << "Luottotili luotu " << omistaja
              << ":lle, luottoraja " << luottoraja << std::endl;
}

bool Luottotili::withdraw(double summa)
{
    if (summa <= 0 || summa > saldo) return false;
    saldo -= summa;
    std::cout << "Luottotili: nosto " << summa
              << " tehty, luottoa jaljella " << saldo << std::endl;
    return true;
}

bool Luottotili::deposit(double summa)
{
    if (summa <= 0) return false;
    saldo += summa;
    if (saldo > luottoraja) saldo = luottoraja;
    return true;
}
