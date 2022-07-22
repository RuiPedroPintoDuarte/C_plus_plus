#pragma once
#include <iostream>
#include <string>
/*
Nota: O Titular � a representa��o abstrata do cliente, 
onde se regista o nome do cliente,
morada e n�mero cart�o de cidad�o, e possui um
m�todo GetJuros virtual puro.
*/
using namespace std;
class Titular{

private:
	string nome;
	string morada;
	string cc;

public:
	Titular();
	~Titular();

	virtual float getJuros(void) = 0;
	string getNome(void) const { return nome; }
};

