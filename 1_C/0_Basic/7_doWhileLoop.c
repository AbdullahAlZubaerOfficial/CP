#include <stdio.h>

#include <stdio.h>

/* do-while: কমপক্ষে একবার চলবেই */
int main() {
    int i = 1; // প্রথমে i-এর মান ১

    // do ব্লকের ভিতরে যা আছে, তা একবার হলেও চালাবে
    do {
        printf("%d ", i); // i-এর মান প্রিন্ট
        i++;              // i-এর মান ১ বাড়ালাম
    } while (i <= 5);     // এই শর্ত সত্য হলে আবার চলবে

    return 0; // প্রোগ্রাম সফলভাবে শেষ
}


/*
Expected Output:
    1 2 3 4 5 
*/
