#include "Model.h"

Model::Model() { //default constructor
}

Model::~Model() { //destructor
}

string Model::translateSingleCharacter(char inputChar) {
  /*returns a string representing its encoding in tutnese capitalilization
  should be preserved */
  string returnString;

  switch(tolower(inputChar)) {
    case 'b':
      returnString = "bub";
      break;
    case 'c':
      returnString = "cash";
      break;
    case 'd':
      returnString = "dud";
      break;
    case 'f':
      returnString = "fuf";
      break;
    case 'g':
      returnString = "gug";
      break;
    case 'h':
      returnString = "hash";
      break;
    case 'j':
      returnString = "jay";
      break;
    case 'k':
      returnString = "kuck";
      break;
    case 'l':
      returnString = "lul";
      break;
    case 'm':
      returnString = "mum";
      break;
    case 'n':
      returnString = "nun";
      break;
    case 'p':
      returnString = "pub";
      break;
    case 'q':
      returnString = "quack";
      break;
    case 'r':
      returnString = "rug";
      break;
    case 's':
      returnString = "sus";
      break;
    case 't':
      returnString = "tut";
      break;
    case 'v':
      returnString = "vuv";
      break;
    case 'w':
      returnString = "wack";
      break;
    case 'x':
      returnString =  "ex";
      break;
    case 'y':
      returnString = "yub";
      break;
    case 'z':
      returnString = "zub";
      break;
    default: //return the original input if it isn't a consonant
      returnString = returnString + inputChar;
      break;
  }

  if (isupper(inputChar)) //if uppercase, use capitalilization for tutnese
    returnString[0] = toupper(returnString[0]);

  return returnString;
}

string Model::translateDoubleCharacter(char inputChar) {
  /* takes a single character as input that appears twice in a row and returns
  a string representing its encoding in Tutnese. Capitalilization should be
  preserved */
  switch(tolower(inputChar)) {
    case 'a':
      return "squata";
    case 'b':
      return "squab";
    case 'c':
      return "squac";
    case 'd':
      return "squad";
    case 'e':
      return "squate";
    case 'f':
      return "squaf";
    case 'g':
      return "squag";
    case 'h':
      return "squah";
    case 'i':
      return "squati";
    case 'j':
      return "squaj";
    case 'k':
      return "squak";
    case 'l':
      return "squal";
    case 'm':
      return "squam";
    case 'n':
      return "squan";
    case 'o':
      return "squato";
    case 'p':
      return "squap";
    case 'q':
      return "squaq";
    case 'r':
      return "squar";
    case 's':
      return "squas";
    case 't':
      return "squat";
    case 'u':
      return "squatu";
    case 'v':
      return "squav";
    case 'w':
      return "squaw";
    case 'x':
      return "squax";
    case 'y':
      return "squay";
    case 'z':
      return "squaz";
    default:
      return "";
  }
}
