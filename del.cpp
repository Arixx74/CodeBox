#include<iostream>
#include<string>

int main(int argc, char const *argv[])
{
    int zero = 1;
    while(zero){
        std::string c = "new";
        if(zero >= 6)
            c = "delete";
        std::cout<< c.size()<< std::endl;
        if(zero == 12)
            break;
        zero++;
    }   
    return 0;
}
