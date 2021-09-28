#include <iostream>
#include <string.h>
using namespace std;

int main()
{

    char input[100];
    cout << "Enter string : ";
    cin >> input;
    int x = strlen(input);
    int c = 0, d = 0;

    for (int i = 0; i < x; i++)
    {
        if (input[i] != 'a' && input[i] != 'b')
        {
            cout << "Inappropiate string";
            exit(1);
        }
    }

    /*if ( input[x - 1] == 'a' || input[x - x] == 'b')
        {
            cout << "string is not valid";
            exit(1);
        }*/
        
    for (int i = 0; i < x; i++)
    {

        if (input[i] == 'a')
        {
            c++;
        }
        if (input[i] == 'b')
        {
            d++;
        }
    }
    if (c % 2 == 0 && d % 2 == 0)
    {
        cout << "string is valid/accepted";
    }
    else
    {
        cout << "String is not valid";
    }
    return 0;
}