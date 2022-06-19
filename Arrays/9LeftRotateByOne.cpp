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

int main()
{
    int arr[6] = {1, 4, 4, 6, 8, 8};
    cout << "Left rotate by one " << endl;
    leftRotateByOne(arr, 6);
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
}