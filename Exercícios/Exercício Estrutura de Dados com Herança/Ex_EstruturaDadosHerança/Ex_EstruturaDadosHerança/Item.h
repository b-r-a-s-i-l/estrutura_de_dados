#pragma once
class Item
{
public:
	Item();
	~Item();

	virtual int usarItem() { return valor; }

protected:
	int valor;
};

