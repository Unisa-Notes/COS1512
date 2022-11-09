#include <string>
#include "example.h"
using namespace std;

Example::Example(string name) : name(name) {}

string Example::getName()
{
    return name;
}
void Example::setName(string newName)
{
    name = newName;
}

