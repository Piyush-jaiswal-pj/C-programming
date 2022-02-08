#include<iostream>
#include<cstdio>
#include<cmath>
// Include headers as needed

using namespace std;

int main()
{
  int a=0,b=1,c,n;
  cin>>n;
 
  for(int i=0;i<n;i++)
  {
       if(i==0)
    {
      cout<<a<<"\n";
      continue;
    }
    if(i==1)
    {
      cout<<b<<"\n";
    }
    else{
    c=a+b;
    a=b;
    b=c;
    cout<<c<<"\n";
    }
    
  }
    return 0;
}