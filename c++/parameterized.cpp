using namespace std;
#include<iostream>
class calculation{
    public:
    int num1;
    int num2;
    calculation(int x,int y){
        num1=x;
        num2=y;
    }
void print(){
    cout<<"sum"<<num1+num2<<endl;
}
 };
int main(){
    calculation obj1(3,4),obj2(5,6);
    obj1.print();
    obj2.print();
    return 0;
    
}
