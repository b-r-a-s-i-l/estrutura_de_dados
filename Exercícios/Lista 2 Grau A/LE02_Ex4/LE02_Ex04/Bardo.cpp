#include "Bardo.h"



Bardo::Bardo()
{
	HP = 230;
	MP = 150;
	Exp = 10;
	Atk = 8;
	Def = 7;
	Mag = 5;
	Agl = 10;
}


Bardo::~Bardo()
{
}

void Bardo::atacar()
{
	cout << "Bardo est� atacando...";
}

void Bardo::defender()
{
	cout << "Bardo est� defendendo...";
}

void Bardo::habilidade()
{
	cout << "Bardo est� usando habilidade...";
}

void Bardo::usarItem()
{
	cout << "Bardo est� usando item...";
}

void Bardo::fugir()
{
	cout << "Bardo fugiu...";
}
