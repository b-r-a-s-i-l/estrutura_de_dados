#pragma once
#include "Lista.h"
template <class T>
class Fila :
	public Lista<T>
{
public:
	Fila() {};
	~Fila() {};

	void adicionarNaFila(T * elemento);
	T * retirarDaFila();
	void esvaziarFila();
	int obtemTamanhoFila();

};

template<class T>
inline void Fila<T>::adicionarNaFila(T * elemento)
{
	Lista<T>::insereFimLista(elemento);
}

template<class T>
inline T * Fila<T>::retirarDaFila()
{
	return Lista<T>::removePrimeiroNo();
}

template<class T>
inline void Fila<T>::esvaziarFila()
{
	Lista<T>::esvaziaLista();
}

template<class T>
inline int Fila<T>::obtemTamanhoFila()
{
	return Lista<T>::obtemTamanhoLista();
}
