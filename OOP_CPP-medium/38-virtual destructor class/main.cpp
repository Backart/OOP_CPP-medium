#include <iostream>
#include <string>
using std::string;

class A
{
private:
    /* data */
public:
    A(){std::cout << "allocated dynamic memory for an object of class - A" << std::endl; }

   virtual ~A(){std::cout << "freed dynamic memory for an object of class - A" << std::endl;}
};

class B : public A
{
private:
    /* data */
public:
    B(){std::cout << "allocated dynamic memory for an object of class - B" << std::endl; }

    ~B() override {std::cout << "freed dynamic memory for an object of class - B" << std::endl;}
};

int main(int argc, char const *argv[]){

   // A *bptr = new B; //not correct if in class A in not write destructor VIRTUAL and in destructor B OVERRIDE
    A *bptr = new B;
    delete bptr;

    return 0;
}
