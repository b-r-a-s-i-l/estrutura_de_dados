#pragma once
#include "Lista.h"
class ListaInteiro :
	public Lista
{
public:
	void adicionaElemento(int _elemento);
	int * obtemTodosElementos();
	int somaTodosElementos();
};

