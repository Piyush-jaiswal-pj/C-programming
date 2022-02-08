#include<iostream>
using namespace std;
int main()
{
  int
  P[20],A[20],B[20],p[20],C[20],T[20],W[20],R[20],com[20],Q[20],u=0,l=0,i=0,m=0,n,h=0,s=1;
  cout<<"Enter Number Of Process: ";
  cin>>n;
  cout<<"Enter Arrival Time: ";
  for(i=0;i<n;i++)
  {
    cin>>A[i];
  }
  cout<<"Enter Bust Time: ";
  for(i=0;i<n;i++)
  {
    cin>>B[i];
  }
  cout<<"Enter Priority: ";
  for(i=0;i<n;i++)
  {
    cin>>p[i];
  }
  for(i=0;i<n;i++)
  {
    com[i]=0;
  }
  for(i=0;i<n;i++)
  {
    if(i==0)
    {
      C[i] = A[i]+B[i];
      com[l] = i;
      l++;
    }
    else
    {
      for(int j=0;j<n;j++)
      {
	s=1;
	if(A[j]<=C[m])
	{
	  if(j!=m)
	  {
	    for(int d=0;d<l;d++)
	    {
	      if(j==com[d])
	      {
		s=0;
	      }
	    }
	    if(s!=0)
	    {
	      Q[u] = j;
	      u++;
	    }
	  }
	}
      }
      if(u>0)
      {
	if(u==1)
	{
	  m = Q[u-1];
	  C[m] = C[h]+B[m];
	  com[l] = m;
	  l++;
	  u=0;
	}
	else
	{
	  for(int k=0;k<u-1;k++)
	  {
	    int e=Q[k],y=Q[k+1];
	    if(p[e]>=p[y])
	    {
	      m = e;
	    }
	    else
	    {
	      m = y;
	    }
	  }
	  C[m] = C[h]+B[m];
	  h = m;
	  com[l] = m;
	  l++;
	  u=0;
	}
      }
      else
      {
	C[i] = C[i-1]+B[i];
	com[l] = i;
	l++;
      }
    }
  }
  cout<<"Process No.:      ";
  for(i=0;i<n;i++)
  {
    cout<<i+1<<"  ";
  }
  cout<<"\nArrival Time:     ";
  for(i=0;i<n;i++)
  {
    cout<<A[i]<<"  ";
  }
  cout<<"\nBust Time:        ";
  for(i=0;i<n;i++)
  {
    cout<<B[i]<<"  ";
  }
  cout<<"\nPriority:         ";
  for(i=0;i<n;i++)
  {
    cout<<p[i]<<"  ";
  }
  cout<<"\nCompile Time:     ";
  for(i=0;i<n;i++)
  {
    cout<<C[i]<<"  ";
  }
  cout<<"\nTurn Around Time: ";
  for(i=0;i<n;i++)
  {
    T[i] = C[i]-A[i];
    cout<<T[i]<<"  ";
  }
  cout<<"\nWating Time:      ";
  for(i=0;i<n;i++)
  {
    W[i] = T[i]-B[i];
    cout<<W[i]<<"  ";
  }
  cout<<"\nResponse Time:    ";
  for(i=0;i<n;i++)
  {
    R[i] = W[i];
    cout<<R[i]<<"  ";
  }
  float Awt=0,Atat=0;
  cout<<"\n\nAverage Wating Time:    ";
  for(i=0;i<n;i++)
  {
    Awt = Awt+W[i];
  }
  Awt = Awt/n;
  cout<<Awt<<" ";
  cout<<"\nAverage Turn Around Time: ";
  for(i=0;i<n;i++)
  {
    Atat = Atat+T[i];
  }
  Atat = Atat/n;
  cout<<Atat<<" ";
 
}
