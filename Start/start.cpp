#include <iostream>

using namespace std;

// OI MUNDO
void helloWorld() {
	std::cout << "Hello, World!" << std::endl;
}

// TIPOS DE DADOS
void dataType() {
	char grade = 'M';
	string phrase = "\nC++ is a good language";
	int age = 50;
	double gpa = 2.4;
	bool isMale = false;

	std::cout << grade << std::endl;
	std::cout << phrase << std::endl;
	std::cout << gpa << std::endl;
}

// STRINGS

void strings() {
	string phrase = "Giraffe Academy";
	cout << phrase.length() << std::endl;						// length conta quantos caracteres a string tem
	cout << phrase[2] << std::endl;								// printa o caracter que está na primeira posição
	cout << phrase.find("Academy", 0) << std::endl;				// procura na string
	cout << phrase.substr(8, 3) << std::endl;					// cria uma substring da que já existe (posição, quantos caracteres vai pegar)
	

}

int main()
{
    helloWorld();
	dataType();
	strings();
}