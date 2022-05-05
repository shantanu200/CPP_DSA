#include <bits/stdc++.h>
using namespace std;
#define SIZE 50

int queue[50];
int front = -1,rear = -1;
void InQueue(int val){
    if(rear == SIZE-1){
        cout<<"Queue is Full"<<endl;
    }else{
        if(front == -1){
            front = 0;
            rear++;
            cout<<"Insertion Success for QUEUE"<<endl;
        }
        
    }
}

void deQueue(){
    if(front == rear){
        cout<<"Queue is Empty"<<endl;
    }else{
        cout<<"Successfully Deleted "<<queue[front]<<endl;
        front++;
        if(front == rear){
            front = rear - 1;
        }
    }
}

void display(){
    if(rear == -1){
        cout<<"Queue is Empty"<<endl;
    }
    else{
        int val;
        cout<<"Queue Elements are: "<<endl;
        for(val=front;val<=rear;val++){
            cout<<queue[val]<<" ";
        }
    }
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
            InQueue(val);
            break;

            case 2:
            deQueue();
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