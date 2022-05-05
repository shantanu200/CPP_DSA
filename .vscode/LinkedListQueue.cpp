#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

struct node *front = NULL, *rear = NULL;

void Inqueue(int val){
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode -> data = val;
    newNode -> next = NULL;

    if(front == NULL && rear == NULL){
        front = rear = newNode;
    }else{
        rear -> next = newNode;
        rear = newNode;
    }
}

void dequeue(){

    struct node *temp;

    if(front == NULL){
        cout<<"Queue is empty"<<endl;
    }
    else{
        temp = front;
        front = front -> next;

        if(front == NULL){
            rear = NULL;
        }
        free(temp);
    }
}

void display(){
    struct node *temp = front;

    while(temp){
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
    cout<<"NULL\n";
}

int main(){
    int value,choice;
    
    bool flag = true;

    while(flag){
        cout<<"1. Insertion\n2. Deletion\n3. Display\n4. Exit"<<endl;
        cout<<"Select the Option of Your Choice ";
        cin>>choice;

        switch(choice){
            case 1:
            int val;
            cout<<"Enter value to add: ";
            cin>>val;
            Inqueue(val);
            break;

            case 2:
            dequeue();
            break;

            case 3:
            display();
            break;

            case 4:
            exit(1);
            break;
        }
    }
    
    return 0;
}