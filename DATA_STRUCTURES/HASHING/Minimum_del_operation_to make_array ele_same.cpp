#include <iostream>
#include<unordered_map>
#include<bits/stdc++.h>
using namespace std;

//function which calculate the minimum number of operation to make
// all element same in the array

int min_Delete (int arr[],int n ){

  // create a hash map and store the frequencies of
  // all array elements in it using elemen as key
  // and freq as value

  unordered_map<int,int> freq;
  for (int i=0;i<n;i++){
    freq[arr[i]]++;
  }
// INT_MIN is that lowest integer beyond which we can't enter any value in our max_freq
int max_freq=INT_MIN;
  //find max frequency among all the frequencies
for (auto itr=freq.begin();itr !=freq .end();itr ++){
  max_freq=max(max_freq,itr->second );

}

//to find the min del operation we remove all elements from array accept the max_freq number

return n-max_freq;
}

// main program to implement above code
int main (){
  int arr[]={4,4,2,30,4,1,3,3,4,4};
  int n =sizeof(arr)/sizeof(arr[0]);
  cout<<min_Delete(arr,n);
  return 0;
}
