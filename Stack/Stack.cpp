#include<iostream>
using namespace std;

class Stack{
    int Top,Capacity;
    int *Array;
public:
    Stack* Create(int Cap);
    void Push(Stack* S);
    int Pop(Stack* S);
    int Full(Stack* S);
    int Empty(Stack* S);
};

int Stack::Full(Stack* S){
    if(S->Top==S->Capacity-1)
        return 1;
    else
        return 0;
}

int Stack::Empty(Stack* S){
    if(S->Top==-1)
        return 1;
    else
        return 0;
}

Stack* Stack::Create(int Cap){
    Stack *S=new Stack;
    S->Top=-1;
    S->Capacity=Cap;
    S->Array=new int[S->Capacity];
    return (S);
}

void Stack::Push(Stack* S){
    int Digit;
    cout<<"Enter -1 when finished"<<endl;
    cout<<"Enter Digit One by One:- ";
    while(S->Top!=S->Capacity-1){
        cin>>Digit;
        if(Digit==-1)
            break;
        else
            S->Array[++S->Top]=Digit;
    }
    if(S->Top==S->Capacity-1)
        cout<<"Overflow"<<endl;
}

int Stack::Pop(Stack* S){
    int D;
    if(S->Top==-1){
        return 0;
    }
    else{
     D=S->Array[S->Top--];
     return D;
    }
}

int main(){
    Stack *S1,*S2,*A,O;
    int Cap,A1,A2,i=0;
    cout<<"Enter Digits Binary Number:- ";
    cin>>Cap;
    S1=O.Create(Cap);
    S2=O.Create(Cap);
    A=O.Create(Cap+1);
    int A3[Cap+1];
    cout<<"Enter 1st Number:- ";
    O.Push(S1);
    cout<<"Enter 2nd Number:- ";
    O.Push(S2);
    while(!O.Empty(S1) || !O.Empty(S2)){
        A1=O.Pop(S1);
        A2=O.Pop(S2);
        A3[i++]=A1+A2;
    }
}
