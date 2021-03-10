#include "Municao.h"



Municao::Municao()
{
}


Municao::~Municao()
{
}

void Municao::setIdMun(int _ID)
{
	ID = _ID;
}

void Municao::setQuantidadeMun(int _qtd)
{
	quantidade = _qtd;
}

void Municao::municiar()
{
	quantidade++;
}

void Municao::usarMun()
{
	quantidade--;
}
