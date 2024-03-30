#include <iostream>
#include <vector>
using namespace std;

int vector_main() {

	vector<int> my_vector;
	vector<int> my_vector2;

	int tam;

	my_vector.push_back(1);my_vector.push_back(2);my_vector.push_back(3);my_vector.push_back(8);
	my_vector[3] = 4;

	my_vector2.push_back(5);my_vector2.push_back(6);my_vector2.push_back(7);my_vector2.push_back(8);

	cout << "O tamanho do vetor é: " << my_vector.size() << endl;

	cout << "Vetor 1: ";
	for (int i = 0; i < my_vector.size(); i++) {
		cout << my_vector[i] << " ";
	}
	cout << endl;

	//Trocando os dados entre dois vetores
	my_vector.swap(my_vector2);

	cout << "Vetor 1(apos a troca): ";
	for (int i = 0; i < my_vector.size(); i++) {
		cout << my_vector[i] << " ";
	}
	cout << endl;

	//Inserindo elementos no meio do vetor
	my_vector.insert(my_vector.begin()+2, 8888);

	cout << "Vetor 1(apos insercao): ";
	for (int i = 0; i < my_vector.size(); i++) {
		cout << my_vector[i] << " ";
	}
	cout << endl;

	//Removendo elementos do meio do vetor
	my_vector.erase(my_vector.end()-1);

	cout << "Vetor 1(apos remocao): ";
	for (int i = 0; i < my_vector.size(); i++) {
		cout << my_vector[i] << " ";
	}
	cout << endl;

	//Retornando elementos do vetor
	cout << "Primeiro elemento do vetor: " << my_vector.front() << endl;
	cout << "Ultimo elemento do vetor: " << my_vector.back() << endl;
	cout << "Primeiro elemento do vetor: " << my_vector.at((my_vector.size()/2)) << endl;

	//Removendo os elementos do vetor utilizando o pop_back(remove do inicio)
	while (!my_vector.empty()) {
		my_vector.pop_back();
	}
	
	cout << "Tamanho do vetor apos a remocao dos elementos(pop_back): " << my_vector.size() << endl;

	//Limpando todos os elementos com clear
	my_vector.clear();

	cout << "Tamanho do vetor apos a remocao dos elementos(clear): " << my_vector.size() << endl;
	
	return 0;
}