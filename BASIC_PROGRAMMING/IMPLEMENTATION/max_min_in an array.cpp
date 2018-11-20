#include<stdio.h>
struct pair{
int min;
int max;
};
struct pair getMinMax(int arr[],int n){
struct pair minmax;
int i;
// if there is only one element then return it as min max both
if (n==1)
{
minmax.max=arr[0];
minmax.min=arr[0];
return minmax;
}
// if there are more ele in an array , then initialize min and max
if (arr[0]>arr[1])
{minmax.max=arr[0];
minmax.min=arr[1];
}
else{minmax.max=arr[1];
minmax.min=arr[0];
}
for (i=2;i<n;i++){
if (arr[i]>minmax.max)
minmax.max=arr[i];
else if (arr[i]<minmax.min)
