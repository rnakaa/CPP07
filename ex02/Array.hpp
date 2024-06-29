#ifndef ARRAY_HPP
#define ARRAY_HPP

template<typename T>
class Array {
	public:
		Array();
		Array(unsigned int n);
		Array(const Array &array);
		~Array();
		Array & operator=(const Array & array);
		T &operator[](std::size_t indx);
		std::size_t size()const;


	private:
		std::size_t _len;
		T* _array;
};


#include "Array.tpp"
#endif

