#include <iostream>
using namespace std;

int present(int table_frame[], int nf, int page)
{
    for (int i = 0; i < nf; i++)
        if (page == table_frame[i])
            return 1;
    return 0;
}

void printtable(int table_frame[], int nf)
{
    for (int i = 0; i < nf; i++)
    {
        if (table_frame[i] == -1)
            cout << " -- ";
        else
            cout<<"   "<<table_frame[i];
    }
    cout << " || ";
}

int main()
{
    //nf-number of frames
    int n, nf, i, pos = 0;
    cout << "\n\t FIFO PAGE REPLACEMENT \t\n\n";
    cout << "Enter number of frames\n";
    cin>>nf;
    int table_frame[nf];
    for(i=0;i<nf;i++)
    {
        table_frame[i] = -1;
    }

    cout<<"Enter total number of page requests\n";
    cin>>n;
    int pages[n];
  cout<<"Enter Page Reference String \n";
    for(i=0;i<n;i++)
    {
        cin >> pages[i];
    }

    int count1=0;
    cout<<"Position of frame table after each request\n";
    for(i=0;i<n;i++)
    {
        cout << "Page table after request from " << pages[i] << " || ";
        if (!present(table_frame, nf, pages[i]))
        {
            table_frame[pos] = pages[i];
            pos = (pos + 1) % nf; //considering it as a queue
            printtable(table_frame, nf);
            cout << "Page fault\n";
            count1++;
            continue;
        }

        printtable(table_frame, nf);
        cout <<"\n";

    }
cout<<"\nNumber of page faults : "<<count1;
}