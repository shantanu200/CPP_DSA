#include <bits\stdc++.h>
using namespace std;

int* ipArray(int size){
    int* arr = new int[size];
    
    cout<<"Enter the elements of array : ";
    for(int i=0;i<size;i++) cin>>arr[i];

    return arr;
}

int* insertionSort(int arr[],int size){
    int insert;
    for(int i=1;i<size;i++){
        insert = arr[i];
        int j;
        for(j=i-1;j>=0 && insert<arr[j];j--){
            arr[j+1] = arr[j];
            
        }
        arr[j+1] = insert;
    }

    return arr;
}

int main(){
  int size;
  cout<<"Enter the size of array: ";
  cin>>size;

   int *arr;
   arr = ipArray(size);

   int *ans;
   ans = insertionSort(arr,size);

   for(int i=0;i<size;i++) cout<<ans[i]<<" ";

   return 0;
}