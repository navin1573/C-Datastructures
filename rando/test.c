#include <stdio.h>

int main(){
  int n = 3;
  printf("%d\n",n);
  n=n&~(1<<0);
  printf("%d\n",n);
}
