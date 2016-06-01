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
  plik.open("AdvancedVisualizationSystem\\start.txt");

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
