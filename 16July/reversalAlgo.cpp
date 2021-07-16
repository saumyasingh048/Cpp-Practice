#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[], int start, int end)
{
    int temp;
    int j = end - 1;
    for (int i = start; i < (start + (end - start) / 2); i++)
    {

        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        j--;
    }
}

void rotate(int arr[], int n, int noOfElementsToRotate)
{
    reverse(arr, 0, noOfElementsToRotate);
    reverse(arr, noOfElementsToRotate, n);
    reverse(arr, 0, n);
}

int main()
{
    int n, noOfElementsToRotate;
    cin >> n >> noOfElementsToRotate;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    rotate(arr, n, noOfElementsToRotate);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
}