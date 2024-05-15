#include <iostream>
#include <string>
using std::string;

/* class Component
{
private:
    
public:
    string companyName;

    Component(string companyName)
    {
        std::cout << "consturctor Component " << std::endl;
        this->companyName = companyName;
    }
};

class GPU : public Component
{
private:
    
public:
    GPU(string companyName) : Component(companyName)
    {
        std::cout << "consturctor GPU " << std::endl;
    }
};

class Memory : public Component
{
private:
    
public:
    Memory(string companyName) : Component(companyName)
    {
        std::cout << "consturctor Memory " << std::endl;
    }
};

class GraphicCard : public GPU, public Memory 
{
private:
    
public:
    GraphicCard(string GPUCompanyName, string MemoryCompanyName) : GPU(GPUCompanyName), Memory(MemoryCompanyName)
    {
        std::cout << "consturctor GraphicCard " << std::endl;
    }
}; */

class Charachter
{
private:
    /* data */
public:
    Charachter(/* args */);
    int HP;
};
Charachter::Charachter(/* args */)
{
    std::cout << "constructor Charachter" << std::endl;
}

class Orc : public virtual Charachter
{
private:
    /* data */
public:
    Orc(/* args */);
};
Orc::Orc(/* args */)
{
        std::cout << "constructor Orc" << std::endl;
}

class Warrior : public virtual Charachter
{
private:
    /* data */
public:
    Warrior(/* args */);
};
Warrior::Warrior(/* args */)
{
        std::cout << "constructor Warrior" << std::endl;
}

class OrcWarrior : public Orc, public Warrior
{
private:
    /* data */
public:
    OrcWarrior(/* args */);
};
OrcWarrior::OrcWarrior(/* args */)
{
        std::cout << "constructor OrcWarrior" << std::endl;
}

int main(int argc, char const *argv[]){

    /* GraphicCard gc("AMD", "Sumsung"); */
    
    OrcWarrior orc;

    return 0;
}
