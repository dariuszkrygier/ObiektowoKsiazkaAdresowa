#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H
#include <iostream>
#include <vector>
#include <fstream>
#include "MetodyPomocnicze.h"
#include <cstdlib>
#include "Adresat.h"
#include "PlikTekstowy.h"



class PlikZAdresatami : public PlikTekstowy
{
    const string NAZWA_PLIKU_Z_ADRESATAMI;
    int idOstatniegoAdresata;
    //fstream plikTekstowy;
    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
public:
  PlikZAdresatami (string nazwaPlikuZAdresatami);
  /*: NAZWA_PLIKU_Z_ADRESATAMI (nazwaPlikuZAdresatami) {
      idOstatniegoAdresata=0;
  };*/
  bool dopiszAdresataDoPliku(Adresat adresat);
  //bool czyPlikJestPusty(fstream &plikTekstowy);
  vector <Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
  int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
  int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
  Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
  string pobierzLiczbe(string tekst, int pozycjaZnaku);
  int pobierzIdOstatniegoAdresata();
  void usunAdresataZPliku(int idAdresata);
  void edytujAdresataWPliku(Adresat adresat);
  void wczytajIdOstatniegoAdresata(int Id);
  void pobierzZPlikuIdOstatniegoAdresata();
};

#endif
