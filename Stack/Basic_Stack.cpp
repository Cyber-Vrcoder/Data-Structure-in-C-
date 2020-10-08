#include<iostream>
using namespace std;

class Stack{
    int Top,Capacity;
    int *Array;
public:
    Stack* Create();
    void Push(Stack *S);
    void Pop(Stack *S);
    void View(Stack *S);
};
 Stack* Stack::Create(){
    Stack *S=new Stack;
    cout<<"Enter Capacity:- ";
    cin>>S->Capacity;
    S->Top=-1;
    S->Array=new int[S->Capacity];
    return (S);
};

void Stack::Push(Stack *S){
    if(S->Top!=S->Capacity-1){
       S->Top++;
       cout<<"Enter Data:- ";
       cin>>S->Array[S->Top];
    }
    else
        cout<<"Stack is Overflow"<<endl;
}

void Stack::Pop(Stack *S){
    if(S->Top!=-1){
        cout<<"Removed Valued:- "<<S->Array[S->Top]<<endl;
        S->Top--;
    }
    else
        cout<<"Stack is Empty"<<endl;
}

void Stack::View(Stack *S){
    int top=S->Top;
    while(top!=-1){
        cout<<S->Array[top]<<endl;
        top--;
    }
}

int main(){
    Stack *C,O;
    C=O.Create();
    while(1){
        cout<<"1: Push"<<endl<<"2: Pop"<<endl<<"3: View"<<endl<<"4: Exit"<<endl;
        cout<<"Enter Choice:- ";
        int Choice;
        cin>>Choice;
        switch(Choice){
        case 1:
            O.Push(C);
            break;
        case 2:
            O.Pop(C);
            break;
        case 3:
            O.View(C);
            break;
        default:
              return 0;
        }
    }
}
