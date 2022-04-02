#include "compiler.cpp"
#include <settings.h>
#include <iostream>

class userInput {
    void getInput() {
        std::cout << "Please input the absolute file path.";
        std::cin >> input::path;
        std::cout << "Please input the target JS version.";
        std::cin >> input::target;
    };
    std::string checkValidInput(std::string path, std::string target) {};
    void processInput() {};
};
int main() {
    
};