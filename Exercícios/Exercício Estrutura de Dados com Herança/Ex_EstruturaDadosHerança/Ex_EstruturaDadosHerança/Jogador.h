#pragma once
#include "Inventario.h"
class Jogador
{
public:
	Jogador();
	~Jogador();

	void usarItemDoInvent�rio();

protected:
	Inventario inventario;
};

