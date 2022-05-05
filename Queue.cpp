#include <bits/stdc++.h>
using namespace std;
#define SIZE 50

int prequeue[50];
int front = -1,rear = -1;


void InQueue(int val){
    if(rear == SIZE-1){
        cout<<"Queue is Full"<<endl;
    }else{
        rear += 1;
        prequeue[rear] = val;
        if(front==-1){
            front = 0;
        }
        
    }
}

void deQueue(){
    if(front==-1 || (front > rear)){
        cout<<"Queue is Empty"<<endl;
    }else{
        cout<<"Successfully Deleted "<<prequeue[front]<<endl;
        front+= 1;
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
            cout<<prequeue[val]<<" ";
        }
        cout<<endl;
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