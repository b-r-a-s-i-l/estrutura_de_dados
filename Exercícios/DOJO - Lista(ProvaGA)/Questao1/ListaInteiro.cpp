#include "ListaInteiro.h"

void ListaInteiro::adicionaElemento(int _elemento){
	int * elemento = new int;
	*elemento = _elemento;
	No * noAux = new No;
	noAux->defineInfo(*elemento);
	Lista::adicionaElemento(noAux);
}

int* ListaInteiro::obtemTodosElementos(){
	if (obtemTamanhoLista() > 0) {
		int * todosInt = new int[Lista::obtemTamanhoLista()];
		No * noAux = new No;
		noAux = Lista::obtemTodosElementos();
		for (int i = 0; i < Lista::obtemTamanhoLista(); i++) {
			todosInt[i] = noAux[i].obtemInfo();
		}
		return todosInt;
	}
	else {
		return nullptr;
	}

}

int ListaInteiro::somaTodosElementos(){
	
	if (obtemTamanhoLista() > 0) {
		int todosInt = 0;
		No * noAux = new No;
		noAux = Lista::obtemTodosElementos();
		for (int i = 0; i < Lista::obtemTamanhoLista(); i++) {
			todosInt += noAux->obtemInfo();
			noAux = noAux->obtemProximo();
		}
		return todosInt;
	}
	else {
		return 0;
	}
}
