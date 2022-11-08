#include <fstream>
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    ifstream infile;
    infile.open("input.dat");
    if (infile.fail())
    {
        cout << "Cannot open input file.\n";
        exit(1);
    }

    char ch;
    infile.get(ch);
    while (!infile.eof())
    {
        // process ch
        infile.get(ch);
    }
    infile.close();

    return 0;
}