#include <iostream>
using namespace std;

void leader(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        bool flag = false;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] <= arr[j])
            {
                flag = true;
                break;
            }
        }
        if (flag == false)
            cout << arr[i] << " ";
    }
}

void eLeader(int arr[], int n)
{
    int currentLeader = arr[n - 1];
    cout<<currentLeader<<" ";
    for (int i = n - 2; i >= 0; i--)
    {
        if (currentLeader < arr[i])
        {
            currentLeader = arr[i];
            cout << arr[i] << " ";
        }
    }
}
int main()
{
    int arr[9] = {1, 4, 4, 6, 8, 5, 8, 6, 3};
    cout << "Leaders in an Array " << endl;
    leader(arr, 9);

    int arr1[9] = {1, 4, 4, 6, 8, 5, 8, 6, 3};
    cout << "\nLeaders in an Array " << endl;
    eLeader(arr1, 9);
}