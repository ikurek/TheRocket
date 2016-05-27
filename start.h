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
  char temp;
  map <string, int> parts;
  string damaged = "";


  //Funkcja losuje warunki pogodowe
  void loadweather()
  {
    srand(time(NULL));
    int losowa = rand() % 7 + 1;

    if (losowa == 1) weather = "Słonecznie";
    if (losowa == 2) weather = "Pochmurnie";
    if (losowa == 3) weather = "Mgła";
    if (losowa == 4) weather = "Deszcz";
    if (losowa == 5) weather = "Silny deszcz";
    if (losowa == 6) weather = "Burza";
    if (losowa == 7) weather = "Silny wiatr";
  }

  //Funkcja przypisuje do kolejnych elementów rakiety prawdopodobieństwo % ich uszkodzenia
  //TODO: wczytywanie prawdopodobieństw z csv
  void loadparts()
  {
    parts["engine"] = 50;
    parts["controls"] = 50;
    parts["communication"] = 10;
  }

  //Funkcja sprawdza czy któryś z elementów został uszkodzony
  //TODO: dodać więcej elementów, uśrednić prawdopodobieństwa
  void checkparts()
  {
    srand( time( NULL ));
    if(parts["engine"] > rand() % 100 + 1)
    {
      damaged = damaged + "silnik; ";
    }

    if(parts["controls"] > rand() % 100 + 1)
    {
      damaged = damaged + "układ sterujący; ";
    }

    if(parts["communication"] > rand() % 100 + 1)
    {
      damaged = damaged + "systemy komunikacji; ";
    }

    if(damaged == "") damaged = "brak";
  }

  //Funkcja zwraca false tylko jeżeli NIE zostaną dokonane naprawy
  bool fixdamaged(string damaged)
  {
    if (damaged != "brak")
    {
      cout << endl << "Dokonać wymaganych napraw? (t/n): ";
      cin >> temp;

      while(temp != 't' && temp !='n')
      {
        cout << "Nieprawidłowy wybór" << endl << "Dokonać wymaganych napraw? (t/n): ";
        cin >> temp;
      }

      if (temp == 't')
      {
        cout << endl << "Naprawa w toku..." << endl;
        sleep(3);
        cout << endl << "Dokonano wymaganych napraw!" << endl;
        return true;
      }
      else
      {
        cout << endl << "Start anulowany!" << endl;
        return false;
      }
    }
    else return true;
  }
};
