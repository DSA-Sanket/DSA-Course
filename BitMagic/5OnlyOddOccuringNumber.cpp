#include <iostream>
using namespace std;

void onlyOddOccuringNumber(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int count = 0;
        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count % 2 != 0)
        {
            cout << arr[i] << endl;
        }
    }
}

int eOnlyOddOccuringNumber(int arr[], int size)
{
    int result = 0;
    for (int i = 0; i < size; i++)
    {
        result = result ^ arr[i];
    }
    return result;
}

// x^0=x
// x^y = y ^ x 
// x^x = 0
// x^(y^z) = (x^y)^z

int missingNum(int arr[], int size)
{
    int result = 0;
    for (int i = 1; i <=size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i == arr[j])
            {
                continue;
            }else{
                result = arr[i];
            }
            
            result = i ^ arr[j];
            
            
        }
    }
    return result;
}
int main()
{
    int arr[] = {2, 2, 4, 4, 6, 6, 6};
    cout << sizeof(arr) / sizeof(arr[0]) << endl;
    int sizeOfArr = sizeof(arr) / sizeof(arr[0]);
    cout << "Only Odd occuring number " << endl;
    onlyOddOccuringNumber(arr, sizeOfArr);

    cout << "E Only Odd occuring number " << eOnlyOddOccuringNumber(arr, sizeOfArr) << endl;

    int arr1[] = {1,5,4,2};
    int sizeOfArr1 = sizeof(arr1) / sizeof(arr1[0]);
    cout<< "Odd one out from counting " << missingNum(arr1, sizeOfArr1);
}