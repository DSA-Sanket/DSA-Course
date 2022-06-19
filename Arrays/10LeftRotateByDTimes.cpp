#include <iostream>
using namespace std;
void leftRotateByOne(int arr[], int n)
{
    int temp = arr[0];
    for (int i = 1; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;
}
void leftRotateByDTimes(int arr[], int n, int d)
{
    for (int i = 0; i < d; i++)
    {
        leftRotateByOne(arr, n);
    }
}
/////////////////////////////////////////////////////////////
void eleftRotateByDTimes(int arr[], int n, int d)
{
    int temp[d];
    for (int i = 0; i < d; i++)
    {
        temp[i] = arr[i];
    }
    for (int i = d; i < n; i++)
    {
        arr[i - d] = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        arr[n - d + i] = temp[i];
    }
}
/////////////////////////////////////////////////////////////////

void reverse(int arr[], int low, int high)
{
    while (low < high)
    {
        swap(arr[high], arr[low]);
        high--;
        low++;
    }
}

void eEleftRotateByDTimes(int arr[], int n, int d)
{
    reverse(arr, 0, d-1);
    reverse(arr, d, n-1);
    reverse(arr, 0, n-1);
}
int main()
{
    int arr[6] = {1, 4, 4, 6, 8, 8};
    cout << "Left Rotate Array By D times " << endl;
    leftRotateByDTimes(arr, 6, 2);
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }

    int arr1[6] = {1, 4, 4, 6, 8, 8};
    cout << "\nE Left Rotate Array By D times " << endl;
    eleftRotateByDTimes(arr1, 6, 3);
    for (int i = 0; i < 6; i++)
    {
        cout << arr1[i] << " ";
    }

    int arr2[6] = {1, 4, 4, 6, 8, 8};
    cout << "\nEE Left Rotate Array By D times " << endl;
    eEleftRotateByDTimes(arr2, 6, 3);
    for (int i = 0; i < 6; i++)
    {
        cout << arr2[i] << " ";
    }
}