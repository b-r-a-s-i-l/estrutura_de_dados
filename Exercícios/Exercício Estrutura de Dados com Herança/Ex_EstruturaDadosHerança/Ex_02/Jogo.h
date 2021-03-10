#pragma once
#include "Cena.h"
class Jogo
{
public:
	Jogo();
	~Jogo();

	void inicializarCena(int _cena);

protected:
	Cena cena[10];
};

