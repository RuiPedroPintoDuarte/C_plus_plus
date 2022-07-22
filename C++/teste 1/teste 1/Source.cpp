#include <iostream>
using namespace std;
int main()
{
	int inteiro;
	float real;
	char caracter;
	char string[60];

	cout << "Escreva um numero inteiro :" << endl;
	cin >> inteiro;

	cout << "Insira um numero real :" << endl;
	cin >> real;

	cout << "Insira um caracter :" << endl;
	cin >> caracter;

	cout << "Insira uma string  :" << endl;
	cin >> string ;


	cout << "O seu inteiro e: " << inteiro << " e o seu real e:  " << real << " e o seu caracter:  " << caracter << " e a sua string:  " << string << endl;

	system("pause");
	return (0);
}