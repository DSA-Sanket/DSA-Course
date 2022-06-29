#include <iostream>
using namespace std;

void frequencies(int arr[], int n)
{
    int freq = 1, i = 1;
    while (i < n)
    {
        while (i < n && arr[i] == arr[i - 1])
        {
            freq++;
            i++;
        }
        cout << arr[i - 1] << " " << freq << endl;
        i++;
        freq = 1;
    }
    if (n == 1 || arr[n - 1] != arr[n - 2])
    {
        cout << arr[i - 1] << " " << 1 << endl;
    }
}

int main()
{
    int arr[6] = {2, 4, 4, 6, 8, 10};
    cout << "Frequencies of number in sorted array " << endl;
    frequencies(arr, 6);
}