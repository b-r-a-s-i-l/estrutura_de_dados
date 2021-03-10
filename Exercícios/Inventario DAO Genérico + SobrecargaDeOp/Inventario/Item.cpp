#include "Item.h"



Item::Item()
{
}


Item::~Item()
{
}

int Item::usar()
{
	return 0;
}

void Item::definirTipo(TIPO_ITEM tp)
{
	tipo = tp;
}

bool Item::operator==(Item * it)
{
	return 	this->id == it->id;
}

bool Item::operator>(Item * it)
{
	return this->peso > it->peso;
}

std::ostream & operator<<(std::ostream & os, const Item * obj)
{
	os << obj->id;

	return os;
}
