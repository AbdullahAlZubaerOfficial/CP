
#include <stdio.h>

int main() { 
   
    float n;
    scanf("%f",&n);

    if(n>=0 && n<=25){
        printf("Interval [0,25]");
    }
    else if(n>25 && n<=50){
        printf("Interval (25,50]");
    }
    else if(n>50 && n<=75){
        printf("Interval (50,75]");
    }
    else if(n>75 && n<=100){
        printf("Interval (75,100]");
    }else{
        printf("Out of Intervals");
    }
   
    return 0;
}

/*

Input: ekta float number n

Output:

Interval [0,25] → jokhon 0 ≤ n ≤ 25

Interval (25,50] → jokhon 25 < n ≤ 50

Interval (50,75] → jokhon 50 < n ≤ 75

Interval (75,100] → jokhon 75 < n ≤ 100

Out of Intervals → otherwise




Input: 50
Output: Interval (25,50]

Input: -3
Output: Out of Intervals


Input: 75.1
Output: Interval (75,100]


*/

