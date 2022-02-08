#include <iostream>
#include <string.h>
#include <process.h>
using namespace std;

int main()
{
    char a[10];
    int i;
    cout << "Enter the string\n";
    gets(a);
    int x = strlen(a);
    for (int i = 0; i < x; i++)
    {
        if (a[i] != '0' && a[i] != '1')
        {
            cout << "invalid string";
            exit(0);
        }
    }
    int c0 = 0, c1 = 0;
    for (i = 0; i < x; i++)
    {
        if (a[i] == '0')
            c0++;
        else
            c1++;
    }
    int temp = c0 - c1;
    if (temp == 0)
        cout << "Accept";
    else
        cout << "reject";
    return 0;
}
