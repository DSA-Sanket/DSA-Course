#include <iostream>
using namespace std;

int array(int arr[], int n, int value)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == value)
        {
            cout << i << " " << endl;
            break;
        }
    }
    if (i == n)
        return n;

    for (int j = i; j < n - 1; j++)
    {
        arr[j] = arr[j + 1];
    }
    arr[n-1]=0;
    return n - 1;
}

int main()
{
    int arr[6] = {1, 4, 5, 7, 6, 7};
    cout << "Delete a value from a postion of an array " << array(arr, 6, 5) << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
}