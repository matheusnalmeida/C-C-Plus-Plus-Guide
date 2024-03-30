#include <iostream>
using namespace std;


	void imprime_texto_over(string texto);
	void imprime_texto_over(string texto1, string texto2);


	int overload_functions_main() {

		//Funcoes com mesmo nome, porem com parametros diferentes, resultando assim em uma sobrecarga de funcoes
		imprime_texto_over("Matheus");
		imprime_texto_over("Oi", "Matheus");

		return 0;
	}

	void imprime_texto_over(string texto) {
		cout << texto << endl;
	}

	void imprime_texto_over(string texto1, string texto2) {
		cout << texto1 << " | " << texto2 << endl;
	}
