#pragma once
#include "Item.h"
#include <fstream>
class ItemDao
{
public:
	
	virtual Item * obtemTodosItens() = 0;
	virtual bool guardaTodosItens(Item * it_itens) = 0;
	virtual void atualizaItem(int posicao, Item* item_atu) = 0;
	
};

