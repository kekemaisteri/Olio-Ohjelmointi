#ifndef SEURAAJA_H
#define SEURAAJA_H

#include <string>
using namespace std;

class Seuraaja {
private:
    string nimi;

public:
    Seuraaja* next;

    Seuraaja(string nimi);
    void paivitys(string viesti);
    string getNimi();
};

#endif
