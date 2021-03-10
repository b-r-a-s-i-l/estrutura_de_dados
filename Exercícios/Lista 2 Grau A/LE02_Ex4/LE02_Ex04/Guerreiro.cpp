#include "Guerreiro.h"



Guerreiro::Guerreiro()
{
	HP = 100;
	MP = 100;
	Exp = 10;
	Atk = 5;
	Def = 4;
	Mag = 1;
	Agl = 3;
}


Guerreiro::~Guerreiro()
{
}

void Guerreiro::atacar()
{
	cout << "Guerreiro está atacando...";
}

void Guerreiro::defender()
{
	cout << "Guerreiro está defendendo...";
}

void Guerreiro::habilidade()
{
	cout << "Guerreiro está usando habilidade...";
}

void Guerreiro::usarItem()
{
	cout << "Guerreiro está usando item...";
}

void Guerreiro::fugir()
{
	cout << "Guerreiro fugiu...";
}