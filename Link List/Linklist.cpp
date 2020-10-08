#include"Atest01.h"

void Link::Sort(){
    Link *Sort,*S,*C;
    int Count=0;
    S=Head; C=Head;
    while(S->Next->Next!=NULL){
        Count++;
        S=S->Next;
    }
    Count+=1;
    for(int i=0;i<=Count;i++){
    Sort=Head;
    while(Sort->Next!=NULL){
        if(Sort->Value > Sort->Next->Value){
            int Temp;
            Temp=Sort->Value;
            Sort->Value=Sort->Next->Value;
            Sort->Next->Value=Temp;
        }
     Sort=Sort->Next;
    }
     if(S->Value > Sort->Value){
            int Temp;
            Temp=S->Value;
            S->Value=Sort->Value;
            Sort->Value=Temp;
        }
        C=C->Next;
    }
}

void Link::Frequency(){
    int key,C=0;
    Link *Fre;
    Fre=Head;
    cout<<"Enter Element whose frequency You want to Know:- ";
    cin>>key;
    while(Fre!=NULL){
        if(Fre->Value==key)
              C++;
        Fre=Fre->Next;
    }
    cout<<key<<"'s Frequency is "<<C<<endl;
}

void Link::Insertion1(){

        Link *NewNode,*nodeptr;
 NewNode=new Link;
 cout<<"Enter Number:- ";
 cin>>NewNode->Value;
 NewNode->Next=NULL;
        if(!Head)
    Head=NewNode;
        else{
    nodeptr=Head;
    while(nodeptr->Next)
        nodeptr=nodeptr->Next;
    nodeptr->Next=NewNode;
 }
}
void Link::Insertion2(){
     Link *newNode,*Nodeptr;
 newNode=new Link;
 cout<<"Enter Number:- ";
 cin>>newNode->Value;
 newNode->Next=NULL;
            if(!Head)
        Head=newNode;
            else{
        newNode->Next=Head;
        Head=newNode;
    }
}
void Link::Insertion3(){
     Link *newNode1,*Nodeptr1;
 newNode1=new Link;
 cout<<"Enter Number:- ";
 cin>>newNode1->Value;
 newNode1->Next=NULL;
        int key;
    cout<<"Enter Number after which you want to insert:-";
    cin>>key;
    Nodeptr1=Head;
    while(Nodeptr1->Value!=key)
        Nodeptr1=Nodeptr1->Next;
    newNode1->Next=Nodeptr1->Next;
    Nodeptr1->Next=newNode1;
}

void Link::Delete1(){
    if(!Head)
        cout<<"Link List is Empty"<<endl;
    else{
        Link *Nodeptr,*D;
        Nodeptr=Head;
        while(Nodeptr->Next->Next!=NULL)
            Nodeptr=Nodeptr->Next;
        D=Nodeptr->Next->Next;
        delete D;
        Nodeptr->Next=NULL;
    }
}

void Link::Delete2(){
    if(!Head)
        cout<<"Link List is Empty"<<endl;
    else{
        Link *D;
        D=Head;
        Head=Head->Next;
        delete D;
    }
}

void Link::Delete3(){
    if(!Head)
        cout<<"Link List is Empty"<<endl;
    else{
            Link *Nodeptr,*D;
        Nodeptr=Head;
        int key;
        cout<<"Enter Number:- ";
        cin>>key;
        while(Nodeptr->Next->Value!=key)
            Nodeptr=Nodeptr->Next;
        D=Nodeptr;
        Nodeptr->Next=Nodeptr->Next->Next;
        delete D;
    }
}

void Link::Print(){

        if(!Head)
        cout<<"Empty"<<endl;
    else{
        Link *V;
        V=Head;
        while(V!=NULL){
            cout<<V->Value<<endl;
            V=V->Next;
        }
    }

}
int menu(){
    int i;
     cout<<"1:Insertion at Last"<<endl;
     cout<<"2:Insertion at Beginning"<<endl;
     cout<<"3:Insertion at Arbitrary Position"<<endl;
     cout<<"4:Delete Last Element"<<endl;
     cout<<"5:Delete First Element"<<endl;
     cout<<"6:Delete Arbitrary Position"<<endl;
     cout<<"7:View List"<<endl;
     cout<<"8:Frequency check"<<endl;
     cout<<"9:Sorting of Data"<<endl;
     cout<<"0:Exit :- ";
     cin>>i;
     return (i);
}

int main()
{
    Link O;
    while(1){
     switch(menu()){
     case 1:
        O.Insertion1();
        break;
     case 2:
        O.Insertion2();
        break;
     case 3:
        O.Insertion3();
        break;
     case 4:
        O.Delete1();
        break;
     case 5:
        O.Delete2();
        break;
     case 6:
        O.Delete3();
        break;
     case 7:
        O.Print();
        break;
     case 8:
        O.Frequency();
        break;
     case 9:
        O.Sort();
        break;
     case 0:
        exit(0);
     default:
        cout<<"invalid"<<endl;
     }
    }
}

