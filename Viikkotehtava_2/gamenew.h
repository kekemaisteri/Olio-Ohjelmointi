#ifndef GAMENEW_H
#define GAMENEW_H

class GameNew
{
public:
    GameNew(int maxNumber); // konstruktori
    ~GameNew(); // destruktori
    void play(); // tähän toteutetaan koko pelialgoritmi
    void printGameResult(); // tulostaa pelin tuloksen
private:
    int maxNumber = 0; // suurin arvattava luku
    int playerGuess = 0; // laskee pelaajan arvauksia
    int randomNumber = 0; // tallentaa satunnaisen luvun
    int numOfGuesses = 0; // laskee arvattujen vastausten lkm
//void printGameResult(); // tulostaa pelin tuloksen
protected:

};

#endif // GAMENEW_H
