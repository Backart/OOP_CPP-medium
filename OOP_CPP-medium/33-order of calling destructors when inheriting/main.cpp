#include <iostream>
#include <string>
using std::string;

class A{
public:
    A(){
        std::cout << "-- Called constructor class A" << std::endl;
    }
    ~A(){
        std::cout << "---- Called destructor class A" << std::endl;
    }
};
class B : public A{
public:
    B(){
        std::cout << "-- Called constructor class B" << std::endl;
    }
    ~B(){
        std::cout << "---- Called destructor class B" << std::endl;
    }
};

class C: public B{
public:
    C(){
        std::cout << "-- Called constructor class C" << std::endl;
    }
    ~C(){ 
        std::cout << "---- Called destructor class С" << std::endl;
    }
};

int main(int argc, char const *argv[]){

    C value;


    return 0;
}
