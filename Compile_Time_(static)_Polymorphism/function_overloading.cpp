#include <iostream>
#include <string>

class Calculator {
    public:
    //function overload using different data types
        int add(int a, int b) {
            std::cout << "Adding Integers" << std::endl;
            return a + b;
        }

        double add(double a, double b) {
            std::cout << "Adding Doubles" << std::endl;
            return a + b;
        }

        std::string add(std::string a, std::string b) {
            std::cout << "Adding Strings" << std::endl;
            return a + b;
        }
};

int main() {
    Calculator calc;
  //calls the function based on the data type of the arguments
    std::cout << calc.add(10, 20) << std::endl; //calls the first add function
    std::cout << calc.add(5.1, 25.2) << std::endl; //calls the second add function
    std::cout << calc.add("Hello", "World") << std::endl; //calls the third add function
  
    return 0;
} 