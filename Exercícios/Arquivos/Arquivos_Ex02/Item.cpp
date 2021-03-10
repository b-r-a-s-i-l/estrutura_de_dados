#include "Item.h"
#include "Espada.h"
#include "Escudo.h"
#include "Pocao.h"

Item::Item()
{
}


Item::~Item()
{
}

Item Item::setItem(Tipo_Item _item)
{
	switch (_item)
	{
	case ESPADA:
		item = (Item *) new Espada;
		break;
	case ESCUDO:
		item = (Item *) new Escudo;
		break;
	case POCAO:
		item = (Item *) new Pocao;
		break;
	default:
		break;
	}

	return *item;

	delete item;
}

int Item::getId()
{
	return id;
}

int Item::getPeso()
{
	return peso;
}

