#include<iostream>
using namespace std;

int main(){
  int K,*A;
  cout<<"Enter Number:- ";
  cin>>K;
   A=new int[K];
   cout<<"Enter "<<K<<" Numbers:- "<<endl;
   for(int i=0;i<K;i++)
    cin>>A[i];
   for(int round=1;round<=K;round++)
    for(int i=0;i<K-round;i++)
     if(A[i]>A[i+1]){
        int T;
        T=A[i];
        A[i]=A[i+1];
        A[i+1]=T;
     }
   for(int i=0;i<K;i++)
    cout<<A[i]<<" ";
   cout<<endl;
}
