#include <iostream>
using namespace std;

void reverseArray(int arr[], int n)
{
    int low = 0, high = n-1, temp;

    while (low < high)
    {
        temp = arr[high];
        arr[high] = arr[low];
        arr[low] = temp;
        low++;
        high--;
    }
}

int main()
{
    int arr[6] = {1, 4, 5, 6, 8, 9};
    cout << "Reverse Array " << endl;
    reverseArray(arr, 6);
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
}