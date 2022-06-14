#include <iostream>
using namespace std;
int largestNumber(int arr[], int n)
{
    int pos = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[pos])
        {
            pos = i;
        }
    }
    return pos;
}

int secondLargest(int arr[], int n)
{
    int largest = largestNumber(arr, n);
    int secondLargest = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[largest])
        {
            if (secondLargest == -1)
                secondLargest = i;

            if (arr[i] > arr[secondLargest])
            {
                secondLargest = i;
            }
        }
    }

    return secondLargest;
}

int main()
{
    int arr[6] = {1, 4, 5, 8, 6, 7};
    cout << "2nd Largest NUmber position " << arr[secondLargest(arr, 6)] << endl;
}