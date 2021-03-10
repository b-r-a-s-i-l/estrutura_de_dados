#include "pch.h"
#include "CppUnitTest.h"
#include "../Questao1/Lista.h"
#include "../Questao1/Lista.cpp"
#include "../Questao1/No.h"
#include "../Questao1/No.cpp"
#include "../Questao1/ListaInteiro.h"
#include "../Questao1/ListaInteiro.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TesteProvaGrauA
{
	TEST_CLASS(Questao1)
	{
		
	public:
		TEST_METHOD(ListaBaseVazia)
		{
			//arrange
			Lista* lista_base = new Lista();
			int quant = 0;
			//assert
			Assert::AreEqual(quant, lista_base->obtemTamanhoLista());
		}
		TEST_METHOD(AdicionaListaBase)
		{
			//arrange
			Lista* lista_base = new Lista();
			int quant = 1;
			//act
			lista_base->adicionaElemento(new No(10));
			//assert
			Assert::AreEqual(quant, lista_base->obtemTamanhoLista());
		}
		TEST_METHOD(OtemTodosElementosVazia)
		{
			//arrange
			Lista* lista_base = new Lista();
			//act
			//assert
			Assert::IsNull(lista_base->obtemTodosElementos());
		}
		TEST_METHOD(OtemTodosElementos)
		{
			//arrange
			Lista* lista_base = new Lista();
			//act
			lista_base->adicionaElemento(new No(10));
			//assert
			Assert::IsNotNull(lista_base->obtemTodosElementos());
		}
		TEST_METHOD(ListaBase_removeNo) {
			//arrange
			Lista* lista_base = new Lista();
			//act
			lista_base->adicionaElemento(new No(10));
			//assert
			Assert::IsNotNull(lista_base->removeUltimoNo());
		}
		TEST_METHOD(ListaBase_removeNo_vazia) {
			//arrange
			Lista* lista_base = new Lista();
			//act
			//assert
			Assert::IsNull(lista_base->removeUltimoNo());
		}
		TEST_METHOD(ListaBase_removeNo_qtd) {
			//arrange
			Lista* lista_base = new Lista();
			int qtd = 1;
			//act
			lista_base->adicionaElemento(new No(10));
			lista_base->adicionaElemento(new No(20));
			lista_base->removeUltimoNo();
			//assert
			Assert::AreEqual(qtd, lista_base->obtemTamanhoLista());
		}
		TEST_METHOD(ListaBase_removeNo_No){
			//arrange
			Lista* lista_base = new Lista();
			No* no2 = new No(20);
			//act
			lista_base->adicionaElemento(new No(10));
			lista_base->adicionaElemento(no2);
			//assert
			Assert::AreEqual(no2->obtemInfo(), lista_base->removeUltimoNo()->obtemInfo());
		}
		TEST_METHOD(ListaInteirosObtemTodosElementosVazia)
		{
			//arrange
			ListaInteiro* lista_int = new ListaInteiro();
			//act
			//assert
			Assert::IsNull(lista_int->obtemTodosElementos());
		}
		TEST_METHOD(ListaInteirosVazia)
		{
			//arrange
			ListaInteiro* lista_int = new ListaInteiro();
			int qtd = 0;
			//act
			//assert
			Assert::AreEqual(qtd,lista_int->obtemTamanhoLista());
		}
		TEST_METHOD(ListaInteirosAdicionaInt)
		{
			//arrange
			ListaInteiro* lista_int = new ListaInteiro();
			int qtd = 1;
			//act
			lista_int->adicionaElemento(10);
			//assert
			Assert::AreEqual(qtd, lista_int->obtemTamanhoLista());
		}
		TEST_METHOD(ListaInteirosObtemTodosElementos)
		{
			//arrange
			ListaInteiro* lista_int = new ListaInteiro();
			//act
			lista_int->adicionaElemento(10);
			//assert
			Assert::IsNotNull(lista_int->obtemTodosElementos());
		}
		TEST_METHOD(ListaInteirosSomaTodosElementos)
		{
			//arrange
			ListaInteiro* lista_int = new ListaInteiro();
			//act
			lista_int->adicionaElemento(10);
			lista_int->adicionaElemento(20);
			int total = 30;
			//assert
			Assert::AreEqual(total,lista_int->somaTodosElementos());
		}
	};
}
