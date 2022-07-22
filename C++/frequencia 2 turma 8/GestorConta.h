#pragma once
#include "Conta.h"
#include <list>

//De forma agilizar a implementação do sistema e as futuras 
//evoluções do mesmo,
//implemente a classe GestorConta que tem como objetivo 
//permitir gerir um conjunto de
//contas que deve ser armazenado num Vetor / Lista dinamicamente.
//3. Implemente a Classe GestorConta, e um método CriarConta, 
//que deve pedir ao utilizador
//todos os dados necessários para criar uma conta e o tipo de 
//Titular de conta a criar, e
//acrescentar o titular criado à sua lista.


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
	void DebitarManutençãoConta();
};

/*
5. Implemente o método PagarJuros na classe GestorConta 
que permite calcular o
total de juros a pagar aos Clientes, e que deve 
adicionar este valor ao saldo da conta
corrente do utilizador
*/
/*
6. Implemente o Método DebitarManutençãoConta() 
na classe GestorConta para
subtrair aos clientes o valor da manutenção de 
conta ao saldo atual, de acordo com o
tipo de titular de conta.
*/