#pragma once
#include <iostream>
#include <fstream>
#include "Data.h"
#include <string>

using namespace std;

class Pessoa
{
private:
	string nome, morada;
	Data datan;

public:
	Pessoa();
	Pessoa(string _nome, string _morada, Data _datan);
	Pessoa(string _nome, string _morada, int dia, int mes, int ano);
	~Pessoa();

	//métodos de acesso definidos inline
	string	getNome(void)	const { return nome; }		//inline
	string	getMorada(void)	const { return morada; }
	Data	getDatan(void)	const { return datan; }

	void	setNome(string _nome)	{ nome = _nome; }
	void	setMorada(string _mor)	{ morada = _mor; }
	void	setDatan(Data _datan)	{ datan = _datan; }
	//Implemente a sobrecarga dos operadores “<<” e “>> “ 
	//na classe Pessoa.
	friend ostream& operator << (ostream& os, const Pessoa P);
	friend istream& operator >> (istream& is, Pessoa& P);
	
	
	//Outros métodos
	virtual void show(void) const;
	void update(string _nome, string _morada, int dia, int mes, int ano);
	virtual void readK(void);

	bool operator == (const Pessoa other) const;
	bool operator != (const Pessoa other) const;
	bool operator > (const Pessoa other) const;
	bool operator < (const Pessoa other) const;

	//Implemente o método MaisNovo() para verificar 
	//entre duas pessoas qual é a mais nova.
	bool maisNovo(const Pessoa other) const;

	virtual void saveFile(ofstream& os) const;
	virtual void readFile(ifstream& is);
};

