#include <iostream>
#include <string>
#include <vector>
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
    std::string text = "Dogs Cats Dogs Cats Dogs Cats Dogs Cats Dogs Cats Dogs Cats";

    std::string searchStr = "s";

    std::vector<int> positions;

    int position = text.find(searchStr);
    while (position != std::string::npos)
    {
        positions.push_back(position);
        position = text.find(searchStr, position + 1);

    }


    for (int p : positions)
    {
        std::cout << p << " ";
    }



    return 0;

}

