#include <stdio.h>

int main() {
    int i = 1; // প্রথমে i-এর মান ১

    // while লুপ: যতক্ষণ i <= 5 সত্য, ততক্ষণ চলবে
    while (i <= 5) {
        printf("%d ", i); // i-এর মান প্রিন্ট করলাম
        i++;              // i-এর মান ১ বাড়ালাম
    }

    return 0; // প্রোগ্রাম সফলভাবে শেষ
}

/*
Expected Output:
    1 2 3 4 5 
*/
