#include <iostream>
using namespace std;

	//Demonstracao de declaracao e definicao de funcoes apos o main. Para isso a funcao tem de ser previamente declarada
	void imprime_texto(string texto);

	int functions_main() {
		//Testando a definicao de funcoes apos o main
		string texto = "Matheus Nunes De Almeida";
		imprime_texto(texto);
		return 0;
	}

	void imprime_texto(string texto) {
		cout << texto << endl;
	}

