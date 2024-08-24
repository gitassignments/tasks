#include <iostream>
using namespace std;

int calculateArea(int length, int width)
{
    int area = length*width;
    return area;
}

int main()
{
    int a = 5;
    int b = 9;
    cout<<calculateArea(a,b)<<endl;
    return 0;
}