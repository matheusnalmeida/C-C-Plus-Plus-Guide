#include <iostream>
#include <queue>
using namespace std;

	int fila_main() {
		//Fila
		queue<string> palavras;
		palavras.push("Matheus");
		palavras.push("Aldo");
		palavras.push("Gabriel");
		cout << "Carta na frente da fila: " << palavras.front() << endl;
		cout << "Carta no final da fila: " << palavras.back() << endl;
		cout << "Tamanho da fila: " << palavras.size() << endl;
		palavras.pop();
		cout << "Tamanho da fila: " << palavras.size() << endl;
		//Verificando se a fila esta vazia(True ou 1 caso esteja vazia e False ou 0 caso nao esteja vazia)
		cout << palavras.empty() << endl;
		
		return 0;
	}
