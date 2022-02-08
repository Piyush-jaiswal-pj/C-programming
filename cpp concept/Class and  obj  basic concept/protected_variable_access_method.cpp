
// Program for illustrate the working of class and objectc and protected accessing method

#include <iostream>
using namespace std;

class fruits//creating an class
{
protected://accessfier 
    int mango;
    int orange;
    int apple;
    int totalfruits;
};

class totalfruit :public fruits //member class also called *** inheritance ***
{
    public:
 void Acessing_Protected_variable(int a,int b,int c)//member function
 {
     mango=a;//creating a copy of protected variable
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
    totalfruit total;//creating an object
    cout << "Enter Quanty of the fruits \n";
 
  total.Acessing_Protected_variable(5,5,6);
    cout << "Total fruits in a baskets is :" << total.allfruits() << endl;
}
          