#include <fstream>
#include <iostream>
#include <string>

using namespace std;

class rocket
{
public:
  string name;
  string weather;

  void loadrocket() {
    ifstream plik;
    plik.open("rocket.csv");

    if(plik.is_open())
    {
      getline(plik, name);
      getline(plik, weather);
    }
    else
    {
      printf("Nie udało się załadować konfiguracji rakiety\n");
      printf("Zepsuło się. Znowu.\n");
    }
    plik.close();
  }
};
