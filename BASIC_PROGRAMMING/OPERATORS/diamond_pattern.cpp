#include<iostream>
using namespace std;

int main(){
int N;
cin>>N;
int space;
space= N-1;
// no. of rows user want to see of the diamond pattern
for (int i=1;i<=N;i++){
for (int j=1;j<=space;j++){
  cout<<" ";
}

space--;

for (int j=1;j<=2*i-1;j++){
  cout<< "*";

}
cout<<endl;

}

space = 1;
for (int i=N-1;i>=1;i--){
for (int j=1;j<=space;j++){
  cout<<" ";
}

space++;

for (int j=1;j<=2*i-1;j++){
  cout<< "*";

}
cout<<endl;
}

return 0;
}
