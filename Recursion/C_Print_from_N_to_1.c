
#include <stdio.h>

void reverse(int n, int i){
    if(i<1){
        return;
    }
    printf("%d",i); 
    
    if(i!=1){         // শুধু তখনই space দিবো যখন i ≠ 1
        printf(" ");    // অর্থাৎ শেষ সংখ্যাটার পরে আর space না
    }

    reverse(n,i-1);
    
}

int main() { 
     
    int n;
    scanf("%d",&n);

    int i =n;

    reverse(n,i);
   
    return 0;
}

// #include <stdio.h>

// void reverse(int n, int i){
//     if(i>n){
//         return;
//     }

//     reverse(n,i+1);
//     printf("%d ",i);

// }

// int main() { 
//    int n;
//    scanf("%d",&n);
   
//    int i=1;

//    reverse(n,i);
   
//     return 0;
// }

/*
Input:4

Output:
4 3 2 1

*/