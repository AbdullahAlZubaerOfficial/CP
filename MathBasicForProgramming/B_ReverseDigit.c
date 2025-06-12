


// Code 1: 
#include <stdio.h>

int main() { 
   
    int n;
    scanf("%d",&n);

    int revNum = 0;

    while (n>0)
    {
        int lastDigit = n%10;
        n = n/10;
        revNum = (revNum*10) + lastDigit;
    }

    printf("%d",revNum);
    
   
    return 0;
}

/*
Input: 
0987

Output: 
789

⏱️ Time Complexity:
The while (n > 0) loop:

Extracts one digit per iteration using n % 10.

Divides n by 10 in each step (n = n / 10).

If the number n has d digits, the loop runs d times.

👉 So, Time Complexity = O(d)
Where d is the number of digits in n.

Since d = log₁₀(n), this can also be expressed as:

O(log n) (base 10)

🧠 Space Complexity:
Uses only a few int variables.

No dynamic memory or large data structures.

👉 So, Space Complexity = O(1) (constant)

*/




/*

// Code 2:
#include <stdio.h>

int main() { 
   
    char s[101];
    scanf("%s",s);

    int length = strlen(s);

    for(int i=0; i<length; i++){
        printf("%c",s[length-1-i]);
    }
   
    return 0;
}


Input: 
9877

Output: 
7789


Code Explain: TC and SC: 
Time Complexity:
strlen(s) → O(n)
It iterates over the string to count its length.

for (i = 0; i < length; i++) → O(n)
It prints each character once in reverse.

Total time complexity:
👉 O(n) + O(n) = O(n), where n is the length of the input string.

🧠 Space Complexity:
The array s[101] is fixed-size → O(1)

A few integer variables used → O(1)

Total space complexity:
👉 O(1) (constant space, not dependent on input size)

*/
