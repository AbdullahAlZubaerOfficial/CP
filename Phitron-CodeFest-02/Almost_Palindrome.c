#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    
    while (n--) {
        char s[1001];
        scanf("%s", s);

        int freq[26] = {0};
        for (int i = 0; s[i] != '\0'; i++) {
            freq[s[i] - 'a']++;   
        }

        int oddCount = 0;
        for (int i = 0; i < 26; i++) {
            if (freq[i] % 2 != 0) {
                
               oddCount++;
            }
        }

int add = (oddCount > 1) ? oddCount - 1 : 0;

        printf("%d\n", add);
    }
    
    return 0;
}
