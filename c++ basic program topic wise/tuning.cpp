#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std; 
int main()
{
char a[50];
int i,j,k,len;
cout<<"Enter the string to check\n"; //input the string 
cin>>a;
if(strlen(a)%3!=0)  //if string length is not multiple of 3 , reject it
{
cout<<"Not accepted\n";
exit(0);
}
len=strlen(a)/3;  //len= length of the input string 
for(i=0;i<len;i++)
{
if(a[i]!='a')
{
cout<<"Not accepted\n";
exit(0);
}
}
for(j=i;j<i+len;j++)  //checks if next len/3 characters are ‘b’
{
if(a[j]!='b')
{
cout<<"Not accepted\n";
exit(0);
}
}
for(k=j;k<j+len;k++)  //checks if next len/3 characters are ‘c’
{
if(a[k]!='c')
{
cout<<"Not accepted";
exit(0);
}
}
/*if all conditions are satisfied, it shows that input is accepted*/
cout<<"Accepted\n";
 
return 0;
}

