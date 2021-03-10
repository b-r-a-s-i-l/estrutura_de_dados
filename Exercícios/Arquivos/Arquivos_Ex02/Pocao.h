#pragma once
#include "Item.h"
class Pocao :
	public Item
{
public:
	Pocao();
	~Pocao();

	int getId() override;
	int getPeso() override;
};

