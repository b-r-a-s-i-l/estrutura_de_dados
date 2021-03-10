#pragma once
#include "GameObjects.h"
class Obstaculos:
	public GameObjects
{
public:
	Obstaculos();
	~Obstaculos();

	void carregarObjeto() override;
};

