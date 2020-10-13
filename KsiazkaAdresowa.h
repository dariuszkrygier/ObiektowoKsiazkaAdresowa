#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>
#include "UzytkownikMenedzer.h"
#include "AdresatMenedzer.h"

using namespace std;

class KsiazkaAdresowa
{
UzytkownikMenedzer uzytkownikMenedzer;
AdresatMenedzer *adresatMenedzer;
const string NAZWA_PLIKU_Z_ADRESATAMI;
public:

    KsiazkaAdresowa (string nazwaPlikuZUzytkownikami, string nazwaPlikuZAdresatami)
    : uzytkownikMenedzer (nazwaPlikuZUzytkownikami), NAZWA_PLIKU_Z_ADRESATAMI(nazwaPlikuZAdresatami) {
        adresatMenedzer = NULL;
    };
    ~KsiazkaAdresowa()
    {
        delete adresatMenedzer;
        adresatMenedzer = NULL;
    };
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void logowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    void wylogowanieUzytkownika();
    void dodajAdresata();
    int pobierzIdZalogowanegoUzytkownika();
    void wczytajAdresatowZPliku();
    void wyswietlWszystkichAdresatow();
    void usunAdresata();
    void edytujAdresata();
    bool czyUzytkownikJestZalogowany();
    void wyszukajAdresatowPoImieniu();
    void wyszukajAdresatowPoNazwisku();
};
