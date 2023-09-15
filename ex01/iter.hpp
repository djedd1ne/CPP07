#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>
#include <string>

template <typename T> void print(T &t) {
	std::cout << t << std::endl;
}

template <typename T> void incr(T &t) {
	t++;
}

template <typename T> void decr(T &t) {
	t--;
}

template <typename T>
void iter(T *array, size_t array_len, void (*f)(T &)) {
    if (array == NULL || f == NULL)
        return ;
    for (size_t i = 0; i < array_len; i++)
        f(array[i]);
}

#endif