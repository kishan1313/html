using namespace std;
#include<iostream>
int main(){
    int a,b,c,t;
    cout<<"Enter the three number";
          cin>>a>>b>>c;
       if(a<b)
        t=a;
    else
        t=b;
        if(t<c)
              cout<<t<<"is smallest";
    else
        cout<<c<<"smallest number";
    return 0;
}