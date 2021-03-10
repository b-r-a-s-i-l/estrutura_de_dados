#include "Lista.h"

Lista::Lista()
{
	this->inicio_lista = nullptr;
	this->fim_lista = nullptr;
	this->quantidadeNos = 0;
}

Lista::~Lista()
{
}

void Lista::adicionaElemento(No* elemento)
{
	if (this->inicio_lista == nullptr) {
		this->inicio_lista = elemento;
		this->fim_lista = elemento;
		quantidadeNos++;
	}
	else {
		fim_lista->defineProximo(elemento);
		fim_lista = elemento;
		quantidadeNos++;
	}
}

No* Lista::obtemTodosElementos()
{
	if (this->inicio_lista != nullptr && quantidadeNos > 0) {
		No* todos_nos = new No[quantidadeNos];
		int indice = 0;
		No* percorre = this->inicio_lista;
		while (percorre != nullptr) {
			todos_nos[indice] = *percorre;
			indice++;
			percorre = percorre->obtemProximo();
		}
		return todos_nos;
	}
	else {
		return nullptr;
	}
}

int Lista::obtemTamanhoLista()
{
	return quantidadeNos;
}

No* Lista::removeUltimoNo()
{
	if (this->inicio_lista == nullptr) {
		return new No();
	}
	else {
		No * anterior = this->inicio_lista;
		No * percorre = this->inicio_lista;
		while (percorre->obtemProximo() != nullptr) {
			anterior = percorre;
			percorre = percorre->obtemProximo();
		}
		delete percorre;
		fim_lista = anterior;
		fim_lista->defineProximo(nullptr);

		quantidadeNos--;

		return inicio_lista;
	}
}
