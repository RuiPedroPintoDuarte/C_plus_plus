#pragma once

class Data
{
private :

	int dia;
	int mes;
	int ano;

public:
	Data();
	Data(int dia, int mes , int ano );
	~Data();
	int GetDia() {return dia; }
	int GetMes() { return mes; }
	int GetAno() { return ano; }
	void SetDia(int d) {dia = d; }
	void SetMes(int m) {mes = m; }
	void SetAno(int a) {ano = a; }
	void show();
	void update(int d, int m, int a);
	bool Igual(const Data d);
	bool operator ==(const Data d);
	bool operator !=(const Data d);
	friend ostream & operator <<(ostream os, Data d);
};

