#pragma once
class Ponto
{
public:
	Ponto();
	~Ponto();

	void setCoordenadas(float _x, float _y);

	float getCoordX() { return x; }
	float getCoordY() { return y; }

protected:
	float x, y;
};

