#include <bits\stdc++.h>
using namespace std;
 
#define max 50

struct Node{
    int data;
    bool used;
} tree[max];


int main(){
    int p =0, q =0;
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    int val;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int k = 0;
    for(int i=0;i<size;i++){
        p = 0;
        q = 0;
        if(i==0){
            tree[i].data = val;
            tree[i].used = true;
            for(int j=1;j<size;j++){
                tree[j].used = false;
            }
        }else{
        while(q<max && tree[q].used == true){
            p = q;
            if(val<tree[p].data){
                q = 2*p+1;
            }else{
                q = 2*p+2;
            }
        }
        if(val<tree[p].data){
            q = 2*p + 1;
            tree[q].data = val;
            tree[q].used = true;
        }else{
            q = 2*p + 2;
            tree[q].data = val;
            tree[q].used = true;
        }
        }   
    }

    for(int a=0;a<size;a++){
        cout<<tree[a].data<<" ";
    }
    
    return 0;
}