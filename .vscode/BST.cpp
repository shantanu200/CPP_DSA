#include <bits\stdc++.h>
using namespace std;
 
#define max 50

struct Node{
    int data;
    bool used
} tree[max];


int main(){
    int p =0, q =0;
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    int val;
    for(int i=0;i<size;i++){
        p = 0;
        q = 0;       
        cin>>val;
        if(i==0){
            tree[i].data = val;
            tree[i].used = true;
            for(int j=1;j<size;j++){
                tree[j].used = false;
            }
        }

        while(q<max && tree[q].used){
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

    return 0;
}