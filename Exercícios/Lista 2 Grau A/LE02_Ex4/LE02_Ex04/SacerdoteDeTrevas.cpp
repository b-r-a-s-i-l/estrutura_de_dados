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
	cout << "Sacerdote da Trevas est� atacando...";
}

void SacerdoteDeTrevas::defender()
{
	cout << "Sacerdote da Trevas est� defendendo...";
}

void SacerdoteDeTrevas::habilidade()
{
	cout << "Sacerdote da Trevas est� usando habilidade...";
}

void SacerdoteDeTrevas::usarItem()
{
	cout << "Sacerdote da Trevas est� usando item...";
}

void SacerdoteDeTrevas::fugir()
{
	cout << "Sacerdote da Trevas fugiu...";
}
