#pragma once
#include "Personagem.h"

enum Elemento {fogo, terra, agua, ar};
class Mago :
	public Personagem
{
public:
	Mago();
	~Mago();

	void atacar();
	void defender();
	void habilidade();
	void usarItem();
	void fugir();
};

