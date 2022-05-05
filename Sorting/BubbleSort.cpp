#include <bits\stdc++.h>
using namespace std;

int *ipArray(int size){
    int* arr = new int[size]; 

    cout<<"Enter the elements of array: ";

    for(int i=0;i<size;i++) cin>>arr[i];

    return arr;
}

int *bubbleSort(int arr[], int size)
{
    int change;
    for (int i = 0; i < size - 1; i++)
    {
        change = 0;
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                change++;
            }
        }
        if (change == 0)
        {
            break;
        }
    }

    return arr;
}

int main()
{
    int size = 5;
    int *arr;
    arr = ipArray(size);
    int *ans;
    ans = bubbleSort(arr, 5);

    for (int i = 0; i < 5; i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}
