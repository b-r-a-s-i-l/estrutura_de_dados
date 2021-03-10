#pragma once
#include "SacerdoteDeLuz.h"
class SacerdoteDeTrevas :
	public SacerdoteDeLuz
{
public:
	SacerdoteDeTrevas();
	~SacerdoteDeTrevas();

	void atacar();
	void defender();
	void habilidade();
	void usarItem();
	void fugir();

};

