#include "Operario.h"

Operario::Operario():Funcionario(){
	f_turno = false; //não trabalha por turnos
	setP_H_X(8);
}

Operario::Operario(string _nome, string _morada, int dia, int mes, int ano, int _num_func, string _setor, float _ord_base, int _h_x, float _p_h_x, bool _f_turno)
	: Funcionario(_nome, _morada, dia, mes, ano, _num_func, _setor,
		_ord_base, _h_x, _p_h_x) 
{
	f_turno = false; //não trabalha por turnos
	setP_H_X(8);
}

Operario::~Operario(){}

void Operario::show(void) const
{
	Funcionario::show();
	cout << endl << "Turno: " << getTurno();
}

void Operario::readK(void){
	Funcionario::readK();

	cout << endl << "Turnos? s/n: ";
	char aux = '0';
	cin >> aux; cin.get();
	f_turno = false;
	if (aux == 's') {
		this->f_turno = true;
	}
}

float Operario::Calcula_ordenado(void) const{
	return (getOrd_base()*(1+0.25f*getTurno()) + getH_Extra() * getP_H_X());
}

void Operario::readFile(ifstream& is){
	char aux[9] = "";

	Funcionario::readFile(is);

	is.getline(aux, sizeof(aux), ';');//lê até ';' e descarta ';'
	f_turno = false;
	if (aux[0] == 's')
		f_turno = true;
}
