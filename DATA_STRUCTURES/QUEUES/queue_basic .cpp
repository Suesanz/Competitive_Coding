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

//Queue is full when size become equal to the capacity 
int isFull(struct Queue* queue)
{return (queue->size==queue->capacity);}

// Queue is empty when size is 0
int isEmpty(struct Queue* queue )
{ return (queue->size==0);}

// function to add an item to the queue 
// it changes rear and size
void enqueue(struct Queue* queue,int item )
{
if (isFull(queue))
return ;
queue->rear =(queue->rear+1)%queue->capacity;
queue->array[queue->rear]=item;
queue->size=queue->size+1;
cout<<"enqued to the queue"<< item ;
}
//function to remove the item from queue
int dequeue(struct Queue* queue)
{
    if (isEmpty(queue)) 
        return INT_MIN; 
    int item = queue->array[queue->front]; 
    queue->front = (queue->front + 1)%queue->capacity; 
    queue->size = queue->size - 1; 
    return item; 
} 
  
// Function to get front of queue 
int front(struct Queue* queue) 
{ 
    if (isEmpty(queue)) 
        return INT_MIN; 
    return queue->array[queue->front]; 
} 
  
// Function to get rear of queue 
int rear(struct Queue* queue) 
{ 
    if (isEmpty(queue)) 
        return INT_MIN; 
    return queue->array[queue->rear]; 
} 
  
// Driver program to test above functions./
int main(){
struct Queue* queue=createQueue(1000);

enqueu(queue,10);
enqueue(queue,20);
enqueue(queue,30);
enqueue(queue,40);
cout<<"dequeued from queue\n"<<dequeue(queue);
cout<<"first item is \n"<<front(queue);
cout<<"rear item is \n"<<rear(queue);
return 0;
}