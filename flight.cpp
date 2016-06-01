#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <unistd.h>
#include "flight.h"

using namespace std;

//Funkcja zawiera odliczanie startowe
void Flight::begin()
{
  cout << endl << "Rozpoczynanie startu" << endl;
  cout << "3" << endl;
  sleep(1);
  cout << "2" << endl;
  sleep(1);
  cout << "1" << endl;
  sleep(1);
  cout << endl << "Start rozpoczęty!" << endl;
}

//Funkcja symuluje start głównego silnika nośnego
//Zawiera prawdopodobieństwo awarii
//Zwraca false jeżeli należy anulować start
bool Flight::engine()
{
  cout << endl << "Uruchamianie silnika głównego..." << endl;

  if(rand() % 100 + 1 <= 5)
  {
    cout << endl << "Nastąpiła niekontrolowana eksplozja silnika!" << endl;
    return false;
  }

  if(rand() % 100 + 1 <= 25)
  {
    cout << endl << "Ciąg silnika zbyt niski" << endl;
    return false;
  }
  else
  {
    cout << endl << "Ciąg silnika w normie" << endl;
    return true;
  }

  return true;
}

//Funkcja liczy prawdopodobieństwo nieudanego odczepienia haków startowych
//Oraz spowodowane tym zakrzywienie toru lotu
void Flight::deattach()
{
  int counter = 0;

  cout << endl << "Odczepianie chwytu nr. 1..." << endl;
  if(rand() % 100 + 1 <= 10)
  {
    cout << endl << "Chwyt nr. 1 pozostał na miejscu!" << endl;
    counter++;
  }

  cout << endl << "Odczepianie chwytu nr. 2..." << endl;
  if(rand() % 100 + 1 <= 10)
  {
    cout << endl << "Chwyt nr. 2 pozostał na miejscu!" << endl;
    counter++;
  }

  cout << endl << "Odczepianie chwytu nr. 3..." << endl;
  if(rand() % 100 + 1 <= 10)
  {
    cout << endl << "Chwyt nr. 3 pozostał na miejscu!" << endl;
    counter++;
  }

  if (counter >= 1)
  {
    floatdegree = (rand() % 5 + 2) * counter;
    cout << endl << "Chwyty zakrzywiły trajektorię lotu o " << floatdegree << " stopni" << endl;
  }
}
