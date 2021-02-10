#include "FileProcessor.h"
#include "Translator.h"

FileProcessor::FileProcessor() { //default constructor
}
FileProcessor::~FileProcessor() { //destructor
}

void FileProcessor::processFile(string inputFile, string outputFile) {
  /* takes a string representing the input file (English) and a string
  representing the output file (where the Tutnese translation will be
  written) */

  Translator currTranslator;
  string textHolder;
  fstream readFile;
  fstream writeFile;

  readFile.open(inputFile, ios::in);
  writeFile.open(outputFile, ios::out);

  if (readFile.is_open()) {
    while(getline(readFile, textHolder)) {
      if (writeFile.is_open())
        writeFile << currTranslator.translateEnglishSentence(textHolder) << endl;
    }
  }
  else {
    cout << "Error: Invalid input. The file may be spelled inproperly or " <<
    "without \".txt\"." << endl << endl;
    exit(0);
  }
  // else statement stating that readfile could not be found

  readFile.close();
  writeFile.close();
}
