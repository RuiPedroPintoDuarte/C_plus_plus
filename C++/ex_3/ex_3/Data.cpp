#include "Data.h"
#include <iostream>
using namespace std;
Data::Data()
{
	dia = 1; 
	mes = 1;
	ano = 1970;
}
Data::Data(int d, int m, int a)
{
	dia = d;
	mes = m;
	ano = a;
}
Data::~Data()
{
}

void Data::show()
{
	cout << " data : " << dia << "/" << mes << "/" << ano ; 
}

void Data::update(int d, int m, int a)
{
	dia = d;
	mes = m;
	ano = a;


}

bool Data::Igual(const Data d)
{
	if(dia==d.dia && mes== d.mes && ano==d.ano)
	return true;

	return false;
}

bool Data::operator==(const Data d)
{

	return false;
}

bool Data::operator!=(const Data d)
{
	return false;
}

ostream& operator<<(ostream os, Data d)
{
	// TODO: insert return statement here
}
