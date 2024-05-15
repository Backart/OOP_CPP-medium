#include <iostream>
#include <string>
using std::string;

class Point{
private:
    int x;
    int y;
public:
    Point(){
        y = 0;
        x = 0;
    }

    Point(int x, int y){
        this->x = x;
        this->y = y;
    }

    void SetX(int x){
        this->x = x;
    }
    int GetX(){
        return x;
    }
    void SetY(int y){
        this->y = y;
    }
    int GetY(){
        return y;
    }
    void Print(){
        std::cout << "x - " << x << " y - " << y << std::endl;
    }
};

int main(int argc, char const *argv[])
{
    Point a(3, 4);
    a.Print();
    return 0;
}
