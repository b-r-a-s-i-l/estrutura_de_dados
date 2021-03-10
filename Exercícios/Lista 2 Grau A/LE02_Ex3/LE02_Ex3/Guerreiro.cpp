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
	cout << "Voc� est� esperando...";
}

void Guerreiro::atacar()
{
	if (getEspadaDesembanhanda() == true)
	{
		cout << "Voc� atacou com " << getParametro(_Atk) << " de For�a";
	}
	else
	{
		cout << "Voc� n�o est� com a espada em m�os!";
	}
}

void Guerreiro::habilidade()
{
	if (getParametro(_MP) > 34)
	{
		if (getEspadaDesembanhanda() == true)
		{
			MP -= 35;
			cout << "Voc� usou habilidade de espada com " << getParametro(_Atk) * 2 << " de For�a e gastou 35 de MP, restando " << getParametro(_MP) << ".";
		}
		if (getEspadaDesembanhanda() == false)
		{
			cout << "Voc� n�o est� com a espada em m�os!";
		}
	}
	else
	{
		cout << "Voc� n�o possui MP suficiente para usar a habilidade!";
	}
}

void Guerreiro::defender()
{
	if (getEscudoEmMaos() == true)
	{
		cout << "Voc� defendeu com " << getParametro(_Def) << " de Defesa";
	}
	else
	{
		cout << "Voc� n�o est� com escudo em m�os!";
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
		cout << "Voc� puxou a espada da bainha!";
		espadaDesembanhada = true;
	}
	else
	{
		cout << "A espada j� esta em m�os!";
	}
	
}

void Guerreiro::empunharEscudo()
{
	if (getEscudoEmMaos() == true)
	{
		cout << "Voc� empunhou o escudo!";
		escudoEmMaos = true;
	}
	else
	{
		cout << "O escudo j� esta em m�os!";
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
