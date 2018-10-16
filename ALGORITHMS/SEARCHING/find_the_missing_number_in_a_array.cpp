#include<iostream>
using namespace std;

int finding_ele(int arr[], int N){
int l=0, r=N-1;
  while (l<=r){

    int mid=(l+r)/2;
// it will have the position for the missing element
    if (arr[mid]!=mid+1 && arr[mid-1]==mid){
    cout<< "Missing number is : ";
    return mid+1;}

    if (arr[mid]!=mid+1)
    r=mid-1;

    else
    l=mid+1;

  }
  //if no element is missing return -1
  return -1;
}

int main(){
  int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,14};
  int N=sizeof(arr)/sizeof(arr[0]);
  cout<<finding_ele(arr,N);
  return 0;
}
