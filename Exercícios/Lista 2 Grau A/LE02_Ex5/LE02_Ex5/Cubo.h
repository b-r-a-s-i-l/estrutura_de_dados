#pragma once
#include "Quadrado.h"
class Cubo :
	public Quadrado
{
public:
	Cubo();
	~Cubo();

	void setLargura(float _z);
	void realizarCalcs();
	void calcVolume();

	float getLargura() { return largura; }
	float getVolume() { return volume; }

protected:
	float volume, largura;
	Quadrado quadrado;
};

