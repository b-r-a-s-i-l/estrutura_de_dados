#pragma once
#include <string>
#include "Coordenadas.h"
class Retangulo :
	public Coordenadas
{
public:
	Retangulo();
	~Retangulo();

	void realizarCalcs();
	void calcAltura();
	void calcComprimento();
	void calcArea();
	void calcPerimetro();

	std::string defineTipo();

	void setPonto(int p, float _x, float _y);
	

	float getAltura() { return altura; }
	float getComprimento() { return comprimento; }
	float getArea() { return area; }
	float getPerimetro() { return perimetro; }



protected:
	float altura, comprimento, area, perimetro;
	std::string tipo;
	Coordenadas ponto[4];
};