// syntax of class
/* class class_name{
    data;
    functions;
}

Syntax of oject
class_name ObjectvariableNAme;
ex-- A.name;
*/

// Program for illustrate the working of class and objectc and public accessing method

#include <iostream>
using namespace std;

class fruits//creating an class
{
public:
    int mango;
    int orange;
    int apple;
    int totalfruits;
 
    int allfruits()
    {
        return totalfruits = mango + orange + apple;
    }
};

int main()
{
    fruits total;//creating an object
    cout << "Enter Quanty of the fruits \n";
    cin >> total.mango;
    cin >> total.apple;
    cin >> total.orange;
    cout << "Total fruits in a baskets is :" << total.allfruits() << endl;
}