#include "SacerdoteDeLuz.h"



SacerdoteDeLuz::SacerdoteDeLuz()
{
	HP = 230;
	MP = 245;
	Exp = 10;
	Atk = 5;
	Def = 6;
	Mag = 15;
	Agl = 5;
}

SacerdoteDeLuz::~SacerdoteDeLuz()
{
}

void SacerdoteDeLuz::atacar()
{
	cout << "Sacerdote da Luz est� atacando...";
}

void SacerdoteDeLuz::defender()
{
	cout << "Sacerdote da Luz est� defendendo...";
}

void SacerdoteDeLuz::habilidade()
{
	cout << "Sacerdote da Luz est� usando habilidade...";
}

void SacerdoteDeLuz::usarItem()
{
	cout << "Sacerdote da Luz est� usando item...";
}

void SacerdoteDeLuz::fugir()
{
	cout << "Sacerdote da Luz fugiu...";
}