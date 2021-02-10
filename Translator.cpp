#include "Translator.h"
#include "Model.h"

Translator::Translator() { //default constructor
}
Translator::~Translator() { //destructor
}



string Translator::translateEnglishWord(string inputWord) {
  Model currModel;
  string outputWord; //tutnese translation
  bool allCaps = true; //to later initialize all caps preservation
  // MAKE allCaps A METHOD ^^^^

  /* Translates to tutnese for each char while checking for repeating letters.
  If repeating letters exist, use the double character method instead and skip
  the repeated letter. Only checks doubled letters inside proper boundaries */
  for (int i = 0; i < inputWord.size(); ++i) {
    if ((0 < i) && (i < inputWord.size() - 1) && (inputWord.at(i) == inputWord.at(i + 1))) {
      outputWord.append(currModel.translateDoubleCharacter(inputWord.at(i)));
      i++; //to skip the next repeating letter
    }
    else //single char translation
      outputWord.append(currModel.translateSingleCharacter(inputWord.at(i)));
  }

  /* Check if the input is all caps. If so, convert the output to all caps*/
  for (int i = 0; i < inputWord.size(); ++i) //check
    if (islower(inputWord[i]))
      allCaps = false;
  if (allCaps) //apply
    for (int i = 0; i < outputWord.size(); ++i)
      outputWord[i] = toupper(outputWord[i]);

  return outputWord;
}



string Translator::translateEnglishSentence(string inputSentence) {
  Model currModel;
  string outputSentence;
  bool allCaps = true; //to later initialize all caps preservation

  /* Appends tutnese translation to output string while checking for repeating
  letters. If repeating letters exist, use the double character translation
  method instead. Only checks doubled letters inside proper boundaries */
  for (int i = 0; i < inputSentence.size(); ++i) {
    if ((0 < i) && (i < inputSentence.size() - 1) && (inputSentence.at(i) == inputSentence.at(i + 1))) {
      outputSentence.append(currModel.translateDoubleCharacter(inputSentence.at(i)));
      i++; //to skip the next repeating letter
    }
    else //single char translation
      outputSentence.append(currModel.translateSingleCharacter(inputSentence.at(i)));
  }

  /* Check if the input is all caps. If so, convert the output to all caps*/
  for (int i = 0; i < inputSentence.size(); ++i) //check
    if (islower(inputSentence[i]))
      allCaps = false;
  if (allCaps) //apply
    for (int i = 0; i < outputSentence.size(); ++i)
      outputSentence[i] = toupper(outputSentence[i]);

  return outputSentence;
}
