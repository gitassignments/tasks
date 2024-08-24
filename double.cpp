#include <iostream>
using namespace std;

void doubleVal(int &x)
{
    x= x*2;
}
int main()
{
    int value = 28;
    cout<<"The initialised value was: "<<value<<endl;
    doubleVal(value);
    cout<<"Doubled value is: "<<value<<endl;
    return 0;
}