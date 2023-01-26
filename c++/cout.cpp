using namespace std;
#include<conio.h>
class A{
    public:
    void m1(){
        cout<<"This is m1\nA"<<endl;
    }
    void m2(){
        cout<<"This is m2\nA"<<endl;
    }
};
class B:public A{
    public:
    void m3(){
        cout<<"This is m3\nB"<<endl;
    }
};
void main(){
    B obj;
    obj.m1();
    obj.m2();
    obj.m3();
    return;
}

