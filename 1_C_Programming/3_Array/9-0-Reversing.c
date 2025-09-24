#include <stdio.h>

int main()
{
    long long n;
    scanf("%lld", &n); // ইউজার থেকে ইনপুট নিচ্ছি

    long long ar[n]; // long long টাইপের অ্যারে নিচ্ছি

    // n সংখ্যার ইনপুট নিচ্ছি
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &ar[i]);
    }

    // রিভার্স লুপ চালিয়ে প্রিন্ট করছি
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%lld ", ar[i]);
    }

    return 0;
}

/*

📥 Input:
5
10 20 30 40 50

📤 Output:
50 40 30 20 10

🧠 Explanation:
তুমি রিভার্স লুপ দিয়ে শেষ ইনডেক্স থেকে শুরু করে প্রথম ইনডেক্স পর্যন্ত গিয়েছো,
তাই আউটপুট আসছে উল্টা অর্ডারে 😍

*/
