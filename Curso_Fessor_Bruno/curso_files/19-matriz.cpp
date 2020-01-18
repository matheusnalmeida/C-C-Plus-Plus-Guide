#include <iostream>
using namespace std;

	int matriz() {
		//Declaracao matriz
		int matriz[2][5];
		//Preenchendo a matriz
		for (int i = 0; i < size(matriz); i++) {
			for (int z = 0; z < size(matriz[i]); z++) {
				matriz[i][z] = z + 1;
			}
		}
		//Percorrendo a matriz
		for (int i = 0; i < size(matriz); i++) {
			for (int z = 0; z < size(matriz[i]); z++) {
				cout << matriz[i][z] << " ";
			}
			cout << endl;
		}
		return 0;
	}
