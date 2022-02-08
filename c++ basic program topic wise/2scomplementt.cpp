#include <bits/stdc++.h>
//#include <string.h>
using namespace std;
//int printOneAndTwosComplement(string bin);
// Returns '0' for '1' and '1' for '0'
char flip(char c) {return (c == '0')? '1': '0';}



int printOneAndTwosComplement(string bin)
{
int n = bin.length();
int i;

string ones, twos;
ones = twos = "";

//  for ones complement flip every bit 
for (i = 0; i < n; i++)
ones += flip(bin[i]);

twos = ones;
for (i = n - 1; i >= 0; i--)
{
if (ones[i] == '1')
twos[i] = '0';
else
{
twos[i] = '1';
break;
}
}

if (i == -1)
twos = '1' + twos;

cout << "1's complement: " << ones << endl;
cout << "2's complement: " << twos << endl;
}



int main()
{
string bin = "1100"; 
printOneAndTwosComplement(bin);
    return 0;
}
