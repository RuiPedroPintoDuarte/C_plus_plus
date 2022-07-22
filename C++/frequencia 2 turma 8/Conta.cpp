#include "Conta.h"

Conta::Conta(Titular* _t, float _s, 
	int _d, int _m, int _a, float _vi){
	t = _t;
	saldo = _s;
	dia = _d;
	mes = _m;
	ano = _a;
	ValorInvest = _vi;
}

Conta::~Conta(){
	if (t != NULL)
		delete t;
}
