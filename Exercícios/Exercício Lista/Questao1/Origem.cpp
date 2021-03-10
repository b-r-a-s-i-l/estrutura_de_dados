#include "Lista.h"
#include "ListaInteiro.h"
#include <iostream>
int main() {

	setlocale(LC_ALL, "ptb");

	ListaInteiro *lista_inteiro = new ListaInteiro();

	No* no2 = new No(20);

	for (int i = 1; i < 8; i++) {
		lista_inteiro->adicionaElemento(i * 10);
	}

	int * intAux = new int;

	intAux = lista_inteiro->obtemTodosElementos();
	for (int i = 0; i < lista_inteiro->obtemTamanhoLista(); i++) {
		std::cout << i << " Posição: " << intAux[i] << std::endl;
	}

	std::cout << "Soma: " << lista_inteiro->somaTodosElementos() << std::endl;

	lista_inteiro->removeUltimoNo();

	intAux = lista_inteiro->obtemTodosElementos();

	for (int i = 0; i < lista_inteiro->obtemTamanhoLista(); i++) {
		std::cout << i << " Posição: " << intAux[i] << std::endl;
	}

	if (lista_inteiro->estaNaLista(30))
	{
		std::cout << "O elemento esta na lista" << std::endl;
	}

	std::cout << "O elemento que está na posição desejada da lista é " << lista_inteiro->obtemElementoEm(4) << std::endl;

	return 0;
}