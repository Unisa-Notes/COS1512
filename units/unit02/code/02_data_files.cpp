// Assumes data is ordered as int string on each line

#include <fstream>
#include <iostream>
#include <cstdlib>
#include <string>
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

    int value;
    string name;
    while (infile >> value >> name)
    {
        // process data
    }
    infile.close();

    return 0;
}