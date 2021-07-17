// BRUTE FORCE APPROACH FOR ARRAY ROTATION USING TEMP VARIABLE

#include <bits/stdc++.h>
using namespace std;

void rotate(int arr[], int n, int num)
{
    for (int i = 0; i < num; i++)
    {

        for (int j = 0; j < n - 1; j++)
        {
            int temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
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
