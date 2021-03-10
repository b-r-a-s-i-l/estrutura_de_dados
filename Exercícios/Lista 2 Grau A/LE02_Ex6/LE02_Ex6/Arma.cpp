#include "Arma.h"
#include "Pistola.h"
#include "Carabina.h"
#include "Rifle.h"


Arma::Arma()
{
}


Arma::~Arma()
{
}

void Arma::setIdArm(int _ID)
{
	ID = _ID;
}

void Arma::atirar()
{
	if (carregador.getQuantidadeMun() > 0)
	{
		carregador.usarMun();
	}

}

void Arma::recarregar()
{
	if (carregador.getQuantidadeMun() < capacidade)
	{
		carregador.municiar();
	}
}

void Arma::verificarCarregador()
{
	if (carregador.getQuantidadeMun() > 0 && carregadorMuniciado < capacidade)
	{
		carregadorMuniciado = true;
	}
}

Arma * Arma::trocarArma(int _ID)
{
	Arma * arma = new Arma;

	switch (_ID)
	{
	case 1:
		arma = new Pistola;
		break;
	case 2:
		arma = new Carabina;
		break;
	case 3:
		arma = new Rifle;
		break;
	default:
		arma = new Pistola;
		break;
	}

	return arma;
}
