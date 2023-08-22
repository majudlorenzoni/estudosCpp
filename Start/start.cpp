#include <iostream>
#include <cmath>

using namespace std;

// OI MUNDO
void helloWorld() {
	std::cout << "Hello, World!" << std::endl;
}

// TIPOS DE DADOS
void dataType() {
	char grade = 'M';
	string phrase = "\nC++ is a good language";
//	int age = 50;
	double gpa = 2.4;
	//bool isMale = false;

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
	string phrasesub;
    phrasesub = phrase.substr(8, 3); 					        // cria uma substring da que já existe (posição, quantos caracteres vai pegar)
    cout << phrasesub;

}

void numbers(){
    cout << 11 * 4 << std::endl;
    cout << 10 % 3 << std::endl;        //retorna o resto da divisão
    int wnum = 5;
    // double dnum = 5.5;
    wnum++;
    wnum += 54;
    cout << wnum << std::endl;
    cout << 10 / 3.3; 
}

void math(){
    cout << pow(2, 5) << std::endl;        //potencia
    cout << sqrt(36) << std::endl;          //raiz
    cout << round (4.3) << std::endl;       // arredonda
    cout << ceil(4.1) << std::endl;         // arredonda pra cima
    cout << floor (4.8) << std::endl;       // arredonda pra baixo
    cout << fmax(3, 10) << std::endl;                   // retora o valor mais alto
    cout << fmax(3, 10) << std::endl;
}
int main()
{
    //helloWorld();
	//dataType();
	//strings();
    //  numbers();
    math();
}