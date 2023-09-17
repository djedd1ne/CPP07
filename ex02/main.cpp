#include "Array.hpp"

int main(void) {
    {
        std::cout << "****** Empty array ******" << std::endl;
        Array<int> empty;
        Array<int> empty_copy(empty);
        std::cout << "empty array size = " << empty.size() << std::endl;
    }

    std::cout << "****** Simple test ******" << std::endl;
    Array<int> numbers(10);
    for (int i = 0; i < 10; i++) 
        numbers[i] = i + 1;
    for (int i = 0; i < 10; i++)
        std::cout << "numbers [" << i << "] = " << numbers[i] << std::endl;
    try {
		std::cout << "index = -1\t";
        numbers[-2] = 0;
    }
    catch(const Array<int>::outOfBounds &e){
        std::cerr << e.what() << std::endl;
    }
        try {
		std::cout << "index = 11\t";
        std::cout << numbers[11] << std::endl;
    }
    catch(const Array<int>::outOfBounds &e){
        std::cerr << e.what() << std::endl;
    }
}