#pragma once
#include "Item.h"
#include "Dao.h"
#include "DaoBin.h"
#include "DaoSeq.h"


class Inventario
{
public:
	Inventario();
	Inventario(int tipo_persistencia);
	Inventario(Dao<Item>* item_dao);
	~Inventario();
	int obtemQuantidadeItens();
	Item * pegarItem(int tipo_item);
	void adicionaItem(Item * it); //Adiciona item no vetor inventario
	bool salvaInventario();
private:
	Dao<Item> * i_item_dao;
	Item * inventario;
	int quantidade;
	

	
	
	
};

