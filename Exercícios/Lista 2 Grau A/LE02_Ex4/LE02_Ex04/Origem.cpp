#include "Classes.h"
#include <string>

int main() {
	enum Menu { ATACAR, DEFENDER, HABILIDADE, ITEM, FUGIR, TROCAR };
	
	int opcao;
	Personagem * personagem = new Personagem;
	personagem->setClasse(GUERREIRO);


	setlocale(LC_ALL, "ptb");

	//------------------------------------
	do
	{
		cout << "CLASSE ATUAL: " << personagem->getClasseNome() << endl << "Escolha a ação:\n|| 0 - Atacar || 1 - Defender || 2 - Habilidade || 3 - Item || 4 - Fugir || 5 - Trocar Classe ||" << endl << "OPÇÃO: ";
		cin >> opcao;

		switch ((Menu)opcao)
		{
		case ATACAR:
			personagem->atacar();
			break;
		case DEFENDER:
			personagem->defender();
			break;
		case HABILIDADE:
			personagem->habilidade();
			break;
		case ITEM:
			personagem->usarItem();
			break;
		case FUGIR:
			personagem->fugir();
			break;
		case TROCAR:
			cout << "Escolha a ação:\n || 0 - BARBARO || 1 - BARDO || 2 - CLERIGO || 3 - GUERREIRO || 4 - LADINO || 5 - MAGO||" << endl << "OPÇÃO: ";
			cin >> opcao;
			personagem = personagem->setClasse((TipoClasse)opcao);
			break;
		default:
			cout << "OPÇÃO INVÁLIDA!";
			break;
		}

		cout << endl;
		system("pause");
		system("cls");

	} while (opcao != FUGIR);

	return 0;
}