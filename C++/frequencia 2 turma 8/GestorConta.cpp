#include "GestorConta.h"

void GestorConta::CriarConta(void){

	char tipo = '0';
	// inserir S, L ou P
	while (tipo != 'S' && tipo != 'L' && tipo != 'P')	{
		cout << endl << "Insira o tipo de cliente Std / sLt / Plt: ";
		cin >> tipo;
	}

	Titular* _t = NULL;
	float _s;
	int _d, _m, _a;
	float _vi;

	cout << endl << "Insira o valor do saldo: ";
	cin >> _s;
	cout << endl << "Insira data (dd/mm/aaaa): ";
	cin >> _d; cin >> _m; cin >> _a;
	_vi = 0;

	if (tipo == 'S') {//standart
		_t = new Standart();
	}
	if (tipo == 'L') {//select
		_t = new Select();
		while (_vi < 10000)	{
			cout << endl << "Insira o valor do investimento > 10k: ";
			cin >> _vi;
		}
	}
	if (tipo == 'P') {//select
		_t = new Platina();
		while (_vi < 50000) {
			cout << endl << "Insira o valor do investimento > 50k: ";
			cin >> _vi;
		}
	}

	Conta tmp(_t, _s, _d, _m, _a, _vi);
	lista.push_front(tmp);
}

void GestorConta::ApresentaInformacao(void){
	list<Conta>::iterator it = lista.begin();

	Platina* P; 
	Standart* S;
	Standart* L;

	while (it != lista.end()) {
		cout << endl << "Nome: \t\t " << (*it).getTitular()->getNome();
		cout << endl << "Perfil: \t\t ";
		P = dynamic_cast<Platina*>(it->getTitular());
		S = dynamic_cast<Standart*>(it->getTitular());
		L = dynamic_cast<Standart*>(it->getTitular());
		if (P != NULL) cout << "Platina";
		if (S != NULL) cout << "Standart";
		if (L != NULL) cout << "Select";
		cout << endl << "Saldo: \t\t " << (*it).getSaldo();
		cout << endl << "Investimento/Juros: \t\t " 
			<< (*it).getInvestimento() << "/"
			<< (*it).getInvestimento() * (*it).getTitular()->getJuros();

		it++;
	}
}

void GestorConta::PagarJuros(void){
	list<Conta>::iterator it = lista.begin();
	float juros;
	while (it != lista.end()) {
		juros = it->getInvestimento() * (*it).getTitular()->getJuros();
		it->setSaldo(juros + it->getSaldo());

		it++;
	}
}

void GestorConta::DebitarManutençãoConta(){
	list<Conta>::iterator it = lista.begin();
	Platina* P;
	Standart* S;
	Standart* L;

	float manutencao = 0;
	while (it != lista.end()) {
		P = dynamic_cast<Platina*>(it->getTitular());
		S = dynamic_cast<Standart*>(it->getTitular());
		L = dynamic_cast<Standart*>(it->getTitular());
		if (P != NULL) manutencao = 150;
		if (S != NULL) manutencao =  25;
		if (L != NULL) manutencao = 100;
		
		it->setSaldo(it->getSaldo() - manutencao);
		it++;
	}
}
