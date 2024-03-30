#include <iostream>
#include <string>

template<typename T>
void Print(T value);

template<typename T,int N>
class Array {
private:
	T my_Array[N];
public:
	int getSize() const { return N; }
};
	
int template_ex_class() {

	//Template with functions
	Print("OI"); // or Print<std::string>("OI")
	Print(2); // or Print<int>(2)
	Print(2.2f); // or Print<float>(2.2f)

	//Template with classes
	Array<std::string,3> my_array;

	std::cout << my_array.getSize() << std::endl;

	return 0;
}

//Com template nos podemos basicamente receber qualquer valor para ser utiizado na funcao
template<typename T>
void Print(T value) {
	
	std::cout << value << std::endl;

}
