#include "Data.h"

Data::Data(){
	dia = 0;
	mes = 0;
	ano = 0;
}

Data::Data(int _dia, int _mes, int _ano){
	dia = _dia;
	mes = _mes;
	ano = _ano;
}

Data::~Data()
{}

void Data::setDia(int _dia){
	if (_dia < 1 || _dia > 31) {
		return;
	}
	dia = _dia;
}

void Data::setMes(int _mes){
	if (_mes < 1 || mes >12) {
		return;
	}
	mes = _mes;
}

void Data::show(void) const{
	cout << '(' << getAno() << '/' << getMes() << '/' << getDia() << ')';
}

void Data::update(int _dia, int _mes, int _ano){
	setDia(_dia); // dia = _dia;
	mes = _mes;
	ano = _ano;
}

void Data::readK(void){
	//int _dia = 0, _mes = 0, _ano = 0;
	//cout << "Dia: "; cin >> _dia; 	//setDia(_dia);
	//cout << "Mes: "; cin >> _mes; 	//setMes(_mes);
	//cout << "Ano: "; cin >> _ano; 	//setAno(_ano);
	//update(_dia, _mes, _ano);

//	int _dia = 0, _mes = 0, _ano = 0;
	cout << "Dia: "; cin >> dia; 	//setDia(_dia);
	cout << "Mes: "; cin >> mes; 	//setMes(_mes);
	cout << "Ano: "; cin >> ano; 	//setAno(_ano);
//	update(_dia, _mes, _ano);

}

bool Data::igual(const Data other) const{

	if(this->getAno() != other.getAno())
		return false;
	if (getMes() != other.getMes())
		return false;
	if (getDia() != other.getDia())
		return false;
	return true;
}

bool Data::operator==(const Data other) const{
	return this->igual(other);
}

bool Data::operator!=(const Data other) const
{
	return !(this->operator==(other));
}

bool Data::operator>(const Data other) const{

	if (this->getAno() < other.getAno())
		return false;
	if (this->getAno() > other.getAno())
		return true;

	if (getMes() < other.getMes())
		return false;
	if (getMes() > other.getMes())
		return true;

	if (getDia() <= other.getDia())
		return false;
	return true;
}

bool Data::operator<(const Data other) const{
	if (this->operator>(other)) {
		return false;
	}
	if (this->operator==(other)) {
		return false;
	}
	return true;
}

Data Data::operator+(const Data other) const{
	Data aux;
	aux.ano = this->getAno() + other.getAno();
	aux.mes = this->getMes() + other.getMes();
	aux.dia = this->getDia() + other.getDia();
	
	return aux;
}

void Data::saveFile(ofstream& os) const{
	os << '(' << getDia() << '/' << getMes() << '/'
		<< getAno() << ')';
}

void Data::readFile(ifstream& is){
	char aux[10]= "";

	is.getline(aux, sizeof(aux), '(');//lê até '(' e descarta '('
	is.getline(aux, sizeof(aux), '/');//lê até '/' e descarta '/'
	dia = atoi(aux);
	is.getline(aux, sizeof(aux), '/');//lê até '/' e descarta '/'
	mes = atoi(aux);
	is.getline(aux, sizeof(aux), ')');//lê até ')' e descarta ')'
	ano = atoi(aux);
}

ostream& operator<<(ostream& os, const Data d){
	// TODO: insert return statement here
	os << '(' << d.getDia() << '/' << d.getMes() << '/' 
		<< d.getAno() << ')';
	return os;
}

istream& operator>>(istream& is, Data& d){
	// TODO: insert return statement here
	cout << "Dia: "; is >> d.dia;
	cout << "Mes: "; is >> d.mes; 
	cout << "Ano: "; is >> d.ano; 
	return is;
}
