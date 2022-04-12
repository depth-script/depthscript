#include "compiler.cpp"
#include <iostream>
#include <string>
#include <fstream>
#include <cctype>
using std::string;
using std::fstream;

string path, target;
class userInput {
    public:
        void getInput() {
            std::cout << "DepthScript v0.0.0a Compiler \nCopyright© \nPress ENTER to continue" << std::endl;
            std::cout << "Please input the absolute file path" << std::endl;
            std::cin >> path;
            std::cout << "Please input the target JS version \nOptions: es2015" << std::endl;        
            std::cin >> target;
        };
        string path, target;
};
class compile {
    public:
        void init() {
            dsc::input input;
            input.init(path, target);
            std::cout << "Initialised";
        };
};
int main() {
    userInput userInput;
    userInput.getInput();
    compile compile;
    compile.init();
    return 0;
};