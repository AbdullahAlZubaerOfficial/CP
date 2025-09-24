#include <stdio.h>

/*
 * এই উদাহরণে তিন ধরনের ডেটা টাইপ দেখানো হয়েছে—
 * int, float ও char—and সেগুলো প্রিন্ট করা হয়েছে।
 */
int main() {
    int   age   = 20;     // পূর্ণসংখ্যা (integer)
    float gpa   = 3.75f;  // দশমিক সংখ্যা (float) → f = float literal
    char  grade = 'A';    // একক অক্ষর (character)

    printf("Age  : %d\n", age);    // %d দিয়ে int মুদ্রণ
    printf("GPA  : %.2f\n", gpa);  // %.2f → দশমিকের পরে ২ ঘর float প্রিন্ট
    printf("Grade: %c\n", grade);  // %c দিয়ে character মুদ্রণ

    return 0; // প্রোগ্রাম সফলভাবে শেষ
}

/*
Expected Input:
    (কোনো ইনপুট নেই)

Expected Output:
    Age  : 20
    GPA  : 3.75
    Grade: A
*/
