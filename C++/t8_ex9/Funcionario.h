#pragma once

#include <string>
#include "Pessoa.h"

class Funcionario: public Pessoa {
private:
	int num_func;	// (tipo inteiro)
	string	setor;	// (tipo string)
	float ord_base;	// (tipo float)
	int h_extra;	// (tipo inteiro)
	float p_hora_extra;// (tipo float)
public:
	Funcionario();
	Funcionario(string _nome, string _morada, int dia, int mes, int ano,
		int _num_func, string _setor);
	Funcionario(string _nome, string _morada, int dia, int mes, int ano,
		int _num_func, string _setor, float _ord_base, int _h_x, float _p_h_x);

	~Funcionario();

	int getNum_func(void) const { return num_func; }
	string	getSetor(void) const { return setor; }
	float getOrd_base(void)const { return ord_base; }
	int getH_Extra(void)const { return h_extra; }
	float getP_H_X(void)const { return p_hora_extra; }

	void setNum_func(int _num) { num_func = _num; }
	void setSetor(string _setor) { setor = _setor; }
	void setOrd_base(float _ord_base) { ord_base = _ord_base; }
	void setH_Extra(int _h_x) { h_extra = _h_x; }
	void setP_H_X(float _p_h_x) { p_hora_extra = _p_h_x; }

	//Outros métodos
	virtual void show(void) const;
	virtual void readK(void);
	void update(string _nome, string _morada, 
		int dia, int mes, int ano,
		int _num_func, string _setor, float _ord_base
		, int _h_x, float _p_h_x);//add

	friend istream& operator >> (istream& is, Funcionario& F);
	friend ostream& operator << (ostream& os, const Funcionario& F);

	virtual void saveFile(ofstream& os) const;
	virtual void readFile(ifstream& is);

	virtual float Calcula_ordenado(void) const = 0;

	
};

