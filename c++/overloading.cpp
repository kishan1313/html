#include<iostream>
using namespace std;
class Complex{
    private:
        int real,img;
    public:
        Complex(int x,int y){
            real = x;
            img = y;
        }
        void show(){
            cout<<real<<"+"<<img<<"i"<<endl;
        }
};
int main(){
    Complex c1;
    c1(3,4);
    c1.show();

    return 0;
}