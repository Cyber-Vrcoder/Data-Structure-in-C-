#include<iostream>
using namespace std;

class Expresion{
    int Top,Capacity;
    char *String;
public:
    Expresion* Create();
    void Push(Expresion* S,char s);
    char Pop(Expresion* S);
    void View(Expresion* S);
    int Isempty(Expresion* S);
};

int Expresion::Isempty(Expresion* S){
    if(S->Top==-1)
        return 0;
    else
        return 1;
}

Expresion* Expresion::Create(){
    Expresion *S;
    S=new Expresion;
    cout<<"Capacity:- ";
    cin>>S->Capacity;
    S->String=new char[S->Capacity];
    S->Top=-1;
    return (S);
}

void Expresion::Push(Expresion* S,char s){
    S->Top++;
    if(S->Top >= S->Capacity-1){
        cout<<"Stack is Full"<<endl;
        return;
    }
    else{
          S->String[S->Top]=s;
    }
}

char Expresion::Pop(Expresion* S){
    char s=S->String[S->Top];
    S->Top--;
    return (s);
}

void Expresion::View(Expresion* S){
    int N=0;
    while(N<=S->Top){
        cout<<S->String[N]<<" ";
        N++;
    }
    cout<<endl;
}

int menu(){
    cout<<"1:Enter"<<endl<<"2:Print"<<endl<<"3:Exit:- ";
    int i; cin>>i;
    return (i);
}

int main(){
    Expresion *E,*O,*In,Obj1,Obj2,Obj3;
    In=Obj3.Create();
    E=Obj1.Create();
    O=Obj2.Create();
    while(1){
        switch(menu()){
        case 1:
            char s;
            cout<<"Enter Data:- ";
            cin>>s;
            if(s>=65 && s<=90){
                Obj3.Push(In,s);
                Obj1.Push(E,s);
            }
            else if(s==43 || s==45){
                if(!Obj2.Isempty(O))
                    Obj2.Push(O,s);
                else{
                    char T;
                    T=Obj2.Pop(O);
                    while(T!=40 && Obj2.Isempty(O)){
                      Obj1.Push(E,T);
                      T=Obj2.Pop(O);
                    }
                    if(T==40)
                        Obj1.Push(O,T);
                    if(!Obj2.Isempty(O))
                        Obj1.Push(E,T);
                    Obj2.Push(O,s);
                }
                Obj3.Push(In,s);
            }
            else if(s==42 || s==47){
                    Obj3.Push(In,s);
                if(!Obj2.Isempty(O))
                    Obj2.Push(O,s);
                else{
                    char Te=Obj2.Pop(O);
                      if(Te==42 || Te==47){
                        Obj1.Push(E,Te);
                        Obj2.Push(O,s);
                      }
                      else{
                        Obj2.Push(O,Te);
                        Obj2.Push(O,s);
                      }
                }
            }
            else{
                Obj3.Push(In,s);
                if(s==40)
                    Obj2.Push(O,s);
                else{
                    char Temp;
                    Temp=Obj2.Pop(O);
                    while(Temp!=40){
                         Obj1.Push(E,Temp);
                         Temp=Obj2.Pop(O);
                    }
                }
            }
            break;
        case 2:
            char t;
            while(Obj2.Isempty(O)){
                t=Obj2.Pop(O);
                Obj1.Push(E,t);
            }
            cout<<"Infix:- ";
            Obj3.View(In);
            cout<<"Postfix:- ";
            Obj1.View(E);
            break;
        case 3:
            return 0;
        default:
            cout<<"Invalid"<<endl;
        }
    }
}
