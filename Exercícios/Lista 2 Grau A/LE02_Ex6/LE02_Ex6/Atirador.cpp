#include "Atirador.h"

Atirador::Atirador()
{
	vida = 80;
	usandoArmadura = false;
	temKitMedico = true;
	municao[0].setIdMun(1);
	municao[0].setQuantidadeMun(50);
	municao[1].setIdMun(2);
	municao[1].setQuantidadeMun(30);
	municao[2].setIdMun(3);
	municao[2].setQuantidadeMun(10);
}


Atirador::~Atirador()
{
}

void Atirador::atirar()
{
	arma->atirar();
}

void Atirador::recarregar()
{
	arma->recarregar();
}

void Atirador::usarKitMedico()
{
	KitMedico * kit = new KitMedico;
	vida += kit->usarKitMedico();
	if (vida > 100) vida = 100;
}

void Atirador::trocarArmar(int _ID)
{
	arma = arma->trocarArma(_ID);
}
