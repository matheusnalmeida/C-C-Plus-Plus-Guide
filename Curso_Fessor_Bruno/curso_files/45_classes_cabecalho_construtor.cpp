#include <iostream>
#include "Aviao.h"

int classes_cabecalho_construtor_main() {

	Aviao* a1 = new Aviao(1);
	Aviao* a2 = new Aviao(2);
	Aviao* a3 = new Aviao(3);

	a1->imprimir();
	a2->imprimir();
	a3->imprimir();

	return 0;
}