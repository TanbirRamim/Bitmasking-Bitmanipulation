/*
extracting i'th bit formula is n&(1<<i)
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i;
    cout << "enter a number: ";
    cin >> n;
    cout << "Enter the i'th bit: ";
    cin >> i;
    int result = n & (1 << i);
    cout << "your answer is: " << result << endl;
    return 0;
}