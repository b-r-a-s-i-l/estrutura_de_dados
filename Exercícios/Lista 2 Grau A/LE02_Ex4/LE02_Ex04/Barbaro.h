#pragma once
#include "Personagem.h"
class Barbaro :
	public Personagem
{
public:
	Barbaro();
	~Barbaro();

	void atacar();
	void defender();
	void habilidade();
	void usarItem();
	void fugir();
};

