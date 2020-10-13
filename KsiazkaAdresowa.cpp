#include "KsiazkaAdresowa.h"

void KsiazkaAdresowa :: rejestracjaUzytkownika()
{
    uzytkownikMenedzer.rejestracjaUzytkownika();
}

void KsiazkaAdresowa :: wypiszWszystkichUzytkownikow()
{
    uzytkownikMenedzer.wypiszWszystkichUzytkownikow();
}

void KsiazkaAdresowa :: logowanieUzytkownika()
{
    uzytkownikMenedzer.logowanieUzytkownika();
    if(uzytkownikMenedzer.czyUzytkownikJestZalogowany())
    {

    adresatMenedzer = new AdresatMenedzer(NAZWA_PLIKU_Z_ADRESATAMI, uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika());

    }

}

void KsiazkaAdresowa :: zmianaHaslaZalogowanegoUzytkownika()
{
    uzytkownikMenedzer.zmianaHaslaZalogowanegoUzytkownika();
}

void KsiazkaAdresowa :: wylogowanieUzytkownika()
{
    uzytkownikMenedzer.wylogowanieUzytkownika();
    delete adresatMenedzer;
    adresatMenedzer = NULL;
}

int KsiazkaAdresowa :: pobierzIdZalogowanegoUzytkownika()
{
    return uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika();
}

void KsiazkaAdresowa :: dodajAdresata()
{
    if(uzytkownikMenedzer.czyUzytkownikJestZalogowany())
    {
        adresatMenedzer -> dodajAdresata();
    }
    else
    {
        cout << "Aby dodac adresata, nalezy najpierw sie zalogowac" << endl;
        system("pause");
    }

}

void KsiazkaAdresowa :: wczytajAdresatowZPliku()
{
    adresatMenedzer -> wczytajAdresatowZPliku(uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika());
}

void KsiazkaAdresowa :: wyswietlWszystkichAdresatow()
{
    adresatMenedzer -> wyswietlWszystkichAdresatow();
}

void KsiazkaAdresowa :: usunAdresata()
{
    adresatMenedzer -> usunAdresata();
}

void KsiazkaAdresowa :: edytujAdresata()
{
    adresatMenedzer -> edytujAdresata();
}

bool KsiazkaAdresowa :: czyUzytkownikJestZalogowany()
{
    return uzytkownikMenedzer.czyUzytkownikJestZalogowany();
}

void KsiazkaAdresowa :: wyszukajAdresatowPoImieniu()
{
    adresatMenedzer -> wyszukajAdresatowPoImieniu();
}

void KsiazkaAdresowa :: wyszukajAdresatowPoNazwisku()
{
    adresatMenedzer -> wyszukajAdresatowPoNazwisku();
}
