#include <iostream>
using namespace std;

void updateValue(int &a, int &b)
{
    int sum = a+b;
    int diff = a-b;

    a=sum;
    b=diff;
}
int main()
{
    int val1 = 7;
    int val2 = 37;
    cout<<"The original value of val1 is "<< val1 << " and the origial value of val2 is: "<< val2 <<endl;
    updateValue(val1,val2);
    cout<<"The updated value of val1 is: "<< val1 <<endl<< "The updated value of val2 is: "<< val2 <<endl;

    return 0;
}