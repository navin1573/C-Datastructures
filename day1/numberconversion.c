#include <stdio.h>
#include <string.h>
int base(char c){
  if(c=='B'){
    return 2;
  }
  else if(c=='D'){
    return 10;
  }
  else if(c=='H'){
    return 16;
  }
  else if(c=='O'){
    return 8;
  }
  else{
    return -1;
  }
}
int valueOf(char c){
  if(c>='0' && c<='9'){
    return c-'0';
  }
  else if(c>='a' && c<='f'){
    return c-87;
  }
  else if(c>='A' && c<='F'){
    return c-55;
  }
  else{
    return -1;
  }
}
int toDecimal(char nums[],int base){
  int d =0;
  for(int i=0;nums[i]!='\0';i++){
    d = d*base+valueOf(nums[i]);
  }
  return d;
}
char charOf(int n){
  if(n>=0 && n<=9){
    return n+48;
  }
  else if(n>=10 && n<=15){
    return n+55;
  } 
  }
 void deciToAns(char ans[],int deci,int base){
   if (deci == 0) {
    ans[0] = '0';
    ans[1] = '\0';
    return;
}
  int i=0;
 while(deci>0){
   int rem = deci%base;
   ans[i++]=charOf(rem);
   deci/=base; 
 }

}
int main(){
  char nums[1000];
  char ans[1000];
  char from;
  char to;
  scanf(" %c",&from);
  scanf(" %c",&to);
  scanf("%s",nums); 
  int fromBase = base(from);
  int toBase = base(to);
  printf("from base: %d\nTo Base: %d\n",fromBase,toBase);
  int deci = toDecimal(nums,fromBase);
  deciToAns(ans,deci,toBase);
  for(int i=0;ans[i]!='\0';i++){
    printf("%c",ans[i]);
  }
  return 0;
}

