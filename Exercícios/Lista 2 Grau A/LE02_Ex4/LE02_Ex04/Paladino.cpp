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
	cout << "Mago est� atacando...";
}

void Paladino::defender()
{
	cout << "Mago est� defendendo...";
}

void Paladino::habilidade()
{
	cout << "Mago est� usando habilidade...";
}

void Paladino::usarItem()
{
	cout << "Mago est� usando item...";
}

void Paladino::fugir()
{
	cout << "Mago fugiu...";
}
