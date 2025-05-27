
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

/*

Input: 
10.0 5.0  

Output: Q1



 Explanation:

Ei code ta ekta 2D Cartesian coordinate input ney: (a, b)

Tarpor sei point ta kon quadrant e ache ta check kore:

Q1: a > 0 && b > 0 ➡️ Right-Top

Q2: a < 0 && b > 0 ➡️ Left-Top

Q3: a < 0 && b < 0 ➡️ Left-Bottom

Q4: a > 0 && b < 0 ➡️ Right-Bottom

(0, 0) hole: Origem

X-axis e hole: Eixo X

Y-axis e hole: Eixo Y

*/

