#include<iostream>
using namespace std;

class Circular_Queue{
      int Front,Rear,Capacity;
      int *Array;
public:
      Circular_Queue* Create();
      void Insert(Circular_Queue* CQ);
      void Delete(Circular_Queue* CQ);
      void Print(Circular_Queue* CQ);
};
