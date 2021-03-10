#include "ListaInteiro.h"
#include <iostream>
int main() {
	Lista* lista_base = new Lista();
	ListaInteiro* lista_inteiro = new ListaInteiro();
	No* no2 = new No(20);
	//act
	/*lista_base->adicionaElemento(new No(10));
	lista_base->adicionaElemento(no2);*/

	for (int i = 1; i < 8; i++) {
		lista_inteiro->adicionaElemento(i * 10);
	}

	int * intAux = new int;

	intAux = lista_inteiro->obtemTodosElementos();
	for (int i = 0; i < lista_inteiro->obtemTamanhoLista(); i++) {
		std::cout << i+1 << " posicao: " << intAux[i] << std::endl;
	}

	std::cout << "soma: " << lista_inteiro->somaTodosElementos();

	lista_inteiro->removeUltimoNo();

	intAux = lista_inteiro->obtemTodosElementos();

	for (int i = 0; i < lista_inteiro->obtemTamanhoLista(); i++) {
		std::cout << i + 1 << " posicao: " << intAux[i] << std::endl;
	}



	//assert
	/*if (no2->obtemInfo() == lista_base->removeUltimoNo()->obtemInfo()) {
		std::cout << no2->obtemInfo() << "iguais" << lista_base->removeUltimoNo()->obtemInfo();
	
	}*/
	return 0;
}