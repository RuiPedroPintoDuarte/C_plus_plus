#include "Pessoa.h"

Pessoa::Pessoa(){
	nome = "defeito";
	morada = "sem morada";
	datan = Data(0,0,2000);
}

Pessoa::Pessoa(string _nome, string _morada, Data _datan){
	nome = _nome;
	morada = _morada;
	datan = _datan;
}
Pessoa::Pessoa(string _nome, string _morada, int dia, int mes, int ano){
	nome = _nome;
	morada = _morada;
	datan.update(dia, mes, ano);
}
Pessoa::~Pessoa(){}

void Pessoa::show(void) const{
	cout << endl << "Nome: " << getNome();
	cout << endl << "Morada: " << getMorada();
	cout << endl << "Data: " << getDatan();
}
void Pessoa::update(string _nome, string _morada, int dia, int mes, int ano){
	nome = _nome;
	morada = _morada;
	datan.update(dia, mes, ano);
}
void Pessoa::readK(void){
	string _aux = "";
	cout << endl << "insira o nome: ";
	getline(cin, _aux, '\n');
	setNome(_aux);
	cout << endl << "insira morada: ";
	getline(cin, _aux, '\n');
	setMorada(_aux);

	cout << endl << "insira a data de Nasc: ";
	datan.readK();
}

ostream& operator<<(ostream& os, const Pessoa P){
	// TODO: insert return statement here
	os << endl << "Nome: " << P.getNome();
	os << endl << "Morada: " << P.getMorada();
	os << endl << "Data: " << P.getDatan();

	return os;
}
istream& operator>>(istream& is, Pessoa& P){
	// TODO: insert return statement here
	string _aux = "";
	cout << endl << "insira o nome: ";
	getline(is, _aux, '\n');
	P.setNome(_aux);
	cout << endl << "insira morada: ";
	getline(is, _aux, '\n');
	P.setMorada(_aux);

	cout << endl << "insira a data de Nasc: ";
	is >> P.datan;

	return is;
}

//faz a comparação do nome e data de nascimento;
bool Pessoa::operator==(const Pessoa other) const {
	if (this->getNome() != other.getNome()) {
		return false;
	}
	if (this->getDatan() != other.getDatan()) {
		return false;
	}
	return true;
}
bool Pessoa::operator!=(const Pessoa other) const{
	return !(this->operator==(other));
}

bool Pessoa::operator>(const Pessoa other) const{
	return this->getNome() > other.getNome();
}
bool Pessoa::operator<(const Pessoa other) const{
	return this->getNome() < other.getNome();
}

bool Pessoa::maisNovo(const Pessoa other) const{
	if (this->getDatan() > other.getDatan()) {
		return true;
	}
	return false;
}
void Pessoa::saveFile(ofstream& os) const{
	os << getNome() << ';' << getMorada() << ';';
	datan.saveFile(os);
	os << ';';
}
void Pessoa::readFile(ifstream& is){
	getline(is, nome, ';');//lê até ';' e descarta ';'
	getline(is, morada, ';');//lê até ';' e descarta ';'
	datan.readFile(is);
	is.get();
}
