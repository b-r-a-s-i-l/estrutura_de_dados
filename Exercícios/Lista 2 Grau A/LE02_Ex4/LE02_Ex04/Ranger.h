#pragma once
#include "Personagem.h"
class Ranger :
	public Personagem
{
public:
	Ranger();
	~Ranger();

	void atacar();
	void defender();
	void habilidade();
	void usarItem();
	void fugir();
};

