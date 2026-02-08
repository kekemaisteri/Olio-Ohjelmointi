#include "Seuraaja.h"
#include <iostream>
using namespace std;

Seuraaja::Seuraaja(string nimi) {
    this->nimi = nimi;
    next = nullptr;
}

void Seuraaja::paivitys(string viesti) {
    cout << nimi << ": " << viesti << endl;
}

string Seuraaja::getNimi()  {
    return nimi;
}
