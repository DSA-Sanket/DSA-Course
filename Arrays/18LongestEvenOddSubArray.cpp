#include <iostream>
using namespace std;

int longestEvenOddlength(int arr[], int n)
{
    int res = 1;
    for (int i = 0; i < n; i++)
    {
        int current = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] % 2 == 0 && arr[j - 1] % 2 != 0 || arr[j - 1] % 2 == 0 && arr[j] % 2 != 0)
                current++;
            else
                break;
        }
        res = max(res, current);
    }
    return res;
}
int eLongestEvenOddlength(int arr[], int n)
{
    int res = 1;
    int current = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] % 2 == 0 && arr[i - 1] % 2 != 0 || arr[i - 1] % 2 == 0 && arr[i] % 2 != 0)
        {
            current++;
            res = max(res, current);
        }
        else
        {
            current = 1;
        }
    }
    return res;
}
int main()
{
    int arr[] = {1, 34, 53, 674, 43, 6743, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Longest Even Odd Sub Array length " << longestEvenOddlength(arr, n) << endl;
    cout << "E Longest Even Odd Sub Array length " << eLongestEvenOddlength(arr, n) << endl;
}