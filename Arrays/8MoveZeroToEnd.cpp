#include <iostream>
using namespace std;

void MoveZeroToEnd(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[j] != 0)
                {
                    swap(arr[i], arr[j]);
                    break;
                }
            }
        }
    }
}

void eMoveZeroToEnd(int arr[],int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]!=0)
        {
            swap(arr[i],arr[count]);
            count++;
        }
        
    }
    
}

int main()
{
    int arr[6] = {1, 4, 0, 6, 0, 8};
    cout << "Move zero to end of array " << endl;
    MoveZeroToEnd(arr, 6);
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    int arr1[6] = {0, 0, 0, 6, 0, 8};
    cout << "\nEMove zero to end of array " << endl;
    eMoveZeroToEnd(arr1, 6);
    for (int i = 0; i < 6; i++)
    {
        cout << arr1[i] << " ";
    }
}