#include <iostream>
using namespace std;
int funct(int *a, int *b);
int main()
{
    int x, y;

    cout << "Enter your choice for your operation 1 \n";

    cin >> x;
    cout << "Enter your choice for your operation 2\n";
    cin >> y;
    cout << "Before function call \n";
    cout << "The value of x: " << x << " & value of y: " << y << endl;
    funct(&x, &y);
    cout << "After fucntion call \n";
    cout << "The value of x: " << x << " and value of y: " << y << endl;
}
int funct(int *a,int *b)
{
    *a=13;
    *b=14;
    cout<<"The value of a: "<<a<<" & value of b: "<<b<<" inside the function"<<endl;
}