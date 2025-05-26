#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t); 

    while (t--) {
        int m1, m2, d;
        scanf("%d %d %d", &m1, &m2, &d);

        int totalF = m1 + m2;
        int new = (m1 * d) / totalF;
        int fewer = d - new; 

        printf("%d\n", fewer);
    }

    return 0;
}
