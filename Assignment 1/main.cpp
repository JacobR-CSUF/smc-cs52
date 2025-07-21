/* This program stores 3 positive integers and then prints the largest number.
 * Hathairat Rattanasook
 * CS 52 Section 1233
 * 06/29/2025
*/

#include <iostream>

int main()
{
    int posInt1 {0};
    int posInt2 {0};
    int posInt3 {0};
    bool isNegative {false}; //to use if posInt is negative.

//prompt user to enter posInt x3. if int is negative, loop until valid input.
    std::cout << "Enter the first positive integer: ";
    std::cin  >> posInt1;
    if (posInt1 < 0) {
        std::cout << "Error: Please enter a positive integer.\n";
        isNegative = true;
        while (isNegative == true) {
            std::cout << "Enter the first positive integer: ";
            std::cin  >> posInt1;
            if (posInt1 > 0) {
                isNegative = false;
            }
        }
    }

    std::cout << "Enter the second positive integer: ";
    std::cin  >> posInt2;
    if (posInt2 < 0) {
        std::cout << "Error: Please enter a positive integer.\n";
        isNegative = true;
        while (isNegative == true) {
            std::cout << "Enter the second positive integer: ";
            std::cin  >> posInt2;
            if (posInt2 > 0) {
                isNegative = false;
            }
        }
    }

    std::cout << "Enter the third positive integer: ";
    std::cin  >> posInt3;
    if (posInt3 < 0) {
        std::cout << "Error: Please enter a positive integer.\n";
        isNegative = true;
        while (isNegative == true) {
            std::cout << "Enter the third positive integer: ";
            std::cin  >> posInt3;
            if (posInt3 > 0) {
                isNegative = false;
            }
        }
    }

    //nested if statement to compare all three integers.
    if (posInt1 > posInt2) {
        if (posInt1 > posInt3) {
            std::cout << "The largest number is: " << posInt1 << '\n';
        } else {
            std::cout << "The largest number is: " << posInt3 << '\n';
        }
    } else {
        if (posInt2 > posInt3) {
            std::cout << "The largest number is: " << posInt2 << '\n';
        } else {
            std::cout << "The largest number is: " << posInt3 << '\n';
        }
    }

}
//By Jacob Rodas
