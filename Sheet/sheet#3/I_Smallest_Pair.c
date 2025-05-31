
#include <stdio.h>
#include<limits.h>

int main() { 
   
        int t;
        scanf("%d",&t);


        while (t--)
        {

            int n;
            scanf("%d",&n);

              int ar[n];
            for(int i=0; i<n; i++){
                scanf("%d",&ar[i]);
            }



            int min = INT_MAX;

                for(int i=0; i<n-1; i++){
                       for(int j=i+1; j<n; j++){
                         int tempe = ar[i] + ar[j] +(j -i);
                         if(tempe<min){
                            min = tempe;
                         }
                       }
                        
                    }

                    
        printf("%d\n",min);     // 🔥 Newline added for clean output

        }

        

          

                    
   
    return 0;
}

/*

I. Smallest Pair
time limit per test1 second
memory limit per test256 megabytes
Given a number N and an array A of N numbers. Print the smallest possible result of Ai + Aj + j - i , where 1  ≤  i < j  ≤  N.

Input
The first line contains a number T (1 ≤ T ≤ 100) number of test cases.

Each test case contains two lines:

The first line consists a number N (2 ≤ N ≤ 100) number of elements.
The second line contains N numbers ( - 106 ≤ Ai ≤ 106).
Output
For each test case print a single line contains the smallest possible sum for the corresponding test case.

Example
InputCopy
1
4
20 1 9 4
OutputCopy
7
Note
First Case :

All possibles (i,j) where (1  ≤  i < j  ≤  N) are :

i = 1 , j = 2 then result = a1 + a2 + j - i = 20 + 1 + 2-1 = 22.

i = 1 , j = 3 then result = a1 + a3 + j - i = 20 + 9 + 3-1 = 31.

i = 1 , j = 4 then result = a1 + a4 + j - i = 20 + 4 + 4-1 = 27.

i = 2 , j = 3 then result = a2 + a3 + j - i = 1 + 9 + 3-2 = 11.

i = 2 , j = 4 then result = a2 + a4 + j - i = 1 + 4 + 4-2 = 7.

i = 3 , j = 4 then result = a3 + a4 + j - i = 9 + 4 + 4-3 = 14.

So the smallest possible result is 7.





*/