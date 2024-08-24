#include <iostream>
using namespace std;

int swapNumber(int &x, int &y)
{
    int save = x;
     x = y;
     y = save;
    
}
int main()
{
    int m = 726;
    int f = 928;
    cout<<"The values of m and f before swaping were "<< m <<" and "<< f <<" respectively"<<endl;
    swapNumber(m,f);
    cout<<"The value of m after swap is: "<<m<<endl<<"The value of f after swap is: "<<f<<endl;

    return 0;
}