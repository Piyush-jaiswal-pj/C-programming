
// Program for illustrate the working of class and objectc and Private accessing method

#include <iostream>
using namespace std;

class fruits//creating an class
{
private://private accessfier 
    int mango;
    int orange;
    int apple;
    int totalfruits;

    public:
 void Acessing_Private_variable(int a,int b,int c)//member function
 {
     mango=a;//creating a copy of private variable
     orange=b;
     apple=c;
 }
    int allfruits()//its automatically takes the value from the member function bcz the copy of variables//
    {
        return totalfruits = mango + orange + apple;
    }
};
int main()
{
    fruits total;//creating an object
    cout << "Enter Quanty of the fruits \n";
 
  total.Acessing_Private_variable(5,5,6);
    cout << "Total fruits in a baskets is :" << total.allfruits() << endl;
}

//why we can take the input in this private type methods?