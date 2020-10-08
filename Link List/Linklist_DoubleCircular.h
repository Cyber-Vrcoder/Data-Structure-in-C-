#include<iostream>
using namespace std;

class DoubleCircular{
    int Value;
    DoubleCircular *Next;
    DoubleCircular *Previous;
public:
    void Insert();
    void Delete();
    void Print();
    void Reverse();
};
DoubleCircular *Head=NULL;
