#include <iostream>
#include <string>
using std::string;

/* class TestClass{
private:
    int arr[6]{5, 4, 3, 2, 1, 0};
public:
    int &operator[](int index){
        return arr[index];
    }
};

class MyClass{
private:
    int *data;
    int size;
public:
    MyClass(int size){
        this->size = size;
        this->data = new int[size];

        for (int i = 0; i < size; ++i)
            data[i] = i;
        
        std::cout << "Start constructor " << this << std::endl;
    };

    MyClass(const MyClass &other){

        this->size = other.size;

        this->data = new int [other.size];

        for (int i = 0; i < other.size; ++i)
            this->data[i] = other.data[i];
        
        std::cout << "Start constructor copy" << this << std::endl;
    }

    MyClass & operator = (const MyClass &other){
        std::cout << "Start operator = " << this << std::endl;

        if (this->data != nullptr)
            this->size = other.size;

        delete[] this->data;
        this->data = new int[other.size];
 
        for (int i = 0; i < other.size; ++i)
            this->data[i] = other.data[i];

    return *this;
        
    }

    ~MyClass(){
        std::cout << "Finish constructor " << this << std::endl;
        delete[] data;
    };

};

void Foo(MyClass value){
    std::cout << "Call func Foo" << std::endl;
}

MyClass Foo2(){
    std::cout << "Call func Foo_2" << std::endl;
    
    MyClass temp(2);

    return temp;
}

class Test;

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

    bool operator == (const Point & other){
        return this->x == other.x && this->y == other.y;
    }

    bool operator != (const Point & other){
        return !(this->x == other.x && this->y == other.y);
    }
 
    Point operator +(const Point & other){
        Point temp;
        temp.x = this->x + other.x;
        temp.y = this->y + other.y;        
        return temp;
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


    Point & operator ++(){
        this->x++;
        this->y += 1;

        return *this;
    }
    Point operator ++(int value){
        Point temp(*this); // temp(...) variable temp with constructor copy

        this->x++;
        this->y++;

        return temp;
    }
    Point & operator --(){
        this->x--;
        this->y -= 1;

        return *this;
    }
    Point operator --(int value){
        Point temp(*this); // temp(...) variable temp with constructor copy

        this->x--;
        this->y--;

        return temp;
    }

    friend void ChangeX(Point &value, Test &testValue);
};

class Test{
    int data = 0;

    friend void ChangeX(Point &value, Test &testValue);
};

void ChangeX(Point &value, Test &testValue){
    value.x = -1;
    testValue.data = -1;
}
 */

/* class MyClass
{
private:
public:
    void PrintMassage();
};

void MyClass::PrintMassage(){
    std::cout << "Hello";
}
 */

/* class Apple;
class Human;

class Human
{
private:
public:
    void TakeApple(Apple &apple);
    void EatApple(Apple &apple);
};

class Apple
{
    friend Human;
private:
    int weight;
    string color;
public:
    Apple(int weight, string color);
};

Apple::Apple(int weight, string color)
{
    this->color = color;
    this->weight = weight;
}

void Human::TakeApple(Apple &apple){
    std::cout << "Take Apple = " << apple.weight << "; color  = " << apple.color << std::endl;
}

void EatApple(Apple &apple){
    
} */

class Apple
{
private:
    static int count;
    int weight;
    string color;
    int id;
public:
    Apple(int weight, string color);

    int GetID(){
        return id;
    }
    
    static int GetCount(){
        return count;
    }

    static void ChangeColor(Apple &apple, string color){
        apple.color = color;
    }
    void ChangeColorNoStatic(string color){
        this->color = color;
    }
};

Apple::Apple(int weight, string color)
{
    this->color = color;
    this->weight = weight;

    count++;
    id = count;
}

int Apple::count = 0;

int main(int argc, char const *argv[]){
     
    Apple apple(150, "Red" );

    Apple::ChangeColor(apple, "green");

/*     Apple apple2(15, "Re" );
    Apple apple3(1, "R" );

    std::cout << apple.GetID();
    std::cout << apple2.GetID();
    std::cout << apple3.GetID(); */

     std::cout <<  Apple::GetCount();

    return 0;
}

