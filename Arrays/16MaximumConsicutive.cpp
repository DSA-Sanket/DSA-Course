#include <iostream>
using namespace std;

int maximumConsicutive(int arr[], int n)
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = i; j < n; j++)
        {
            if (arr[j] == 1)
            {
                count++;
            }
            else
            {
                break;
            }
        }
        res = max(res, count);
    }
    return res;
}
int eMaximumConsicutive(int arr[], int n)
{
    int count = 0, res = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            count = 0;
        }
        else
        {
            count++;
            res = max(count, res);
        }
    }
    return res;
}

int main()
{
    int arr[] = {1, 1, 1, 1, 1, 0, 1, 0, 0, 0, 1, 1, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Maximum consicutive in the Binary array " << maximumConsicutive(arr, n) << endl;
    cout << "E Maximum consicutive in the Binary array " << eMaximumConsicutive(arr, n) << endl;
}