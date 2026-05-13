#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        int zero = 0, one = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                zero++;
            }
            else
            {
                one++;
            }
        }
 
        int moves = min(zero, one);
        if (moves % 2 == 0)
        {
            cout << "NET" << endl;
        }
        else
        {
            cout << "DA" << endl;
        }
    }
}