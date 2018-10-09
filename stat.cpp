#include<iostream>

class lass{
    static int count;
    public:
        lass();
        ~lass();
        static void fun();
        void SoMuchFun();
};

int lass::count = 0;
lass::lass(){
    count++;
    fun();
    SoMuchFun();
    std::cout<< "Constructed"<< std::endl<< count<< std::endl;
}
lass::~lass(){
    count--;
    std::cout<< "Destroyed"<< std::endl<< count<< std::endl;
}
void lass::fun(){
    count = 2 * count;
}
void lass::SoMuchFun(){
    fun();
    std::cout<< count<< std::endl;
}

int main(int argc, char const *argv[])
{
    lass myLass;
    return 0;
}
