#pragma once
#include <iostream>

using namespace std;
enum parametro { _HP, _MP, _XP, _Atk, _Def, _Agl, _Mag };

class Personagem
{
public:
	Personagem();
	~Personagem();

	virtual void atacar();
	virtual void defender();
	virtual void habilidade();
	virtual void usarItem();
	virtual void fugir();

	Personagem * setClasse(int _classe);
	void setParametro(int valor, parametro parametro);
	int getParametro(parametro parametro);
	string getClasseNome();

protected:
	int HP, MP, Exp, Atk, Def, Agl, Mag;
	bool envenenado, cego, confuso, sono;
	string classe;
};

