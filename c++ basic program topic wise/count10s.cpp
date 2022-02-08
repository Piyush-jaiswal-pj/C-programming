#include <bits/stdc++.h>
using namespace std;

bool isOne(int i)
{
if (i == 1)
return true;
else
return false;
}

int main()
{

int a[] = { 1, 0, 0, 1, 0, 0, 1 };

int n = sizeof(a) / sizeof(a[0]);

int count_of_one = count_if(a, a + n, isOne);

cout << "1's: " << count_of_one << endl;
cout << "0's: " << (n - count_of_one) << endl;

return 0;
}

