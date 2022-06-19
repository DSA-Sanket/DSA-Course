#include <iostream>
using namespace std;

int maxDif(int arr[], int n)
{
    int res = arr[0] - arr[1];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            res = max(res, arr[j] - arr[i]);
        }
    }
    return res;
}

int eMaxDif(int arr[], int n)// wrong code
{
    int res = arr[1] - arr[0], minValue = arr[0];
    for (int i = 1; i < n; i++)
    {
        res = max(res, arr[i] - minValue);
        minValue = min(arr[i], minValue); 
    }
    return res;
}

int main()
{
    int arr[6] = {2, 4, 4, 6, 8, 1};
    cout << "Maximum difference between two numbers in an array " << maxDif(arr, 6) << endl;
    cout << "E Maximum difference between two numbers in an array " << eMaxDif(arr, 6) << endl;
}