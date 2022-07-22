/*#include <iostream>
using namespace std;

int main()
{
	//variáveis
	int idade = 0;
	char nome[30] = "";
	char a = '0';
	float f = 0.0;
	//Inicialização

	//programa
	cout << "Escreva o seu nome: " << endl;
	cin >> nome;
	cout << "Insira a sua idade: " << endl;
	cin >> idade;
	cout << "Insira um char: " << endl;
	cin >> a;
	cout << "Insira um float: " << endl;
	cin >> f;

	cout << "O seu nome e: " << nome << " e tem: " << idade 
		<< "anos" << endl << "char "<< a << "float: " << f;
	
	//saída
	cout << endl;
	system("pause");
	return (0);
}
/**/

/*
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main(void)
{
	FILE* f1, * f2;
	int a, b;
	// abre o ficheiro dados_ent.txt no modo de leitura e associa-o a f1
	if ((f1 = fopen("dados_ent.txt", "r")) == NULL) {
		printf("ERRO: não é possível abrir o ficheiro dados_ent.txt\n");
		exit(1);
	}
	// abre o ficheiro dados_saida.txt no modo de escrita e associa-o a f2
	if ((f2 = fopen("dados_saida.txt", "w")) == NULL) {
		printf("ERRO: não é possível abrir o ficheiro dados_saida.txt\n");
		exit(1);
	}
	(void)fscanf(f1, "%d", &a); // leitura e escrita
	(void)fscanf(f1, "%d", &b);
	printf("%d %d\n", a, b);
	fprintf(f2, "Este ficheiro foi alterado na aula Nº .\n");
	fprintf(f2, "%d\n", a * a);
	fprintf(f2, "%d\n", b * b);
	fclose(f1); // fecha o ficheiro associado a f1
	fclose(f2); // fecha o ficheiro associado a f2
	system("pause");
	return 0;
}
*/

#include <iostream>
#include <fstream>
#include <string>
#include "Data.h"
using namespace std;

//int main(void){
//
//	Data d1, d2(14, 8, 2000);
//	Data vec[88];
//	
//
//	//cout << endl; d1.show();
//
//	//int _dia = 0, _mes = 0, _ano = 0;
//	//cout << "Dia: "; cin >> _dia; 	//d1.setDia(_dia);
//	//cout << "Mes: "; cin >> _mes; 	//d1.setMes(_mes);
//	//cout << "Ano: "; cin >> _ano; 	//d1.setAno(_ano);
//	//d1.update(_dia, _mes, _ano);
////	d1.readK();
//
//	//d1.update(14, 8, 2000);
//	//if (d1 != d2) {
//	//	cout << endl << "Datas iguais!";
//	//}
//	//else {
//	//	cout << endl << "Datas diferentes!";
//	//}
//
//	cout << endl; d1.show(); d2.show();
//	d1 = d1 + d2;
////	cin >> d2;
//	cout << endl << d1 << d2;
//
//	//ofstream os;
//	//os.open("dados.txt");
//	//if (os) {
//	//	d2.saveFile(os);
//	//	os.close();
//	//}
//
//	cout << endl << "antes" << d1;
//
//	ifstream is;
//	is.open("dados.txt");
//	if (is) {
//		d1.readFile(is);
//		is.close();
//	}
//
//	cout << endl << "depois" << d1;
//	
//	cout << endl << endl;
//	system("pause");
//	return 0;
//}

#include "Pessoa.h"

////int main(void) {
////
////	//string _aux;
////	//Data auxData(1, 2, 3);
////	//Pessoa P, Q("Manel", "Rua do Manel", auxData);
////	//
////	////i.Jonas Culatra; 20 / 9 / 1987; Rua da direita n 2.
////	////	ii.Joni Rato; 4 / 2 / 1990; Rua da esquerda n 3.
////	//Pessoa jonas("Jonas Culatra", "Rua da direita n 2", Data(20,9,1987)),
////	//	joni("Joni Rato", "Rua da esquerda n 3", Data(4, 2, 1990));
////	//
////	////d) Altere a morada do “Joni Rato”. 
////	////A nova morada deve ser lida através do teclado.
////	//
////	//cout << endl << "Antes: ";
////	//joni.show();
////	//
////	//cout << endl << "insira morada: ";
////	//getline(cin, _aux, '\n');
////	//joni.setMorada(_aux);
////	//
////	//cout << endl << "Depois: ";
////	//joni.show();
////	//
////	////Altere a data de nascimento do “Joni Rato”.
////	////A nova data de nascimento deve ser lida através do teclado.
////	//
////	//Data daux;
////	//cout << endl << "insira a data de Nasc: ";
////	//daux.readK();
////	//joni.setDatan(daux);
////	//
////	//cout << endl << "Depois: ";
////	//joni.show();
////
////	//Pessoa P3;
////	//cout << endl << "Antes: "; P3.show();
////	//cin >> P3;
////	//cout << endl << "Depois: " << P3;
////
////
//////	Pessoa P1("nome1", "morada1", Data(1, 1, 1111)),
////	//	   P2("nome2", "morada2", Data(2, 2, 2222));
////
////	//Deve ser apresentado no ecrã a informação 
////	//completa da Pessoa mais nova.
////	//if (P1.maisNovo(P2)) {
////	//	cout << endl << P1;
////	//}
////	//else {
////	//	if (P2.maisNovo(P1)) {
////	//		cout << endl << P2;
////	//	}
////	//	else {
////	//		cout << endl << "têm a mesma idade";
////	//	}
////	//}
////
/////*
////	ofstream os;
////	string filename = "out.txt";
////
////	//cout << endl << "Nome do ficheiro: ";
////	//cin >> filename;
////
////	os.open(filename);
////	if (os.is_open()) {
////		P1.saveFile(os);
////		os << endl;
////		P2.saveFile(os);
////		os.close();
////	}
////	*/
////	/*
////	ifstream is;
////	string filename = "out.txt";
////
////	//cout << endl << "Nome do ficheiro: ";
////	//cin >> filename;
////
////	is.open(filename);
////	if (is.is_open()) {
////		P1.readFile(is);
////		is.get();
////		P2.readFile(is);
////		is.close();
////	}
////
////	cout << endl << P1 << endl << endl << P2;
////	*/
////
////	Pessoa vec[10];
////	ifstream is;
////	string filename = "out.txt";
////
////	//cout << endl << "Nome do ficheiro: ";
////	//cin >> filename;
////
////	int n = 0;
////	is.open(filename);
////	if (is.is_open()) {
////		while(!is.eof()) {
////			vec[n].readFile(is);
////			is.get();
////			n++;
////		}
////		is.close();
////	}
////
////	Pessoa P("", "", Data(1,1,1990));
////
////	for (int i = 0; i < n; i++) {
////		if (P.maisNovo(vec[i])) {
////			cout << endl << endl << vec[i];
////		}
////	}
////
////	Data D(1, 1, 1990);
////
////	for (int i = 0; i < n; i++) {
////		if (vec[i].getDatan() < D) {
////			cout << endl << endl << vec[i];
////		}
////	}
////
////
////
////	cout << endl << endl;
////	system("pause");
////	return 0;
////}


#include "Funcionario.h"
#include "Administrativo.h"
#include "Operario.h"

#include "Gestor_Func.h"

//int main(void) {
//
//	Funcionario 
//		Joca("Joca Gaio", "Rua da direita n 2", 20, 9, 1987, 25023, "Pintura"),
//		Ana("Ana Rola", "Rua da esquerda n 3", 4, 2, 1990, 25024, " Comercial");
//
//	//5.6. Atualize a morada do “Joca Gaio” para 
//	//“Rua do meio n 4” e o setor para “Ferragem”.
//	Joca.setMorada("Rua do meio n 4");
//	Joca.setSetor("Ferragem");
//
//	//5.7. Na data de nascimento da “Ana Rola”, 
//	//altere o dia para “23”.
//
//	Ana.setDatan(Data(23, Ana.getDatan().getMes(), Ana.getDatan().getAno()));
//
//	cout << endl;
//	cout << endl; Joca.show();
//	cout << endl;
//	cout << endl; Ana.show();
//
//	Funcionario F[2];
//	F[0].update("Daniel", "Morada do Daniel", 11, 11, 1111, 12345, "setor1");
//	F[1].update("Maria", " Morada da Maria ", 22, 12, 1122, 12346, "setor2");
////	cin >> F[0];
////	cin >> F[1];
//
//	ofstream os;
//	string filename = "out.txt";
//	
////	cout << endl << "Nome do ficheiro: ";
////	cin >> filename;
//	
//	os.open(filename);
//	if (os.is_open()) {
//		Joca.saveFile(os); 		os << endl;
//		Ana.saveFile(os); 		os << endl;
//		F[0].saveFile(os); 		os << endl;
//		F[1].saveFile(os); 		os << endl;
//		os.close();
//	}
//
//
//
//	cout << endl << endl;
//	system("pause");
//	return 0;
//}

char menu(void) {

	char opt = '0';

	system("pause");
	do {
		system("cls");
		cout << endl << "Menu" << endl;

		cout << "a) Leitura de ficheiro." << endl;
		cout << "b) Calcular e apresentar ordenados." << endl;
		cout << "c) Pesquisar um funcionário pelo seu numero" << endl;
		cout << "d) Alterar o ordenado base de um funcionário, identificado pelo seu número" << endl;
		cout << "e) Adicionar ao vetor um Operario ou Administrativo, à escolha do utilizador." << endl;
		cout << "f) Apresentar o nome dos operários que trabalham por turnos."<< endl;
		cout << "g) Eliminar do vetor um funcionário, identificado pelo número." << endl;
		cout << "h) Guardar, num ficheiro “Administrativos.txt”, os dados dos Administrativos." << endl;
		cout << "i) Guardar, num ficheiro “Operarios.txt”, os dados dos Operári" << endl;
		cout << "j) Ordenar as listas." << endl;
		cout << "k) Maior Elemento da lista." << endl;
		//...
		cout << "x) sair" << endl;
		cout << endl;
		cout << endl << "Escola a opcao: "; cin >> opt;
	} while (opt != 'a' && opt != 'b' && opt != 'c' 
		&& opt != 'd' && opt != 'e' && opt != 'f'
		&& opt != 'g' && opt != 'h' && opt != 'i' 
		&& opt != 'j' && opt != 'k' && opt != 'x');

	return opt;
}


#define N 9
int main(void) {

	Gestor_Func GF;

	char opt = '0';
	ifstream is;
	string filename = "dadosF.txt";

//	char aux = '0';
//	int num = 0, i = 0;

	while (opt != 'x')	{
		opt = menu();
		switch (opt){
		case 'a': {
			/*---------GF----------*/
			is.open(filename);
			if (is.is_open()) {
				GF.readFile(is);
				is.close();
			}
			/*---------GF----------*/
			/*--------MAP----------*/
			GF.gerarMapa();
			/*---------------------*/
			cout << endl << "ler do ficheiro";
			break;
		}
		case 'b': {
			cout << endl << "Ordenados lista" << endl;
			/*---------GF----------*/
			cout << endl;
			GF.ShowFunc();
			/*---------GF----------*/
			/*--------MAP----------*/
			cout << endl << "Ordenados mapa" << endl;
			GF.showMap();
			/*---------------------*/
			break;
		}
		case 'c': {
			int num = 0;
			cout << "Insira o numero a procurar: ";
			cin >> num;
			GF.find(num);
			break;
		}
		case 'd': {
			int num = 0;
			cout << "Insira o numero a procurar: ";
			cin >> num;
			//GF.alteraOrdenado(num);
			break;
		}
		case 'e': {
			/*---------GF----------*/
			GF.addFunc();
			/*---------GF----------*/
			break;
		}
		case 'f': {
			//GF.ShowFuncTurnos();
			break;
		}
		case 'g': {
			/*---------GF----------*/
			int num = 0;
			cout << endl << "Insira o numero do funcionario a eliminar: ";
			cin >> num;
			GF.remove(num);
			/*---------GF----------*/
			break;
		}
		case 'h': {
			ofstream os;
			/*---------GF----------*/
			os.open("Administrativos.txt");
			if (os.is_open()) {
				GF.saveFile(os, 'A');
				os.close();
			}
			/*---------GF----------*/
			break;
		}
		case 'i': {
			ofstream os;
			/*---------GF----------*/
			os.open("Operarios.txt");
			if (os.is_open()) {
				GF.saveFile(os, 'O');
				os.close();
			}
			/*---------GF----------*/
			break;
		}
		case 'j': {		
			/*---------GF----------*/
			GF.orderList();
			/*---------GF----------*/
			break;
		}
		case 'k': {
			/*---------GF----------*/
			Func* faux = NULL;
			faux = GF.maxName();
			cout << endl << "Maior: " << endl;
			faux->show();
			cout << endl;
			/*---------GF----------*/
			break;
		}
		default: {
			cout << endl << "default";
			break;
		}
		}
	}

	cout << endl << endl;
	system("pause");
	return 0;
}


//#define N 9
//int main(void) {
//
//	Gestor_Func GF;
//
//	cout << endl << " Tamanho: " << GF.getSize();
//
//	char opt = '0';
//	ifstream is;
//	string filename = "dadosF.txt";
//	Funcionario* F[N];
//	int nF = 0;
//	char aux = '0';
//	int num = 0, i = 0;
//	
//	while (opt != 'x')
//	{
//		opt = menu();
//		switch (opt)
//		{
//		case 'a': {
//			is.open(filename);
//			if (is.is_open()) {
//				while (nF < 9 && !is.eof()) {
//					is >> aux;
//					if (aux == 'A') {
//						is >> aux;	//descartar os ':'
//						F[nF] = new Administrativo;
//						F[nF]->readFile(is);
//						aux = is.get();//ler endl
//						nF++;
//					}
//					if (aux == 'O') {
//						is >> aux;	//descartar os ':'
//						F[nF] = new Operario;
//						F[nF]->readFile(is);
//						aux = is.get();//ler endl
//						nF++;
//					}
//				}
//				is.close();
//			}
//			cout << endl << "ler do ficheiro";
//			/*---------GF----------*/
//			is.open(filename);
//			if (is.is_open()) {
//				GF.readFile(is);
//				is.close();
//			}
//			/*---------GF----------*/
//			break;
//		}
//		case 'b': {
//			cout << endl << "Ordenados" << endl;
//			for (int i = 0; i < nF; i++) {
//				cout << endl
//					<< F[i]->getNum_func() << '\t'
//					<< F[i]->getNome() << '\t'
//					<< F[i]->Calcula_ordenado();
//			}
//			/*---------GF----------*/
//			cout << endl;
//			GF.ShowFunc();
//			/*---------GF----------*/
//			break;
//		}
//		case 'c': {
//			cout << endl << "Insira o numero do funcionario: ";
//			cin >> num;
//			for (i = 0; i < nF; i++) {
//				if (F[i]->getNum_func() == num) {
//					cout << endl;
//					F[i]->show();
//					break;
//				}
//			}
//			if (i == nF) {
//				cout << endl << "Nao encontrado";
//			}
//			break;
//		}
//		case 'd': {
//			cout << endl << "Insira o numero do funcionario: ";
//			cin >> num;
//			for (i = 0; i < nF; i++) {
//				if (F[i]->getNum_func() == num) {
//					cout << endl << "Insira o novo ordenado";
//					float auxf = 0.0f;
//					cin >> auxf;
//					F[i]->setOrd_base(auxf);					
//					break;
//				}
//			}
//			if (i == nF) {
//				cout << endl << "Nao encontrado";
//			}
//			break;
//		}
//		case 'e': {
//			if (nF >= N) {
//				cout << endl << "Vetor cheio.";
//			} else {
//				char auxc = '0';
//				cout << endl << "Operario / Admin (O/A): ";
//				cin >> auxc; cin.get();
//				if (auxc == 'o' || auxc == 'O' || auxc == 'a' || auxc == 'A') {
//					if (auxc == 'o' || auxc == 'O') {
//						F[nF] = new Operario;
//					} else {
//						F[nF] = new Administrativo;
//					}
//					F[nF]->readK();
//					nF++;
//				} else {
//					cout << endl << "Opcao Errada";
//				}
//			}
//
//			/*---------GF----------*/
//			if(F[nF-1] != NULL)
//				GF.addFunc(F[nF-1]);
//			/*---------GF----------*/
//			break;
//		}
//		case 'f': {
//			Operario* Op = NULL;
//			for (int i = 0; i < nF; i++){
//				Op = dynamic_cast <Operario*> (F[i]);
//				if (Op != NULL) {
//					if (Op->getTurno()) {
//						Op->show();
//					}
//				}
//			}
//			break;
//		}
//		case 'g': {
//			cout << endl << "Insira o numero do funcionario a eliminar: ";
//			cin >> num;
//			for (i = 0; i < nF; i++) {
//				if (F[i]->getNum_func() == num) {
//					delete	F[i];
//					cout << endl << "Funcionario Eliminado";
//					for (int j = i; j < nF-1; j++){
//						F[j] = F[j + 1];
//					}
//					F[nF-1] = NULL;
//					nF--;
//					break;
//				}
//			}
//			if (i == nF) {
//				cout << endl << "Nao encontrado";
//			}
//			/*---------GF----------*/
//			//cout << endl << "Insira o numero do funcionario a eliminar: ";
//			//cin >> num;
//			GF.remove(num);
//			/*---------GF----------*/
//			break;
//		}
//		case 'h': {
//			ofstream os;
//			os.open("Administrativos.txt");
//			if (os.is_open()) {
//				Administrativo* Ad = NULL;
//				for (int i = 0; i < nF; i++){
//					Ad = dynamic_cast <Administrativo*>(F[i]);
//					if (Ad != NULL) {
//						Ad->saveFile(os);
//					}
//				}
//				os.close();
//			}
//			break;
//		}
//		case 'i': {
//			ofstream os;
//			os.open("Operarios.txt");
//			if (os.is_open()) {
//				Operario* Ad = NULL;
//				for (int i = 0; i < nF; i++) {
//					Ad = dynamic_cast <Operario*>(F[i]);
//					if (Ad != NULL) {
//						Ad->saveFile(os);
//					}
//				}
//				os.close();
//			}
//			/*---------GF----------*/
//			os.open("Operarios.txt");
//			if (os.is_open()) {
//				GF.saveFile(os);
//				os.close();
//			}
//			/*---------GF----------*/
//			break;
//		}
//		default:{
//			cout << endl << "default";
//			break;
//			}
//		}
//	}
//
//	for (int i = 0; i < nF; i++) {
//		delete F[i];
//	}
//	cout << endl << endl;
//	system("pause");
//	return 0;
//}