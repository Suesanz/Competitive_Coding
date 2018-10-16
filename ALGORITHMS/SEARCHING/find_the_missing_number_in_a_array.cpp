#include<iostream>
using namespace std;

int finding_ele(int arr[], int N){
int l=0, r=N-1;
  while (l<=r){

    int mid=(l+r)/2;

    if (arr[mid]!=mid+1 && arr[mid-1]==mid)
    return mid+1;

    if (arr[mid]!=mid+1)
    r=mid-1;

    else
    l=mid+1;

  }
  //if no element is missing return -1
  return -1
}
