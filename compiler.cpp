#include "parser/global.cpp"
#include "parser/es2015.cpp"
#include <string>
#include <fstream>
#include <iostream>
using std::string;
using std::fstream;

namespace settings {
    string path, target;
}
namespace dsc {
class input {
    public:
        void init(string path, string target) {
            settings::path = path;
            settings::target = target;
        };
};
class compile {
    public:
};
};
