#include <fstream>
#include <iostream>
#include <string>

using namespace std;

class rocket
{
public:
  string name;
  string model;
  string crewnumber;
  string crew[6];

  void loadrocket()
  {
    ifstream plik;
    plik.open("rocket.csv");

    if(plik.is_open())
    {
      getline(plik, name);
      getline(plik, model);
      getline(plik, crewnumber);
    }
    else
    {
      printf("Nie udało się załadować konfiguracji rakiety\n");
      printf("Zepsuło się. Znowu.\n");
    }
    plik.close();
  }

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
