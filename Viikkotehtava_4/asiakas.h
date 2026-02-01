#ifndef ASIAKAS_H
#define ASIAKAS_H

#include "Pankkitili.h"
#include "Luottotili.h"
#include <string>

class Asiakas
{
private:
    std::string nimi;
    Pankkitili kayttotili;
    Luottotili luottotili;

public:
    Asiakas(std::string nimi, double luottoraja);
    void showSaldo() const;
    void talletus(double summa);
    void nosto(double summa);
    void luotonNosto(double summa);
    void tiliSiirto(double summa, Asiakas& toinen);
};

#endif
