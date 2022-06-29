#include <iostream>
using namespace std;

int maxProfit(int arr[], int start, int end)
{
    if (start >= end)
    {
        return 0;
    }
    int profit = 0;
    for (int i = start; i < end; i++)
    {
        for (int j = i + 1; j < end; j++)
        {
            if (arr[j] > arr[i])
            {
                int currentProfit = (arr[j] - arr[i]) + maxProfit(arr, start, i - 1) + maxProfit(arr, j + 1, end);
                profit = max(profit, currentProfit);
            }
        }
    }
    return profit;
}

int eMaxProfit(int arr[], int n)
{
    int profit = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] < arr[i])
        {
            profit += (arr[i] - arr[i - 1]);
        }
    }
    return profit;
}

int main()
{
    int arr[6] = {1,5,3,8,12};
    cout << "Stock maximum profit " << maxProfit(arr, 0, 6) << endl;
    cout << "E Stock maximum profit " << eMaxProfit(arr,6) << endl;
}