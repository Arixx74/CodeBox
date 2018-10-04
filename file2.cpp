#include<iostream>
#include<fstream>

using std::cout;
using std::cin;
using std::endl;

int main(int argc, char const *argv[])
{
    std::ifstream ifile("odd.dat");
    if(!ifile.is_open()){
        cout<< "File \"even.dat\" could not opened"<< endl;
    }
    else{
        char number;
        while(ifile.good()){
            ifile>> number;
            if(ifile.peek() == EOF)             // peek lets you access the next character without changing the get pointer
                break;
            cout<< number;
            if(ifile.peek() == '\n')
                cout<< endl;
        }
        
    }
    return 0;
}
