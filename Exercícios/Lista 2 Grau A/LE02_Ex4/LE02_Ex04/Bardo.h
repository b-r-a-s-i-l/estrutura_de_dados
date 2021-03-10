#pragma once
#include "Personagem.h"
class Bardo :
	public Personagem
{
public:
	Bardo();
	~Bardo();

	void atacar();
	void defender();
	void habilidade();
	void usarItem();
	void fugir();
};

