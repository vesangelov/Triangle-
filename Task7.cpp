#include <iostream>

void printTriangle() {
    int height = 11;

    for (int i = 1; i <= height; i++) {
        for (int freeSpace = 1; freeSpace < i; freeSpace++) {
            std::cout << " ";
        }
        for (int j = i; j <= height; j++) {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

int main()
{
    printTriangle();

    return 0;
}