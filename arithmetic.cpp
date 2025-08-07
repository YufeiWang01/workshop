#include <iostream>
#include <string>

int binaryToDecimal(const std::string& binaryStr) {
    return std::stoi(binaryStr, nullptr, 2);
}

std::string decimalToBinary(int decimal) {
    if (decimal == 0) return "0";
    std::string binary = "";
    while (decimal > 0) {
        binary = std::to_string(decimal % 2) + binary;
        decimal /= 2;
    }
    return binary;
}

std::string binaryAdd(const std::string& a, const std::string& b) {
    int result = binaryToDecimal(a) + binaryToDecimal(b);
    return decimalToBinary(result);
}

std::string binaryLeftShift(const std::string& binaryStr) {
    int result = binaryToDecimal(binaryStr) << 1;
    return decimalToBinary(result);
}

int main() {
    std::string binary = "10101010101010";

    std::cout << "Original binary: " << binary << std::endl;

    std::string sum = binaryAdd(binary, binary);
    std::cout << "Sum: " << sum << std::endl;

    std::string lshift = binaryLeftShift(binary);
    std::cout << "Left shift: " << lshift << std::endl;

    return 0;
}