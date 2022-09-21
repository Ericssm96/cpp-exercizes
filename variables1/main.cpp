#include <iostream>

int main(){
	int a = 1;
	auto b {2}; // o tipo da variável b recebe qualquer que seja o tipo da variável a.
	float c (3);

	float sum = a+b+c;

	std::cout << "The sum value is: " << sum << "." << std::endl;
}