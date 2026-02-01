#ifndef LUOTTOTILI_H
#define LUOTTOTILI_H

#include "Pankkitili.h"

class Luottotili : public Pankkitili
{
private:
    double luottoraja;

public:
    Luottotili(std::string nimi, double raja);
    bool withdraw(double summa) override;
    bool deposit(double summa) override;
};

#endif
