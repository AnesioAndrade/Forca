#include "Gibbet.h"

Gibbet::Gibbet(std::string& word)
{
	lengthGibbetWord = word.length();
	
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
	aLetter = 0;
	
}

Gibbet::~Gibbet()
{
}
