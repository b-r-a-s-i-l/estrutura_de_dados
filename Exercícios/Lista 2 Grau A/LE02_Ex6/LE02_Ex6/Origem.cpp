#include <iostream>
#include "Atirador.h"

using namespace std;

main() {

	setlocale(LC_ALL, "ptb");
	int opcao;
	Atirador atirador;

	//------------------------------------
	do
	{
		cout << "Escolha a a��o:\n|| 1 - Atirar || 2 - Recarregar || 3 - UsarKit || 5 - Trocar Arma || 0 - SAIR ||" << endl << "OP��O: ";
		cin >> opcao;

		switch (opcao)
		{
		case 1:
			atirador.atirar();
			break;
		case 2:
			atirador.recarregar();
			break;
		case 3:
			atirador.usarKitMedico();
			break;
		case 4:
			cout << "Escolha a arma:\n || 1 - Pistola || 2 - Carabina || 3 - Rifle || " << endl << "OP��O: ";
			cin >> opcao;
			atirador.trocarArmar(opcao);
			break;
		default:
			cout << "OP��O INV�LIDA!";
			break;
		}

		cout << endl;
		system("pause");
		system("cls");

	} while (opcao != 0);

	system("pause");
	return 0;
}