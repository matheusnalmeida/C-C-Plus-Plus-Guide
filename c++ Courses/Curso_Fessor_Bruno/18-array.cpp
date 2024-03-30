#include <iostream>
using namespace std;

	int vetor() {
		//Declaracao Vetor
		int vetor[3] = {};
		cout << "tamanho do vetor: " << (sizeof(vetor) / sizeof(vetor[0])) << endl;

		return 0;
	}
