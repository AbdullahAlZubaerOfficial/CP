
#include <stdio.h>

int main() { 
   
        int n,number;
        scanf("%d %d",&n,&number);

            int ar[n];
            for(int i=1; i<=n; i++){
                scanf("%d",&ar[i]);
            }

           
            int freq[number];

             for(int i=1; i<=number; i++){
                freq[i] = 0; 
             }

                for(int i=1; i<=n; i++){
                        freq[ar[i]]++;
                    }

                    for(int i=1; i<=number; i++){
                        printf("%d\n",freq[i]);
                    }


   
    return 0;
}