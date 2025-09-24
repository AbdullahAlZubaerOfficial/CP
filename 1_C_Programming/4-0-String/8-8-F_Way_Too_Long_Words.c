#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t); // কতগুলো টেস্ট কেস আছে, তা ইনপুট নেয়া হচ্ছে

    while (t--)
    {
        char s[101];
        scanf("%s", s); // প্রতিটি স্ট্রিং ইনপুট

        int len = strlen(s); // স্ট্রিংয়ের দৈর্ঘ্য নির্ণয়

        if (len > 10)
        {
            // যদি দৈর্ঘ্য ১০ এর বেশি হয়, তাহলে সংক্ষিপ্তভাবে প্রিন্ট করো
            printf("%c%d%c\n", s[0], len - 2, s[len - 1]);
        }
        else
        {
            // না হলে স্ট্রিংটা যেমন আছে তেমনই প্রিন্ট করো
            printf("%s\n", s);
        }
    }

    return 0;
}

/*
Input:
4
word
localization
internationalization
pneumonoultramicroscopicsilicovolcanoconiosis

Output:
word
l10n
i18n
p43s

🔍 Short Note:
এই প্রোগ্রামটি "word abbreviation" বা "shortening" এর একটি পরিচিত ফর্ম্যাট অনুসরণ করে।
যখন একটি শব্দের দৈর্ঘ্য ১০ এর বেশি হয়, তখন প্রথম অক্ষর + মাঝখানের অক্ষরসংখ্যা + শেষ অক্ষর প্রিন্ট করে।
উদাহরণ: "localization" → "l10n" (কারণ ১ম অক্ষর 'l', শেষ অক্ষর 'n', মাঝখানে ১০টি অক্ষর আছে)
এটি প্রোগ্রামিং প্রতিযোগিতায় খুব জনপ্রিয় সমস্যা।

*/
