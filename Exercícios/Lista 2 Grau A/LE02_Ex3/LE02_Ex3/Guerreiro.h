#pragma once
#include <iostream>

using namespace std;
enum parametro { _HP, _MP, _XP, _Atk, _Def, _Agl, _Mag };


class Guerreiro
{
public:
	Guerreiro();
	~Guerreiro();
	
	void esperar();
	void atacar();
	void habilidade();
	void defender();
	void empurrarComEscudo();
	void desembanharEspada();
	void empunharEscudo();

	void setParametro(int valor, parametro parametro);
	int getParametro(parametro parametro);
	bool getEscudoEmMaos() { return escudoEmMaos; }
	bool getEspadaDesembanhanda() { return espadaDesembanhada; }
	

private:
	int HP, MP, Exp, Atk, Def, Agl, Mag;
	bool escudoEmMaos, espadaDesembanhada;
};

