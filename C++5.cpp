//9. FUNCIONS 
#include <iostream>

int add(int a, int b);

int add(int a, int b) {
    return a + b;
}

int main() {
    int result = add(5, 3);
    std::cout << "the result of the addition is: " << result << std::endl; // prints 8

    return 0;
}