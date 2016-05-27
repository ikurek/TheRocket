#include <fstream>
#include <iostream>
#include <string>

using namespace std;

//Klasa zawiera informacje o rakiecie i jej załodze
class rocket
{
public:
  string name;
  string model;
  string weigth;
  string crewnumber;
  string crew[6];

  //Funkcja wczytuje dane rakiety z pliku
  void loadrocket()
  {
    ifstream plik;
    plik.open("rocket.csv");

    if(plik.is_open())
    {
      getline(plik, name);
      getline(plik, model);
      getline(plik, crewnumber);
      getline(plik, weigth);
    }
    else
    {
      printf("Nie udało się załadować konfiguracji rakiety\n");
      printf("Zepsuło się. Znowu.\n");
    }
    plik.close();
  }

  //Funkcja wczytuje dane załogi z pliku
  void loadcrew()
  {
    ifstream plik;
    plik.open("crew.csv");

    if(plik.is_open())
    {
      for(int i = 0; i != 6; i++)
      {
        getline(plik, crew[i]);
      }
    }
    else
    {
      printf("Nie udało się załadować listy załogantów\n");
      printf("Zepsuło się. Znowu.\n");
    }

    plik.close();
  }
};
