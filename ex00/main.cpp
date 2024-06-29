#include "whatever.hpp"
#include <iostream>


int main(){
	std::cout << "--------int-----------" << std::endl;
	{
		int a = 10;
		int b = 0;
		std::cout << "a = " << a << "   b = " << b << std::endl;
		::swap(a,b);
		std::cout << "a = " << a << "   b = " << b << std::endl;
		std::cout << "min is 0 = "<< ::min(a,b) << std::endl;
		std::cout << "max is 10= "<< ::max(a,b) << std::endl;
	}
	std::cout  << std::endl << "--------float-----------" << std::endl;
	{
		float a = 10.123f;
		float b = 0.123f;
		std::cout << "a = " << a << "   b = " << b << std::endl;
		::swap(a,b);
		std::cout << "a = " << a << "   b = " << b << std::endl;
		std::cout << "min is 0.123 = "<< ::min(a,b) << std::endl;
		std::cout << "max is 10.123= "<< ::max(a,b) << std::endl;
	}
	std::cout  << std::endl << "--------double-----------" << std::endl;
	{
		double a = 10.123;
		double b = 0.123;
		std::cout << "a = " << a << "   b = " << b << std::endl;
		::swap(a,b);
		std::cout << "a = " << a << "   b = " << b << std::endl;
		std::cout << "min is 0.123 = "<< ::min(a,b) << std::endl;
		std::cout << "max is 10.123= "<< ::max(a,b) << std::endl;
	}
	
}
