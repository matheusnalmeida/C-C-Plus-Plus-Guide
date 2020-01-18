#include <iostream>
using namespace std;

	//Declaracao de funcao com argumento omitido(Caso nao se passe nenhum texto, sera utilizado o valor "Hello World")
	void imprime_texto_oa(string texto = "Hello World");

	int arguments_omissing_main() {

		/*
		Testando o metodo com a omissao de argumentos(Ira imprimir o valor padrao na prototipacao do metodo, que nesse caso
		sera hello world)
		*/
		imprime_texto_oa();
		imprime_texto_oa("Matheus Nunes De Almeida");

		return 0;
	}

	void imprime_texto_oa(string texto) {
		cout << texto << endl;
	}
