#pragma once
#include <iostream>
#include <vector>
#include <cstring>
class Gibbet
{
public:
	Gibbet(const std::string& word);
	~Gibbet();
	
private:
	std::vector<char>gibbetWord{}; //palavra para enforcamento
	std::vector<char>display{}; //painel 
	std::vector<char>typedLetteres{}; //letras digitadas
	char aLetter; //letra digitada
	size_t lengthGibbetWord; //comprimento da palavra de enforcamento
	int numAttempts; //número de tentativas
	bool AttemptsOver; //tentátivas encerradas
	bool gameOver; //fim de jogo

	float factor; // fator para criar um numero de tentativas baseado em gibbetWord

	void resetDisplay();
	void showDisplay();
};

