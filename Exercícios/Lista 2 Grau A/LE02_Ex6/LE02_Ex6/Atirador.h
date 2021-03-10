#pragma once
#include "Arma.h"
#include "Armadura.h"
#include "Municao.h"
#include "KitMedico.h"
class Atirador
{
public:
	Atirador();
	~Atirador();

	void atirar();
	void recarregar();
	void usarKitMedico();
	void trocarArmar(int _ID);

protected:
	bool usandoArmadura, temKitMedico;
	Arma * arma;
	Municao municao[3];
	int vida;
};