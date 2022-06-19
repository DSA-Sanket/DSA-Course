#include <iostream>
using namespace std;

int removeDuplicate(int arr[], int n)
{
    int temp[n];
    temp[0] = arr[0];
    int k = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != temp[k - 1])
        {
            temp[k] = arr[i];
            k++;
        }
        for (int i = 0; i < k; i++)
        {
            arr[i] = temp[i];
        }
    }
    return k;
}
int eRemoveDuplicate(int arr[], int n)
{
    int result = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[result - 1])
        {
            arr[result] = arr[i];
            result++;
        }
    }
    return result;
}
int main()
{
    int arr[6] = {1, 4, 4, 6, 8, 8};
    cout << "Remove Duplicate from sorted Array " << endl;
    int n = removeDuplicate(arr, 6);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\nRemove Duplicate from sorted Array " << endl;
    int k = eRemoveDuplicate(arr, 6);
    for (int i = 0; i < k; i++)
    {
        cout << arr[i] << " ";
    }
}