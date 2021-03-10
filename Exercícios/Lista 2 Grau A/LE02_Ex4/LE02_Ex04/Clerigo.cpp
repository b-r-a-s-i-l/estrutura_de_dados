#include "Clerigo.h"



Clerigo::Clerigo()
{
	HP = 110;
	MP = 130;
	Exp = 10;
	Atk = 3;
	Def = 3;
	Mag = 5;
	Agl = 4;
}


Clerigo::~Clerigo()
{
}

void Clerigo::atacar()
{
	cout << "Clerigo está atacando...";
}

void Clerigo::defender()
{
	cout << "Clerigo está defendendo...";
}

void Clerigo::habilidade()
{
	cout << "Clerigo está usando habilidade...";
}

void Clerigo::usarItem()
{
	cout << "Clerigo está usando item...";
}

void Clerigo::fugir()
{
	cout << "Clerigo fugiu...";
}
