#include <iostream>
using namespace std;

int maxSumOfSubArray(int arr[], int n)
{
    int currentmMaxSum = 0, res = 0;
    for (int i = 0; i < n; i++)
    {
        currentmMaxSum = 0;
        for (int j = i; j < n; j++)
        {
            currentmMaxSum += arr[j];
            res = max(currentmMaxSum, res);
        }
    }
    return res;
}

int eMaxSumOfSubArray(int arr[], int n)
{
    int res = 0;
    int maxEnding = 0;
    for (int i = 0; i < n; i++)
    {
        maxEnding = max(maxEnding + arr[i], arr[i]);
        res = max(maxEnding, res);
    }
    return res;
}

int main()
{
    int arr[] = {-3,8,-2,4,-5,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Maximum sub Array Sum "
         << maxSumOfSubArray(arr, n) << endl;
    cout << "Maximum sub Array Sum "
         << eMaxSumOfSubArray(arr, n) << endl;
}