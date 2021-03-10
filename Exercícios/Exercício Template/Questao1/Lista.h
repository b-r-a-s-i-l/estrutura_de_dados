#pragma once
#include "No.h"
template<class T>
class Lista
{
public:
	Lista();
	virtual ~Lista();

	void adicionaElemento(No<T>* elemento);
	No<T> * obtemTodosElementos();
	int obtemTamanhoLista();
	No<T>* removeUltimoNo();

	T somaTodosElementos();
	bool estaNaLista(T _elemento);
	T obtemElementoEm(int _posicao);


private:
	No<T> * inicio_lista;
	No<T> * fim_lista;
	int quantidadeNos;
};

template<class T>
inline Lista<T>::Lista()
{

}

template<class T>
inline Lista<T>::~Lista()
{
}

template<class T>
inline void Lista<T>::adicionaElemento(No<T>* elemento)
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

template<class T>
inline No<T>* Lista<T>::obtemTodosElementos()
{
	if (this->inicio_lista != nullptr && quantidadeNos > 0) {
		No<T>* todos_nos = new No<T>[quantidadeNos];
		int indice = 0;
		No<T>* percorre = this->inicio_lista;
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

template<class T>
inline int Lista<T>::obtemTamanhoLista()
{
	return quantidadeNos;
}

template<class T>
inline No<T>* Lista<T>::removeUltimoNo()
{
	if (this->inicio_lista == nullptr) {
		return new No<T>();
	}
	else {
		No<T> * anterior = this->inicio_lista;
		No<T> * percorre = this->inicio_lista;
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

template<class T>
inline T Lista<T>::somaTodosElementos()
{
	if (obtemTamanhoLista() > 0) {
		T todosElementos = 0;
		No<T> * noAux = new No<T>;
		noAux = Lista<T>::obtemTodosElementos();
		for (int i = 0; i < Lista<T>::obtemTamanhoLista(); i++) {
			todosElementos += noAux->obtemInfo();
			noAux = noAux->obtemProximo();
		}
		return todosElementos;
	}
	else {
		return 0;
	}
}

template<class T>
inline bool Lista<T>::estaNaLista(T _elemento)
{
	if (obtemTamanhoLista() > 0) {
		No<T> * noAux = new No<T>;
		noAux = Lista<T>::obtemTodosElementos();
		for (int i = 0; i < Lista<T>::obtemTamanhoLista(); i++) {
			if (_elemento == noAux->obtemInfo())
			{
				return true;
			}
			else
			{
				noAux = noAux->obtemProximo();
				if (noAux->obtemProximo() == nullptr)
				{
					return false;
				}
			}
		}
	}
	else
	{
		return false;
	}
}

template<class T>
inline T Lista<T>::obtemElementoEm(int _posicao)
{
	if (obtemTamanhoLista() > 0)
	{
		T * elemento = new T;
		No<T> * noAux = new No<T>;
		noAux = Lista<T>::obtemTodosElementos();
		for (int i = 0; i < Lista<T>::obtemTamanhoLista(); i++)
		{
			if (i == _posicao)
			{
				*elemento = noAux->obtemInfo();
			}
			noAux = noAux->obtemProximo();
		}
		return *elemento;
	}
	else
	{
		return 0;
	}
}


