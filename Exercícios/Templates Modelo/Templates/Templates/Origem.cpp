#include <iostream>
#include <string>
#include "ClasseTemplate.h"
using namespace std;

template <class T>
T meuTemplate(T dado, T outroDado) {
	return dado + outroDado;
}

int main() {

	//ClasseTemplate <ClasseTemplate<int>> containerDeInteiros;
	//ClasseTemplate <string> containerDeString;
	//ClasseTemplate <char> containerDeChar;
	ClasseTemplate <int> * containerDeInteiros = new ClasseTemplate <int>;
	containerDeInteiros->adicionaElemento(10);
	containerDeInteiros->adicionaElemento(20);
	cout << containerDeInteiros->obterElemento(0) << endl;
	cout << containerDeInteiros->obterElemento(1) << endl;

	ClasseTemplate <string> * containerDeString = new ClasseTemplate <string>;
	containerDeString->adicionaElemento("Brasil");
	containerDeString->adicionaElemento("Sacana");
	cout << containerDeString->obterElemento(0) << endl;
	cout << containerDeString->obterElemento(1) << endl;

	cout << meuTemplate(10, 30) << endl;
	cout << meuTemplate(10.2f, 30.4f) << endl;

	string a = "abc", b = "123";
	string c = meuTemplate(a,b);

	cout << c << endl;

	system("pause");
	return 0;
}