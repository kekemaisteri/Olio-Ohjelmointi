#include "Notifikaattori.h"
#include <iostream>
using namespace std;

Notifikaattori::Notifikaattori() {
    seuraajat = nullptr;
}

void Notifikaattori::lisaa(Seuraaja *s) {
    cout << "Lisataan seuraaja: "
         << s->getNimi()
         << endl;

    s->next = seuraajat;
    seuraajat = s;
}

void Notifikaattori::poista(string nimi) {
    Seuraaja *curr = seuraajat;
    Seuraaja *prev = nullptr;

    while (curr != nullptr) {
        if (curr->getNimi() == nimi) {
            if (prev == nullptr) {
                seuraajat = curr->next;
            } else {
                prev->next = curr->next;
            }
            delete curr;
            return;
        }
        prev = curr;
        curr = curr->next;
    }
}

void Notifikaattori::tulosta() {
    Seuraaja *s = seuraajat;

    while (s != nullptr) {
        cout << s->getNimi()
             << endl;
        s = s->next;
    }
}

void Notifikaattori::postita(string viesti) {
    Seuraaja *s = seuraajat;

    while (s != nullptr) {
        cout << "Nyt: " << s->getNimi() << endl;
        s->paivitys(viesti);

        if (s->next != nullptr) {
            cout << "Siirrytaan seuraavaan..." << endl;
        } else {
            cout << "Lista loppui." << endl;
        }

        s = s->next;
    }
}
