#include "Administrativo.h"

Administrativo::Administrativo() : Funcionario(){
	setP_H_X(10);
}

Administrativo::Administrativo(string _nome, string _morada, int dia, int mes, int ano, 
	int _num_func, string _setor, float _ord_base, int _h_x, float _p_h_x)
	:Funcionario(_nome, _morada, dia, mes, ano, _num_func, _setor, 
		_ord_base, _h_x, _p_h_x)
{
	setP_H_X(10);
}

Administrativo::~Administrativo(){}

float Administrativo::Calcula_ordenado(void) const{
	return (getOrd_base() + getH_Extra() * getP_H_X());
}
