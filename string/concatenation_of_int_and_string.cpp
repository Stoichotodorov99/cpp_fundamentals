#include <iostream>
#include <string>
#include <sstream>
#include <vector>


int main ()
{
    std::string word = "Hello";
    int number = 42;

    std::ostringstream togetherStream;
    togetherStream << word << " " << number;

    std::string together = togetherStream.str();

    std::cout << together << std::endl;

    return 0;
}

