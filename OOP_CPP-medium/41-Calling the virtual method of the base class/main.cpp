#include <iostream>
#include <string>
using std::string;

class Msg
{
private:
    string msg;
public:
    Msg(string msg){
        this->msg = msg;
    }

    virtual string GetMsg(){
        return msg;
    }
};

class BraketsMsg : public Msg
{
private:
    /* data */
public:
    BraketsMsg(string msg):Msg(msg)
    {
        
    }

    string GetMsg() override
    {
        return "["+ ::Msg::GetMsg() + "]"; // let the compiler clearly understand 
                                           // which base class we are calling because 
                                            //if you don't specify ::Msg:: then there will be recursion
    }
};

class Printer
{
private:
    /* data */
public:
    void Print(Msg *msg){
        std::cout << msg->GetMsg() << std::endl;
    }
};

int main(int argc, char const *argv[]){

    BraketsMsg m("Hello");

    Printer p;
    p.Print(&m);

    return 0;
}
