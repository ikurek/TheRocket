#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

//Klasa zawiera informacje startowe takie jak pogoda, uszkodzenia elementów
class start
{
public:
  string weather;

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
};
