#pragma once
#include "Inventario.h"
class Jogador
{
public:
	Jogador();
	~Jogador();

	void usarItemDoInventário();

protected:
	Inventario inventario;
};

