#pragma once
#include "Dao.h"
template <class T>
class DaoBin :
	public Dao<T>
{
public:
	DaoBin();
	~DaoBin();
	T * obtemTodosItens() override;
	bool guardaTodosItens(T * _it) override;
};

template <class T>
inline DaoBin<T>::DaoBin()
{
}

template <class T>
inline DaoBin<T>::~DaoBin()
{
}

template <class T>
inline T * DaoBin<T>::obtemTodosItens()
{
	std::ifstream i_persiste;
	i_persiste.open("Inventario.bin", ios::binary | ios::in);
	if (!i_persiste.is_open())
	{
		return nullptr;
	}
	else
	{
		Item * itens = new Item[10];
		int i = 0;
		do {
			i_persiste.read(reinterpret_cast<char *>(&itens[i]), sizeof(Item));
			i++;

		} while (!i_persiste.eof());
	}
	return nullptr;
}


template <class T>
inline bool DaoBin<T>::guardaTodosItens(T * _it)
{
	std::ofstream o_persiste("Inventario.bin", ios::binary | ios::out);
	if (!o_persiste.is_open()) {
		return false;
	}
	else {
		for (int i = 0; i < 10; i++) {
			if (_it[i].id >= 0)
				o_persiste.write(reinterpret_cast<char *>(&_it[i]), sizeof(Item));
		}
		return true;
	}

	return false;
}
