#include <iostream>
#include <cstring>
#include "Gibbet.h"

int main()
{
	std::string palavra = "CELULAR";
	Gibbet forca(palavra);
	char letra;
	do
	{
		std::cout << "\nDigite uma letra\n";
		std::cin >> letra;
		std::system("CLS");
		forca.getCharacter(letra);
		
		if (forca.IsWrongChr()) {
			std::cout << "\nEssa letra nao tem!\n";
			std::cout << "\nVoce tem " << forca.getAttempts() << " tentativas restantes!\n";
		}
		else {
			std::cout << "\nMARAVILHA!!! Advinhou uma letra!\n";
		}
	} while (!forca.isGameOver());
	std::system("CLS");
	if (forca.getAttempts() == 0) {
		std::cout << "Voce esgotou o numero de tentativas e NAO ADVINHOU a palavra!!!\n";
	}
	if (forca.IsWordRight()) {
		std::cout << "\nPARABENS!!! VOCE ADVINHOU A PALAVRA\n";
	}
	
}
