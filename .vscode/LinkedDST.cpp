#include <bits\stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

Node* newEle(int val){
    Node *temp = new Node();
    temp->data = val;
    temp->right = NULL;
    temp->left = NULL;
    return temp;
}

Node* insert(Node* root,int val){
    if(root == NULL){
        root = newEle(val);
    }else if(val < root->data){
        root -> left = insert(root->left,val);
    }else{
        root->right = insert(root->right,val);
    }
}

void display(Node* root){
    if(root != NULL){
        display(root->left);
        cout<<root->data<<" -> ";
        display(root->right);
    }
}

void preorder(Node* node){
    if(node != NULL){
        cout<<node->data<<" ";
        preorder(node->left);
        preorder(node->right);
    }
    
}



void postorder(Node* node){
    if(node != NULL){
        postorder(node->left);
        postorder(node->right);
        cout<<node->data<<" ";
    }
    
}

void inorder(Node* node){
    if(node!=NULL){
        postorder(node->left);
        cout<<node->data<<" ";
        postorder(node->right);
    }
    
}

int main(){
    int n;
    cout<<"No of Elements: ";
    cin>>n;

    Node *root = NULL;
    int ele;
    cout<<"Enter the number to add ";
    for(int i=0;i<n;i++){
        cin>>ele;
        root = insert(root,ele);
    }
    int choice;
    
    
    bool flag = true;

    while(flag){

    cout<<"Enter Your Choice 1.Display \n 2.Inoder \n 3.Preorder \n 4.Postorder \n 5.Exit"<<endl;
    cin>>choice;

    switch(choice){
        case 1:
        cout<<"Tree formed\n";
	    display(root);
        break;

        case 2:
        cout<<"Inorder Traversal : "<<endl;
        inorder(root);
        break;

        case 3:
        cout<<"Pre-Order Traversal : "<<endl;
        preorder(root);
        break;

        case 4:
        cout<<"Post-Order Traversal : "<<endl;
        postorder(root);
        break;

        case 5:
        exit(1);
        break;
    }
    
    }
    return 0;
}