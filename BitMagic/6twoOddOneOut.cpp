#include <iostream>
using namespace std;

void twoOddAppearingNUmbers(int arr[], int size)
{
    int xOr = 0, res1 = 0, res2 = 0;
    for (int i = 0; i < size; i++)
    {
        xOr = xOr ^ arr[i];
    }
    int sn = xOr & ~(xOr - 1); // to find right most 1 in binary number
    
    for (int j = 0; j < size; j++)
    {
        if ((arr[j] & sn) != 0)
        {
            res1 = res1 ^ arr[j];
        }
        else
        {
            res2 = res2 ^ arr[j];
        }
    }
    cout << res1 << "  " << res2 << endl;
}

int main()
{
    int arr[] = {2, 3, 2, 3, 4, 4, 5, 6, 6, 6, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<<size<<endl;
    cout << "Two odd appearing numbers " << endl;
    twoOddAppearingNUmbers(arr, size); 
}

// 101
// 111
// 010