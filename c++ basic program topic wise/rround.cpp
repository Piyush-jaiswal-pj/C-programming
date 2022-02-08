#include <iostream>

using namespace std;

int main()
{
    int p[50],a[50],b[50],rb[50],c[50],t[50],w[50],r[50],q[50],ca[50],tq=0,m,temp=0,k=0,u=0,j=0;
    cout<<"Enter the number of process: ";
    int i;
    cin>>m;
    int n = m;
    cout<<"Enter the Time Quantum: ";
    cin>>tq;
    cout<<"Enter Arrival Time: ";
    for( i=0;i<m;++i)
    {
        cin>>a[i];
    }
    for( i=0;i<m;i++)
    {
        p[i] = i+1;
    }
    cout<<"Enter Bust Time: ";
    for( i=0;i<m;i++)
    {
        cin>>b[i];
    }
    for( i=0;i<m;i++)
    {
        rb[i] = b[i];
    }
    for( i=0;i<n;i++)
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
                for(j=i+1;j<=c[i];j++)
                {
                    if(a[j]<=c[i])
                    {
                        q[u]=p[j];
                        u++;
                        ca[j]=ca[j-1]+tq;
                        k++;
                    }
                }
                q[u]=p[i];
                u++;
                rb[i]=b[i]-tq;
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
            temp=q[i];
            if(rb[temp-1] > tq)
            {
                int x = q[i-1];
                c[temp-1]=c[x-1]+tq;;
                if(k < m)
                {
                    for(j=k;j<m;j++)
                    {
                        if(a[j]>=j)
                        {
                            if(a[j]<=c[temp-1])
                            {
                                q[u]=p[j];
                                u++;
                                ca[j]=ca[j-1]+tq;
                                k++;
                            }
                        }
                    }
                }    
                q[u]=p[temp-1];
                u++;
                r[temp-1]=b[temp-1]-tq;
                n++;
            }
            else
            {
                int x = q[i-1];
                c[temp-1]=c[x-1]+rb[temp-1];
                if(k < m)
                {
                    for(j=k;j<m;j++)
                    {
                        if(a[j]>=j)
                        {
                            if(a[j]<=c[temp-1])
                            {
                                q[u]=p[j];
                                u++;
                                ca[j]=ca[j-1]+rb[j-1];
                                k++;
                            }
                        }
                    }
                    
                }
                r[temp-1]=0;
            }
        }
    }
    cout<<"Complition time is: ";
    for(i=0;i<m;i++)
    {
        cout<<c[i]<<" ";
    }
    for(i=0;i<m;i++)
    {
        t[i] = c[i]-a[i];
    }
    cout<<"turn around time is: ";
    for( i=0;i<m;i++)
    {
        cout<<t[i]<<" ";
    }
    for( i=0;i<m;i++)
    {
        r[i] = ca[i]-a[i];
    }
    cout<<"response time is: ";
    for( i=0;i<m;i++)
    {
        cout<<r[i]<<" ";
    }
    return 0;
}



