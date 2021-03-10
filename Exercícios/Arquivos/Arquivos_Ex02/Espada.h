#pragma once
#include "Item.h"
class Espada :
	public Item
{
public:
	Espada();
	~Espada();

	int getId() override;
	int getPeso() override;
};

