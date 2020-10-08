#include<iostream>
using namespace std;

class Queue{
    int Front,Rear,Capacity;
    int *Array;
public:
    Queue* Create();
    void Insert(Queue *Q);
    void Delete(Queue *Q);
    void Print(Queue *Q);
};
