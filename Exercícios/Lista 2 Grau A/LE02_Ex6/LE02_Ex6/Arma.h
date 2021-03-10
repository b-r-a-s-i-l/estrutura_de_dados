#pragma once
#include "Municao.h"
class Arma
{
public:
	Arma();
	~Arma();

	void setIdArm(int _ID);
	int getIdArm() { return ID; }
	int getCapacidade() { return capacidade; }

	void atirar();
	void recarregar();
	void verificarCarregador();
	Arma * trocarArma(int _ID);

	
protected:
	Municao carregador;
	bool carregadorMuniciado;
	int capacidade, ID;
};

