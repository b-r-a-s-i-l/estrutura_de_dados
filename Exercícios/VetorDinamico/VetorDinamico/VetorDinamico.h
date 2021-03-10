#pragma once
template<class T>
class VetorDinamico
{
public:
	VetorDinamico();
	~VetorDinamico();
	void adicionaValor(T valor);
	T removeValor(int posicao);
	T obtemValor(int posicaco);
	int obterTamanho();
	int obterNumElementos();
private:
	void realocar(int novo_tam);
	T * vetor_dinamico;
	int tam = 0, cont;
};

template<class T>
inline VetorDinamico<T>::VetorDinamico()
{
	this->vetor_dinamico = (int *)malloc(5 * sizeof(T));
	for (int i = 0; i < 5; i++)
		this->vetor_dinamico[i] = -1;
	this->tam = 5;
	this->cont = 0;
}

template<class T>
inline VetorDinamico<T>::~VetorDinamico()
{
	delete this->vetor_dinamico;
}

template<class T>
inline void VetorDinamico<T>::adicionaValor(T valor)
{
	bool atribuido = true;
	if (cont == 0) {
		this->vetor_dinamico[0] = valor;
		cont++;
	}
	else if (cont == tam) {
		realocar(tam + 5);
		this->vetor_dinamico[cont] = valor;
		cont++;
	}
	else if (cont != tam) {
		for (int i = 0; i < tam; i++) {
			if ((this->vetor_dinamico[i] < 0) && atribuido) {
				this->vetor_dinamico[i] = valor;
				atribuido = false;
				cont++;
			}
		}
	}
}

template<class T>
inline T VetorDinamico<T>::removeValor(int posicao)
{
	int valor_retorno = 0;
	if (cont == 0) {
		return -1;
	}
	else if (posicao < tam && posicao >= 0) {
		if (this->vetor_dinamico[posicao] < 0) {//posição livre!
			return -1;
		}
		valor_retorno = this->vetor_dinamico[posicao];
		this->vetor_dinamico[posicao] = -1;
		cont--;
		if (cont == (tam - 5) && tam > 5) {//verificar para realocar
			for (int i = 0; i < tam; i++) {
				if (this->vetor_dinamico[i] <= -1) {
					int j = i + 1;
					while ((this->vetor_dinamico[j] <= -1) && j < tam) {
						j++;
					}
					if (j != tam) {
						this->vetor_dinamico[i] = this->vetor_dinamico[j];
						this->vetor_dinamico[j] = -1;
					}
				}
			}
			realocar(tam - 5);
		}
	}

	return valor_retorno;
}

template<class T>
inline T VetorDinamico<T>::obtemValor(int posicao)
{
	if (cont == 0)
		return 0;
	else if (posicao >= 0 && posicao < tam) {
		return this->vetor_dinamico[posicao];
	}
	else
	{
		return -1;
	}
}

template<class T>
inline int VetorDinamico<T>::obterTamanho()
{
	return this->tam;
}

template<class T>
inline int VetorDinamico<T>::obterNumElementos()
{
	return this->cont;
}

template<class T>
inline void VetorDinamico<T>::realocar(int novo_tam)
{
	this->vetor_dinamico = (int *)realloc(this->vetor_dinamico, novo_tam * sizeof(T));
	for (int i = tam; i < novo_tam; i++) {
		this->vetor_dinamico[i] = -1;
	}
	tam = novo_tam;
}