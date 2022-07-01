#include <iostream>
using namespace std;

int trappedWater(int arr[], int n) // n^2
{
    int result_water = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int lmax = arr[0];
        for (int j = 0; j < i; j++)
        {
            lmax = max(lmax, arr[j]);
        }

        int rmax = arr[n - 1];
        for (int j = i + 1; j < n; j++)
        {
            rmax = max(rmax, arr[j]);
        }
        result_water += min(lmax, rmax) - arr[i];
    }
    return result_water;
}

int eTrappedWater(int arr[], int n)
{
    int result = 0;
    int lmax[n], rmax[n];
    lmax[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        lmax[i] = max(lmax[i - 1], arr[i]);
    }
    rmax[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        rmax[i] = max(rmax[i + 1], arr[i]);
    }
    for (int i = 1; i < n - 1; i++)
    {
        result = result + (min(lmax[i], rmax[i]) - arr[i]);
    }
    return result;
}

int main()
{
    int arr[] = {3, 0, 1, 2, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << n << endl;
    cout << "Water stored between the tower created by the corner elements of the array " << endl;
    cout << "Water trapped " << trappedWater(arr, n) << endl;
    cout << "E Water trapped " << eTrappedWater(arr, n) << endl;
}