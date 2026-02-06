#include <stdio.h>
#include <stdlib.h>
int gas(int *gas,int *cost,int n){

  return 1;
}
int main(){
  int n;
  scanf("%d",&n);
  int *gas = (int *)malloc(n*sizeof(int));
  int *cost = (int *)malloc(n*sizeof(int));
  for (int i=0;i<n;i++) {
    scanf("%d",&gas[i]);
  }
  for (int i=0;i<n;i++) {
    scanf("%d",&gas[i]);
  }
  return 0;
}
