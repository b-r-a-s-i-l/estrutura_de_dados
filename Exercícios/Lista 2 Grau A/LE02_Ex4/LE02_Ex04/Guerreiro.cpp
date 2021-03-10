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
	cout << "Guerreiro est� atacando...";
}

void Guerreiro::defender()
{
	cout << "Guerreiro est� defendendo...";
}

void Guerreiro::habilidade()
{
	cout << "Guerreiro est� usando habilidade...";
}

void Guerreiro::usarItem()
{
	cout << "Guerreiro est� usando item...";
}

void Guerreiro::fugir()
{
	cout << "Guerreiro fugiu...";
}