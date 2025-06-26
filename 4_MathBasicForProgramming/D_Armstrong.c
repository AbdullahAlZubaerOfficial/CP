#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);

    int duplicate = n;
    int numDigits = 0;
    int temp = n;

    // সংখ্যাটির digit সংখ্যা নির্ণয়
    while (temp > 0) {
        temp /= 10;
        numDigits++;
    }

    int sum = 0;
    temp = n;

    // প্রতিটি digit-এর numDigits ঘাত নিয়ে যোগফল করা
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, numDigits);
        temp /= 10;
    }

    if (sum == duplicate) {
        printf("yes Armstrong");
    } else {
        printf("not Armstrong");
    }

    return 0;
}


/*

Input: 371
Output: yes Armstrong 

Input: 478
Output: not Armstrong

Explaination : 371 = 3^3 + 7^3 + 1^3  = 371



*/