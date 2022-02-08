#include <iostream>
using namespace std;

int fifo();
int LRU();
int optimal();

int main()
{
      int pages;

      cout << "CHOOSE THE FOLLOWING FOR PAGE REPLACEMENT\n";
      cout << "FOR FIFO PRESS 1 \n";
      cout << "FOR OPTIMAL PRESS 2 \n";
      cout << "FOR LEAST RECENTLY USED PRESS 3\n";
      int choice;
      cin >> choice;

      switch (choice)
      {
      case 1:
            fifo();
            break;
      case 2:
            optimal();
            break;

      case 3:
            LRU();
            break;
      default:
            cout << "INVALID";
      }
}

int fifo()

{

      int referenceString[10], frames, pages;
      int pageFaults = 0, m, n, s;
      cout<<"     -- FIRST IN FIST OUT PAGE REPLACEMENT ALGORITHM --\n";
      cout << "\nEnter no of pages for which you want to calculate page faults:>\t";
      cin >> pages;
      cout << "\nEnter reference string values:\n";
      for (m = 0; m < pages; m++)
      {
            cout << "Value No.:\t";
            cin >> referenceString[m];
      }
      cout << " What are the total number of frames:";
      cin >> frames;
      int temp[frames];
      for (m = 0; m < frames; m++)
      {
            temp[m] = -1;
      }
      cout << "\tPage Frame \n";
      for (m = 0; m < pages; m++)
      {
            s = 0;
            for (n = 0; n < frames; n++)
            {
                  if (referenceString[m] == temp[n])
                  {
                        s++;
                        pageFaults--;
                  }
            }
            pageFaults++;
            if ((pageFaults <= frames) && (s == 0))
            {
                  temp[m] = referenceString[m];
            }
            else if (s == 0)
            {
                  temp[(pageFaults - 1) % frames] = referenceString[m];
            }

            cout << "\n";
            for (n = 0; n < frames; n++)
            {
                  cout << "\t" << temp[n];
            }
      }
      cout << "\nTotal Page Faults:\t\n"
           << pageFaults;
}

int LRU()
{

      int nopages, nofaults, num[20], i, count = 0;
      cout<<"       -- LEAST RECENTLT USED PAGE REPLACEMENT ALGORIHTM -- \n";
      cout << "\nEnter no of pages for which you want to calculate page faults:>\t";
      cin >> nopages; 
      cout << "\nEnter The Reference String Values: \n";
      for (i = 0; i < nopages; i++)
      {
            cout << "Value No.:\t";

            cin >> num[i];
      }
      cout << "\nEnter the Number of frames:>\t";
      cin >> nofaults;
      int frame[nofaults], fcount[nofaults];
      for (i = 0; i < nofaults; i++)
      {
            frame[i] = -1;
            fcount[i] = 0; 
      }
      i = 0;

      cout << "\t   Page Frame \n";
      while (i < nopages)
      {
            int j = 0, flag = 0;
            while (j < nofaults)
            {
                  if (num[i] == frame[j])
                  { 
                        flag = 1;
                        fcount[j] = i + 1;
                  }
                  j++;
            }
            j = 0;
            cout << "\n Entered Value " << num[i] << " ->\t";
            if (flag == 0)
            {
                  int min = 0, k = 0;
                  while (k < nofaults - 1)
                  {
                        if (fcount[min] > fcount[k + 1]) 
                              min = k + 1;
                        k++;
                  }
                  frame[min] = num[i];
                  fcount[min] = i + 1; 
                  count++;             
                  while (j < nofaults)
                  {
                        cout << "\t" << frame[j] << "\t";
                        j++;
                  }
            }
            i++;
      }

      cout << "\nPage Fault:" << count;
}

optimal()
{
      
      int frames_number, pages_number, frames[10], pages[30], temp[10], flag1, flag2, flag3, i, j, k, pos, max, miss = 0;
      
      int faults = 0, hit = 0;
        cout<<"\t-- OPTIMAL PAGE REPLACEMENT ALGORIHTM -- \n";
      cout << "Enter no of pages for which you want to calculate page faults:> ";
      cin >> pages_number;
      
      cout << "Enter page reference string: ";
      for (i = 0; i < pages_number; ++i)
      {

            cout << "Value No.:\t";
            cin >> pages[i];
      }
      cout << "Enter number of frames: ";
      cin >> frames_number;

      for (i = 0; i < frames_number; ++i)
      {
            frames[i] = -1;
      }
      for (i = 0; i < pages_number; ++i)
      {
            flag1 = flag2 = 0;
            for (j = 0; j < frames_number; ++j)
            {
                  if (frames[j] == pages[i])
                  {
                        flag1 = flag2 = 1;
                        break;
                  }
            }
            
            if (flag1 == 0)
            {
                  for (j = 0; j < frames_number; ++j)
                  {
                        if (frames[j] == -1)
                        {
                              faults++;
                              frames[j] = pages[i];
                              flag2 = 1;
                              break;
                        }
                  }
            }

        
            if (flag2 == 0)
            {
                  flag3 = 0;
                  for (j = 0; j < frames_number; ++j)
                  {
                        temp[j] = -1;
                        for (k = i + 1; k < pages_number; ++k)
                        {
                              if (frames[j] == pages[k])
                              {
                                    temp[j] = k;
                                    break;
                              }
                        }
                  }
                  for (j = 0; j < frames_number; ++j)
                  {
                        if (temp[j] == -1)
                        {
                              pos = j;
                              flag3 = 1;
                              break;
                        }
                  }
               
                  if (flag3 == 0)
                  {
                        max = temp[0];
                        pos = 0;
                        for (j = 1; j < frames_number; ++j)
                        {
                              if (temp[j] > max)
                              {
                                    max = temp[j];
                                    pos = j;
                              }
                        }
                  }
                  frames[pos] = pages[i];
                  miss++;
            }
            cout << "\n";
            for (j = 0; j < frames_number; ++j)
            {
                  cout << "\t" << frames[j];
            }
            
      
      }
      cout << "\n\nTotal Page Fault = " << miss;
  
}

