#pragma once
#include "Conta.h"
#include <list>

//De forma agilizar a implementa��o do sistema e as futuras 
//evolu��es do mesmo,
//implemente a classe GestorConta que tem como objetivo 
//permitir gerir um conjunto de
//contas que deve ser armazenado num Vetor / Lista dinamicamente.
//3. Implemente a Classe GestorConta, e um m�todo CriarConta, 
//que deve pedir ao utilizador
//todos os dados necess�rios para criar uma conta e o tipo de 
//Titular de conta a criar, e
//acrescentar o titular criado � sua lista.


class GestorConta
{
private:
	list<Conta> lista;
public:
	GestorConta() {};
	~GestorConta() {};
	void CriarConta(void);
	void ApresentaInformacao(void);
	void PagarJuros(void);
	void DebitarManuten��oConta();
};

/*
5. Implemente o m�todo PagarJuros na classe GestorConta 
que permite calcular o
total de juros a pagar aos Clientes, e que deve 
adicionar este valor ao saldo da conta
corrente do utilizador
*/
/*
6. Implemente o M�todo DebitarManuten��oConta() 
na classe GestorConta para
subtrair aos clientes o valor da manuten��o de 
conta ao saldo atual, de acordo com o
tipo de titular de conta.
*/