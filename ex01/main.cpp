#include "iter.hpp"
#include <iostream>
#include <stdio.h>

void printInt(int i){
	std::cout << i << std::endl;
}

void printChr(char c){
	std::cout << c << std::endl;
}

void printStr(std::string str){
	std::cout << str << std::endl;
}

void printDbl(double d){
	std::cout << d << std::endl;
}

int main(){
	std::cout << std::endl << "array[] = {1,2,3,4,5}"<< std::endl;
	{
		int array[] = {1,2,3,4,5};
		::iter(array, 5, printInt);
	}
	std::cout << std::endl << "array[] = \"abcde\""<< std::endl;
	{
		char array[] = "abcde";
		::iter(array, 5, printChr);
	}
	std::cout << std::endl << "array[] = {\"abc\", \"defg\", \"hij\", \"klm\", \"nop\"}"<< std::endl;
	{
		std::string array[] = {"abc", "defg", "hij", "klm", "nop"};
		::iter(array, 5, printStr);
	}
	std::cout << std::endl << "array[] = {1.1,2.2,3.3,4.4,5.5}"<< std::endl;
	{
		double array[] = {1.1,2.2,3.3,4.4,5.5};
		::iter(array, 5, printDbl);
	}
}
