#include<iostream>
using namespace std;

void countsort(int A[],int N, int Max){
    int C[Max],B[N];
    for(int i=1; i<=Max; i++)
        C[i]=0;
    for(int i=1; i<=N; i++)
        C[A[i]]++;
    for(int i=2; i<=Max; i++){

          C[i]=C[i]+C[i-1];
    }
    for(int i=N; i>0; i--){
        B[C[A[i]]]=A[i];
        C[A[i]]--;
    }
     for(int i=1; i<=N; i++)
        cout<<B[i]<<" ";
}

int main(){
    int N;
    cout<<"Size:- ";
    cin>>N;
    int A[N];
    for(int i=1; i<=N; i++)
        cin>>A[i];
    int Max=A[1];
    for(int i=2;i<=N;i++){
        if(Max < A[i])
            Max=A[i];
    }
    countsort(A,N,Max);

}


