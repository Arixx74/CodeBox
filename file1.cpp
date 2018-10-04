#include<iostream>
#include<fstream>

using namespace std;

int main(int argc, char const *argv[])
{
    fstream file;
    file.open("red.txt", ios::out | ios::trunc | ios::in);
    if(!file.is_open()){
        cout<< "File cannot be opened."<< endl;
    }
    else{
        file<< "Roses are red"<< endl;
        file<< "Violets are blue"<< endl;
        file.close();
    }
    return 0;
}
