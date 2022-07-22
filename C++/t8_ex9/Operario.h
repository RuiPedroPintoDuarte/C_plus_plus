#pragma once
#include "Funcionario.h"
class Operario : public Funcionario
{
private:
	bool f_turno;
public:
	Operario();
	Operario(string _nome, string _morada, int dia, int mes, int ano,
		int _num_func, string _setor, 
		float _ord_base, int _h_x, float _p_h_x,
		bool _f_turno
	);

	~Operario();

	bool getTurno(void) const { return f_turno; }
	void setTurno(bool _t)  { f_turno = _t; }

	virtual void show(void) const;
	virtual void readK(void);

	virtual float Calcula_ordenado(void) const;

	virtual void readFile(ifstream& is);
};

