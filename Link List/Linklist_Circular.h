#include<iostream>
using namespace std;

class Circular{
    int Value;
    Circular *Next;
public:
    void Insert();
    void Delete();
    void Print();
};
Circular *Head=NULL;
