#include <iostream>
using namespace std;

int sumofdigits(int num1,int num2)
{
   int sum = num1 + num2;
   return sum;
}
int main()
{
    int x = 7;
    int y = 8;
    cout<<sumofdigits(x,y)<<endl; 
    return 0;
}

