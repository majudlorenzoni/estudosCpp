#include <iostream>
#include <cmath>
#include <string>

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
    cout << pow(2, 5) << std::endl;         //potencia
    cout << sqrt(36) << std::endl;          //raiz
    cout << round (4.3) << std::endl;       // arredonda
    cout << ceil (4.1) << std::endl;        // arredonda pra cima
    cout << floor (4.8) << std::endl;       // arredonda pra baixo
    cout << fmax(3, 10) << std::endl;       // retora o valor mais alto
    cout << fmax(3, 10) << std::endl;
}

void input (){
    int age;
    cout << "Enter your age: ";
    cin >> age;    // serve pra int, double, char
    cout << "Your are " << age << " years old";

    //string
    string name;
    cout << "Enter your name: ";
    getline(cin, name);          
    cout << "Hello, my name is " << name;
}

int calculator(){
    int option;
    int num1, num2;
    std::cout << "Calculadora!" << std::endl;
    std::cout << "Escolha uma das operações" << std::endl;
    std::cout << "1. Adição \n2. Subtração \n3. Multiplicação\n4. Divisão\nSua escolha: " << std::endl;
    std::cin >> option;
    
   if (option >= 1 && option <= 4) {
        std::cout << "Digite os valores: ";
        cin >> num1 >> num2;
    
    switch (option) {
    case 1:
      std::cout << "Adição" << std::endl;
      std::cout << "Resultado: " << num1 + num2 << std::endl;
        break;
    case 2:
      std::cout << "Subtração" << std::endl;
      std::cout << "Resultado: " << num1 - num2 << std::endl;
        break;
    case 3:
      std::cout << "Multiplicação" << std::endl;
      std::cout << "Resultado: " << num1 * num2 << std::endl;
        break;
    case 4:
        if (num2 != 0){
      std::cout << "Divisão" << std::endl;
      std::cout << "Resultado: " << num1 / num2 << std::endl;
      std::cout << "Resto: " << num1 % num2 << std::endl;
        } else {
                std::cout << "Erro: divisão por zero" << std::endl;
        }
        break;

    } } else {
    std::cout << "Opção incorreta. Reinicie o programa" << std::endl;
    }
    std::cout << "Encerrando a calculadora..." << std::endl;
    return 0;
    }

void madLibs(){
    string color, pluralNoun, celebrity;

    std::cout << "Jogo Mad Libs!" << std::endl;
    std::cout << "Escreva uma cor: " << std::endl;
    getline(cin, color);

    std::cout << "Escreva um nome no plural: " << std::endl;
    getline(cin, pluralNoun);

    std::cout << "Escreva uma celebridade: " << std::endl;
    getline(cin, celebrity);
    std::cout << "Rosas são " << color << std::endl;
    std::cout << pluralNoun << " sao azuis" << std::endl;
    std::cout << "Eu amo a " << celebrity << std::endl;
}

void arrays(){
    int luckyNums [2] = {11, 14};
    cout << luckyNums[1];

}

void sayHi(string name, int age){
    cout << "Hello " << name << " you are "<< age;
}

double cube(double num){
    double result = num * num* num;
    return result;
}

int getMax(int num1, int num2){
    int result;
    if(num1 > num2) {
        cout << num1 << "  é maior";
    } else {
        cout << num2 << " é maior";
    }
    return result;
}

void IF(){
      bool isBrazilian = false;
    bool isPortuguese = true;
    if (isBrazilian || isPortuguese){
        cout << "Oi. Seja bem vindo";
    } else {
        cout << "Hello. Welcome";
    }
}

void funcaoWhile(){
    int index = 2;
    while (index <= 11){
        cout << index << endl;
        index++;
    }
}

void numberDivination(){
    int secretNum = 11;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    bool outOfGuesses = false;
    while(secretNum != guess && !outOfGuesses){
        if (guessCount < guessLimit) {
            cout << "Digite o seu palpite: " << endl;
            cin >> guess;
            guessCount++;
        } else {
            outOfGuesses = true;
        }
    }
    
    if (outOfGuesses){
        cout << "Voce perdeu!" << endl;
    } else {
    cout << "Voce venceu!" << endl;
    cout << "O numero secreto eh " << secretNum << " !!" << endl;
    }
}

void loopFor(){
    int nums[] = {1, 2, 5, 7, 3};
    for(int i = 0; i <= 5; i++){
        cout << nums[i] << endl;
    }
}

int exponentFuction(int baseNum, int powNum){
    int result = 1;
    for(int i = 0; i < powNum; i++){
        result = result * baseNum;
    }
    return result;
}

void array2(){
    int numberGrid[3][2] = {
        {1, 2}, 
        {3, 4},
        {5, 6}
    };
  
  for(int i = 0; i < 3; i++){
    for (int j = 0; j < 2; j++){
        cout << numberGrid [i][j];
    }
    cout << endl;
  }

}

void pointers(){
    int age = 19;
    int *pAge = &age;
    double gpa = 2.7;
    double *pGpa = &gpa;
    string name = "Mike";
    string *pName = &name;

    cout << "Age: " << *pAge << endl;
    cout << "Gpa: " << *pGpa << endl;
    cout << "Name: " << *pName << endl;
}
int main()
{
    //helloWorld();
	//dataType();
	//strings();
    //numbers();
    //math();
    //input();
    //calculator();
    //madLibs();
    //arrays();
    //sayHi("Maria", 20);
    //double answer = cube(3);
    //cout << answer; 
    //IF();
    //getMax(9,6);
    //funcaoWhile();
    //numberDivination();
    //loopFor();
    //cout << exponentFuction(4, 3);
    //array2();
    pointers();
}