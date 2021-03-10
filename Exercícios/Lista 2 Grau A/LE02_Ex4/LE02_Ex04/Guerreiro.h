#pragma once
#include "Personagem.h"

class Guerreiro:
	public Personagem
{
public:
	Guerreiro();
	~Guerreiro();

	void atacar();
	void defender();
	void habilidade();
	void usarItem();
	void fugir();
};

