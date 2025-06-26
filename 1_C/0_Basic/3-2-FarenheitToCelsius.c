#include <stdio.h>

int main() {
    float fahrenheit, celsius; // দুটি ভ্যারিয়েবল: ফারেনহাইট ইনপুট ও সেলসিয়াস ফলাফল

    printf("Enter temperature in Fahrenheit: "); // ইউজারকে ইনপুট দিতে বলছি
    scanf("%f", &fahrenheit);                   // ফারেনহাইট ইনপুট নিচ্ছি

    celsius = (fahrenheit - 32) * 5 / 9;        // রূপান্তর সূত্র: C = (F - 32) × 5/9

    printf("Celsius = %.2f C\n", celsius); // ফলাফল প্রিন্ট করছি

    return 0; // প্রোগ্রাম শেষ
}

/*

Enter temperature in Fahrenheit: 77

Celsius = 25.00 C

*/