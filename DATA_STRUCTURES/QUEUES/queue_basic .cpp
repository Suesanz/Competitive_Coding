// c program for array implemntation of queue 
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
// a structure to represent a queue 
struct Queue
{
int front ,rear,size;
unsigned capacity;
int* array;
};
//function to create a queue of given capacity 
// it initializes size of queue as 0 
struct Queue* createQueue(unsigned capacity)
{
struct Queue* queue=(struct Queue*)malloc(sizeof(struct Queue));
queue->capacity=capacity;
queue->front =queue->size=0;
queue->rear= capacity-1;
queue->array=(int*)malloc(queue->capacity*sizeof(int));
return queue;
}

//Queue is full when size become