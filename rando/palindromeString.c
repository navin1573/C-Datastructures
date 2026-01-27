#include <stdio.h>
#include <string.h>
int main(){
char name[100];
char clean[100];
fgets(name, 100, stdin);
int i=0,j=0;
while(name[i]!='\0'){
  if(name[i]!=' ' && name[i]!='\n'){
    clean[j++]=name[i];
  }
  i++;
}
clean[j]='\0';
int n = strlen(clean);
 for(int i=0,j=n-1;i<j;i++,j--){
   if(clean[i]^clean[j]){
     printf("not a palindrome\n");
     return 0;
   }
 }
 printf("%s is a palindrome",clean);
 return 0;
}
