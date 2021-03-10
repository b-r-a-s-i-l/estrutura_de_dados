#pragma once
#include "GameObjects.h"
class Cena
{
public:
	Cena();
	~Cena();

	void carregarCena();

protected:
	GameObjects gameObj[50];
};

