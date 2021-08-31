#include<iostream>
#include<string.h>
using namespace std;
 int main()
{
   char a[10];
    cout<<"enter the string";
    gets(a);
    int x=strlen(a);
    //for(int i=x;i>=0;i--)
   // {
        if (a[x-3]=='0'&&a[x-2]=='0'&&a[x-1]=='1')
        {
            cout<<"string is valid";
            //break;
        }
        else{
            cout<<"string  is invalid";
            //break;
        }
   // }
    return 0;
}
