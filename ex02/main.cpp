#include <iostream>
#include "Array.hpp"

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"

int main(){
	std::cout << std::endl << "case1 int" << std::endl;
	{
		Array<int> array1(20);
		Array<int> array2(40);
		array2[4] = 3;
		std::cout << YELLOW << "array2[4] = 3" << RESET<< std::endl;
		array1 = array2;
		std::cout << "array1 = array2" << std::endl;
		std::cout << "array1[4]= " << array1[4] << "\narray2[4]= " << array2[4] << std::endl;
		array2[4] = 9;
		std::cout << YELLOW << "array2[4] = 9" << RESET<< std::endl;
		std::cout << "array1[4]= " << array1[4] << "\narray2[4]= " << array2[4] << std::endl;
	}

	std::cout << std::endl << "case2 int" << std::endl;
	{
		Array<int> array2(40);
		std::cout << YELLOW << "array2[4] = 3" << RESET << std::endl;
		array2[4] = 3;
		Array<int> array1(array2);
		std::cout << "array1(array2)" << std::endl;
		std::cout << "array1[4]= " << array1[4] << "\narray2[4]= " << array2[4] << std::endl;
		array2[4] = 9;
		std::cout << YELLOW << "array2[4] = 9" << RESET <<std::endl;
		std::cout << "array1[4]= " << array1[4] << "\narray2[4]= " << array2[4] << std::endl;
	}
	std::cout << std::endl << "char" << std::endl;
	{
		Array<char> array2(20);
		array2[4] = 'a';
		std::cout << YELLOW << "array2[4] = a" << RESET << std::endl;
		Array<char> array1(array2);
		std::cout << "array1(array2)" << std::endl;
		std::cout << "array1[4]= " << array1[4] << "\narray2[4]= " << array2[4] << std::endl;
		array2[4] = 'b';
		std::cout << YELLOW << "array2[4] = b" << RESET << std::endl;
		std::cout << "array1[4]= " << array1[4] << "\narray2[4]= " << array2[4] << std::endl;
	}

	std::cout << std::endl << "char" << std::endl;
	{
		const Array<char> array2(20);
		//array2[4] = 'a';
		std::cout << array2[0] << std::endl;
	}
}

//__attribute__((destructor))
//static void destructor(void){
//	system("leaks -q array");
//}

