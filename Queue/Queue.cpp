#include"Queue.h"
using namespace std;

Queue* Queue::Create(){
    Queue *Q=new Queue;
    cout<<"Enter Capacity of Queue:- ";
    cin>>Q->Capacity;
    Q->Array=new int[Q->Capacity];
    Q->Front=-1; Q->Rear=-1;
    return (Q);
}

void Queue::Insert(Queue *Q){
    if(Q->Rear!=Q->Capacity-1){
            Q->Rear++;
        cout<<"Enter Number:- ";
        cin>>Q->Array[Q->Rear];
    }
    else
        cout<<"Queue is Full"<<endl;
}

void Queue::Delete(Queue *Q){
    if(Q->Front!=Q->Rear+1){
        Q->Front++;
        cout<<"Deleted Value:- "<<Q->Array[Q->Front]<<endl;
        Q->Array[Q->Front]=0;
    }
    else
        cout<<"Queue is Empty"<<endl;
}

void Queue::Print(Queue *Q){
        for(int i=0;i<=Q->Rear;i++)
            if(Q->Array[i]!=0)
              cout<<Q->Array[i]<<endl;
}

int menu(){
    cout<<"1:Insert"<<endl<<"2:Delete"<<endl<<"3:Print"<<endl<<"Any to Exit"<<endl;
    cout<<"Enter Your Choice:- ";
    int Choice;
    cin>>Choice;
    return (Choice);
}

int main(){
    Queue *C,O;
    C=O.Create();
    while(1){
        switch(menu()){
        case 1:
            O.Insert(C);
            break;
        case 2:
            O.Delete(C);
            break;
        case 3:
            O.Print(C);
            break;
        default:
            return 0;
        }
    }
}
