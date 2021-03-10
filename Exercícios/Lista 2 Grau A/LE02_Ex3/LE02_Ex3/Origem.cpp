#include "Guerreiro.h"



int main() {
	enum Opcao { esperar, atacar, habilidade, defender, puxarEspada, pegarEscudo, fugir };
	int opcao;
	Guerreiro * personagem = new Guerreiro;
	setlocale(LC_ALL, "ptb");

	//------------------------------------
	do
	{
		cout << "Escolha a ação:\n| 0 - Esperar || 1 - Atacar || 2 - Habilidade || 3 - Defender |\n| 4 - Desembanhar Espada || 5 - Empunhar Escudo || 6 - Fugir |" << endl << "OPÇÃO: ";
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
			cout << "Você fugiu";
			break;
		default:
			cout << "OPÇÃO INVÁLIDA!";
			break;
		}

		cout << endl;
		system("pause");
		system("cls");

	} while (opcao != fugir);

	return 0;
}