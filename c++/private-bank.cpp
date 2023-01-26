using namespace std;
#include<iostream>
class account
{
    private:
    double bal;
    public:
    account(double b)
    {
        bal=b;
    }
void printBalance()
{
    int pin;
    cout<<"Enter your pin";
    cin>>pin;
    if(pin==1234)
          cout<<"your total balance is:"<<bal<<endl;
          else
               cout<<"!!Wrong pin plz Try again and Enter the pin!!";
            }
        };
        int main(){
            cout<<endl;
            account c1(10000);
            c1.printBalance();
            return 0;
        } 
  
        