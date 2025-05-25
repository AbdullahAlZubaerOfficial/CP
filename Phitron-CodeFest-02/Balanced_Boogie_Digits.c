
#include <stdio.h>

int main() { 
       int n,m;
       scanf("%d %d",&n,&m);
       
       int found = 0;
         
           for(int i=n; i<=m; i++){

            int even = 0, odd =0;

            int x = i;

            while (x>0)
            {

                int digit = x%10;
                if(digit%2==0){
                    even++;
                }else{
                    odd++;
                }

             x = x/10;
            }

            if(even == odd && even!=0){
                printf("%d\n",i);
                found = 1;
            }
            

           }

  if(!found){
        
printf("-1");
  }
         
   
    return 0;
}