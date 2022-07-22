#include "Funcionario.h"

Funcionario::Funcionario() : Pessoa(){
	num_func = 0;
	setor = "setor";
	ord_base = 800;
	h_extra = 0;
	p_hora_extra = 0;

	setNome("Sr. " + getNome());
}

Funcionario::Funcionario(string _nome, string _morada, int dia, int mes, int ano,
	int _num_func, string _setor) : Pessoa(_nome, _morada, dia, mes, ano){
	
	num_func = _num_func;
	setor = _setor;
	ord_base = 800;
	h_extra = 0;
	p_hora_extra = 0;
}

Funcionario::Funcionario(string _nome, string _morada, int dia, int mes, int ano, 
	int _num_func, string _setor, float _ord_base, int _h_x, float _p_h_x) 
	: Pessoa(_nome, _morada, dia, mes, ano){
	num_func = _num_func;
	setor = _setor;
	ord_base = _ord_base;
	h_extra = _h_x;
	p_hora_extra = _p_h_x;
}

Funcionario::~Funcionario(){}

void Funcionario::show(void) const{
	Pessoa::show();

	cout << endl << "Numero: " << getNum_func();
	cout << endl << "Setor: " << getSetor();
	cout << endl << "Ordenado: " << getOrd_base();
	cout << endl << "H_Extra: " << getH_Extra();
	cout << endl << "P_H_Extra: " << getP_H_X();
}

void Funcionario::readK(void){
	Pessoa::readK();

	cout << endl << "insira o numero do Funcionario: ";
	cin >> num_func; cin.get();
	cout << endl << "insira o setor: ";
	getline(cin, setor, '\n');
	cout << endl << "insira o ordenado base: ";
	cin >> ord_base; cin.get();
	
	h_extra = 0;
}
void Funcionario::update(string _nome, string _morada, int dia, int mes, 
	int ano, int _num_func, string _setor, 
	float _ord_base, int _h_x, float _p_h_x){
	Pessoa::update(_nome, _morada, dia, mes, ano);
	num_func = _num_func;
	setor = _setor;
	ord_base = _ord_base;
	h_extra = _h_x;
	p_hora_extra = _p_h_x;
}

istream& operator>>(istream& is, Funcionario& F){
	// TODO: insert return statement here

	is >> (Pessoa&)F;

	cout << endl << "insira o numero: ";
	is >> F.num_func; is.get();
	cout << endl << "insira o setor: ";
	getline(is, F.setor, '\n');
	cout << endl << "insira o ordenado base: ";
	is >> F.ord_base; is.get();

	cout << endl << "insira as horas extra: ";
	is >> F.h_extra; is.get();
	cout << endl << "insira o preco das horas extra: ";
	is >> F.p_hora_extra; is.get();
	return is;
}
ostream& operator<<(ostream& os, const Funcionario& F){
	os << (Pessoa&)F;
	os << endl << "Numero: " << F.getNum_func();
	os << endl << "Setor: " << F.getSetor();
	os << endl << "Ord Base: " << F.getOrd_base();
	os << endl << "Horas Extra: " << F.getH_Extra();

	return os;
}

void Funcionario::saveFile(ofstream& os) const{
	Pessoa::saveFile(os);
	os << getNum_func() << ';' << getSetor() << ';' 
		<< getOrd_base() <<';' << getH_Extra() << ';';
}
void Funcionario::readFile(ifstream& is){
	Pessoa::readFile(is);
	char aux[9] = "";
	is.getline(aux, sizeof(aux), ';');//lê até ';' e descarta ';'
	num_func = atoi(aux);
	getline(is, setor, ';');//lê até ';' e descarta ';'
	is.getline(aux, sizeof(aux), ';');//lê até ';' e descarta ';'
	ord_base = (float)atof(aux);

	is.getline(aux, sizeof(aux), ';');//lê até ';' e descarta ';'
	h_extra = atoi(aux);
	//is.getline(aux, sizeof(aux), ';');//lê até ';' e descarta ';'
	//p_hora_extra = (float)atof(aux);
}

