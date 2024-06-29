template<typename T>
Array<T>::Array():_len(0), _array(new T[0]){
	std::cout << "zero constructor called" << std::endl;
}

template<typename T>
Array<T>::Array(unsigned int n):_len(n), _array(new T[n]){
	std::cout << "unsigned n constructor called" << std::endl;
}

template<typename T>
Array<T>::Array(const Array &cp){
	std::cout << "copy constructor called" << std::endl;
	_len = cp._len;
	_array = new T[_len];
	std::size_t i = 0;
	while(i < _len){
		_array[i] = cp._array[i];
		i++;
	}
}

template<typename T>
Array<T> & Array<T>::operator=(const Array & cp){
	if (&cp == this)
		return *this;
	_len = cp._len;
	if(_array != NULL)
		delete [] _array;
	_array = new T[_len];
	std::size_t i = 0;
	while(_len > 0 && i < _len){
		_array[i] = cp._array[i];
		i++;
	}
	return *this;
}

template<typename T>
T & Array<T>::operator[](std::size_t indx){
	if(indx > _len){
		throw std::out_of_range("indx is out of range");
	}
	else return (_array[indx]);
}

template<typename T>
const T & Array<T>::operator[](std::size_t indx)const {
	if(indx > _len){
		throw std::out_of_range("indx is out of range");
	}
	else return (_array[indx]);
}

template<typename T>
Array<T>::~Array(){
	if(_array != NULL)
		delete [] _array;
	std::cout << "destructor called" << std::endl;
}

template<typename T>
std::size_t Array<T>::size()const {
	return _len;
}
