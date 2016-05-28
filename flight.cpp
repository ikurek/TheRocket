#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <unistd.h>
#include "flight.h"

using namespace std;

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
