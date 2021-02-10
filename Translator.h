#include <iostream>
#include <string>
using namespace std;

class Translator {
public:
  Translator(); //default constructor
  ~Translator(); //destructor
  string Foo();
  string translateEnglishWord(string inputWord);
  string translateEnglishSentence(string inputSentence);
private:
};
