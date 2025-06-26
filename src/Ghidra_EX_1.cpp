//
// Created by Ibrahim on 5/28/2025.
// Updated by Ibrahim on 6/2/2025.
//
#include <iostream>
#include <string>

void secret_function()
{
    std::cout << " You have completed your first RE!\n";
}

bool validate_password(const std::string &input)
{
    std::string pass = "B3@rCatz";
    return input == pass;
}

int main()
{
    std::string user_input;

    while (true)
    {
        std::cout << "\nEnter the magic word: ";
        std::cin >> user_input;

        if (validate_password(user_input))
        {
            std::cout << "Correct!";
            secret_function();

            std::cin.ignore();
            std::cout << "Press Enter to exit...";
            std::cin.get();
            break;
        }
        else
        {
            std::cout << "Wrong password. Try Again :( \n\n";
        }
    }
    return 0;
}
