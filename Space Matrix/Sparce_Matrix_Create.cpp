#include<iostream>
using namespace std;

int main()
{
    int r,c,R=0;
    cout<<"Enter Matrix level:-"<<endl;
    cout<<"Raw   :-"; cin>>r;
    cout<<"Column:-"; cin>>c;
    int A[r][c];
    cout<<"Enter Values:-"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>A[i][j];
            if(A[i][j]!=0)
              R++;
        }
    }
    int B[R][3];
     R=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(A[i][j]!=0){
                B[R][0]=i;
                B[R][1]=j;
                B[R][2]=A[i][j];
                R++;
            }
        }
    }
    cout<<endl<<"Sparse Matrix"<<endl;
    for(int i=0;i<R;i++){
        for(int j=0;j<3;j++){
            cout<<B[i][j]<<" ";
        }cout<<endl;
    }
}
