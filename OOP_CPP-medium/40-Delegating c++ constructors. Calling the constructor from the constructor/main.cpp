#include <iostream>
#include <string>
using std::string;

class Human
{
private:
    /* data */
public:

/*
     Human(string Name){
        this->Name = Name;
        this->age = 0;
        this->weight = 0;
    }

    Human(string Name, int age){
        this->Name = Name;
        this->age = age;
        this->weight = 0;
    }

    Human(string Name, int age, int weight){
        this->Name = Name;
        this->age = age;
        this->weight = weight;
    } 
*/
//instead of this logic, 
//a delegation algorithm is proposed

    Human(string Name){
        this->Name = Name;
        this->age = 0;
        this->weight = 0;
    }

    Human(string Name, int age):Human(Name)
    {

        this->age = age;
    }

    Human(string Name, int age, int weight):Human(Name, age)
    {
        this->weight = weight;
    }

    string Name;
    int age;
    int weight;

};



int main(int argc, char const *argv[]){

    Human h("sdjnckjsdv", 30, 70);

    return 0;
}
