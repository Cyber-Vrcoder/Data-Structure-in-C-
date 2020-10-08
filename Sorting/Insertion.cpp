#include<iostream>
using namespace std;

int main(){
    int K;
    cout<<"Enter Number:- ";
    cin>>K;
    int *A=new int[K];
    cout<<"Enter "<<K<<" Number:-"<<endl;
    for(int i=0;i<K;i++){
        cin>>A[i];
        int k,T,j=0; T=A[i]; k=i;
        while(j<i){
           if(A[j]>A[i]){
                while(k>=j){
                    A[k]=A[k-1];
                    k--;
                }
             A[j]=T;
             break;
           }
        j++;
        }
    }
    for(int i=0;i<K;i++)
        cout<<A[i]<<" ";
    cout<<endl;
}
