#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstdio>
#include <ctime>
#include <cmath>
#include "rocket.h"

using namespace std;

int main(int argc, char** argsv)
{
  printf("Symulator rakiety! Yaaaaaaaay!\n");
//Zainicjuj klasę zawierającą informację o modelu rakiety
  rocket rocket;
  rocket.loadrocket();
  rocket.loadcrew();
  //Wyrzuć początkowe informacje o rakiecie na ekran
  cout << "Nazwa: " << rocket.name << endl << "Model: " << rocket.model << endl << "Liczba załogantów: " << rocket.crewnumber << endl;
  cout << "Załoga w składzie:" << endl;

  for (int i = 0; i < atoi((rocket.crewnumber).c_str()); i++)
  {
    cout << i+1 << ". " << rocket.crew[i] << endl;
  }

}
