
#include <iostream>
using namespace std;

bool isEven (int a)
{
    return a % 2 == 0;
}
int main ()
{
    int num;
    cout<<"Enter Your Number"<<endl;
    cin>>num;
    if( isEven (num))
    {
        cout<<"true"<<endl;
    } else {
        cout<<"false"<<endl;
    }
    return 0;
}
