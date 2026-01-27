// #include <stdio.h>
//
// int main(){
//   int arr[] = {1,2,3,4,5};
//   int *ptr = (arr+3);
//   printf("%d\n",*(ptr+1));
// }

#include <stdio.h>
#include <stdlib.h>
int main(){
   int n =5;
  char *pvowels = (char *)malloc(n*sizeof(char));
  if(pvowels=NULL){
    printf("malloc falied\n");
    return 1;
  }
  for(int i=0;i<n;i++){
    char c;
    scanf(" %c",&c);
    pvowels[i] = c;
  }
  for (int i=0;i<n;i++) {
    printf("%c ",*(pvowels+i));
  }
  return 0;
}
