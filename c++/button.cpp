using namespace std;
#include<iostream>
#include<conio.h>
#include<stdio.h>

class buttonDemo{
public:
int height,width;
char *text,*color;
buttonDemo(int h,int w,char *t,char *c)
{
height = h;
width=w;
text=t;
color=c;
}
void print(){
    cout<<"Height = "<<height<<" Width = "<<width<<" Text = "<<text<<" Color = "<<color<<endl;
}
};

int main(){
    buttonDemo b1(100,20,"Send","red");
    buttonDemo b2(101,30,"Receive","green");
    b1.print();
    b2.print();
    return 0;
}





