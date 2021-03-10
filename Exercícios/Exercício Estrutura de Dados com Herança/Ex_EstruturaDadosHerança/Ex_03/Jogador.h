#pragma once
#include "Veiculos.h"
class Jogador
{
public:
	Jogador();
	~Jogador();

	void selecionaVeiculo(int _tipo);

protected:
	Veiculos *veiculoEmUso;
};

