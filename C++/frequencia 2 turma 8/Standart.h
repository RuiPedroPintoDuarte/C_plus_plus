#pragma once
#include "Titular.h"
/*
Cliente Standart � Cliente sem carteira de investimento nem 
cr�dito. Custo de
manuten��o de conta 25�/ano.
*/

class Standart : public Titular{
private:

public:
	Standart();
	~Standart();

	virtual float getJuros(void) { return .0f; };
};

