#include<iostream>
#include<stdlib.h>
#include<sys/time.h>
using namespace std;

void Quick_Sort(int A[],int N,int Key,int I){
    int Left=0,Right=N,i=I;
    while(1){
    for(Right=N; Right>0; Right--)
    if(Key >= A[Right]){
        A[i]=A[Right];
        A[Right]=Key;
        i=Right;
        break;
    }
    for(Left=1; Left<=N; Left++)
    if(Key <= A[Left]){
        A[i]=A[Left];
        A[Left]=Key;
        i=Left;
        break;
    }
    if(Left==Right)
        return;
    }
}

void Quick(int A[],int N){
    for(int i=1; i<=N; i++){
        Quick_Sort(A,N,A[i],i);
    }
}

int main(){
    int N=100000,A[100000];
    for(int i=1; i<=N; i++){
        A[i]=N-i;
        }
    struct timeval t1,t2;
    gettimeofday(&t1,NULL);
    Quick(A,N);
    gettimeofday(&t2,NULL);
        cout<<(t2.tv_sec*1000000+t2.tv_usec)-(t1.tv_sec*1000000+t1.tv_usec);
}
