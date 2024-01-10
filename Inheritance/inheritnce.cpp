#include <iostream>
using namespace std;

//Base class 
class Shape
{
    public :
    int width,height;
    void Setwidth(int w)
    { 
        width = w;
    }      
    void Setheight(int h)
    {
        height =h;
    }
};
//Derived class
class Rectangle : public Shape
{
    public:
    int getarea()
     {
        return(width * height);
      }
};
class triangle: public Shape
{
    public:
    int getarea()
    {
        return(0.5 * width * height);
    }
};

int main()
{
    Rectangle Rect;
    triangle t1;
    Rect.Setwidth(5);
    Rect.Setheight(7);
    t1.Setwidth(2);
    t1.Setheight(7);

    //print area of object 
    cout<<"Total area :"<<Rect.getarea()<<endl;
    cout<<"Total area :"<<t1.getarea()<<endl;


    return 0;
}
