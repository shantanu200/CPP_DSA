#include<bits/stdc++.h>
using namespace std;


struct Node{
    int data;
    bool f;
}BST[100];

int main(){
    
    // 20 15 30 10 18 22 35
    // p -> index of parent node, q -> index of child node
    int p = 0, q = 0;

    int n;

   cin >> n;

    vector<int>arr(n);

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int k = 0;

    for(int i = 0; i < n; i++){
        p = q = 0;
        if(i == 0){
            BST[q].data = arr[k];
            k++;
            BST[q].f = 1;

            for(int i = 1; i < n; i++)
                BST[i].f = 0;
        }

        while(BST[q].f){
            p = q;

            if(arr[k] < BST[p].data)
                q = 2*p + 1;
            else
                q = 2*p + 2;
        }

        if(arr[k] < BST[p].data){
            q = 2*p+1;
            BST[q].data = arr[k];
            k++;
            BST[q].f = 1;
        }
        else{
            q = 2*p+2;
            BST[q].data = arr[k];
            k++;
            BST[q].f = 1;
        }
    }

    for(int i = 0; i < n; i++)
        cout << BST[i].data << " ";
    cout << "\n";


}