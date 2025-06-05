
#include <stdio.h>

int main()
{

  int a, b;
  scanf("%d %d", &a, &b);

  int ar1[a];

  for (int i = 0; i < a; i++)
  {
    scanf("%d", &ar1[i]);
  }

  int ar2[b];

  for (int i = 0; i < b; i++)
  {
    scanf("%d", &ar2[i]);
  }

  int j = 0;

  for (int i = 0; i < a && j < b; i++)
  {
    if (ar1[i] == ar2[j])
    {
      j++;
    }
  }

  if (j == b)
  {
    printf("YES");
  }
  else
  {
    printf("NO");
  }

  return 0;
}

/*
Input:
3 2
1 4 7
1 7

Output: YES

Input:
7 4
1 8 4 7 5 2 7
4 5 7 2

Output: NO

Input:
3 3
21 8 40
21 8 40

Output: YES

problem explaination: 2 ta array element gulor 1st array er sub element gulo 2nd array shate mile kina ta check korbo...{1,4,7} er sub array holo {1,4},{1,7},{4,7},{1,4,7},{1}  egulor jodi kono ekta 2nd array shate mile tahole yes otherwise no
so ekhane 1st array element count korsi 2nd array array er shate mile kina.....jemon.....1st array te {1,7} 2 ta pawa gese ja 2nd array 2 tar shate mile jai....

*/