#include <iostream>
#include <string>
using namespace std;

class Model {
public:
  Model(); //default constructor
  ~Model(); //destructor
  string translateSingleCharacter(char userChar);
  string translateDoubleCharacter(char userChars); //rename to string?
private:
};
