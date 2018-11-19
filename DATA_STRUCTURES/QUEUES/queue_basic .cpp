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
