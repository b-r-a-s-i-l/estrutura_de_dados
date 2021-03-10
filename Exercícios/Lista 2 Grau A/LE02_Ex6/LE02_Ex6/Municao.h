#pragma once
#include "Arma.h"
class Municao
{
public:
	Municao();
	~Municao();

	void setIdMun(int _ID);
	int getIdMun() { return ID; }
	void setQuantidadeMun(int _qtd);
	int getQuantidadeMun() { return quantidade; }

	void municiar();
	void usarMun();	

protected:
	int quantidade, ID;
};