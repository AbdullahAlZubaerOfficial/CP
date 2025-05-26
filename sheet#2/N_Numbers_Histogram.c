
#include <stdio.h>

int main() { 
   
    char c;
    scanf("%c",&c);

        int n;
        scanf("%d",&n);

            int ar1[n];
            for(int i=0; i<n; i++){
                scanf("%d",&ar1[i]);
            }

                for(int i=0; i<n; i++){
                        for(int j=0; j<ar1[i]; j++){
                           printf("%c",c);
                        }
                        printf("\n");
                    }
   
    return 0;
}


/*
Input: 
+
5
5 2 4 3 7

Output: 
+++++
++
++++
+++
+++++++

*/