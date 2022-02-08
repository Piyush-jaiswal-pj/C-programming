#include <iostream>
#include <string.h>
#include <process.h>
using namespace std;

int main()
{
    char a[10];
    cout << "Enter the string \n";
    gets(a);
    int x = strlen(a);
    for (int i = 0; i < x; i++)
    {
        if (a[i] != '0' && a[i] != '1' && a[i] !='2' && a[i] !='3' && a[i] !='4' && a[i] !='5' && a[i] !='6' &&
            a[i] !='7' && a[i] !='8' && a[i] !='9')
        {
            cout << "invalid string";
            
            exit(0);
        }
        int state = 0;
        for (i = 0; i < x; i++)

        {
            if (a[i] == '0' || a[i] =='2' || a[i] =='4' || a[i] =='6' || a[i] =='8' && state == 0)

                state = 0;

            else if (a[i] == '1' || a[i] =='3' || a[i] =='5' || a[i] =='7' || a[i] =='9' || state == 0)

                state = 1;

            else if (a[i] == '0' || a[i] =='2' || a[i] =='4' || a[i] =='6' || a[i] =='8' && state == 1)

                state = 0;

            else if (a[i] == '1' || a[i] =='3' || a[i] =='5' || a[i] =='7' || a[i] =='9' && state == 1)

                state = 1;
        }

        if (state == 0)

            cout << "Accept";

        else

            cout << "Not Accept";

    }
        return 0;
}
