#pragma once
#include "Personagem.h"
class Ladino :
	public Personagem
{
public:
	Ladino();
	~Ladino();

	void atacar();
	void defender();
	void habilidade();
	void usarItem();
	void fugir();
};

