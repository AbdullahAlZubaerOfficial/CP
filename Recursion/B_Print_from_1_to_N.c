
#include <stdio.h>

void print(int n,int i){
    if(i>n){
        return;
    }
    printf("%d\n",i);
    print(n,i+1);
}

int main() { 
   int n;
   scanf("%d",&n);

   int i =1;

 
   print(n,i);
   
    return 0;
}

/*

Input:5

Output: 
1
2
3
4
5


*/