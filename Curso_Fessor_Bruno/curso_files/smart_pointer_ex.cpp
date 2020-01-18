#include <iostream>
#include <memory>

/*
##Existem tres tipos principoais de pnteiros inteligentes:##
1)unique_pt: O unique_ptr e o ponteiro inteligente mais simplificado e que consome menos recursos. Todos os objetos que forem
alocados na heap e que forem inseridos nesse ponteiro, serao desalocados a partir do momento que o escopo de definicao do 
mesmo acabar. Alem disso, o unique_ptr nao aceita copia de ponteiro, ou seja, nao podemos copiar um ponteiro unique_pt para
outro ponteiro.
2)shared_ptr: O shared_ptr diferente do unique_ptr, ira desalocar um determinado objeto na memoria, no momento que todos os
ponteiros do tipo shared_ptr que apontam para esse determinado objeto pararem de referenciar o objeto. Os ponteiros param de
referenciar no momento que o seu escopo de definicao acaba. Os shared_ptr podem ser clonados para outros ponteiros.
3)weak_ptr>O weak_ptr é um ponteiro inteligente capaz de referenciar a objetos que ja foram deletados e fazer a verificacao;
Com isso podem ser uteis para se verificar se determinado endereco memoria ja foi ou nao desalocado.

##Funcionamento do counter##
-Para que o shared_ptr saiba que nao existem mais outros ponteiros apontando para o objeto e possa apagar o mesmo da memoria
, existe um contador na memoria que é alocado quando se cria um shared_ptr.Esse contador possui dois valores salvos, um sendo
chamado de use_count, que representa a quantidade de shared_ptr referenciando um determinado objeto e o weak_count que 
representa o numero de weak_ptr apontando para um dado objeto. A cada novo shared_ptr que referencia um objeto ja 
criado , o use_count é incrementado, e quando se acaba o escopo de um determinado ponteiro, o use_count sera decrementado. 
Quando o use_count atinge 0, automaticamente o objeto sera desalocado da memoria.
-Quando um weak_ptr aponta para um determinado objeto na memoria, o weak_count sera incrementado em 1 e caso o use_count
venha a ser maior que 1, o weak_count tambem sera incrementado. Dessa maneira, o objeto contador so sera desalocado da 
memoria caso o weak_count venha a se tornar 0. Quando o escopo de um weak_pointer acaba, o weak_counter será decrementado 
e caso o numero de use_count se torne 0, o weak_count tambem sera decrementado. Dessa maneiro o weak_pointer consegue apontar
para elementos ja removidos.

##Code Observations##
-Podemos iniciar os smart pointers seja passando diretamente o objeto alocado na heap no construtor do smart pointer, ou
utilizando os metodos make de cada smart pointer. A maneira preferida é se utilizando o metodo make, sendo os motivos 
listados abaixo.
1)make_unique = Para os unique_ptr, é preferivel se utilizar o make_unique, pois assim sao tratadas possiveis excessoes que
venham a ocorrer no momento da alocacao.
Exemplo utilizando o new diretamente -> std::unique_ptr<TestSmart> pointer(new TestSmart());
Exemplo utilizando o make -> std::unique_ptr<TestSmart> pointer = std::make_unique<TestSmart>();
2)make_shared = Com os shared_pointer é preferivel que se utilize o make_shaed pois assim os objetos tanto do contador quanto
da classe em si, serao alocados de maneira junta, fazendo assim com que a execucao do programa seja mais rapida e que seja
evitada duas alocacoes separadas( a da classe a do contador).
Exemplo utilizando o make_shared -> std::shared_ptr<TestSmart> pointer = std::make_shared<TestSmart>();

*/

class TestSmart {
public:
	int x,y,z;
	TestSmart() { std::cout << "Creating Entity" << std::endl; };
	~TestSmart() { std::cout << "Destroying Entity" << std::endl; }
	void print_special() { std::cout << "Hello World" << std::endl; }


};


int smart_pointer_ex() {
	/*
	-------------------------------Usando unique_ptr--------------------------------------------
	std::unique_ptr<TestSmart> pointer = std::make_unique<TestSmart>();
	Codigo de copia nao permitido unique_ptr -> std::unique_ptr<TestSmart> pointer2 = pointer;
	pointer->print_special();
	*/
	/*
	-------------------------------Usando shared_ptr--------------------------------------------
		//Demonstrando instanciacao de shared_ptr em diferentes escopos
	std::shared_ptr<TestSmart> e0 ;
	{
		std::cout << "Entrando no escopo interno" << std::endl;
		std::shared_ptr<TestSmart> pointer = std::make_shared<TestSmart>();
		e0 = pointer;
		std::cout << "Saindo do escopo interno" << std::endl;
	}
	std::cout << "Votando para o escopo externo" << std::endl;
	//O objeto so é desalocado no final do escopo, pois enquanto ainda tiverem shared_ptr apontando para o objeto, o mesmo
	//nao sera desalocado
	*/
	/*
	-------------------------------Usando weak_ptr--------------------------------------------
	std::weak_ptr<TestSmart> weak_ptr;
	{
		std::cout << "Entrando no escopo interno" << std::endl;
		std::shared_ptr<TestSmart> pointer = std::make_shared<TestSmart>();
		weak_ptr = pointer;
		std::cout << "Saindo do escopo interno" << std::endl;
	}
	std::cout << "Votando para o escopo externo" << std::endl;
	//Verificando se o ponteiro ainda existe com o metodo lock(nesse caso nao existe pois o escopo de iniciacao ja passou
	if (auto pt = weak_ptr.lock()){
		std::cout << "Ponteiro existe" << std::endl;
	}
	else {
		std::cout << "Ponteiro nao existe mais" << std::endl;
	}
	*/

	return 0;
}