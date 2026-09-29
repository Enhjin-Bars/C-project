#include <iostream>
#include <array>

int main() {
    int data[5] = {10, 20, 30, 40, 50};
    //it's like a box 

    //acess by index same as python
    std::cout <<data[0] << std::endl; // will print 10 

    //POinter arithmetic( C++ superpower for speed )
    int* ptr = data; // pointer to the firs element of array. 
    std::cout << *ptr << std::endl; // 10
    std::cout << *(ptr + 1) << std::endl; //20 

    //iterete fast 
    for(int i = 0; i < 5; i++) {
        std::cout << *(ptr+i) <<" ";
        
    }
    // output : 10 20 30 40 50 
    return 0;

}