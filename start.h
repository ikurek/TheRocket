#include <iostream>
#include <ctime>
#include <cstdlib>
#include <map>

using namespace std;

//Klasa zawiera informacje startowe takie jak pogoda, uszkodzenia elementów
class start
{
public:
  string weather;
  map <string, int> parts;
  string damaged = "";


  //Funkcja losuje warunki pogodowe
  void loadweather()
  {
    srand(time(NULL));
    int losowa = rand() % 7 + 1;

    if (losowa == 1) weather = "Słonecznie";
    if (losowa == 2) weather = "Pochmurnie";
    if (losowa == 3) weather = "Mgliście";
    if (losowa == 4) weather = "Deszcz";
    if (losowa == 5) weather = "Silny Deszcz";
    if (losowa == 6) weather = "Burza";
    if (losowa == 7) weather = "Silny wiatr";
  }

  //Funkcja przypisuje do kolejnych elementów rakiety prawdopodobieństwo % ich uszkodzenia
  void loadparts()
  {
    parts["engine"] = 10;
    parts["controls"] = 10;
    parts["communication"] = 20;
  }
  //Funkcja sprawdza czy któryś z elementów został uszkodzony
  void checkparts()
  {
    if(parts["engine"] < (rand() % 100 + 1))
    {
      damaged = damaged + "silnik; ";
    }

    if(parts["controls"] < (rand() % 100 + 1))
    {
      damaged = damaged + "układ sterujący; ";
    }

    if(parts["communication"] < (rand() % 100 + 1))
    {
      damaged = damaged + "systemy komunikacji; ";
    }

    if(damaged == "") damaged = "brak";
  }
};
