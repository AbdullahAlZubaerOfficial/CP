#include <stdio.h>

#include <stdio.h>

// কাস্টম ডেটা টাইপ তৈরি করলাম: Student
struct Student {
    char name[50];  // শিক্ষার্থীর নাম রাখার জন্য একটি ক্যারেক্টার অ্যারে
    int  age;       // শিক্ষার্থীর বয়স রাখার জন্য একটি ইন্টিজার ভ্যারিয়েবল
};

int main() {
    // একটি Student টাইপের ভ্যারিয়েবল তৈরি করলাম এবং সেটিতে মান দিয়েছি
    struct Student s1 = {"Zubaer", 20};

    // শিক্ষার্থীর নাম প্রিন্ট করলাম
    printf("Name: %s\n", s1.name);

    // শিক্ষার্থীর বয়স প্রিন্ট করলাম
    printf("Age : %d\n", s1.age);

    return 0; // প্রোগ্রাম সফলভাবে শেষ
}


/*
Expected Output:
    Name: Zubaer
    Age : 20
*/
