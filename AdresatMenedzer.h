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
    void ustawIdZalogowanegoUzytkownika(int noweIdZalogowanegoUzytkownika);
    void wczytajAdresatowZPliku(int idZalogowanegoUzytkownika);

};

#endif
