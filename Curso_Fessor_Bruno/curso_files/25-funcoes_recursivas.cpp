#include <iostream>
using namespace std;

	void contagem_recursiva(int num_final, int contador = 0);
	int fatorial_recursivo(int numero, int resultado = 1);
	void fibonnaci_recursivo(int quantidade_de_elementos, int penultimo_valor = 1, int antepenultimo_valor = 0,
		int valor_atual = 1);

	int recursive_functions_main() {
		//Testando funcao recursiva
		contagem_recursiva(20);
		cout << fatorial_recursivo(3) << endl;
		fibonnaci_recursivo(10);
		cout << endl;

		return 0;
	}

	void contagem_recursiva(int num_final, int contador) {
		if (contador <= num_final) {
			cout << contador << endl;
			contador++;
			contagem_recursiva(num_final, contador);
		}
	}

	int fatorial_recursivo(int numero, int resultado) {
		if (numero != 0) {
			resultado *= numero;
			numero--;
			resultado = fatorial_recursivo(numero, resultado);
		}

		return resultado;
	}

	void fibonnaci_recursivo(int quantidade_de_elementos, int penultimo_valor, int antepenultimo_valor, int valor_atual) {
		if (quantidade_de_elementos >= valor_atual) {
			if (valor_atual == 1) {
				cout << 0 << " ";
				valor_atual++;
				fibonnaci_recursivo(quantidade_de_elementos, penultimo_valor, antepenultimo_valor, valor_atual);
			}
			else if (valor_atual == 2) {
				cout << 1 << " ";
				valor_atual++;
				fibonnaci_recursivo(quantidade_de_elementos, penultimo_valor, antepenultimo_valor, valor_atual);
			}
			else {
				int novo_valor = penultimo_valor + antepenultimo_valor;
				cout << novo_valor << " ";
				antepenultimo_valor = penultimo_valor;
				penultimo_valor = novo_valor;
				valor_atual++;
				fibonnaci_recursivo(quantidade_de_elementos, penultimo_valor, antepenultimo_valor, valor_atual);
			}
		}
	}
