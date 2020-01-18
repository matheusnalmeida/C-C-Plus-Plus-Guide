#include <iostream>
//Biblioteca para comparacao de strings
#include <string>
using namespace std;

	/*
	A funcao main pode receber duas variaveis que podem servir de propriedades para o main e que sao padroes. O valor para as
	mesmas pode ser informado via linha de comando:
	-int argc: Ira armazenar a quantidade de parametros passados
	-char *argv[]:E um ponteiro que aponta pra uma matriz de caracteres. Cada elemento da matriz ira apontar para um argumento
	digitado pelo usuario, armazenando o mesmo.

	Obs: Quando informamos as variaveis no main, mesmo que nao passemos argumentos, sera passado por padrao um argumento que
	sera o nome do programa.

	*/
	int main_args(int argc, char* argv[]) {
		//Verificacao de argumentos
		if (argc > 1) {
			/*
			O metodo strcmp retorna os seguintes codigos para as comparacoes de duas strings:
			1)Retorna 0 caso a string 1 seja igual a string 2
			2) Retorna um valor maior que 0 quando a String 1 for maior que a String 2
			3) Retorna um valor menor que 0 quando a string 1 for menor que a String 2
			*/
			if (!strcmp(argv[1], "sol")) {
				cout << "Vou ao clube" << endl;
			}
			else if (!strcmp(argv[1], "nuvem")) {
				cout << "Vou ao cinema" << endl;
			}
			else {
				cout << "Vou ficar em casa" << endl;
			}
		}
		return 0;
	}


