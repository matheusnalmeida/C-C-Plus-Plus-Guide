#include <iostream>
#include<stack>
using namespace std;

	int pilha_main() {
		//Pilha 
		stack<string> palavras;
		palavras.push("Matheus");
		palavras.push("Aldo");
		palavras.push("Gabriel");
		cout << "Carta do top: " << palavras.top() << endl;
		cout << "Tamanho da pilha: " << palavras.size() << endl;
		palavras.pop();
		cout << "Tamanho da pilha: " << palavras.size() << endl;
		//Verificando se a pilha esta vazia(True ou 1 caso esteja vazia e False ou 0 caso nao esteja vazia)
		cout << palavras.empty() << endl;

		return 0;
	}
