#include <iostream>
using namespace std;

void inc(int &x)
{
    ++x;
}
int main()
{

    int val = 77;
    inc(val);
    cout<<val<<endl;

    return 0;
}