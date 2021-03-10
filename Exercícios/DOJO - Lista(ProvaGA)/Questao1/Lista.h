#pragma once
#include "No.h"
class Lista
{
public:
	Lista();
	virtual ~Lista();
	void adicionaElemento(No* elemento);
	No * obtemTodosElementos();
	int obtemTamanhoLista();
	No* removeUltimoNo();


private:
	No * inicio_lista;
	No * fim_lista;
	int quantidadeNos;
};

