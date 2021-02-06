#include<iostream>

class Rectangle
{
public:
    int width,height;
  
    virtual void display(){
        std::cout<<width<<" "<<height<<std::endl;
    }
};

class RectangleArea:public Rectangle
{
    public:
    void read_input()
    {
        std::cin>>width>>height; 
    }
    void display()
    {
        std::cout<<width*height<<std::endl;
    }
};

