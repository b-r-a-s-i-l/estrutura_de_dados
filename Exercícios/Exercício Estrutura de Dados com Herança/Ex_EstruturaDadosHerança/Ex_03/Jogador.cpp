#include "Jogador.h"



Jogador::Jogador()
{
}


Jogador::~Jogador()
{
}

void Jogador::selecionaVeiculo(int _tipo)
{
	*veiculoEmUso = veiculoEmUso->setVeiculo(_tipo);
}
