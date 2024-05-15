#include <iostream>
#include <string>
using std::string;

class Gun
{
private:
    /* data */
public:
    virtual void Shoot(){
        std::cout << "----Bang" << std::endl;
    }

};

class SubmachinGun : public Gun
{
private:
    /* data */
public:
    void Shoot() override
    {
        std::cout << "---- Bang-Bang-Bang" << std::endl;
    }

};

class Player
{
private:
    /* data */
public:
    void Shoot(Gun *gun){
        gun->Shoot();
    }
};


int main(int argc, char const *argv[]){

    Gun gun;
/*     SubmachinGun machingun;

    Gun *weapon = &machingun;
    Gun *weapon2 = &gun;

    weapon->Shoot();
    weapon2->Shoot(); */


    Player player;
    player.Shoot(&gun);

    return 0;
}
