#include <iostream>
#include <string>
using std::string;

class Car
{
private:
    /* data */
public:

    Car(){
        std::cout << "Caled consructor Car" << std::endl;
    }
    ~Car(){
        std::cout << "-Caled destructor Car" << std::endl;
    }

    void Drive(){
        std::cout << "---- I drive!" << std::endl;
    }

};

class Airplain
{
private:
    /* data */
public:

    Airplain(){
        std::cout << "Caled consructor Airplain" << std::endl;
    }
    ~Airplain(){
        std::cout << "-Caled destructor Airplain" << std::endl;
    }
    void Fly(){
        std::cout << "-- I fly!" << std::endl;
    }
};

class FlyingCar : public Car, public Airplain
{
private:
    /* data */
public:
    FlyingCar(){
        std::cout << "Caled consructor FlyingCar" << std::endl;
    }
    ~FlyingCar(){
        std::cout << "-Caled destructor FlyingCar" << std::endl;
    }

};

int main(int argc, char const *argv[]){
    FlyingCar fc;
    
    return 0;
}
