#include "Inventario.h"

Inventario::Inventario()
{
	quantidade = 0;
	this->inventario = new Item[10];
	for (int i = 0; i < 10; i++)
		this->inventario[i].id = -1;
}

Inventario::Inventario(int tipo_persistencia)
{
	if (tipo_persistencia) {
		i_item_dao = new DaoBin<Item>();
	}
	else {
		i_item_dao = new DaoSeq<Item>();
	}
	
	this->inventario = i_item_dao->obtemTodosItens();
	if (this->inventario == nullptr) {
		this->inventario = new Item[10];
		for (int i = 0; i < 10; i++)
			this->inventario[i].id = -1;
		quantidade = 0;
	}
	else{
	//Verifica Quantidade de Itens;
		for (int i = 0; i < 10; i++) {
			if (this->inventario[i].id > 0) {
				quantidade++;
			}
		}
	}
}

Inventario::Inventario(Dao<Item>* _dao)
{
	if (_dao == nullptr)
		this->i_item_dao = _dao;
	
	else {
		this->i_item_dao = _dao;
		this->inventario = i_item_dao->obtemTodosItens();
		if (this->inventario == nullptr) {
			this->inventario = new Item[10];
			for (int i = 0; i < 10; i++)
				this->inventario[i].id = -1;
			quantidade = 0;
		}
		else {
			//Verifica Quantidade de Itens;
			for (int i = 0; i < 10; i++) {
				if (this->inventario[i].id > 0) {
					quantidade++;
				}
			}
		}
	}
}


Inventario::~Inventario()
{

}


int Inventario::obtemQuantidadeItens()
{
	return quantidade;
}

Item * Inventario::pegarItem(int _tipo)
{
	_tipo = (TIPO_ITEM)_tipo;
	if (quantidade == 0)
		return nullptr;
	for (int i=0; i < quantidade; i++)
		if (_tipo == inventario[i].tipo)
			return &inventario[i];
	return nullptr;
}

void Inventario::adicionaItem(Item * it)
{
	if (it != nullptr && quantidade < 10)
	{
		inventario[quantidade] = * it;
		quantidade++;
	}
}

bool Inventario::salvaInventario()
{
	return this->i_item_dao->guardaTodosItens(this->inventario);
}
