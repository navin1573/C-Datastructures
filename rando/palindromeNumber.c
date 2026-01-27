#include <stdio.h>

int main(){
  long long n,rev=0,rem,og;
  scanf("%lld",&n);
  og=n;
  while(n!=0){
    rem = n%10;
    rev = rev*10+rem;
    n/=10;
  }
  if(rev==og){
    printf("palindrome");
  }
  else{
    printf("not a palindrome");
  }
}
