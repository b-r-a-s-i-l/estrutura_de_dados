#pragma once
#include "Item.h"
class Escudo :
	public Item
{
public:
	Escudo();
	~Escudo();

	int getId() override;
	int getPeso() override;
};

