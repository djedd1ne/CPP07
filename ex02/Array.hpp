#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>

template <typename T>
class Array {
    private:
        T *_array;
        unsigned int _size;
    
    public:
        Array(): _size(0), _array(nullptr){}

        Array(unsigned int size): _size(size) {
            this->_array = new T[size];
        }

        Array(const Array &obj) {
            if (obj._size > 0)
            {
                this->_size = obj._size;
                this->_array = new T[obj._size];
                for (unsigned int i = 0; i < obj._sizel; i++)
                    this->_array[i] = obj._array[i];
            }
            else
            {
                _size = 0;
                _array = nullptr;
            }
        }

        Array &operator = (Array const &obj) {
            if(this->_size = obj)
            {
                this->_array = new T[this->_size];
                for (unsigned int i = 0; i < this->_size; i++)
                    this->_array[i] = obj._array[i];
            }
            return (*this);
        }

        T &operator [](int i) {
            if(i >= this->_size || i < 0)
                throw outOfBounds();
            return (this->_array[i]);
        }

        ~Array() {
            if (this->_array)
                delete[] this->_array;
        }

        unsigned int size() const {
            return this->_size;
        }

        class outOfBounds : public std::exception {
			public:
				virtual const char *what() const throw() {
					return ("index is out of bounds!");
				};
		};
};





#endif