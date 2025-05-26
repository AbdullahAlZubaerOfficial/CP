#include <stdio.h>
#include <string.h>

int main()
{
    long long int n;
    scanf("%lld", &n);
    long long int total = 0;
    while (n--)
    {

        char s[101];
        scanf("%s", s);

        if (strcmp(s, "Icosahedron") == 0)
        {
            total = total + 20;
        }
        else if (strcmp(s, "Cube") == 0)
        {
            total = total + 6;
        }
        else if (strcmp(s, "Octahedron") == 0)
        {
            total = total + 8;
        }
        else if (strcmp(s, "Dodecahedron") == 0)
        {
            total = total + 12;
        }
        else if (strcmp(s, "Tetrahedron") == 0)
        {
            total = total + 4;
        }
    }

    printf("%lld", total);

    return 0;
}

/*

Explanation:
Icosahedron → 20 faces

Cube → 6 faces

Tetrahedron → 4 faces

Dodecahedron → 12 faces



INput:
4
Icosahedron
Cube
Tetrahedron
Dodecahedron

Output: 42

*/