#include <iostream>
using namespace std;
#include <string.h>

int main()

{

    int i, j;
    char a[10];

    cout << "Enter the string to check\n";

    gets(a);

    int x = strlen(a);

    if (a[x - 3] == '1' && a[x - 2] == '0' && a[x - 1] == '1')

    {

        cout << "String is Valid";
    }

    else
    
    {
        cout << "Invalid!";
    }
    return 0;
}
