#include "Gibbet.h"

Gibbet::Gibbet(const std::string& word)
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
	
	//Apaga e preenche o Diplay com '_' conforme o tamanho de gibbetWord
	resetDisplay();
		
}

Gibbet::~Gibbet()
{
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
	for (char c : display) {
		std::cout << c << std::endl;
	}
}


