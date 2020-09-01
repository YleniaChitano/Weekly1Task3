#include <iostream>
int age;

int main()
{
    std::cout << "How old are you? ";
    std::cin >> age;

    if (age < 20) {
        std::cout << "You are young\n";
    }

    else {
        if (age <= 40) {
            std::cout << "You are a grown up\n";
        }
        else {
            std::cout << "You ARE really old!\n";
        }
    }

    return 0;
}

