#include "SacerdoteDeTrevas.h"



SacerdoteDeTrevas::SacerdoteDeTrevas()
{
	HP = 390;
	MP = 500;
	Exp = 10;
	Atk = 7;
	Def = 9;
	Mag = 25;
	Agl = 9;
}


SacerdoteDeTrevas::~SacerdoteDeTrevas()
{
}

void SacerdoteDeTrevas::atacar()
{
	cout << "Sacerdote da Trevas está atacando...";
}

void SacerdoteDeTrevas::defender()
{
	cout << "Sacerdote da Trevas está defendendo...";
}

void SacerdoteDeTrevas::habilidade()
{
	cout << "Sacerdote da Trevas está usando habilidade...";
}

void SacerdoteDeTrevas::usarItem()
{
	cout << "Sacerdote da Trevas está usando item...";
}

void SacerdoteDeTrevas::fugir()
{
	cout << "Sacerdote da Trevas fugiu...";
}
