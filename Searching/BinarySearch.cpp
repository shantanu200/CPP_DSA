#include <bits\stdc++.h>
using namespace std;

int binarySearch(int arr[],int start,int end,int key){
    int high = end;
    int low = start;   

    while(low<=high){
        int mid = (low+high)/2;

        if(arr[mid] == key){
            return mid;
        }

        else if(arr[mid] > key){
            high = mid - 1;
            binarySearch(arr,low,high,key);
        }else{
            low = mid + 1;
            binarySearch(arr,low,high,key);
        }
    }

    return -1;
}

int main(){
    
    int size;
    cout<<"Enter the size of array : ";
    cin>>size;

    int arr[size];
    cout<<"Enter the elements of array : ";
    for(int i=0;i<size;i++) cin>>arr[i];

    int ele;
    cout<<"Enter the element to find : ";
    cin>>ele;
    
    int find = binarySearch(arr,0,size-1,ele);

    (find != -1) ? cout<<"Element " << ele<<" found at position "<<find+1<<endl : cout<<"Element("<<ele<<") not available in array "<<endl;

    return 0;
}