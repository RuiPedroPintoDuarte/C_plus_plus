#pragma once
#include "Titular.h"

/*
* Cliente Platina – Cliente com melhores condições de Crédito
a 1,5% e Juros de
investimento de 8% ao ano com investimentos mínimos de 50 000€,
2 cartões
de crédito e com custo de anuidade de manutenção de conta de 150€.
*/
class Platina : public Titular
{
private:

public:
	Platina();
	~Platina();

	virtual float getJuros(void) { return 0.08f; };

};

