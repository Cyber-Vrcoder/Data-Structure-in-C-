#include"DoubleCircular.h"

void DoubleCircular::Insert(){
    DoubleCircular *New,*Node;
    New=new DoubleCircular;
    cout<<"Enter Value:- ";
    cin>>New->Value;
    New->Next=NULL;
    New->Previous=NULL;
    if(!Head)
        Head=New;
    else{
        Node=Head;
        if(Node->Next!=Head){
            Node->Next=New;
            Node->Previous=New;
            New->Previous=Head;
            New->Next=Head;
        }
        else{
            while(Node->Next!=Head)
                Node=Node->Next;
            Node->Next=New;
            New->Next=Head;
            New->Previous=Node;
            Head->Previous=New;
        }
    }
}

void DoubleCircular::Delete(){
    int key;
    cout<<"Enter Value that you want to Delete:- ";
    cin>>key;
    DoubleCircular *D,*Node;
    Node=Head;
        while(Node->Next->Value!=key)
             Node=Node->Next;
        D=Node->Next;
        Node->Next=Node->Next->Next;
        Node->Next->Previous=Node;
        delete D;
        return;
}

void DoubleCircular::Print(){
    DoubleCircular *Node;
    Node=Head;
    while(Node->Next!=Head){
        cout<<Node->Value<<endl;
        Node=Node->Next;
    }
    cout<<Node->Value<<endl;
}

void DoubleCircular::Reverse(){
    DoubleCircular *Node;
    Node=Head;
    while(Node->Previous!=Head){
        cout<<Node->Previous->Value<<endl;
        Node=Node->Previous;
    }
    cout<<Node->Previous->Value<<endl;
}

int menu(){
    cout<<"1:Insert"<<endl<<"2:Delete"<<endl<<"3:Print in Ascending Order"<<endl;
    cout<<"4:Print in Descending Order"<<endl<<"5:Exit :-";
    int i;
    cin>>i;
    return i;
}

int main(){
    DoubleCircular O;
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
            O.Reverse();
            break;
        case 5:
            exit(0);
        default:
            cout<<endl<<"Invalid"<<endl;
        }
    }
}
