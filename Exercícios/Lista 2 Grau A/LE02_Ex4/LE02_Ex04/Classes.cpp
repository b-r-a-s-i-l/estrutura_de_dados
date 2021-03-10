#include "Classes.h"

Classes::Classes()
{
}


Classes::~Classes()
{
}

Personagem * Classes::setClasse(TipoClasse _classe)
{
	Personagem * personagem = new Personagem;

	switch ((TipoClasse)_classe)
	{
	case BARBARO:
		delete personagem;
		personagem = new Barbaro;
		setClasseNome("Barbaro");
		break;
	case BARDO:
		delete personagem;
		personagem = new Bardo;
		setClasseNome("Barbo");
		break;
	case CLERIGO:
		delete personagem;
		personagem = new Clerigo;
		setClasseNome("Clerigo");
		break;
	case GUERREIRO:
		delete personagem;
		personagem = new Guerreiro;
		setClasseNome("Guerreiro");
		break;
	case LADINO:
		delete personagem;
		personagem = new Ladino;
		setClasseNome("Ladino");
		break;
	case MAGO:
		delete personagem;
		personagem = new Mago;
		setClasseNome("Mago");
		break;
	case PALADINO:
		delete personagem;
		personagem = new Paladino;
		setClasseNome("Paladino");
		break;
	case SACLUZ:
		delete personagem;
		personagem = new SacerdoteDeLuz;
		setClasseNome("Sacerdote de Luz");
		break;
	case SACTREVAS:
		delete personagem;
		personagem = new SacerdoteDeTrevas;
		setClasseNome("Sacerdote de Trevas");
		break;
	default:
		cout << "OPÇÃO INVÁLIDA!";
		break;
	}

	return personagem;
}

void Classes::setClasseNome(string _classe)
{
	classeNome = _classe;
}
