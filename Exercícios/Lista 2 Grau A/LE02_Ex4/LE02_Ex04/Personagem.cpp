#include "Personagem.h"
#include "Classes.h"

Personagem::Personagem()
{
}


Personagem::~Personagem()
{
}

void Personagem::atacar()
{
}

void Personagem::defender()
{
}

void Personagem::habilidade()
{
}

void Personagem::usarItem()
{
}

void Personagem::fugir()
{
}

Personagem * Personagem::setClasse(int _classe)
{
	Classes * classe = new Classes;
	Personagem * personagem = new Personagem;

	personagem = classe->setClasse((TipoClasse)_classe);

	return personagem;
}

void Personagem::setParametro(int valor, parametro parametro)
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

int Personagem::getParametro(parametro parametro)
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

string Personagem::getClasseNome()
{
	Classes * classe = new Classes;
	return classe->getClasseNome();
}
