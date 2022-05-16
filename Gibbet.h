#pragma once
#include <iostream>
#include <vector>
#include <cstring>
class Gibbet
{
public:
	Gibbet(const std::string& word);
	~Gibbet();
	void getCharacter(const char& c);
	int getAttempts();

	
private:
	std::vector<char>gibbetWord{}; //palavra para enforcamento
	std::vector<char>display{}; //painel 
	std::vector<char>typedCharacter{}; //letras digitadas
	char aCharacter; //letra digitada
	size_t displayCount;//contador do display
	size_t lengthGibbetWord; //comprimento da palavra de enforcamento
	size_t rightCharacter; //para cada letra que estiver CERTA, adiciona 1
	size_t wrongCharacter; //para cada letra que estiver ERRADA, subtrai 1
	int numAttempts; //número de tentativas
	bool AttemptsOver; //tentátivas encerradas
	bool gameOver; //fim de jogo
	float factor; // fator para criar um numero de tentativas baseado em gibbetWord
	void resetDisplay();
	void showDisplay();
};

