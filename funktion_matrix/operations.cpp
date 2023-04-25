#include <iostream>
using namespace std;

int main ()
{
    int a, b;
    std::cin >> a >> b;

    bool inputCorrect = false;
    int result;
    while (!inputCorrect)
    {
        char operation;
        std::cin >> operation;
        inputCorrect = true;

        switch(operation)
        {
            case '+':
                result = a + b;
                 break;
            case'-' :
                result = a - b;
                 break;
            case'*':
                result = a * b;
                 break;
            case '/':
                result = a / b;
                 break;
            default:
                inputCorrect = false;
                std::cout << "try again" <<std::endl;
                break;
        }

  }

    std::cout << '"' << result << '"'<< std::endl;

}
