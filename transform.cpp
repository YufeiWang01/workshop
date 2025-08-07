#include <iostream>
#include <string>

int main(){
    int decimal;
    std::string binary = "";

    std::cout << "Enter a decimal: ";
    std::cin >> decimal;

    int remainder;

    while (true){
        remainder = decimal % 2;
        binary = std::to_string(remainder) + binary;

        if (decimal < 2){
            break;
        }

        decimal = decimal / 2;
    }

    std::cout << "Binary: " << binary << std::endl;

    return 0;
}