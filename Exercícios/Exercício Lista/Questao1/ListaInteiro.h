#pragma once
#include "Lista.h"
class ListaInteiro :
	public Lista
{
public:
	void adicionaElemento(int _elemento);
	int * obtemTodosElementos();
	int somaTodosElementos();
	bool estaNaLista(int _elemento);
	int obtemElementoEm(int _posicao);
};

