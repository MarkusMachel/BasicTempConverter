#include <iostream>

int main() {
    // basic temparature conversion program
    // fahrenheit to celsius

    double temperature;
    char unit;

    std::cout << "Enter the temperature:  \n";
    std::cout << "F ==> Fahrenheit \n";
    std::cout << "C ==> Celsius \n";
    std::cout << "What is the unit of the temperature? \n";
    std::cin >> unit;

   if (unit == 'F' || unit == 'f') {
        std::cout << "Enter the temperature in Fahrenheit: \n";
        std::cin >> temperature;
        std::cout << "The temperature in Celsius is: " << (temperature - 32) * 5 / 9 << "\n";
    } else if (unit == 'C' || unit == 'c') {
        std::cout << "Enter the temperature in Celsius: \n";
        std::cin >> temperature;
        std::cout << "The temperature in Fahrenheit is: " << (temperature * 9 / 5) + 32 << "\n";
    } else {
        std::cout << "Invalid unit of temperature \n";
   }

   std::cout << "Thank you for using the program \n";
   std::cout << "Goodbye \n";
   char pressed;
   std::cin >> pressed;
   std::cout << "****************** \n";


    return 0;
}