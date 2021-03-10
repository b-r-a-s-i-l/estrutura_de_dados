#pragma once
#include "Guerreiro.h"
class Paladino :
	public Guerreiro
{
public:
	Paladino();
	~Paladino();

	void atacar();
	void defender();
	void habilidade();
	void usarItem();
	void fugir();
};

