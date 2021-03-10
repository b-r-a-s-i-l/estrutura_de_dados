#pragma once
#include "Item.h"
class Inventario
{
public:
	Inventario();
	~Inventario();

	void usarItem(int pos);

protected:
	Item item[10];
};

