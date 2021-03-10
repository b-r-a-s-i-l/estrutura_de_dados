#pragma once
#include "Clerigo.h"
class SacerdoteDeLuz :
	public Clerigo
{
public:
	SacerdoteDeLuz();
	~SacerdoteDeLuz();

	void atacar();
	void defender();
	void habilidade();
	void usarItem();
	void fugir();
};

