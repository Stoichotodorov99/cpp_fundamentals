#include <iostream>
#include <string>

bool areEqual(std::string a, std::string b, bool ignoreCase)
{
    if (a.size() != b.size())
        {
            return false;
        }

    for (int i = 0; i < a.size(); i++)
        {
            char charInA = a[i];
            char charInB = b[i];

            if (ignoreCase)
            {
                charInA = toupper(charInA);
                charInB = toupper(charInB);
            }

            if (charInA != charInB)
            {
                return false;
            }
        }
    return true;

}

int main()
{
    std::string firstWord, secondWord;
    std::cin >> firstWord >> secondWord;
    if (areEqual(firstWord, secondWord, true))
    {
        std::cout << "equal"<<std::endl;
    }else
     {
         std::cout << "not equal" << std::endl;

    }

    return 0;

}
