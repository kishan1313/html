#include <iostream>
using namespace std;
int main() {

  int age = 26;
  int* age_ptr = &age;  

  cout<<"Memory address of age : " << &age << endl;

  cout << "Memory address using pointer : " << age_ptr << endl;
  

  cout << "Normal value : " << age << endl;
  cout << "Value using pointer : " << *age_ptr;
  
  return ;
}