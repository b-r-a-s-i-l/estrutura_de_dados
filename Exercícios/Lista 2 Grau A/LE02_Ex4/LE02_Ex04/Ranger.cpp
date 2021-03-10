#include "Ranger.h"



Ranger::Ranger()
{
	HP = 225;
	MP = 170;
	Exp = 10;
	Atk = 7;
	Def = 7;
	Mag = 6;
	Agl = 14;
}


Ranger::~Ranger()
{
}

void Ranger::atacar()
{
	cout << "Ranger está atacando...";
}

void Ranger::defender()
{
	cout << "Ranger está defendendo...";
}

void Ranger::habilidade()
{
	cout << "Ranger está usando habilidade...";
}

void Ranger::usarItem()
{
	cout << "Ranger está usando item...";
}

void Ranger::fugir()
{
	cout << "Ranger fugiu...";
}
