#pragma once
#include "Ponto.h"
#include <iostream>

class Quadrado :
	public Ponto
{
public:
	Quadrado();
	~Quadrado();

	void calcAltura();
	void calcComprimento();
	void calcArea();
	void calcPerimetro();

	void setPonto(int p, float _x, float _y);


	float getAltura() { return altura; }
	float getComprimento() { return comprimento; }
	float getArea() { return area; }
	float getPerimetro() { return perimetro; }



protected:
	float altura, comprimento, area, perimetro;
	Ponto ponto[4];
};

