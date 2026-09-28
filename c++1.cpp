#include <iostream>  // Like "import" in Python and it brings in library functions for input and output
#include <string>
//The main function is the entry point of a C++ program. It is where the execution of the program begins.
int main()  {
    std::cout << "Hello, World!" << std::endl;  // Print to console
    // Program exit code
    // ";" ends every statement

    // in python I just say name Alice and (type is inferred)
    // in C++ I have to say string name = "Alice" (type is explicitly specified)
    int age = 25;              // Whole number
    double price = 19.99;      // Decimal number
    float ratio = 0.5f;        // Smaller decimal
    char letter = 'A';         // Single character
    bool isActive = true;      // True/False
    std::string name = "Alice"; // Text (need <string>)

    std::cout << "Name: " << name << ", Age: " << age << std::endl;
    return 0;
}
