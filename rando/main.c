#include <stdio.h>
int main(){
  int n = 10;
  int *p = &n;
  int **pp = &p;
  printf("%d\n",**pp);
return 0;
}
