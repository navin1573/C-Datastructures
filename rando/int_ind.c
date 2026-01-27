#include <stdio.h>

int main(){
  char cur[100];
  fgets(cur,100,stdin);
  printf("%s\n",cur);
  return 0;
}

