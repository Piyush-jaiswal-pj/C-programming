#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char input[10];
    int countb,counta,countc;
    gets(input);
    int x= strlen(input);
    for(int i =0;i<x;++i)
    {
        if(input[i]=='a' || input[i]=='b'||input[i]=='c')
{
}
else{
    cout<<"Enter Appropriate string";
    exit(1);
}
    }

for(int i=0;i<x;++i)
{
    if(x%3==0)
    {
    if(input[i]=='a' )
    {
        counta++;
    }
     if(input[i]=='b' )
    {
        
        countb++;
    }
     if(input[i]=='c' )
    {
        countc++;
    }
    }
}
    
if(counta>=3 && countb>=3 && countc>=3)
{
    cout<<"Entered String is valid";
}

else{
    cout<<"Entered String is not valid";
}


return 0 ;
}