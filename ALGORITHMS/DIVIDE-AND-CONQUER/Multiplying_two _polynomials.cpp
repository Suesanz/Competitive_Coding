#include<iostream>
#include<stdlib.h>
using namespace std;

// A[] represent the coefficient of first polynomial
// B[] represent the coefficient of second polynomial
// m and n are sizes of the two polynomial
int *multiply(int A[],int B[],int m,int n){
  int *prod = new int [m+n-1];

  // Initialze the product polynomial
  for (int i=0;i<m+n-1;i++)
    prod[i]=0;
}
