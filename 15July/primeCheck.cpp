#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    bool count = true;
    cin >> num;
    for (int i = 2; i * i < num; i++)
    {
        /* code */
        if (num % i == 0)
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
        cout << "Prime" << endl;
    else
        cout << "Not Prime" << endl;
}