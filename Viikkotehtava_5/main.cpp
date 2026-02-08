#include "Notifikaattori.h"
#include <iostream>
using namespace std;

int main() {

    cout << "Luodaan seuraajat\n" << endl;
    Notifikaattori n;

    Seuraaja *A = new Seuraaja("Matti");
    Seuraaja *B = new Seuraaja("Maija");
    Seuraaja *C = new Seuraaja("Teppo");
    Seuraaja *D = new Seuraaja("Laura");
    Seuraaja *E = new Seuraaja("Joni");

    n.lisaa(A);
    n.lisaa(B);
    n.lisaa(C);
    n.lisaa(D);
    n.lisaa(E);
    cout << endl;

    cout << "Seuraajat:" << endl;
    n.tulosta();

    cout << "\nViesti: \n" << endl;
    n.postita("Kaikki hyvin valtakunnassa.");

  //  cout << "\nPoistetaan Maija:" << endl;
  //  n.poista("Maija");
  //  n.tulosta();

    n.poista("Matti");
    n.poista("Teppo");
    n.poista("Laura");
    n.poista("Joni");

    return 0;
}
