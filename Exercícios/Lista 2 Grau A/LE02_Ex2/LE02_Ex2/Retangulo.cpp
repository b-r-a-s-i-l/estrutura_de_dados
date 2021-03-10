#include "Retangulo.h"



Retangulo::Retangulo()
{
}


Retangulo::~Retangulo()
{
}

void Retangulo::realizarCalcs()
{
	calcAltura();
	calcComprimento();
	calcArea();
	calcPerimetro();
}

void Retangulo::calcAltura()
{
	altura = ponto[0].getCoordY() - ponto[3].getCoordY();
}

void Retangulo::calcComprimento()
{
	comprimento = ponto[2].getCoordX() - ponto[3].getCoordX();
}

void Retangulo::calcArea()
{
	area = altura * comprimento;
}

void Retangulo::calcPerimetro()
{
	perimetro = 2 * altura + 2 + comprimento;
}

void Retangulo::setPonto(int p, float _x, float _y)
{
	ponto[p].setCoordenadas(_x, _y);
}

std::string Retangulo::defineTipo()
{
	if (getAltura() == getComprimento())
	{
		tipo = "QUADRADO";
	}
	else
	{
		tipo = "RETANGULO";
	}

	return tipo;
}
