
#include <stdio.h>

int main() { 
   
    float a,b;
    scanf("%f %f",&a,&b);

    // printf("%.1f %.1f",a,b);

    if(a>0 && b>0){
        printf("Q1");
    }
    else if(a>0 && b<0){
        printf("Q4");
    }
    else if(a<0 && b<0){
        printf("Q3");
    }
    else if(a<0 && b>0){
        printf("Q2");
    }
    else if(a==0 && b==0){
        printf("Origem");
    }
    else if((a>0 || a<0) && b==0){
        printf("Eixo X");
    }
    else if(a==0 && (b>0 || b<0)){
        printf("Eixo Y");
    }
   
    return 0;
}