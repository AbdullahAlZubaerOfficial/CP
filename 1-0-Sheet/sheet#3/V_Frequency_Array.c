
#include <stdio.h>

int main() { 
   
        int n,number;
        scanf("%d %d",&n,&number);

            int ar[n];
            for(int i=1; i<=n; i++){
                scanf("%d",&ar[i]);
            }

           
            int freq[number];

             for(int i=1; i<=number; i++){
                freq[i] = 0; 
             }

                for(int i=1; i<=n; i++){
                        freq[ar[i]]++;
                    }

                    for(int i=1; i<=number; i++){
                        printf("%d\n",freq[i]);
                    }


   
    return 0;
}


/*

V. Frequency Array
time limit per test1 second
memory limit per test256 megabytes
Given 2 numbers N
, M
 and an array A
 of N
 numbers. For every number from 1 to M
, print how many times this number appears in this array.

Input
First line contains two numbers N
, M
 (1≤N≤105,1≤M≤105)
.

Second line contains N
 numbers (1≤Ai≤M)
.

Output
Print M
 lines, the ith
 line should contain number of times that the number i
 appears in A

Example
InputCopy
10 5
1 2 3 4 5 3 2 1 5 3
OutputCopy
2
2
3
1
2
Note
Numbers from 1 to 5 appearance are :

1 appears 2 times in the array .
2 appears 2 times in the array.
3 appears 3 times in the array.
4 appears once in the array.
5 appears 2 times in the array.



*/