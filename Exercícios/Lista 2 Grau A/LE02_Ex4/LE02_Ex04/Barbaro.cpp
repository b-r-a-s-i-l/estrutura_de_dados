#include "Barbaro.h"



Barbaro::Barbaro()
{
	HP = 300;
	MP = 110;
	Exp = 10;
	Atk = 10;
	Def = 8;
	Mag = 1;
	Agl = 3;
}


Barbaro::~Barbaro()
{
}

void Barbaro::atacar()
{
	cout << "Barbaro est� atacando...";
}

void Barbaro::defender()
{
	cout << "Barbaro est� defendendo...";
}

void Barbaro::habilidade()
{
	cout << "Barbaro est� usando habilidade...";
}

void Barbaro::usarItem()
{
	cout << "Barbaro est� usando item...";
}

void Barbaro::fugir()
{
	cout << "Barbaro fugiu...";
}
