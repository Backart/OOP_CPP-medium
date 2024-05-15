#include <iostream>
#include <string>
using std::string;

class A
{
private:
    /* data */
public:
    A(){ }

   virtual ~A() = 0;
};

A::~A() {};

class B : public A
{
private:
    /* data */
public:
    B(){}

    ~B() override {}
};

int main(int argc, char const *argv[]){

    A *bptr = new B;
    delete bptr;

    return 0;
}
