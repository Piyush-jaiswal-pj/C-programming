
// call by value
#include<iostream>
using namespace std;


int func(int a,int b)
{
    cout<<a+b;
}
int main()
{
    int a=0;
    int b=5;
    func(a,b);
    return 0;
}