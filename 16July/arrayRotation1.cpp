#include <bits/stdc++.h>
using namespace std;

void rotateArray(int arr[], int n, int noOfElementsToRotate)
{
    int newArray[noOfElementsToRotate];
    for (int i = 0; i < noOfElementsToRotate; i++)
    {
        /* code */
        newArray[i] = arr[i];
    }
    for (int j = 0; j < n - noOfElementsToRotate; j++)
    {
        arr[j] = arr[j + noOfElementsToRotate];
    }
    for (int k = n - noOfElementsToRotate; k < n; k++)
    {
        arr[k] = newArray[k - n + noOfElementsToRotate];
    }
}

int main()
{
    int n, noOfElementsToRotate;
    cin >> n >> noOfElementsToRotate;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> arr[i];
    }
    rotateArray(arr, n, noOfElementsToRotate);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
}