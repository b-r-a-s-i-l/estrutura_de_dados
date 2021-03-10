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
	cout << "Mago está atacando...";
}

void Mago::defender()
{
	cout << "Mago está defendendo...";
}

void Mago::habilidade()
{
	cout << "Mago está usando habilidade...";
}

void Mago::usarItem()
{
	cout << "Mago está usando item...";
}

void Mago::fugir()
{
	cout << "Mago fugiu...";
}
