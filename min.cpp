#include <iostream>
using namespace std;

int findMin(int x, int y, int z)
{
    int minVal = y;
    if(x<minVal)
    {
        minVal=x;
    }
    if (z<minVal)
    {
        minVal=z;
    }
 return minVal;
}
int main()
{
    int num1 = 2;
    int num2 = 4;
    int num3 = 8;

    int smallestInt = findMin(num1, num2, num3);
    std::cout<<"The smallest integer is: "<<smallestInt<<endl;
    return 0;
}