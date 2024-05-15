#include <iostream>
#include <string>
using std::string;

class IBicycle
{
private:
    /* data */
public:
    void virtual TwistTheWheel() = 0;
    void virtual Ride() = 0;

};

class SimpleBicycle : public IBicycle
{
private:
    /* data */
public:
    void virtual TwistTheWheel() override
    {
        std::cout << "< method TwistTheWheel() SimpleBicycle  >" << std::endl;
    }
    void virtual Ride() override
    {
        std::cout << "< method Ride() SimpleBicycle >" << std::endl;
    }
};

class SportBicycle : public IBicycle
{
private:
    /* data */
public:
    void virtual TwistTheWheel() override
    {
        std::cout << "< method TwistTheWheel() SportBicycle  >" << std::endl;
    }
    void virtual Ride() override
    {
        std::cout << "< method Ride() SportBicycle >" << std::endl;
    }
};

class Human
{
private:
    /* data */
public:
    void RideON(IBicycle &bicycle){

        std::cout << "<- I'm turning the wheel ->" << std::endl;
        bicycle.TwistTheWheel();
        std::cout << "<--- Ride --->" << std::endl;
        bicycle.Ride();
    }
};

int main(int argc, char const *argv[]){

   // SimpleBicycle sb;
    SportBicycle spB;

    Human h;
    h.RideON(spB);

    return 0;
}
