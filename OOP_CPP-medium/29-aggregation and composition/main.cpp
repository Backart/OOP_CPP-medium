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

/* class Apple
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

int Apple::count = 0; */

/* class Image{
    private:

    class Pixel{
    private:
    int r;
    int g;
    int b;

    public:

     Pixel(){
        r = g = b = 0;
    }

    Pixel(int r, int g, int b){
        this->r = r;
        this->g = g;
        this->b = b;
    }

    string GetInfo(){
        return "Pixel: r= " + std::to_string(r) + " g= " + std::to_string(g) + " b= " + std::to_string(b);
    }
    
    };

    Pixel pixels[LENGTH]{
        Pixel (0, 4, 64),
        Pixel (4, 14, 10),
        Pixel (111, 4, 24),
        Pixel (244, 244, 14),
        Pixel (111, 179, 64)};

    public:

    void GetImageInfo(){
        for (int i = 0; i < LENGTH; ++i)
            std::cout << "#" << i << " " <<  pixels[i].GetInfo() << std::endl;
    }
       
};
 */

/* class Pixel{
    private:
    int r;
    int g;
    int b;

    public:

     Pixel(){
        r = g = b = 0;
    }

    Pixel(int r, int g, int b){
        this->r = r;
        this->g = g;
        this->b = b;
    }

    string GetInfo(){
        return "Pixel: r= " + std::to_string(r) + " g= " + std::to_string(g) + " b= " + std::to_string(b);
    }
    
};
 */

// example composition
class Human
{
private:
    class Brain
    {
    private:

    public:
        void Think(){
            std::cout << "I think!" << std::endl;
        }
    };
    
    Brain brain;
public:
    void Think(){
        brain.Think(); // delegating
    }

}; 

// example aggregation
class Cap
{
private:
    string color = "red";
public:
    string GetColor(){
        return color;
    }

};

class Human
{
private:
    class Brain
    {
    private:

    public:
        void Think(){
            std::cout << "I think!" << std::endl;
        }
    };
    
    Brain brain;
    Cap cap;
public:
    void Think(){
        brain.Think(); // delegating
    }

    void InspectTheCap(){
        std::cout << "My cap " << cap.GetColor() << " color"<< std::endl;
    }

};

class Model
{
private:
    Cap cap;
public:
    void InspectTheModel(){
        std::cout << "Cap " << cap.GetColor() << " color " << std::endl;
    }
}; 

int main(int argc, char const *argv[]){

    Human human;
    human.InspectTheCap();
    Model model;
    model.InspectTheModel();

/*     const int LENGTH = 5;

    Pixel *arr = new Pixel[LENGTH];

    arr[0] = Pixel(11, 0, 25);

    std::cout << arr[0].GetInfo() << std::endl; */

/*     const int LENGTH = 5;

    Pixel arr[LENGTH]{
        Pixel (0, 4, 64),
        Pixel (4, 14, 10),
        Pixel (111, 4, 24),
        Pixel (244, 244, 14),
        Pixel (111, 179, 64)};

    std::cout << arr[0].GetInfo() << std::endl;
    std::cout << arr[1].GetInfo() << std::endl;
    std::cout << arr[2].GetInfo() << std::endl;
    std::cout << arr[3].GetInfo() << std::endl;
    std::cout << arr[4].GetInfo() << std::endl; */

    /* Pixel p(0, 4, 64); */

   /*  Apple apple(150, "Red" );

    Apple::ChangeColor(apple, "green");

    Apple apple2(15, "Re" );
    Apple apple3(1, "R" );

    std::cout << apple.GetID();
    std::cout << apple2.GetID();
    std::cout << apple3.GetID();

     std::cout <<  Apple::GetCount(); */

    return 0;
}

