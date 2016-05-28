#include <fstream>
#include <iostream>
#include <string>
#include "rocket.h"

using namespace std;

//Funkcja wczytuje dane rakiety z pliku
void Rocket::loadrocket()
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
void Rocket::loadcrew()
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
