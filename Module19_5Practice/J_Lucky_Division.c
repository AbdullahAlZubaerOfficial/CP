#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

   
    int lucky[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};

   
    int size = 14;


    for (int i = 0; i < size; i++) {
        if (n % lucky[i] == 0) {
            printf("YES\n");
            return 0;
        }
    }

    printf("NO\n");
    return 0;
}
