#include<iostream>
using namespace std;

class Expresion{
    int Top,Capacity;
    char *String;
public:
    int ReturnTop(Expresion* S);
    Expresion* Create(int Cap);
    void Push(Expresion* S,char s);
    char Pop(Expresion* S);
    void View(Expresion* S);
    int Isempty(Expresion* S);
};

int Expresion::ReturnTop(Expresion* S){
    return (S->Top);
}

int Expresion::Isempty(Expresion* S){
    if(S->Top==-1)
        return 0;
    else
        return 1;
}

Expresion* Expresion::Create(int Cap){
    Expresion *S;
    S=new Expresion;
    S->Capacity=Cap;
    S->String=new char[S->Capacity];
    S->Top=-1;
    return (S);
}

void Expresion::Push(Expresion* S,char s){
    S->Top++;
    if(S->Top >= S->Capacity){
        cout<<"Stack is Full"<<endl;
        S->Top--;
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


int main(){
    Expresion *T,*E,*O,*In,*R,Obj;
    char S,s; int i,N;
    cout<<"Enter Capacity:- ";
    cin>>N;
    T=Obj.Create(N); E=Obj.Create(N); O=Obj.Create(N); In=Obj.Create(N);
    R=Obj.Create(N);
    cout<<"Enter 'Z' when finished"<<endl;
    cout<<"Enter Infix Expression:- ";
    for(i=0; i<N; i++){
        cin>>S;
        if(S==90){
                i--;
            break;
        }
        else if(S==40){
            S=41;
            Obj.Push(T,S);
        }
        else if(S==41){
            S=40;
            Obj.Push(T,S);
        }
        else
            Obj.Push(T,S);
    }
    for(int j=0; j<=i; j++){
        s=Obj.Pop(T);
            if(s>=65 && s<=90){
                Obj.Push(In,s);
                Obj.Push(E,s);
            }
            else if(s==43 || s==45){
                if(!Obj.Isempty(O))
                    Obj.Push(O,s);
                else{
                    char T;
                    T=Obj.Pop(O);
                    while(T!=40 && Obj.Isempty(O)){
                      Obj.Push(E,T);
                      T=Obj.Pop(O);
                    }
                    if(T==40)
                        Obj.Push(O,T);
                    if(!Obj.Isempty(O))
                        Obj.Push(E,T);
                    Obj.Push(O,s);
                }
                Obj.Push(In,s);
            }
            else if(s==42 || s==47){
                    Obj.Push(In,s);
                if(!Obj.Isempty(O))
                    Obj.Push(O,s);
                else{
                    char Te=Obj.Pop(O);
                      if(Te==42 || Te==47){
                        Obj.Push(E,Te);
                        Obj.Push(O,s);
                      }
                      else{
                        Obj.Push(O,Te);
                        Obj.Push(O,s);
                      }
                }
            }
            else{
                Obj.Push(In,s);
                if(s==40)
                    Obj.Push(O,s);
                else{
                    char Temp;
                    Temp=Obj.Pop(O);
                    while(Temp!=40){
                         Obj.Push(E,Temp);
                         Temp=Obj.Pop(O);
                    }
                }
            }
    }
     char t;
            while(Obj.Isempty(O)){
                t=Obj.Pop(O);
                Obj.Push(E,t);
            }
            cout<<"Infix:- ";
            Obj.View(In);
            cout<<endl;
            Obj.View(E);
            cout<<endl;
            for(int j=0; j<=i; j++){
                s=Obj.Pop(E);
                Obj.Push(R,s);
            }
            cout<<"Prefix:- ";
            Obj.View(R);
}
