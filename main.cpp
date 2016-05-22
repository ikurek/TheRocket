#include <iostream>
#include <cstdlib>
#include <cstdio>
#include "rocket.h"
#include "start.h"

using namespace std;

int main(int argc, char** argsv)
{
  cout << "Symulator rakiety! Yaaaaaaaay!" << endl << endl;
  //Zainicjuj klasę zawierającą informację o modelu rakiety
  rocket rocket;
  rocket.loadrocket();
  rocket.loadcrew();

  //Zainicjuj klasę startu
  start start;
  start.loadweather();


  //Wyrzuć początkowe informacje o rakiecie na ekran
  cout << "Nazwa: " << rocket.name << endl << "Model: " << rocket.model << endl << "Liczba załogantów: " << rocket.crewnumber << endl << endl;
  cout << "Załoga w składzie:" << endl;

  for (int i = 0; i < atoi((rocket.crewnumber).c_str()); i++)
  {
    cout << i+1 << ". " << rocket.crew[i] << endl;
  }

  cout << endl << "Pogoda: " << start.weather << endl;

  //Koniec printowania
}
