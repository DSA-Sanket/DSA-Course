#include <iostream>
using namespace std;

int array(int arr[], int n, int cap, int value, int pos)
{
    if (n == cap)
        return n;

    int idx = pos - 1;

    for (int i = n - 1; i >= idx; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[idx] = value;
    return n+1;
}

int main()
{
    int arr[6] = {1,4,7,6,7};
    cout << "Add a value at a position in a Arrays "<< array(arr,5,6,5,3)<< endl;

    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
}