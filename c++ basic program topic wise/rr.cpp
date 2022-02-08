#include<iostream>
using namespace std;
 int main()
{
    
    int
    p[50],a[50],b[50],rb[50],c[50],t[50],w[50],r[50],q[50],ca[50],tq=0,m,TEMP1=0,k=0,u=0,j=0,i;
    cout<<"Enter The Number Of Process: ";
    cin>>m;
    int n = m;
    cout<<"Enter The Time Quantum: ";
    cin>>tq;
    cout<<"Enter Arrival Time: ";
    for(i=0;i<m;i++)
    {
	cin>>a[i];
    }
    for(i=0;i<m;i++)
    {
	p[i] = i+1;
    }
    cout<<"Enter Bust Time: ";
    for(i=0;i<m;i++)
    {
	cin>>b[i];
    }
    for(i=0;i<m;i++)
    {
	rb[i] = b[i];
    }
    for(i=0;i<n;i++)
    {
	if(i==0)
	{
	    q[u] = i+1;
	    u++;
	    ca[i]=a[i];
	    k++;
	    if(rb[i]>tq)
	    {
		c[i] = a[i]+tq;
		rb[i]=rb[i]-tq;
		for(j=i+1;j<=c[i];j++)
		{
		    if(a[j]<=c[i])
		    {
			q[u]=p[j];
			u++;
			k++;
			if((u-i)>2)
			{
			    int w=0;
			    for(int l=i+1;l<u-1;l++)
			    {
				if(w>0)
				{
				    int e=q[l];
				    if(rb[e-1]>tq)
				    {
					ca[j]=ca[j]+tq;
					w++;
				    }
				    else
				    {
					ca[j]=ca[j]+rb[e-1];
					w++;
				    }
				}
				else
				{
				    int e=q[l];
				    if(rb[e-1]>tq)
				    {
					ca[j]=c[l-1]+tq;
					w++;
				     }
				     else
				     {
					ca[j]=c[l-1]+rb[e-1];
					w++;
				     }
				}
			    }
			}
			else
			{
			    if(rb[j-1]>tq)
			    {
				ca[j]=ca[j-1]+tq;
			    }
			    else
			    {
				ca[j]=ca[j-1]+rb[j-1];
			    }
			}
		    }
		}
		q[u]=p[i];
		u++;
		n++;
	    }
	    else
	    {
		c[i]=a[i]+b[i];
		for(j=i+1;j<=c[i];j++)
		{
		    if(a[j]<=c[i])
		    {
			q[u]=p[j];
			u++;
			ca[j]=ca[j-1]+rb[j-1];
			k++;
		    }
		}
		rb[i]=0;
	    }
	}
	else
	{
	    TEMP1=q[i];
	    if(rb[TEMP1-1] > tq)
	    {
		int x = q[i-1];
		c[TEMP1-1]=c[x-1]+tq;
		rb[TEMP1-1]=rb[TEMP1-1]-tq;
		if(k < m)
		{
		    for(j=k;j<m;j++)
		    {
			if(a[j]>=j)
			{
			    if(a[j]<=c[TEMP1-1])
			    {
				q[u]=p[j];
				u++;
				k++;
				if((u-i)>2)
				{
				    int w=0;
				    for(int l=i+1;l<u-1;l++)
				    {
					if(w>0)
					{
					    int e=q[l];
					    if(rb[e-1]>tq)
					    {
						ca[j]=ca[j]+tq;
						w++;
					    }
					    else
					    {
						ca[j]=ca[j]+rb[e-1];
						w++;
					    }
					}
					else
					{
					    int e=q[l];
					    if(rb[e-1]>tq)
					    {
						ca[j]=c[TEMP1-1]+tq;
						w++;
					    }
					    else
					    {
						ca[j]=c[TEMP1-1]+rb[e-1];
						w++;
					    }
					}
				    }
				}
				else
				{
				    if(rb[j-1]>tq)
				    {
					ca[j]=ca[j-1]+tq;
				    }
				    else
				    {
					ca[j]=ca[j-1]+rb[j-1];
				    }
				}
			    }
			}
		    }
		}
		q[u]=p[TEMP1-1];
		u++;
		n++;
	    }
	    else
	    {
		int x = q[i-1];
		c[TEMP1-1]=c[x-1]+rb[TEMP1-1];
		rb[TEMP1-1]=0;
		if(k < m)
		{
		    for(j=k;j<m;j++)
		    {
			if(a[j]>=j)
			{
			    if(a[j]<=c[TEMP1-1])
			    {
				q[u]=p[j];
				u++;
				k++;
				if((u-i)>2)
				{
				    int w=0;
				    for(int l=i+1;l<u-1;l++)
				    {
					if(w>0)
					{
					    int e=q[l];
					    if(rb[e-1]>tq)
					    {
						ca[j]=ca[j]+tq;
						w++;
					    }
					    else
					    {
						ca[j]=ca[j]+rb[e-1];
						w++;
					    }
					}
					else
					{
					    int e=q[l];
					    if(rb[e-1]>tq)
					    {
						ca[j]=c[TEMP1-1]+tq;
						w++;
					    }
					    else
					    {
						ca[j]=c[TEMP1-1]+rb[e-1];
						w++;
					    }
					}
				    }
				}
				else
				{
				    ca[j]=c[TEMP1-1]+rb[TEMP1-1];
				}
			    }
			}
		    }

		}
	    }
	}
    }
    for(i=0;i<m;i++)
    {
	t[i] = c[i]-a[i];
    }
    for(i=0;i<m;i++)
    {
	r[i] = ca[i]-a[i];
    }
    for(i=0;i<m;i++)
    {
	w[i]=t[i]-b[i];
    }
    cout<<"\nProcess No.:       ";
    for(i=0;i<m;i++)
    {
	cout<<p[i]<<"    ";
    }
    cout<<"\nArrival Time:      ";
    for(i=0;i<m;i++)
    {
	cout<<a[i]<<"    ";
    }
    cout<<"\nBust Time:         ";
    for(i=0;i<m;i++)
    {
	cout<<b[i]<<"    ";
    }
    cout<<"\nComplition Time:   ";
    for(i=0;i<m;i++)
    {
	cout<<c[i]<<"    ";
    }
    cout<<"\nTurn Around Time:  ";
    for(i=0;i<m;i++)
    {
	cout<<t[i]<<"    ";
    }
    cout<<"\nWating Time:       ";
    for(i=0;i<m;i++)
    {
	cout<<w[i]<<"    ";
    }
    cout<<"\nResponse Time:     ";
    for(i=0;i<m;i++)
    {
	cout<<r[i]<<"    ";
    }
    float avgt=0,avgw=0;
    for(i=0;i<m;i++)
    {
	avgt = avgt+t[i];
    }
    avgt = avgt/m;
    cout<<"\n\nAverage Turn Around Time:  "<<avgt;
    for(i=0;i<m;i++)
    {
	avgw = avgw+w[i];
    }
    avgw = avgw/m;
    cout<<"\nAverage Wating Time:       "<<avgw;
    return 0;
}
