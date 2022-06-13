#include <iostream>
using namespace std;
int largestElement(int arr[], int n)
{
    int pos = 0, temp = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > temp)
        {
            temp = arr[i];
            pos = i;
        }
    }
    return pos;
}
int main()
{
    int arr[6] = {1, 4, 5, 8, 6, 7};
    cout << "Index of the largest Element " << largestElement(arr, 6) << endl;
}