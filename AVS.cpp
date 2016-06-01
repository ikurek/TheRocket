#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include "AVS.h"

using namespace std;

void AVS::printstart()
{
  ifstream plik;
  string linia;
  plik.open("Start.txt");

  if(plik.is_open())
  {
    while(!plik.eof())
    {
      getline(plik, linia);
      cout << linia << endl;
    }
  }
  else
  {
    cout << endl << "O nie! System zaawansowanej symulacji wizualnej zawiódł!" << endl;
  }
  plik.close();
}

void AVS::printEngineOn()
{
  ifstream plik;
  string linia;
  plik.open("EngineOn.txt");

  if(plik.is_open())
  {
    while(!plik.eof())
    {
      getline(plik, linia);
      cout << linia << endl;
    }
  }
  else
  {
    cout << endl << "O nie! System zaawansowanej symulacji wizualnej zawiódł!" << endl;
  }
  plik.close();
}

void AVS::printFlightOn()
{
  ifstream plik;
  string linia;
  plik.open("FlightOn.txt");

  if(plik.is_open())
  {
    while(!plik.eof())
    {
      getline(plik, linia);
      cout << linia << endl;
    }
  }
  else
  {
    cout << endl << "O nie! System zaawansowanej symulacji wizualnej zawiódł!" << endl;
  }
  plik.close();
}

void AVS::printBoom()
{
  ifstream plik;
  string linia;
  plik.open("Boom.txt");

  if(plik.is_open())
  {
    while(!plik.eof())
    {
      getline(plik, linia);
      cout << linia << endl;
    }
  }
  else
  {
    cout << endl << "O nie! System zaawansowanej symulacji wizualnej zawiódł!" << endl;
  }
  plik.close();
}

void AVS::printFly()
{
  ifstream plik;
  string linia;
  plik.open("Fly.txt");

  if(plik.is_open())
  {
    while(!plik.eof())
    {
      getline(plik, linia);
      cout << linia << endl;
    }
  }
  else
  {
    cout << endl << "O nie! System zaawansowanej symulacji wizualnej zawiódł!" << endl;
  }
  plik.close();
}

void AVS::printEvac()
{
  ifstream plik;
  string linia;
  plik.open("Evac.txt");

  if(plik.is_open())
  {
    while(!plik.eof())
    {
      getline(plik, linia);
      cout << linia << endl;
    }
  }
  else
  {
    cout << endl << "O nie! System zaawansowanej symulacji wizualnej zawiódł!" << endl;
  }
  plik.close();
}

void AVS::printSpace()
{
  ifstream plik;
  string linia;
  plik.open("Space.txt");

  if(plik.is_open())
  {
    while(!plik.eof())
    {
      getline(plik, linia);
      cout << linia << endl;
    }
  }
  else
  {
    cout << endl << "O nie! System zaawansowanej symulacji wizualnej zawiódł!" << endl;
  }
  plik.close();
}
