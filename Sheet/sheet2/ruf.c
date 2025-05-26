// Online C compiler to run C program online
#include <stdio.h>

int main() {
  
  int n;
  scanf("%d",&n);
  
  if(n%2==0 || n%3==0 || n%4==0 || n%5==0 || n%6==0 || n%7==0){
      printf("yes");
  }
  else{
      printf("no");
  }

    return 0;
}