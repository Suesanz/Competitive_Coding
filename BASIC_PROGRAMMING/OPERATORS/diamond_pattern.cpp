#include<iostream>
using namespace std;

int main(){
int N;
int space=N-1;
// no. of rows user want to see of the diamond pattern
for (int i=1;i<=N;i++){
for (int j=1;j<=space;j++){
  cout<<" ";
}

space--;

for (int j=1;j=2*i-1;j++){
  cout<< "*";
  cout<<" ";
}
  
}
return 0;
}
