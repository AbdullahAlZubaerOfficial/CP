
#include <stdio.h>

int main() { 
   int number;
   
   int row,column;

   for(int i=0; i<5; i++){
    for(int j=0; j<5; j++){
        scanf("%d",&number);
            if(number==1){
                row=i;
                column=j;
            }
        
    }
   }

   int moves = (row>2? row-2 : 2-row) + (column>2? column-2: 2-column);

   printf("%d",moves);


    return 0;
}

/*
problem link: https://codeforces.com/problemset/problem/263/A
*/