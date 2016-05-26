#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <ctime>
#include "rocket.h"
#include "start.h"

using namespace std;

int main(int argc, char** argsv)
{
  srand( time( NULL ) );
  char temp;

  cout << "Symulator rakiety! Yaaaaaaaay!" << endl << endl;
  //Zainicjuj klasę zawierającą informację o modelu rakiety
  rocket rocket;
  rocket.loadrocket();
  rocket.loadcrew();

  //Zainicjuj klasę startu
  start start;
  start.loadweather();
  start.loadparts();
  start.checkparts();


  //Wyrzuć początkowe informacje o rakiecie na ekran
  cout << "Nazwa: " << rocket.name << endl << "Model: " << rocket.model << endl << "Liczba załogantów: " << rocket.crewnumber << endl << endl;
  cout << "Załoga w składzie:" << endl;

  for (int i = 0; i < atoi((rocket.crewnumber).c_str()); i++)
  {
    cout << i+1 << ". " << rocket.crew[i] << endl;
  }

  cout << endl << "Pogoda: " << start.weather << endl;
  cout << endl << "Trwa sprawdzanie wszystkich systemów..." << endl;
  cout << endl << "Wykryte usterki: " << start.damaged << endl;
  cout << endl << "Dokonać wymaganych napraw? (t/n): ";
  cin >> temp;

  while(temp != 't' && temp !='n')
  {
      cout << "Nieprawidłowy wybór" << endl << "Dokonać wymaganych napraw? (t/n): ";
      cin >> temp;
  }

  if (temp == 't')
  {
    cout << endl << "Dokonano wymaganych napraw!" << endl;
  }
  else
  {
    cout << endl << "Start anulowany!" << endl;
    return 0;
  }

}
