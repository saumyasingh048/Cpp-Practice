// BRUTE FORCE APPROACH FOR ARRAY ROTATION WITHOUT USING TEMP VARIABLE

#include <bits/stdc++.h>
using namespace std;

void rotate(int arr[], int n, int num)
{
    for (int i = 0; i < num; i++)
    {
        int prev = arr[0];
        for (int j = 0; j < n; j++)
        {
            int temp = arr[n - j - 1];
            arr[n - j - 1] = prev;
            prev = temp;
        }
    }
}

int main()
{
    int n, num;
    cin >> n >> num;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    rotate(arr, n, num);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
}