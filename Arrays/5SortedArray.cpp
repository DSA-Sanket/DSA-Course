#include <iostream>
using namespace std;
bool isSortedArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[i + 1])
            return false;
    }
    return true;
}
int main()
{
    int arr[6] = {1, 4, 5, 6, 8, 9};
    cout << "Sorted Array " << isSortedArray(arr, 6) << endl;
}