#include "Veiculos.h"



Veiculos::Veiculos()
{
}


Veiculos::~Veiculos()
{
}

Veiculos Veiculos::setVeiculo(int _tipo)
{
	switch (_tipo)
	{
	case 1:
		veiculo = new Bicicletas;
		break;
	case 2:
		veiculo = new Motos;
		break;
	case 3:
		veiculo = new Carros;
		break;
	case 4:
		veiculo = new Helicoptero;
		break;
	default:
		break;
	}

	return *veiculo;
}
