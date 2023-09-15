#include "iter.hpp"


int main(void) {
    std::cout << "***** Test ONE ******" << std::endl;
    
    int array[] = {0, 1, 2, 3, 4};
	int len_arr = sizeof(array) / sizeof(int);
    ::iter(array, len_arr, print);
	std::cout << std::endl;
    std::cout << "********************************************" << std::endl;
    ::iter(array, len_arr, incr);
    for (int i = 0; i < len_arr; i++)
		std::cout << array[i] << std::endl;
    std::cout << "********************************************" << std::endl;
    ::iter(array, len_arr, decr);
    for (int i = 0; i < len_arr; i++)
		std::cout << array[i] << std::endl;
    std::cout << "********************************************" << std::endl;
    
    std::cout << "***** Test TWO ******" << std::endl;

    char array2[] = {'a', 'b', 'c', 'd', 'e'};
	int len_arr2 = sizeof(array2) / sizeof(char);
    ::iter(array2, len_arr2, print);
	std::cout << std::endl;
    std::cout << "********************************************" << std::endl;
    ::iter(array2, len_arr2, incr);
    for (int i = 0; i < len_arr2; i++)
		std::cout << array2[i] << std::endl;
    std::cout << "********************************************" << std::endl;
    ::iter(array2, len_arr2, decr);
    for (int i = 0; i < len_arr2; i++)
		std::cout << array2[i] << std::endl;
    std::cout << "********************************************" << std::endl;

    return 0;
}