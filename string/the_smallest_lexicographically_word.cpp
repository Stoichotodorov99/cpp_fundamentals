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
   int n;
   std::cin >> n;
   std::vector<std::string> words;

   for (int i = 0; i < n; i++)
   {
       std::string word;
       std::cin >> word;
       words.push_back(word);
   }
   std::string minWord = words[0];
   for (std::string word : words)
   {
       if (word < minWord)
       {
           minWord = word;
       }

   }
   std::cout<< minWord;

    return 0;

}

