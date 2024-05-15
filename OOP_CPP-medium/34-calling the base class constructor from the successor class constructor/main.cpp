#include <iostream>
#include <string>
using std::string;

class A{
private:
    string msg;
    
public:
    A(){ std::cout << "---- The empty message" << std::endl; }

    A(string msg){ 
        this->msg = msg;
    }

    void PrintMsg(){
         std::cout << msg << std::endl;
    }
};
class B : public A{
public:
    B():A("----our new msg"){

    }
};

int main(int argc, char const *argv[]){

/*     A a;
    a.PrintMsg(); */

    B b;
    b.PrintMsg();


    return 0;
}
