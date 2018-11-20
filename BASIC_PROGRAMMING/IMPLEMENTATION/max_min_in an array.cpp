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