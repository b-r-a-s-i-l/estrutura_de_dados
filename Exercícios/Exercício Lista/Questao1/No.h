#pragma once
class No
{
public:
	No();
	No(int info);
	~No();
	void defineProximo(No* prox);
	No* obtemProximo();
	void defineInfo(int info);
	int obtemInfo();
private:
	int info;
	No* proximo;
};

