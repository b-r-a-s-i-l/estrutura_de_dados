#include "Mago.h"



Mago::Mago()
{
	HP = 100;
	MP = 250;
	Exp = 10;
	Atk = 2;
	Def = 3;
	Mag = 7;
	Agl = 5;
}


Mago::~Mago()
{
}

void Mago::atacar()
{
	cout << "Mago est� atacando...";
}

void Mago::defender()
{
	cout << "Mago est� defendendo...";
}

void Mago::habilidade()
{
	cout << "Mago est� usando habilidade...";
}

void Mago::usarItem()
{
	cout << "Mago est� usando item...";
}

void Mago::fugir()
{
	cout << "Mago fugiu...";
}
