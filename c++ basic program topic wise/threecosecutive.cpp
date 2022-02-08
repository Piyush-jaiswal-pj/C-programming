#include <iostream>

#include<string.h>
	
using namespace std;

int main()
	
{

int i, j;

int state=0;

char a[10];

cout<<"Enter the string to check\n";

gets(a);

int x = strlen(a);



for(i=0; i < x; i++)

{   if(a[i]=='0'&& state==0)

state= 0;

else if(a[i]=='1' && state==0)

state=1;

else if(a[i]=='1' && state==1)

state=2;

else if(a[i]=='1' && state==2)

state=3;

else if(a[i]=='1' && state==3)

state=1;

}
 


if(state==3){

cout<<"Accept";

}else{

cout<<"Not Accept";

}

return 0;

}
