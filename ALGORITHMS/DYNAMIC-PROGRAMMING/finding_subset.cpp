#include<bits/stdc++.h>
#include<math.h>
#include<string>

using namespace std;

//utility function to split the string using a delim .
vector<string> split(const &delim, char delim)
{vector <string> elems;
stringstream ss(s);
string item;
while (getline(ss,item,delim))
   elems.push_back(item);
return elems;

}

// function to find  all the  subset of a set 
int print_powerset(int arr[],int n){
vector<string>list;
// for loop very important 
for (int i=0;i<int pow(2,n);i++){
string subset ="" ;
// consider the all element in the set 
for (int j=0;j<n;j++){
// Check if jth bit in the i is set. If the bit 
            // is set, we consider jth element from set 
if ((i & (1<<j))!=0)
subset+=to_string(arr[j]) + "|";}
  // if subset is encountered for the first time 
        // If we use set<string>, we can directly insert 
   if (find(list.begin(), list.end(), subset) == list.end()) 
            list.push_back(subset); 
    } 
  
 // consider every subset 
    for (string subset : list) 
    { 
        // split the subset and print its elements 
        vector<string> arr = split(subset, '|'); 
        for (string str: arr) 
            cout << str << " "; 
        cout << endl; 
    } 
} 

// Driver code 
int main() 
{ 
    int arr[] = { 10, 12, 12 }; 
    int n = sizeof(arr)/sizeof(arr[0]); 
  
    printPowerSet(arr, n); 
  
    return 0; 
}

