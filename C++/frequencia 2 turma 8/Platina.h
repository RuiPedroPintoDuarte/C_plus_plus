#pragma once
#include "Titular.h"

/*
* Cliente Platina � Cliente com melhores condi��es de Cr�dito
a 1,5% e Juros de
investimento de 8% ao ano com investimentos m�nimos de 50 000�,
2 cart�es
de cr�dito e com custo de anuidade de manuten��o de conta de 150�.
*/
class Platina : public Titular
{
private:

public:
	Platina();
	~Platina();

	virtual float getJuros(void) { return 0.08f; };

};

