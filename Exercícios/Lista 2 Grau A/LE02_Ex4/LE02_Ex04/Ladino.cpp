#include "Ladino.h"



Ladino::Ladino()
{
	HP = 230;
	MP = 150;
	Exp = 10;
	Atk = 8;
	Def = 7;
	Mag = 5;
	Agl = 18;
}


Ladino::~Ladino()
{
}

void Ladino::atacar()
{
	cout << "Ladino está atacando...";
}

void Ladino::defender()
{
	cout << "Ladino está defendendo...";
}

void Ladino::habilidade()
{
	cout << "Ladino está usando habilidade...";
}

void Ladino::usarItem()
{
	cout << "Ladino está usando item...";
}

void Ladino::fugir()
{
	cout << "Ladino fugiu...";
}
