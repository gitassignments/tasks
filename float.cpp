#include <iostream>
using namespace std;

float Average(float x, float y, float z)
{
    float average = (x + y + z) / 3.0;
    return average;
}
int main ()
{
    float a = 4.3;
    float b = 5.9;
    float c = 7.8;

    float avg = Average(a,b,c);
    cout<<"The average of the three float value is: "<<avg<<endl;
    return 0;
}
