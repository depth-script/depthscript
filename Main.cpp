#include "compiler.cpp"
#include <settings.h>
#include <iostream>
#include <string>
using std::string;

class userInput {
    void getInput() {
        std::cout << "Please input the absolute file path.";
        std::cin >> input::path;
        std::cout << "Please input the target JS version.";
        std::cin >> input::target;
    };
    bool checkValidPath(string path) {
        return false;
    };
    void processInput() {};
};
int main() {
    
};