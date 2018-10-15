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

  // Multiply the polynomial term by term
  // Take ever term of first polynomial
  for (int i=0;i<m;i++){

  for (int j=0 ;j<n;j++)
    prod[i+j] += A[i]*B[j];

  }
  return prod;
}

// function to print the polynomial
void print_poly(int poly[],int n){
  for (int i=0;i<n;i++){
    cout<< poly[i];
    if (i!=0)
    cout<<"x^"<<i;
    if(i!=n-1)
    cout<<" + ";
  }
}

// Driver program to check the above function
int main(){
    // The following array represents polynomial 5 + 10x^2 + 6x^3
    int A[]={5,0,10,6};
    // The following array represents polynomial 1 + 2x + 4x^2
    int B[]={1,2,4};
    int m=sizeof(A)/sizeof(A[0]);
    int n=sizeof(B)/sizeof(B[0]);
    
  return 0;
}
