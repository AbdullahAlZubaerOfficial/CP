#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int total_lines = n / 2 + 6;

int max_width = 2 * total_lines - 1;

   
    for (int i = 1; i <= total_lines; i++) {

        int stars = 2 * i - 1;
        
    int spaces = (max_width - stars) / 2;
        for (int j = 0; j < spaces; j++) {
            printf(" ");
        }
        for (int j = 0; j < stars; j++) {
            printf("*");
        }
        printf("\n");
    }

 
    for (int i = 0; i < 5; i++) {
        int spaces = (max_width - n) / 2;
        for (int j = 0; j < spaces; j++){
             printf(" ");
        }
        for (int j = 0; j < n; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
