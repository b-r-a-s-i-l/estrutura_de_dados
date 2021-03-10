#pragma once
#include "Barbaro.h"
#include "Bardo.h"
#include "Clerigo.h"
#include "Guerreiro.h"
#include "Ladino.h"
#include "Mago.h"
#include "Paladino.h"
#include "SacerdoteDeLuz.h"
#include "SacerdoteDeTrevas.h"

enum TipoClasse { BARBARO, BARDO, CLERIGO, GUERREIRO, LADINO, MAGO, PALADINO, SACLUZ, SACTREVAS};

class Classes
{
public:
	Classes();
	~Classes();

	Personagem * setClasse(TipoClasse classe);
	void setClasseNome(string _classe);
	string getClasseNome() { return classeNome; }

protected:
	string classeNome;
};

