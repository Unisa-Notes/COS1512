#ifndef EXAMPLE_H
#define EXAMPLE_H
#include <string>
using namespace std;

class Example {
    public:
        Example();
        Example(string name);
        string getName();
        void setName(string newName);
    private:
        string name;
};
#endif