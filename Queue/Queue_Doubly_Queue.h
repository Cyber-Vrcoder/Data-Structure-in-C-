#include<iostream>
using namespace std;

class Priority{
    int Front,Rear,Capacity;
    int *Array;
public:
    Priority* Create();
    void Insert(Priority* P);
    void Insert1(Priority* P);
    void Delete(Priority* P);
    void Delete1(Priority* P);
    void Print(Priority* P);
};
