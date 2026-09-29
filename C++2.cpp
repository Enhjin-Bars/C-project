#include <iostream> 

int main() {
int x = 10;           // Regular variable, value = 10
int* ptr = &x;        // Pointer to x. & means "address of"

std::cout << x << std::endl;      // Prints: 10
std::cout << ptr << std::endl;    // Prints: 0x7fff5fbff8c (memory address)
std::cout << *ptr << std::endl;   // Prints: 10 (* dereferences: "value at this address")
return 0;
}
//std::cout //th 