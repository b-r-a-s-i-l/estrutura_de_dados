#include "Lista.h"
#include <iostream>
int main() {

	setlocale(LC_ALL, "ptb");

	Lista<int> *lista_inteiro = new Lista<int>();
	No<int>* no2 = new No<int>(20);

	for (int i = 1; i < 8; i++) {
		lista_inteiro->adicionaElemento(new No<int>(i * 10));
	}

	No<int> * intAux = new No<int>;

	intAux = lista_inteiro->obtemTodosElementos();
	for (int i = 0; i < lista_inteiro->obtemTamanhoLista(); i++) {
		std::cout << i << " Posição: " << intAux[i].obtemInfo() << std::endl;
	}

	std::cout << "Soma: " << lista_inteiro->somaTodosElementos() << std::endl;

	lista_inteiro->removeUltimoNo();

	intAux = lista_inteiro->obtemTodosElementos();

	for (int i = 0; i < lista_inteiro->obtemTamanhoLista(); i++) {
		std::cout << i << " Posição: " << intAux[i].obtemInfo() << std::endl;
	}

	if (lista_inteiro->estaNaLista(30))
	{
		std::cout << "O elemento esta na lista" << std::endl;
	}

	std::cout << "O elemento que está na posição desejada da lista é " << lista_inteiro->obtemElementoEm(4) << std::endl;

	return 0;
}