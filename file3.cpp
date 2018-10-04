#include<iostream>
#include<fstream>

int main(int argc, char const *argv[])
{
    using namespace std;

    ifstream ifile("even.dat", ios::in);
    if(!ifile.is_open()){
        cout<< "File could not be opened"<< endl;
    }
    else{
        string line;
        while(ifile.good()){
            getline(ifile, line);
            cout<< line;
            if(ifile.peek() != '\n')
                cout<< endl;
        }
    }
    return 0;
}

