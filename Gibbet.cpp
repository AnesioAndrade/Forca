#include "Gibbet.h"

Gibbet::Gibbet(const std::string& word)
{
	lengthGibbetWord = word.length(); //obtem a quantidade de caracteres que a Palavra possuiu
	rightCharacter = 0; // zera a quantidade de letras certas
	displayCount = 0;//zera o contador do Display
	//copia caracter por caracter de word para gibbetWord ;)
	size_t count = 0;
	for (char c : word) {
		gibbetWord.push_back(word[count]);
		count++;
	}
	//numero de tentativas será o tamanho da gibbetWord * 1.5;
	factor = 1.5f;
	numAttempts = static_cast <int>(lengthGibbetWord * factor);
	AttemptsOver = false;
	gameOver = false;
	wrongCharacter = false; 
	aCharacter = 0;
	//Apaga e preenche o Diplay com '_' conforme o tamanho de gibbetWord
	resetDisplay();		
}

Gibbet::~Gibbet()
{
}

void Gibbet::getCharacter(const char& c)
{
	aCharacter = c;
	showDisplay();
}

int Gibbet::getAttempts()
{
	return numAttempts;
}

void Gibbet::resetDisplay()
{
	//Apaga todo o conteudo do Display e preenche com '_'
	if (!display.empty()) {
		display.clear();
	}
	for (size_t c = 0; c < lengthGibbetWord; c++) {
		display.push_back('_');
	}
}

void Gibbet::showDisplay()
{
	//Verifica se a letra digitada existe
	for (char l : gibbetWord) {
		if (l == aCharacter) {
			display.at(displayCount) = aCharacter;
			rightCharacter++;
		}
		displayCount++;
	}
	for (char d : display) {
		std::cout << d << " ";
	}
	displayCount = 0;
}


