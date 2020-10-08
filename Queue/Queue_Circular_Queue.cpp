#include"Circular_Queue.h"
using namespace std;

Circular_Queue* Circular_Queue::Create(){
    Circular_Queue *CQ;
    CQ=new Circular_Queue;
    cout<<"Enter Capacity of Queue:- ";
    cin>>CQ->Capacity;
    CQ->Front=-1; CQ->Rear=-1;
    CQ->Array=new int[CQ->Capacity];
    return (CQ);
}

void Circular_Queue::Insert(Circular_Queue* CQ){
    cout<<"Enter Number:- ";
    int key; cin>>key;
    if((CQ->Front==0 && CQ->Rear==CQ->Capacity-1) || (CQ->Front==CQ->Rear+1)){
        cout<<"Queue if Full"<<endl;
        return ;
    }
    if(CQ->Front==-1){
        CQ->Front=0; CQ->Rear=0;
    }
    else{
         if(CQ->Rear==CQ->Capacity-1)
              CQ->Rear=0;
         else
              CQ->Rear++;
    }
    CQ->Array[CQ->Rear]=key;
}

void Circular_Queue::Delete(Circular_Queue* CQ){
    if(CQ->Front==-1){
        cout<<"Queue is Empty"<<endl; return;
    }
    cout<<"Deleted Element is:- "<<CQ->Array[CQ->Front]<<endl;
    if(CQ->Front==CQ->Rear)
        {CQ->Front=-1;CQ->Rear=-1;}
    else{
        if(CQ->Front==CQ->Capacity-1)
            CQ->Front=0;
        else
            CQ->Front++;
    }
}

void Circular_Queue::Print(Circular_Queue* CQ){
    int f,r; f=CQ->Front; r=CQ->Rear;
    if(CQ->Front==-1){
            cout<<"Queue is Empty"<<endl;
            return ;
    }
    if(f<=r){
        while(f<=r){
            cout<<CQ->Array[f]<<" ";
            f++;
        }
    }
    else{
        while(f<=CQ->Capacity){
            cout<<CQ->Array[f]<<" ";
            f++;
        }
        f=0;
        while(f<=r){
            cout<<CQ->Array[f]<<" ";
            f++;
        }
    }
    cout<<endl;
}

int menu(){
    cout<<"1:Insert"<<endl<<"2:Delete"<<endl<<"3:Print"<<endl<<"Any to Exit:- ";
    int Choice; cin>>Choice;
    return (Choice);
}

int main(){
    Circular_Queue *C,O;
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
