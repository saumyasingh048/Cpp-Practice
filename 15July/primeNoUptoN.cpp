#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    bool count = true;
    cin >> num;
    for (int i = 2; i <= num; i++)
    {
        /* code */
        for (int j = 2; j * j < i; j++)
        {
            /* code */
            if (i % j == 0)
            {
                count = false;
                break;
            }
            else
            {
                continue;
            }
        }
        if (count)
            cout << i << "\t";
        else
            continue;
    }
    if (num < 2)
        cout << "No prime no. available";
}