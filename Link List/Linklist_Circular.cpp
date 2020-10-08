#include"Circular.h"

void Circular::Insert(){
    Circular *New,*Node;
    New=new Circular;
    cout<<"Enter Number:- ";
    cin>>New->Value;
    New->Next=NULL;
    if(!Head)
        Head=New;
    else{
            Node=Head;
            if(Node->Next==NULL){
               Node->Next=New;
               New->Next=Head;
            }
            else{
                    while(Node->Next!=Head)
                          Node=Node->Next;
                    Node->Next=New;
                    New->Next=Head;
            }
    }
}

void Circular::Delete(){
    Circular *Node,*D;
    Node=Head;
    int key;
    cout<<"Enter A Number You want To delete:- ";
    cin>>key;
    while(Node->Next->Value!=key)
        Node=Node->Next;
    D=Node->Next;
    Node->Next=Node->Next->Next;
    delete D;
}

void Circular::Print(){
    Circular *P;
    P=Head;
    while(P->Next!=Head){
        cout<<P->Value<<endl;
        P=P->Next;
    }
    cout<<P->Value<<endl;
}

int menu(){
    cout<<"1:Insertion"<<endl<<"2:Deletion"<<endl<<"3:Print"<<endl<<"4:Exit :- ";
    int i;
    cin>>i;
    return i;
}

int main(){
    Circular O;
    while(1){
        switch(menu()){
        case 1:
            O.Insert();
            break;
        case 2:
            O.Delete();
            break;
        case 3:
            O.Print();
            break;
        case 4:
            return 0;
            default:
                cout<<"Invalid"<<endl;
        }
    }
}

