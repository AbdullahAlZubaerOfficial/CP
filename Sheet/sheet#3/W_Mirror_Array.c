
#include <stdio.h>

int main() { 
   
        int n,m;
        scanf("%d %d",&n,&m);

            int ar[n][m];

            for(int i=0; i<n; i++){
                for(int j=0; j<m; j++){
                    scanf("%d",&ar[i][j]);
                }
            }


                for(int i=0; i<n; i++){
                       for(int j=m-1; j>=0; j--){
                        printf("%d ",ar[i][j]);
                       }
                       printf("\n");
                    }


   
    return 0;
}

/*

W. Mirror Array
time limit per test1 second
memory limit per test256 megabytes
Given two numbers N
, M
 and a 2D array of size N
 * M
. Print the inverted array that appeared in the mirror.

Input
First line contains two numbers N
, M
 (1≤N,M≤100)
 N
 donates number of rows and M
 donates number of columns.

Each of the next N
 lines will contain M
 numbers (1≤Ai,j≤109)
.

Output
Print the inverted array.

Example
InputCopy
3 3
2 3 5
7 9 20
35 1 12
OutputCopy
5 3 2 
20 9 7 
12 1 35 

*/