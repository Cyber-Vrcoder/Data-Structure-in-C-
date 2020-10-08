#include<iostream>
using namespace std;

int MIN(int A[],int K,int N){
    int LOC,MIN;
    MIN=A[K];
    LOC=K;
    for(int j=K;j<N;j++){
        if(MIN>A[j]){
            MIN=A[j];
            LOC=j;
        }
    }
    return LOC;
}

int main(){
    cout<<"Enter Number:- ";
    int N; cin>>N;
    int A[N];
    cout<<"Enter "<<N<<" Numbers:-"<<endl;
    for(int i=0;i<N;i++)
        cin>>A[i];

    for(int k=0;k<N-1;k++){
        int LOC=MIN(A,k,N);
        int Temp=A[k];
        A[k]=A[LOC];
        A[LOC]=Temp;
    }
    for(int i=0;i<N;i++)
        cout<<A[i]<<" ";
}
