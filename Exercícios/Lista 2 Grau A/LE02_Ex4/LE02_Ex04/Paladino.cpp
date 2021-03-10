#include "Paladino.h"

Paladino::Paladino()
{
	HP = 350;
	MP = 200;
	Exp = 10;
	Atk = 15;
	Def = 8;
	Mag = 5;
	Agl = 6;
}


Paladino::~Paladino()
{
}

void Paladino::atacar()
{
	cout << "Mago está atacando...";
}

void Paladino::defender()
{
	cout << "Mago está defendendo...";
}

void Paladino::habilidade()
{
	cout << "Mago está usando habilidade...";
}

void Paladino::usarItem()
{
	cout << "Mago está usando item...";
}

void Paladino::fugir()
{
	cout << "Mago fugiu...";
}
