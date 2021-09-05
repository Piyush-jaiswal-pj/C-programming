
#include <iostream>
#include <string.h>
using namespace std;

int main()
{

    char input[100];
    int c = 0, d = 0;
    cout << "Enter string : ";
    cin >> input;
    int x = strlen(input);

    for (int i = 0; i < x; i++)
    {
        if (input[i] == '1' && input[i] == '0')
        {
            cout << "Inappropiate string";
            exit(1);
        }
    }

    for (int i = 0; i < x; i++)
    {
        if (input[i] == '1' )
        {
            c++;
        }
        if (input[i] == '0')
        {
            d++;
        }
    }
    if (c >= 2 && d >= 2)
    {
        cout << "string is valid";
    }
    else
    {
        cout << "String is not valid";
    }
    return 0;
}
