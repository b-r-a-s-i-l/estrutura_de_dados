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
	cout << "Barbaro está atacando...";
}

void Barbaro::defender()
{
	cout << "Barbaro está defendendo...";
}

void Barbaro::habilidade()
{
	cout << "Barbaro está usando habilidade...";
}

void Barbaro::usarItem()
{
	cout << "Barbaro está usando item...";
}

void Barbaro::fugir()
{
	cout << "Barbaro fugiu...";
}
