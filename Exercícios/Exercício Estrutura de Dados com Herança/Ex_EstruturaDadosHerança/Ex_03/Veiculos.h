#pragma once
#include "Bicicletas.h"
#include "Motos.h"
#include "Carros.h"
#include "Helicoptero.h"

class Veiculos
{
public:
	Veiculos();
	~Veiculos();

	Veiculos setVeiculo(int _tipo);

protected:
	Veiculos *veiculo;
};

