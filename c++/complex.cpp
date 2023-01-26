#include<iostream>
#include<conio.h>
class complex;
{
    int real,img;
    public:
    complex()
    {
        real=0;
        img=0;
    }
    Complex(int x,int y)
    {
        real=x;
        real=y;
    }
    void show()
    {
        cout<<real<<"+"<<img<<"i"<<endl;
    }
    Complex operator+(complex obj)
    {
        complex temp; 
        temp real=real+obj.real;
        temp img=img+obj.img;
        return temp;
    }
};
void main()
{
    complex c1(5,7);
    complex c2(7,8);
    cout<<"First complex number:";
    c1.show();
    cout<<"Second complex number:";
    c2.show();
    complex c3;
    c3=c1+c2;
    cout<<"Result:";
    c3.show();
    return;
}