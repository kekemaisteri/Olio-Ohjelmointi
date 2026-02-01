#include "Asiakas.h"
#include <iostream>

Asiakas::Asiakas(std::string n, double luottoraja)
    : nimi(n),
    kayttotili(n),
    luottotili(n, luottoraja)
{
    std::cout << "Asiakkuus luotu " << nimi << std::endl;
    showSaldo();
}

void Asiakas::showSaldo() const
{
    std::cout << "Kayttotilin saldo " << kayttotili.getBalance() << std::endl;
    std::cout << "Luottotilin saldo " << luottotili.getBalance() << std::endl;
}

void Asiakas::talletus(double summa)
{
    kayttotili.deposit(summa);
}

void Asiakas::nosto(double summa)
{
    kayttotili.withdraw(summa);
}

void Asiakas::luotonNosto(double summa)
{
    luottotili.withdraw(summa);
}

void Asiakas::tiliSiirto(double summa, Asiakas& toinen)
{
    std::cout << "Pankkitili: " << nimi << " siirtaa "
              << summa << " " << toinen.nimi << ":lle" << std::endl;
    if (kayttotili.withdraw(summa))
    {
        toinen.kayttotili.deposit(summa);
    }
}
