
#include <stdio.h>

int main() { 
   
    long long int n,k;
    scanf("%lld %lld",&n,&k);

    long long int ar[n];

    for(int i=0; i<n; i++){
        scanf("%lld",&ar[i]);
    }

    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(ar[j]<ar[j+1]){
                long long int temp = ar[j];
                ar[j] = ar[j+1];
                ar[j+1] = temp;
            }
        }
    }

    long long int sum = 0; 
    for(int i=0; i<k; i++){
        if(ar[i]>0){
            sum = sum+ ar[i];
        }
    }

    printf("%lld",sum);
   
    return 0;
}


/*

অ্যারে সর্ট করা (ডেসেন্ডিং অর্ডারে):


for(int i = 0; i < n - 1; i++) {
    for(int j = 0; j < n - i - 1; j++) {
        if(a[j] < a[j + 1]) {
            int temp = a[j];
            a[j] = a[j + 1];
            a[j + 1] = temp;
        }
    }
}

এটি বাবল সর্ট অ্যালগরিদম ব্যবহার করে অ্যারেকে ছোট থেকে বড় (অ্যাসেন্ডিং) না সাজিয়ে, বড় থেকে ছোট (ডেসেন্ডিং) অর্ডারে সাজায়।

প্রতিটি পাশাপাশি সংখ্যা তুলনা করে এবং বড় সংখ্যাকে সামনে নিয়ে আসে।

সবচেয়ে বড় k সংখ্যার যোগফল বের করা:




int sum = 0;
for(int i = 0; i < k; i++) {
    if(a[i] > 0) sum += a[i];
}
সর্ট করার পর অ্যারের প্রথম k সংখ্যক সবচেয়ে বড় সংখ্যা যোগ করা হয়।

শর্ত (if(a[i] > 0)) দিয়ে নিশ্চিত করা হয় যে শুধু ধনাত্মক সংখ্যা যোগ হবে (ঋণাত্মক সংখ্যা যোগ হবে না)।

*/