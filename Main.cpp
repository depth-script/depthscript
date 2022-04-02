#include "compiler.cpp"
#include <settings.h>
#include <constants.h>
#include <iostream>
#include <string>
using std::string;

class userInput {
    public:
        void getInput() {
            std::cout << "Please input the absolute file path.";
            std::cin >> string path;
            userInput.checkValidPath(path);
            std::cout << "Please input the target JS version.";
            userInput.checkValidTarget(target);
            std::cin >> input::target;
        };
        bool checkValidPath(string path) {
            return true;;
        };
        bool checkValidTarget(string target) {
            Targets targets;
            targets = target;
            return true;
        }
        void processInput() {};
};
int main() {
    return 0;
};