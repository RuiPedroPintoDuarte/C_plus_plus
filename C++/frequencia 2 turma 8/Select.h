#pragma once
#include "Titular.h"
/*
Clientes Select � Cliente com possibilidade de carteira de 
investimento mais
reduzida com m�nimos de 10 000� e taxa de juro de 4% ao ano. 
Com condi��es
de cr�dito de 2,5% e com custo de manuten��o de conta de 100�/ano

*/

class Select : public Titular
{
private:

public:
	Select();
	~Select();

	virtual float getJuros(void) { return 0.04f; };

};

