#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include <map>

using namespace std;

class Start
{
public:
  string weather;
  char temp;
  map <string, int> parts;
  string damaged = "";

  void loadweather();
  void loadparts();
  void checkparts();
  bool fixdamaged(string damaged);
};
