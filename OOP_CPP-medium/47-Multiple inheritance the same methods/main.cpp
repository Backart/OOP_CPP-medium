#include <iostream>
#include <string>
using std::string;

class Car
{
private:
    /* data */
public:

    void Msg(){
        std::cout << "---- I drive!" << std::endl;
    }

};

class Airplain
{
private:
    /* data */
public:

    void Msg(){
        std::cout << "-- I fly!" << std::endl;
    }
};

class FlyingCar : public Car, public Airplain
{
private:
    /* data */
public:

};

int main(int argc, char const *argv[]){
    FlyingCar fc;

    ((Car)fc).Msg();
    ((Airplain)fc).Msg();
    
    return 0;
}
