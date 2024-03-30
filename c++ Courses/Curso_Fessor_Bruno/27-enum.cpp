#include <iostream>
using namespace std;

	/*
	Definicao do tipo de dado enum, que nada mais e que uma estrutura que vincula nomes a valores constantes. O mesmo pode ser
	intanciando como se iniciar qualquer tipo na linguagem, somente sendo necessario especificar o
	tipo(que no caso e o nome do enum) e o nome da variavel
	*/
	enum armas { rifle = 200, escopeta = 10, sniper = 30, fuzil = 500 };

	int testing_enum_main() {
		//Estrutura enum
		armas inventario = rifle;
		cout << inventario << endl;

		return 0;
	}

