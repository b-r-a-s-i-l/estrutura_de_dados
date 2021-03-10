#include "Guerreiro.h"



int main() {
	enum Opcao { esperar, atacar, habilidade, defender, puxarEspada, pegarEscudo, fugir };
	int opcao;
	Guerreiro * personagem = new Guerreiro;
	setlocale(LC_ALL, "ptb");

	//------------------------------------
	do
	{
		cout << "Escolha a a��o:\n| 0 - Esperar || 1 - Atacar || 2 - Habilidade || 3 - Defender |\n| 4 - Desembanhar Espada || 5 - Empunhar Escudo || 6 - Fugir |" << endl << "OP��O: ";
		cin >> opcao;

		switch ((Opcao)opcao)
		{
		case esperar:
			personagem->esperar();
			break;
		case atacar:
			personagem->atacar();
			break;
		case habilidade:
			personagem->habilidade();
			break;
		case defender:
			personagem->defender();
			break;
		case puxarEspada:
			personagem->desembanharEspada();
			break;
		case pegarEscudo:
			personagem->empunharEscudo();
			break;
		case fugir:
			cout << "Voc� fugiu";
			break;
		default:
			cout << "OP��O INV�LIDA!";
			break;
		}

		cout << endl;
		system("pause");
		system("cls");

	} while (opcao != fugir);

	return 0;
}