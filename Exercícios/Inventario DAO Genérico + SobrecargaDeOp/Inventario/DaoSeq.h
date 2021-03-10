#pragma once
#include "Dao.h"
template <class T>
class DaoSeq :
	public Dao<T>
{
public:
	DaoSeq();
	~DaoSeq();
	T * obtemTodosItens() override;
	bool guardaTodosItens(T * _it) override;
};

template <class T>
inline DaoSeq<T>::DaoSeq()
{
}

template <class T>
inline DaoSeq<T>::~DaoSeq()
{
}

template <class T>
inline T * DaoSeq<T>::obtemTodosItens()
{
	return nullptr;
}

template <class T>
inline bool DaoSeq<T>::guardaTodosItens(T * _it)
{
	return false;
}
