#pragma once
#include "Personagem.h"
class Clerigo:
	public Personagem
{
public:
	Clerigo();
	~Clerigo();

	void atacar();
	void defender();
	void habilidade();
	void usarItem();
	void fugir();
};

