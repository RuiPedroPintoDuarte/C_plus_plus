#include "Gestor_Func.h"

Gestor_Func::Gestor_Func(){
	if (!lst.empty()) {
		lst.clear();
	}
}
Gestor_Func::~Gestor_Func(){
	if (!lst.empty()) {
		lst.clear();
	}
}
int Gestor_Func::getSize(void) const{
	return lst.size();
}
list<Func*>::iterator Gestor_Func::getFirst(void){
	return lst.begin();
}

void Gestor_Func::readFile(ifstream& is){
	char aux = '0';
	list<Func*>::iterator p = lst.begin();
	while (!is.eof()) {
		is >> aux;
		if (aux == 'A') {
			is >> aux;	//descartar os ':'
			lst.push_back(new Admin);
			lst.back()->readFile(is);	//referencia
			aux = is.get();//ler endl
		}
		if (aux == 'O') {
			is >> aux;	//descartar os ':'
			lst.push_front(new Oper);
			lst.front()->readFile(is);	//referencia
			aux = is.get();//ler endl
		}
	}
}

void Gestor_Func::saveFile(ofstream& os){
	list<Func*>::iterator p = lst.begin();
	Admin* A = NULL; Oper* O = NULL;

	while (p != lst.end()) {
		A = dynamic_cast <Admin*>(*p);
		if (A != NULL) {
			os << "A:";
			(*p)->saveFile(os); os << endl;
		}
		O = dynamic_cast <Oper*>(*p);
		if (O != NULL) {
			os << "O:";
			(*p)->saveFile(os); os << endl;
		}
	}
}
void Gestor_Func::saveFile(ofstream& os, char opt){
	list<Func*>::iterator p = lst.begin();
	Admin* A = NULL; Oper* O = NULL;

	if (opt == 'A' || opt == 'a') {
		while (p != lst.end()) {
			A = dynamic_cast <Admin*>(*p);
			if (A != NULL) {
				os << "A:";
				(*p)->saveFile(os); os << endl;
			}
		}
	}
	if (opt == 'O' || opt == 'o') {
		while (p != lst.end()) {
			O = dynamic_cast <Oper*>(*p);
			if (O != NULL) {
				os << "O:";
				(*p)->saveFile(os); os << endl;
			}
		}
	}
}
void Gestor_Func::ShowFunc(void){ //"Show"
//	cout << endl << "Ordenados" << endl;
	list<Func*>::iterator p = lst.begin();
	while (p != lst.end()) {
		cout << endl
			<< (*p)->getNum_func() << '\t'
			<< (*p)->getNome() << '\t'
			<< (*p)->Calcula_ordenado();
		p++;
	}
}
void Gestor_Func::addFunc(void) {
	char auxc = '0';
	cout << endl << "Operario / Admin (O/A): ";
	cin >> auxc; cin.get();
	addFunc(auxc);
}
void Gestor_Func::addFunc(char auxc) {
	if (auxc == 'o' || auxc == 'O' || auxc == 'a' || auxc == 'A') {
		if (auxc == 'o' || auxc == 'O') {
			lst.push_front(new Oper);
			lst.front()->readK();
		}
		else {
			lst.push_back(new Admin);
			lst.back()->readK();
		}
	}
	else {
		cout << endl << "Opcao Errada";
	}
}
void Gestor_Func::addFunc(Func* F){
	if (F == NULL)
		return;
	Admin* A = NULL; Oper* O = NULL;
	A = dynamic_cast <Admin*>(F);
	if (A != NULL) {
		lst.push_back(new Admin);
		*(lst.back()) = *F;
	}
	O = dynamic_cast <Oper*>(F);
	if (O != NULL) {
		lst.push_front(new Oper);
		*(lst.front()) = *F;
	}
}
void Gestor_Func::remove(const int num){
	list<Func*>::iterator p = lst.begin();
	bool flag = false;
	while (p != lst.end()) {
		if ((*p)->getNum_func() == num) {
			lst.erase(p);
			cout << endl << "Funcionario eliminado";
			flag = true;
			break;
		}
	}
	if (!flag) {
		cout << endl << "Nao encontrado";
	}
}

bool Gestor_Func::find(const int num){
	list<Func*>::iterator p = lst.begin();
	bool flag = false;
	while (p != lst.end()) {
		if ((*p)->getNum_func() == num) {
			(*p)->show();
			return true;
			//break;
		}
	}
	//if (!flag) {
	//	cout << endl << "Nao encontrado";
	//}
	return false;
}

bool compare(Func*& f1, Func*& f2) {
	return (f1->getNum_func() < f2->getNum_func());
}
void Gestor_Func::orderList(void){
	lst.sort(compare);
}

Func* Gestor_Func::maxName(void){
	list<Func*>::iterator p;
	p = max_element(lst.begin(), lst.end(), compare);
	return (*p);
}

void Gestor_Func::gerarMapa(void){
	list<Func*>::iterator p = lst.begin();

	while (p != lst.end()) {
		if (mapa_ordenados.insert(
			make_pair((*p)->getNum_func(), (*p)->Calcula_ordenado()
			)).second == false)
			cout << endl << "Numero de funcionário já existente.";
		p++;
	}
}

void Gestor_Func::showMap(void){
	map<int, float>::iterator it,
		it_ini = mapa_ordenados.begin(),
		it_end = mapa_ordenados.end();

	for (it = it_ini; it != it_end; it++) {
		cout << endl << it->first << "-->" << it->second;
	}
}

ostream& operator<<(ostream& os, Gestor_Func GF){
	// TODO: insert return statement here
	list<Func*>::iterator p = GF.lst.begin();
	while (p != GF.lst.end()) {
		os << endl;
		os << (Funcionario&)(*p);
		p++;
	}
	return os;
}
istream& operator >> (istream& is, Gestor_Func& GF){
	// TODO: insert return statement here
	list<Func*>::iterator p = GF.lst.begin();
	char auxc = '0';
	cout << endl << "Operario / Admin (O/A): ";
	cin >> auxc; cin.get();
	if (auxc == 'o' || auxc == 'O') {
		GF.lst.insert(p, new(Oper));
		(*p)->readK();
	}
	if (auxc == 'a' || auxc == 'A') {
		GF.lst.insert(p, new(Admin));
		(*p)->readK();;
	}

	return is;
}
