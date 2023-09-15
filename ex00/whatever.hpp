#ifndef WHATEVER_HPP
#define WHATEVER_HPP
#include <iostream>
#include <string>

template<typename T>

void swap(T &a, T&b) {
    T c = a;
    a = b;
    b = c;
}

template<typename U>
U &min(U &a, U &b) {
    return (a >= b ? b : a);
}

template<typename V>
V &max(V &a, V &b) {
    return (a <= b? b : a);
}

#endif