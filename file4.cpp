#include<iostream>
#include<fstream>

using namespace std;

int main(int argc, char const *argv[])
{
    fstream bin_file("bin_file.bin", ios::binary | ios::in | ios::out | ios::trunc);
    
    return 0;
}
