
#include <stdio.h>

int main() { 
   
    int t;
    scanf("%d",&t);
    while (t--)
    {
        char s[100005];

        scanf("%s",s);

        int length = strlen(s);

        int good = 0;

        for(int i=0; i<length-2; i++){
            if((s[i]=='0' && s[i+1]=='1' && s[i+2]=='0') ||
            (s[i]=='1' && s[i+1]=='0' && s[i+2]=='1')
            ){
                good = 1;
                break;
               
              
            }
            
        }
        if(good==1){
            printf("Good\n");
        }
        else{
            printf("Bad\n");
        }

    }
    
   
    return 0;
}