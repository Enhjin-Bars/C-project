//for a large data set i need this 
#include <iostream>
#include <memory>
#include <vector>
//int main() {
//int* data = new int[1000000]; // allocate memory for 1 million integers 

    //using 
//    data[0] = 42;
//    std::cout << data[0] << std::endl;
 //   delete[] data; 
 //   return 0;
//}



//Now its modern C++ way to do this 

//int main() {
//    std::unique_ptr<int> ptr(new int(42)); 
//    std::cout << *ptr << std::endl; //prints 42
    //memory will be automatically freed when ptr goes out of scope
//    return 0;
//}





//8. Vectors (like python list)

int main() {
    std::vector<int> numbers; //empty vector of integers
    numbers.push_back(10); // add 10 to vector 
    numbers.push_back(20);
    numbers.push_back(30);

    std::cout << numbers[0] << std::endl;   // prints 10
    std::cout << numbers.size() << std::endl; //prints 3

    for (int num : numbers) {
        std::cout << num << " "; // prints 10 20 30
    }
    return 0; 

}