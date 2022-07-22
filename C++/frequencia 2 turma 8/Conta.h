#pragma once
#include "Titular.h"
#include "Standart.h"
#include "Select.h"
#include "Platina.h"
/*
Com a implementação da tipologia de clientes, é necessário adaptar 
a Conta para cada um dos
perfis de cliente, assim implemente uma Conta que tenha associado 
um Titular de conta
(Select, Platina, Standart), possui também o saldo atual da conta 
corrente, a data da abertura
da conta, e o valor em contas de investimento.
2. Defina a classe Conta e destrutor da classe e um construtor por
parâmetros que
permita inicializar todos os seus atributos corretamente
*/
class Conta {
private:
	Titular* t;
	float saldo;
	int dia, mes, ano;
	float ValorInvest;

public :
	Conta(Titular* _t, float _s, int _d, int  _m, int _a, float _vi);
	~Conta();

	Titular* getTitular(void) { return t; }
	float getInvestimento(void) const { return ValorInvest; }
	float getSaldo(void) const { return saldo; }

	void setSaldo(float _s) { saldo = _s; }
};

