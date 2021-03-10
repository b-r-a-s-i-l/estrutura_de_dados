#include "Quadrado.h"



Quadrado::Quadrado()
{
}


Quadrado::~Quadrado()
{
}

void Quadrado::calcAltura()
{
	altura = ponto[0].getCoordY() - ponto[3].getCoordY();
}

void Quadrado::calcComprimento()
{
	comprimento = ponto[2].getCoordX() - ponto[3].getCoordX();
}

void Quadrado::calcArea()
{
	area = altura * comprimento;
}

void Quadrado::calcPerimetro()
{
	perimetro = 2 * altura + 2 + comprimento;
}

void Quadrado::setPonto(int p, float _x, float _y)
{
	ponto[p].setCoordenadas(_x, _y);
}