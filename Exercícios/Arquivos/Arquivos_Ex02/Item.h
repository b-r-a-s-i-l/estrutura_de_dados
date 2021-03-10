#pragma once

enum Tipo_Item{ESPADA, ESCUDO, POCAO};
class Item
{
public:
	Item();
	~Item();

	virtual int getId();
	virtual int getPeso();

	Item setItem(Tipo_Item _item);
protected:

	int id, peso;
	Item *item;
};