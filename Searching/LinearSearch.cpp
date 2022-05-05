#include <bits\stdc++.h>
using namespace std;

int LinearSerch(int arr[],int size,int key){  
    sort(arr,arr+size);

    for(int i=0;i<size;i++){
        if(arr[i]==key){
           return i;
        }else if(arr[i]>key){
            break;
        }
    }
    return -1;
}

int main(){
    int size;
    cout<<"Enter the size of Array: ";
    cin>>size;
    int arr[size];

    cout<<"Enter the element of array: "<<endl;
    for(int i=0;i<size;i++) cin>>arr[i];
    int ele;
    cout<<"Enter the element to found ";
    cin>>ele;

    int find = LinearSerch(arr,size,ele);

    (find != -1) ? cout<<"Element is found at position "<<find+1<<endl : cout<<"Element is not available in array "<<endl;

    return 0;
}