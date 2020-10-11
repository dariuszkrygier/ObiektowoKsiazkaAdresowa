#ifndef ADRESATMENEDZER_H
#define ADRESATMENEDZER_H
#include "Adresat.h"
#include <vector>
#include <cstdlib>
#include "PlikZAdresatami.h"
#include <sstream>
#include "UzytkownikMenedzer.h"




class AdresatMenedzer
{
    int idZalogowanegoUzytkownika;
    vector <Adresat> adresaci;
    PlikZAdresatami plikZAdresatami;

    public:
    AdresatMenedzer();
    void dodajAdresata();
    Adresat podajDaneNowegoAdresata();
    void wyswietlWszystkichAdresatow();
    void wyswietlDaneAdresata(Adresat adresat);
<<<<<<< Updated upstream
    void ustawIdZalogowanegoUzytkownika(int noweIdZalogowanegoUzytkownika);
    void wczytajAdresatowZPliku(int idZalogowanegoUzytkownika);
=======
    int usunAdresata();
    int podajIdWybranegoAdresata();
>>>>>>> Stashed changes

};

#endif
