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
	espadaDesembanhada = false;
	escudoEmMaos = false;
}


Guerreiro::~Guerreiro()
{
}

void Guerreiro::esperar()
{
	cout << "Você está esperando...";
}

void Guerreiro::atacar()
{
	if (getEspadaDesembanhanda() == true)
	{
		cout << "Você atacou com " << getParametro(_Atk) << " de Força";
	}
	else
	{
		cout << "Você não está com a espada em mãos!";
	}
}

void Guerreiro::habilidade()
{
	if (getParametro(_MP) > 34)
	{
		if (getEspadaDesembanhanda() == true)
		{
			MP -= 35;
			cout << "Você usou habilidade de espada com " << getParametro(_Atk) * 2 << " de Força e gastou 35 de MP, restando " << getParametro(_MP) << ".";
		}
		if (getEspadaDesembanhanda() == false)
		{
			cout << "Você não está com a espada em mãos!";
		}
	}
	else
	{
		cout << "Você não possui MP suficiente para usar a habilidade!";
	}
}

void Guerreiro::defender()
{
	if (getEscudoEmMaos() == true)
	{
		cout << "Você defendeu com " << getParametro(_Def) << " de Defesa";
	}
	else
	{
		cout << "Você não está com escudo em mãos!";
	}
}

void Guerreiro::empurrarComEscudo()
{
	getParametro(_Atk) - 2;
}

void Guerreiro::desembanharEspada()
{
	if (getEspadaDesembanhanda() == false)
	{
		cout << "Você puxou a espada da bainha!";
		espadaDesembanhada = true;
	}
	else
	{
		cout << "A espada já esta em mãos!";
	}
	
}

void Guerreiro::empunharEscudo()
{
	if (getEscudoEmMaos() == true)
	{
		cout << "Você empunhou o escudo!";
		escudoEmMaos = true;
	}
	else
	{
		cout << "O escudo já esta em mãos!";
	}
	
}

void Guerreiro::setParametro(int valor, parametro parametro)
{
	switch (parametro)
	{
	case _HP:
		HP = valor;
		break;
	case _MP:
		MP = valor;
		break;
	case _XP:
		Exp = valor;
		break;
	case _Atk:
		Atk = valor;
		break;
	case _Def:
		Def = valor;
		break;
	case _Agl:
		Agl = valor;
		break;
	case _Mag:
		Mag = valor;
		break;
	default:
		break;
	}
}

int Guerreiro::getParametro(parametro parametro)
{
	switch (parametro)
	{
	case _HP:
		return HP;
		break;
	case _MP:
		return MP;
		break;
	case _XP:
		return Exp;
		break;
	case _Atk:
		return Atk;
		break;
	case _Def:
		return Def;
		break;
	case _Agl:
		return Agl;
		break;
	case _Mag:
		return Mag;
		break;
	default:
		break;
	}
}
