
#include <stdio.h>
#include <string.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B); // A আর B ইনপুট নিচ্ছি

    char S[25];
    scanf("%s", S); // কোডটা নিচ্ছি (যেখানে '-' এবং ডিজিট থাকবে)

    int isValid = 1; // ধরে নিচ্ছি কোডটা সঠিক

    // যদি কোডটার দৈর্ঘ্য A + B + 1 না হয় তাহলে ভুল
    if (strlen(S) != A + B + 1) {
        isValid = 0;
    }

    // যদি A-th index এ '-' না থাকে তাহলে ভুল
    else if (S[A] != '-') {
        isValid = 0;
    }

    // এখন সব ক্যারেক্টার চেক করবো, শুধুমাত্র ডিজিট আছে কি না
    else {
        for (int i = 0; i < A + B + 1; i++) {
            if (i == A) continue; // '-' এর জায়গা স্কিপ করি
            if (S[i] < '0' || S[i] > '9') { // যদি ডিজিট না হয়
                isValid = 0;
                break;
            }
        }
    }

    // এখন ফলাফল দেখাবো
    if (isValid)
        printf("Yes\n"); // ফরম্যাট ঠিক আছে
    else
        printf("No\n");  // ফরম্যাট ভুল
}



/*

#include <stdio.h>
#include <string.h>
#include <ctype.h>  // for isdigit()

int main() {
    int A, B;
    scanf("%d %d", &A, &B);

    char S[25];  // since max length is 10+10+1 = 21
    scanf("%s", S);

    int valid = 1;

    // Check length
    if (strlen(S) != A + B + 1) {
        valid = 0;
    }

    // Check if S[A] == '-'
    else if (S[A] != '-') {
        valid = 0;
    }

    // Check all other characters
    else {
        for (int i = 0; i < A + B + 1; i++) {
            if (i == A) continue; // skip the dash position
            if (!isdigit(S[i])) {
                valid = 0;
                break;
            }
        }
    }

    if (valid)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}


*/