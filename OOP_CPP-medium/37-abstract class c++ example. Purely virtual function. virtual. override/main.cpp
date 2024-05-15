#include <iostream>
#include <string>
using std::string;

class Weapon
{
private:
    /* data */
public:
    virtual void Shoot() = 0;
    void Foo(){
        std::cout << "----Foo()" << std::endl;
    }
};

class Gun : public Weapon
{
private:
    /* data */
public:
    void Shoot() override
    {
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
        std::cout << "----Bang-Bang-Bang" << std::endl;
    }

};

class Javelin : public Weapon
{
private:
    /* data */
public:
    void Shoot() override
    {
        std::cout << "--BOOOM" << std::endl;
    }
};

class Knife : public Weapon
{
private:
    /* data */
public:
        void Shoot() override
    {
        std::cout << "--Chik" << std::endl;
    }
};

class Player
{
private:
    /* data */
public:
    void Shoot(Weapon *weapon){
        weapon->Shoot();
    }
};


int main(int argc, char const *argv[]){

    Javelin javelin;
    javelin.Foo();
           
    Knife knife;
    Player player;

    player.Shoot(&knife);

    return 0;
}
