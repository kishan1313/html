// #include<iostream.h>
using namespace std;
#include<iostream>

class Button{
    public:
    double Bheight;
    double Bwidth;
    char *Btext;
    char *Bcolor;
Button(double h,double w,char *text,char *color){
 Bheight = h;
 Bwidth = w;
 Btext = text;
 Bcolor = color;
}
void show(){
    cout<<"BHeight ="<<Bheight<<",Bwidth ="<<Bwidth<<"Btext ="<<Btext<<"Bcolor ="<<Bcolor<<endl;
}
};
int main(){
    Button b1(28,100,"send","green");
    Button b2(38,150,"Receive","red");
    cout<<"Button b1"<<endl;
    b1.show();
    cout<<"Button b2"<<endl;
    b2.show();
    return 0;
}