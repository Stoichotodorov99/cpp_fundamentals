#include <iostream>


/*void printText(char text[])
{
    int currentIndex = 0;

    while (text[currentIndex] != '\0')
    {
        std::cout << text[currentIndex];
        currentIndex++;
    }
}*/

int main()
{

    char text[] { 'D', 'o', 'g', 's', ' ', 'c', 'a', 't', 's', '\0'};

    //printText(text);
    std::cout << text;

    return 0;

}
