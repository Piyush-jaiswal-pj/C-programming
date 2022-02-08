#include<iostream>

using namespace std;

int factorial(int n)
{

if(n<0)
{
    return -1;
}

if(n==0)

return 1;

else 

return (n*factorial(n-1));

}

int main()
{
    int value;
    cout<<"Enter the value for factorial";
    cin>>value;
    int fact=factorial(value);
    cout<<"The factorial of "<< value<<"is :"<<fact<<endl;
    return 0;
    
}
