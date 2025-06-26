#include<bits/stdc++.h> // সব স্ট্যান্ডার্ড লাইব্রেরি ইনক্লুড করে
using namespace std;

int main() {

   // একটি vector v ডিফাইন করলাম যেটার ভেতরে 1, 2, 3, 4 আছে
   vector<int> v = {1,2,3,4};

   // আরেকটি vector v2 ডিফাইন করলাম, যেটার ভেতরে আছে 100, 200, 300
   vector<int> v2 = {100,200,300};

   // v vector-এর 2 নম্বর ইন্ডেক্স (0-based) এ v2-এর সব element insert করবো
   // v.begin() + 2 → v-এর তৃতীয় পজিশনে insert হবে
   // v2.begin(), v2.end() → v2-এর শুরু থেকে শেষ পর্যন্ত সব value insert করবে
   v.insert(v.begin()+2, v2.begin(), v2.end());

   // এখন v vector এর সব উপাদান প্রিন্ট করবো
   for(int x: v){
       cout << x << " ";
   }

   return 0;
}


/*


Output: 1 2 100 200 300 3 4




*/