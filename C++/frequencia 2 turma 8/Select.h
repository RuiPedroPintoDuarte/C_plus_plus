#pragma once
#include "Titular.h"
/*
Clientes Select – Cliente com possibilidade de carteira de 
investimento mais
reduzida com mínimos de 10 000€ e taxa de juro de 4% ao ano. 
Com condições
de crédito de 2,5% e com custo de manutenção de conta de 100€/ano

*/

class Select : public Titular
{
private:

public:
	Select();
	~Select();

	virtual float getJuros(void) { return 0.04f; };

};

