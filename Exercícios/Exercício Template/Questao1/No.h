#pragma once
template <class T>
class No
{
public:
	No();
	No(T info);
	~No();
	void defineProximo(No* prox);
	No * obtemProximo();
	void defineInfo(T info);
	T obtemInfo();
private:
	T info;
	No* proximo;
};

template<class T>
inline No<T>::No()
{
	this->proximo = nullptr;
	this->info = 0;
}

template<class T>
inline No<T>::No(T info)
{
	this->proximo = nullptr;
	this->info = info;
}

template<class T>
inline No<T>::~No()
{
}

template<class T>
inline void No<T>::defineProximo(No * prox)
{
	this->proximo = prox;
}

template<class T>
inline No<T> * No<T>::obtemProximo()
{
	return this->proximo;
}

template<class T>
inline void No<T>::defineInfo(T info)
{
	this->info = info;
}

template<class T>
inline T No<T>::obtemInfo()
{
	return this->info;
}
