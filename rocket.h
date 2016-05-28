#include <fstream>
#include <iostream>
#include <string>

using namespace std;

//Klasa zawiera informacje o rakiecie i jej załodze
class Rocket
{
public:
  string name;
  string model;
  string weigth;
  string crewnumber;
  string crew[6];

  void loadrocket();
  void loadcrew();
};
