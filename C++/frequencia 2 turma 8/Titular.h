#pragma once
#include <iostream>
#include <string>
/*
Nota: O Titular é a representação abstrata do cliente, 
onde se regista o nome do cliente,
morada e número cartão de cidadão, e possui um
método GetJuros virtual puro.
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

