#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H
#include <iostream>
#include <vector>
#include <fstream>
#include "MetodyPomocnicze.h"
#include <cstdlib>
#include "Adresat.h"



class PlikZAdresatami
{
    const string NAZWA_PLIKU_Z_ADRESATAMI;
    int idOstatniegoAdresata;
    //fstream plikTekstowy;
    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
public:
  PlikZAdresatami (string nazwaPlikuZAdresatami) : NAZWA_PLIKU_Z_ADRESATAMI (nazwaPlikuZAdresatami) {
      idOstatniegoAdresata=0;
  };
  void dopiszAdresataDoPliku(Adresat adresat);
  bool czyPlikJestPusty(fstream &plikTekstowy);
  vector <Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
  int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
  int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
  Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
  string pobierzLiczbe(string tekst, int pozycjaZnaku);
  int pobierzIdOstatniegoAdresata();
  void usunAdresataZPliku(int idAdresata);

};

#endif
