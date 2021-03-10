#include "Cubo.h"



Cubo::Cubo()
{
}


Cubo::~Cubo()
{
}

void Cubo::setLargura(float _z)
{
	largura = _z;
}

void Cubo::realizarCalcs()
{
	calcAltura();
	calcComprimento();
	calcArea();
	calcPerimetro();
}

void Cubo::calcVolume()
{
	volume = getComprimento() * getAltura() * getLargura();
}
