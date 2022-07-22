#pragma once
#include "Funcionario.h"

class Administrativo : public Funcionario{

public:
	Administrativo();
	Administrativo(string _nome, string _morada, int dia, int mes, int ano,
		int _num_func, string _setor, float _ord_base, int _h_x, float _p_h_x);

	~Administrativo();
	virtual float Calcula_ordenado(void) const;

};

