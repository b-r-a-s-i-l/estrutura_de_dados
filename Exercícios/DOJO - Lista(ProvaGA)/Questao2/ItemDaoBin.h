#pragma once
#include "ItemDao.h"
class ItemDaoBin :
	public ItemDao
{
public:
	ItemDaoBin();
	~ItemDaoBin();
	Item * obtemTodosItens() override;
	bool guardaTodosItens(Item * it_itens) override;
	virtual void atualizaItem(int posicao, Item* item_atu) override;
};

