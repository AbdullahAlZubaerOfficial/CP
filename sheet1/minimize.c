#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t); 

    while (t--) {
        int n, x;
        scanf("%d %d", &n, &x);

        int total = n * x;
        
        int pizzas = (total + 3) / 4; 
        
        printf("%d\n", pizzas);
    }

    return 0;
}
