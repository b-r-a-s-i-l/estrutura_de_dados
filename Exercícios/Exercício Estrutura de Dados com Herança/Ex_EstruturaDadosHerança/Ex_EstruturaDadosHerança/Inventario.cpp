#include "Inventario.h"



Inventario::Inventario()
{
}


Inventario::~Inventario()
{
}

void Inventario::usarItem(int pos)
{
	item[pos].usarItem();
}
