#pragma once
#include <iostream>
#include <list>
#include <algorithm>
#include <map>

#include "Funcionario.h"
#include "Administrativo.h"
#include "Operario.h"

using namespace std;

typedef Funcionario Func;
typedef Administrativo Admin;
typedef Operario Oper;

class Gestor_Func
{
private:
	list<Func*> lst;
	map<int, float> mapa_ordenados;
public:
	Gestor_Func();
	virtual ~Gestor_Func();

	//Métodos de acesso
	int getSize(void) const;
	list<Func*> getList(void) { return lst; }
	list<Func*>::iterator getFirst(void);

	virtual void readFile(ifstream& is);
	virtual void saveFile(ofstream& os);
	virtual void saveFile(ofstream& os, char opt);
	virtual void ShowFunc(void);

	virtual void addFunc(void);
	virtual void addFunc(char auxc);
	virtual void addFunc(Func* F);

	virtual void remove(const int num);
	virtual bool find(const int num);

	friend ostream& operator << (ostream& os, Gestor_Func GF);
	friend istream& operator >> (istream& is, Gestor_Func& GF);

	void orderList(void);
	Func* maxName(void);

	void gerarMapa(void);
	void showMap(void);
};

