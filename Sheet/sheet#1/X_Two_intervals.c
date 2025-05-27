
#include <stdio.h>

int main()
{

    int l1, r1, l2, r2;

    scanf("%d %d %d %d", &l1, &r1, &l2, &r2);

    int start = (l1 > l2) ? l1 : l2;
    int end = (r1 < r2) ? r1 : r2;

    if (start <= end)
    {
        printf("%d %d", start, end);
    }
    else
    {
        printf("-1");
    }

    return 0;
}


/*

Input: 1 5 3 7
Output: 3 5 ✅

Input: 1 2 3 4
Output: -1 ❌



Code Explanation (in Bangla):
l1, r1 → prothom interval er start & end

l2, r2 → ditiyo interval er start & end

Overlap er start hobe → max(l1, l2)

Overlap er end hobe → min(r1, r2)

Jodi start <= end hoy → overlap ase

Nahole → overlap nai, tai -1 print korbo

*/
