#include <stdio.h>
#include <string.h>

int main()
{
    long long int n;            // মোট কতগুলো পলিহেড্রন ইনপুট নেবো
    scanf("%lld", &n);
    long long int total = 0;    // মোট ফেস গুনতে একটা ভেরিয়েবল

    while (n--)
    {
        char s[101];            // পলিহেড্রনের নাম রাখার জন্য স্ট্রিং
        scanf("%s", s);         // পলিহেড্রনের নাম ইনপুট নেয়া হচ্ছে

        // প্রতিটি পলিহেড্রনের নাম অনুযায়ী তার ফেস সংখ্যা যোগ করা হচ্ছে
        if (strcmp(s, "Icosahedron") == 0)
        {
            total = total + 20; // Icosahedron এর ফেস ২০
        }
        else if (strcmp(s, "Cube") == 0)
        {
            total = total + 6;  // Cube এর ফেস ৬
        }
        else if (strcmp(s, "Octahedron") == 0)
        {
            total = total + 8;  // Octahedron এর ফেস ৮
        }
        else if (strcmp(s, "Dodecahedron") == 0)
        {
            total = total + 12; // Dodecahedron এর ফেস ১২
        }
        else if (strcmp(s, "Tetrahedron") == 0)
        {
            total = total + 4;  // Tetrahedron এর ফেস ৪
        }
    }

    printf("%lld", total); // সব ফেস যোগ করে মোট ফলাফল প্রিন্ট করা হচ্ছে

    return 0;
}

/*
Input:
4
Icosahedron
Cube
Tetrahedron
Dodecahedron

Output:
42

📝 Short Note:
- প্রতিটি পলিহেড্রন এর নির্দিষ্ট সংখ্যক ফেস থাকে।
- প্রোগ্রামটি মোট ফেস সংখ্যা যোগ করে প্রিন্ট করে।
- strcmp ফাংশন দিয়ে স্ট্রিং তুলনা করা হয়।
- এই সমস্যা অনেক পরিচিত পলিহেড্রনের নামের সাথে কাজ করে।

*/
