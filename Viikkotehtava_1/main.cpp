#include <iostream>

using namespace std;

// Prototyyppi
int game(int Suurin_luku);

int main()
{
    int arvausten_lkm = 0;
    int Suurin_luku = 40;
    arvausten_lkm = game(Suurin_luku);
    cout << "Arvauksia: "
         << arvausten_lkm
         << endl;

    return 0;
}


int game(int Suurin_luku){
    int arvausten_lkm = 0;
    int satunnaisluku = 0;
    int arvaus = 0;

    cout << "Suurin_luku: "
         << Suurin_luku
         << endl;

    // 1. Arvotaan satunnainen luku

    srand(time(NULL));
    satunnaisluku = rand()% Suurin_luku;
    while (true){


        // 2. Kysytään pelaajalta arvaus
        cout << "Anna luku"
             << endl;
        cin >> arvaus;
        // kun pelaaja teki arvauksen lkm +1
        arvausten_lkm++;
        // 3. Tarkistetaan onko arvaus pienempi, suurempi tai yhtäsuuri kuin luku
        // 3.1. Jos arvaus yhtäsuuri kuin satunnaisluku
        if (arvaus == satunnaisluku){
            cout << "Oikein!"
                 << endl;
            break;
        }
        // 3.2. Jos arvaus suurempi kuin satunnaisluku
        if (arvaus < satunnaisluku){
            cout << "Väärin! Luku on suurempi."
                 << endl;
        }
        // 3.3. Jos arvaus pienempi kuin satunnaisluku
        if (arvaus > satunnaisluku){
            cout << "Väärin! Luku on pienempi."
                 << endl;
        }

        // 4. Kerrotaan tarkistuksen tulos tyyliin ”luku on pienempi/suurempi” tai ”oikea vastaus”

        // 5. Jos pelaajan vastaus ei ollut oikein, niin palataan kohtaan 2.
    }


    return arvausten_lkm;
}
