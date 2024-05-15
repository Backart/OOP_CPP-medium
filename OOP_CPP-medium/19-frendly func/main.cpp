#include <iostream>
#include <string>
using std::string;

class TestClass{
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

int main(int argc, char const *argv[]){
    Test test;

    Point a(5, 12);
    a.Print();
    ChangeX(a, test);
    a.Print();

    return 0;
}
