#include <stdio.h>   // 🌟 Standard I/O header include

int main() { 
    int number;               // 🔢 ইনপুট ভ্যালু (০ অথবা ১)
    int row = -1, column = -1;/* 📍 ১-এর অবস্থান (initially -1, -1) */

    /* ---------- ৫×৫ ম্যাট্রিক্স স্ক্যান ---------- */
    for (int i = 0; i < 5; i++) {        // 🔁 row
        for (int j = 0; j < 5; j++) {    // 🔁 column
            scanf("%d", &number);        // 📥 প্রতিটি সেল ইনপুট
            if (number == 1) {           // ✅ ১ খুঁজে পেলেই
                row    = i;              //    ➜ row index
                column = j;              //    ➜ column index
            }
        }
    }

    /* ---------- কেন্দ্রে (2,2) পৌঁছাতে লাগবে কত move? ---------- */
    int moves = (row    > 2 ? row    - 2 : 2 - row   ) +  // |row-2|
                (column > 2 ? column - 2 : 2 - column);   // |col-2|

    printf("%d", moves);   // 📤 প্রয়োজনীয় মুভ সংখ্যা প্রিন্ট
    return 0;              // ✅ প্রোগ্রাম শেষ
}

/*
==========================
📥 Input (উদাহরণ):
0 0 0 0 0
0 0 0 0 0
0 0 1 0 0
0 0 0 0 0
0 0 0 0 0

📤 Output:
0

📥 Input 2:
0 0 0 0 0
0 0 0 0 0
0 0 0 0 1
0 0 0 0 0
0 0 0 0 0

📤 Output 2:
3

🧠 Short Note:
- ৫×৫ “Beautiful Matrix” সমস্যা (Codeforces 263A)  
- ১টি মাত্র ‘1’ থাকে। একে কেন্দ্রে (২,২) আনতে row ও col-এর
  “ম্যানহাটন দূরত্ব” |row-2| + |col-2| হল উত্তর।  
- আমরা ইনপুট স্ক্যানের সময়ই row ও column ধরে রাখি, পরে সরল ফর্মুলায় হিসাব।

⏱ Time Complexity (TC):  O(25) ≈ O(1)
   ▸ ৫×৫ = ২৫টি ইনপুট ও একটি সরল গণনা।

💾 Space Complexity (SC): O(1)
   ▸ কেবল কয়েকটি int ভ্যারিয়েবল—কোনো অতিরিক্ত অ্যারে নয়।
==========================
*/
