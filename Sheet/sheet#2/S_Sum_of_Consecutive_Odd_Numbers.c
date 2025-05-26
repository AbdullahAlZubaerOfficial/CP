
#include <stdio.h>

int main() { 
   
    int t;
    scanf("%d",&t);

    while (t--)
    {
        int n,m;
        scanf("%d %d",&n,&m);

        

        int start = (n<m) ? n:m;
        int end = (n>m) ? n:m;

       

        int sum = 0;

        for(int i=start+1 ; i<end; i++){
            if(i%2 !=0 ){
                sum = sum + i;
            }
        }

        printf("%d\n",sum);

    }
    
   
    return 0;
}

/*

S. Sum of Consecutive Odd Numbers
time limit per test1 second
memory limit per test256 megabytes
Given two numbers X and Y. Print the sum of all odd numbers between them, excluding X and Y.

Input
First line contains a number T (1 ≤ T ≤ 10) number of test cases.

Next T lines will contain two numbers X and Y (0 ≤ X, Y ≤ 104).

Output
Print the sum of all odd numbers between X and Y (excluding X and Y).

Example
InputCopy
3
5 6
10 4
4 9
OutputCopy
0
21
12



*/