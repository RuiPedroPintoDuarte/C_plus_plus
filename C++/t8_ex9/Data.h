#pragma once
#include <iostream>
#include <fstream>

using namespace std;

class Data{

private:
	int dia, mes, ano;
//protected:

public:
	Data();
	Data(int _dia, int _mes, int _ano);
	~Data();

	//métodos de acesso de leitura
	int getDia(void) const { return dia; }	//método inline
	int getMes(void) const { return mes; }
	int getAno(void) const { return ano; }

	//métodos de acesso de escrita
	void setDia(int _dia);
	void setMes(int _mes);
	void setAno(int _ano) { ano = _ano; }

	//Outros métodos
	void show(void) const;
	void update(int _dia, int _mes, int _ano);
	void readK(void);

	//Folha 1 exe3 f)
	bool igual(const Data other) const;

	//operadores
	bool operator == (const Data other) const;
	bool operator != (const Data other) const;
	bool operator > (const Data other) const;
	bool operator < (const Data other) const;

	Data operator + (const Data other) const;

	//
	friend ostream& operator << (ostream& os, const Data d);
	friend istream& operator >> (istream& is, Data& d);

	void saveFile(ofstream& os) const;
	void readFile(ifstream& is);

};

