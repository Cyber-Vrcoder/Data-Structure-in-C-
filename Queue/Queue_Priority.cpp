#include"Priority.h"
using namespace std;

Priority* Priority::Create(){
    Priority *P;
    P=new Priority();
    cout<<"Enter Capacity of Priority Queue:- ";
    cin>>P->Capacity;
    P->Front=-1;P->Rear=-1;
    P->Array=new int[P->Capacity];
    return (P);
}

void Priority::Insert(Priority* P){
    if(P->Rear==-1) {
            P->Rear=0;
    }

    if(P->Rear!=P->Capacity){
        cout<<"Enter Number:- ";
        cin>>P->Array[P->Rear];
        int k,T,j=0; T=P->Array[P->Rear]; k=P->Rear;
        while(j < P->Rear){
           if(P->Array[j] > P->Array[P->Rear]){
                while(k>=j){
                    P->Array[k]=P->Array[k-1];
                    k--;
                }
             P->Array[j]=T;
             break;
           }
        j++;
        }
        P->Rear++;
    }
    else{
        cout<<"Queue is Full. ";
    }

}

void Priority::Delete(Priority* P){
    if(P->Front==-1)
        P->Front=0;

    if(P->Front!=P->Rear){
        cout<<"Deleted Value:- "<<P->Array[P->Front]<<endl;
        P->Array[P->Front]=0;
        P->Front++;
    }
    else
        cout<<"Queue is Empty. ";
}

void Priority::Print(Priority* P){
    int F=0;
    while(F!=P->Rear){
        if(P->Array[F]!=0)
            cout<<P->Array[F]<<" ";
        F++;
    }cout<<endl;
}

int menu(){
    cout<<"1:Insert"<<endl<<"2:Delete"<<endl<<"3:Print"<<endl<<"Enter any to Exit:- ";
    int Choice; cin>>Choice;
    return (Choice);
}

int main(){
    Priority *C,O;
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
