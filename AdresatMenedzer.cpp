#include "AdresatMenedzer.h"
#include "MetodyPomocnicze.h"


void AdresatMenedzer :: dodajAdresata()
{
    Adresat adresat;

    system("cls");
    cout << " >>> DODAWANIE NOWEGO ADRESATA <<<" << endl << endl;
    adresat = podajDaneNowegoAdresata();

    adresaci.push_back(adresat);
    plikZAdresatami.dopiszAdresataDoPliku(adresat);

}

Adresat AdresatMenedzer :: podajDaneNowegoAdresata()
{
    Adresat adresat;
    adresat.ustawId((plikZAdresatami.pobierzIdOstatniegoAdresata()+1));
    //cout<<idOstatniegoAdresata;
    //system("pause");
    adresat.ustawIdUzytkownika (ID_ZALOGOWANEGO_UZYTKOWNIKA);

    cout << "Podaj imie: ";
    adresat.ustawImie (MetodyPomocnicze :: wczytajLinie());
    adresat.ustawImie (MetodyPomocnicze :: zamienPierwszaLitereNaDuzaAPozostaleNaMale(adresat.wczytajImie()));

    cout << "Podaj nazwisko: ";
    adresat.ustawNazwisko (MetodyPomocnicze :: wczytajLinie());
    adresat.ustawNazwisko (MetodyPomocnicze :: zamienPierwszaLitereNaDuzaAPozostaleNaMale(adresat.wczytajNazwisko()));

    cout << "Podaj numer telefonu: ";
    adresat.ustawNumerTelefonu (MetodyPomocnicze :: wczytajLinie());

    cout << "Podaj email: ";
    adresat.ustawEmail (MetodyPomocnicze :: wczytajLinie());

    cout << "Podaj adres: ";
    adresat.ustawAdres (MetodyPomocnicze :: wczytajLinie());

    return adresat;
}

void AdresatMenedzer :: wczytajAdresatowZPliku(int idZalogowanegoUzytkownika)
{
    adresaci = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(idZalogowanegoUzytkownika);
}

void AdresatMenedzer :: wyswietlWszystkichAdresatow()
{
    system("cls");
    if (!adresaci.empty())
    {
        cout << "             >>> ADRESACI <<<" << endl;
        cout << "-----------------------------------------------" << endl;
        for (vector <Adresat> :: iterator itr = adresaci.begin(); itr != adresaci.end(); itr++)
        {
            wyswietlDaneAdresata(*itr);
        }
        cout << endl;
    }
    else
    {
        cout << endl << "Ksiazka adresowa jest pusta." << endl << endl;
    }
    system("pause");
}

void AdresatMenedzer :: wyswietlDaneAdresata(Adresat adresat)
{
    cout << endl << "Id:                 " << adresat.wczytajId() << endl;
    cout << "Imie:               " << adresat.wczytajImie() << endl;
    cout << "Nazwisko:           " << adresat.wczytajNazwisko() << endl;
    cout << "Numer telefonu:     " << adresat.wczytajNumerTelefonu() << endl;
    cout << "Email:              " << adresat.wczytajEmail() << endl;
    cout << "Adres:              " << adresat.wczytajAdres() << endl;
}
