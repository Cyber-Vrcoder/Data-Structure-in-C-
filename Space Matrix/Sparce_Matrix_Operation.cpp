#include<iostream>
using namespace std;

int main()
{
  cout<<"Number of non-zero elements of 1st Sparse Matrix in Matrix:- ";
  int n;
  cin>>n;
  int A[n][3];
  cout<<"Format : Raw Column Value"<<endl;
  for(int i=0;i<n;i++)
    for(int j=0;j<3;j++)
     cin>>A[i][j];

  cout<<"Number of non-zero elements of 2nd Sparse Matrix in Matrix:- ";
  int m;
  cin>>m;
  int B[m][3];
  cout<<"Format : Raw Column Value"<<endl;
  for(int i=0;i<m;i++)
    for(int j=0;j<3;j++)
     cin>>B[i][j];

   cout<<"Addition of Matrix:- "<<endl;
   if(m<=n){
    for(int i=0;i<n;i++){
      if(A[i][0]==B[i][0] && A[i][1]==B[i][1])
        cout<<A[i][2]+B[i][2]<<endl;
      else if((A[i][0]!=B[i][0] || A[i][1]!=B[i][1]) && i<m){
        cout<<A[i][2]<<endl;
        cout<<B[i][2]<<endl;
      }
      else((A[i][0]!=B[i][0] || A[i][1]!=B[i][1]) && i>=m);
       {cout<<A[i][2]<<endl;}
    }
   }
   else{
    for(int i=0;i<m;i++){
      if(A[i][0]==B[i][0] && A[i][1]==B[i][1])
        cout<<A[i][2]+B[i][2]<<endl;
      else if((A[i][0]!=B[i][0] || A[i][1]!=B[i][1]) && i<n){
        cout<<A[i][2]<<endl;
        cout<<B[i][2]<<endl;
      }
      else((A[i][0]!=B[i][0] || A[i][1]!=B[i][1]) && i>=n);
       {cout<<B[i][2]<<endl;}
    }
   }

   cout<<"Subtraction of Matrix:- "<<endl;
   if(m<=n){
    for(int i=0;i<n;i++){
      if(A[i][0]==B[i][0] && A[i][1]==B[i][1])
        cout<<A[i][2]-B[i][2]<<endl;
      else if((A[i][0]!=B[i][0] || A[i][1]!=B[i][1]) && i<m){
        cout<<A[i][2]<<endl;
        cout<<B[i][2]<<endl;
      }
      else((A[i][0]!=B[i][0] || A[i][1]!=B[i][1]) && i>=m);
       {cout<<A[i][2]<<endl;}
    }
   }
   else{
    for(int i=0;i<m;i++){
      if(A[i][0]==B[i][0] && A[i][1]==B[i][1])
        cout<<A[i][2]-B[i][2]<<endl;
      else if((A[i][0]!=B[i][0] || A[i][1]!=B[i][1]) && i<n){
        cout<<A[i][2]<<endl;
        cout<<B[i][2]<<endl;
      }
      else((A[i][0]!=B[i][0] || A[i][1]!=B[i][1]) && i>=n);
       {cout<<B[i][2]<<endl;}
    }
   }
}
