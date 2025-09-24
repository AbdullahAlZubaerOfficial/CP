#include <stdio.h>

int main() {
    float celsius, fahrenheit;  // দুটি ভ্যারিয়েবল: একটিতে সেলসিয়াস ইনপুট নেবো, আরেকটিতে ফলাফল রাখবো

    printf("Enter temperature in Celsius: "); // ইউজারকে ইনপুট দিতে বলছি
    scanf("%f", &celsius);                    // সেলসিয়াস ইনপুট নিচ্ছি

    fahrenheit = (celsius * 9 / 5) + 32;      // রূপান্তর সূত্র: F = C × 9/5 + 32

    printf("Farenheit = %.2f F\n", fahrenheit); // ফলাফল প্রিন্ট করছি

    return 0; // প্রোগ্রাম শেষ
}


/*

Enter temperature in Celsius: 25

Farenheit = 77.00 F


*/