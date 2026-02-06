#include <stdio.h>
int max(int a,int b){
  return (a>b)?a:b;
}
int min(int a,int b){
  return (a<b)?a:b;
}
int main(){
  int n;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  int lmax[n];
  lmax[0]=arr[0];
  for(int i=1;i<n;i++){
    lmax[i] = max(lmax[i-1],arr[i]);
  }
  int rmax[n];
  rmax[n-1]=arr[n-1];
  for(int i=n-2;i>=0;i--){
    rmax[i]=max(rmax[i+1],arr[i]);
  }
  int res=0;
  for(int i=1;i<n-1;i++){
    res+=min(lmax[i],rmax[i])-arr[i];
  }
  for(int i=0;i<n;i++){
    printf("%d ",lmax[i]);
  }
   printf("\n");
  for(int i=0;i<n;i++){
    printf("%d ",rmax[i]);
  }
   printf("\n");
  printf("Max Water: %d",res);
  return 0;
}
