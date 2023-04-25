#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <fstream>

int main ()
{
   std::ifstream fileIn("input.txt");
   std::string fileLine;
   std::getline(fileIn, fileLine);

   std::istringstream fileLineIn(fileLine);

   int sum = 0;
   int currentNumber;
   while(fileLineIn >> currentNumber)
   {
       sum += currentNumber;
   }

   std::ofstream output("output.txt");
   output << sum << std::endl;

    return 0;
}

