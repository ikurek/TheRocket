#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <ctime>
#include <unistd.h>
#include "rocket.h"
#include "start.h"
#include "flight.h"
#include "AVS.h"

using namespace std;

int main(int argc, char** argsv)
{
  srand( time( NULL ) );

  cout << "Symulator rakiety! Yaaaaaaaay!" << endl << endl;
  //Zainicjuj klasę zawierającą informację o modelu rakiety
  Rocket rocket;
  rocket.loadrocket();
  rocket.loadcrew();

  //Zainicjuj klasę startu
  Start start;
  start.loadweather();
  start.loadparts();
  start.checkparts();

  //Zainicjuj klasę lotu
  Flight flight;

  //Zainicjuj klasę zaawansowanego systemu symulacji wizualnej
  AVS avs;


  //Wyrzuć początkowe informacje o rakiecie na ekran
  cout << "Nazwa: " << rocket.name << endl << "Model: " << rocket.model << endl << "Liczba załogantów: " << rocket.crewnumber << endl << endl;
  cout << "Załoga w składzie:" << endl;

  //Wyrzuć członków załogi
  for (int i = 0; i < atoi((rocket.crewnumber).c_str()); i++)
  {
    cout << i+1 << ". " << rocket.crew[i] << endl;
  }

  //Wyrzuć pogodę i sprawdź czy może się odbyć start
  cout << endl << "Pogoda: " << start.weather << endl;
  if(start.weather == "Silny deszcz" || start.weather == "Silny wiatr" || start.weather == "Burza" || start.weather == "Mgła")
  {
    cout << endl << "Pogoda uniemożliwiła start!" << endl;
    return 0;
  }

  //Wyrzuć sprawdzenie systemów
  cout << endl << "Trwa finalne sprawdzanie wszystkich systemów..." << endl;
  sleep(3);
  cout << endl << "Wykryte usterki: " << start.damaged << endl;

  //Sprawdź czy użytkownik zdecyduje się naprawić usterki
  //To prawdopodobnie najgorsza funkcja jaką kiedykolwiek zrobiłem
  if (start.damaged != "brak")
  {
    if (start.fixdamaged(start.damaged) == false) return 0;
  }

  //Rozpoczęcie startu
  flight.begin();
  if (flight.engine() == false)
  {
    cout << endl << "Start nieudany" << endl;
    return 0;
  }
  else
  {
    cout << endl << "Silnik nośny aktywny" << endl;
  }

  cout << endl << "Rozpoczęcie odłączania od platformy..." << endl;

  flight.deattach();

  if (flight.twist() == false)
  {
    cout << endl << "Start nieudany" << endl;
    return 0;
  }
  else
  {
    cout << endl << rocket.name << " porusza się po prawidłowym torze" << endl;
  }

  avs.printstart();
}
