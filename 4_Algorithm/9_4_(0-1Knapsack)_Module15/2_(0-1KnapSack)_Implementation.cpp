#include<bits/stdc++.h>
using namespace std;

int val[1005], weight[1005];

int knapsack(int i, int mx_weight) {
    if (i < 0 || mx_weight <= 0) {
        return 0;
    }

    if (weight[i] <= mx_weight) {
        // দুইটা option:
        // 1. bag এ রাখবো (value[i] + বাকি solve করবো)
        // 2. bag এ রাখবো না
        int op1 = val[i] + knapsack(i - 1, mx_weight - weight[i]);
        int op2 = knapsack(i - 1, mx_weight);
        return max(op1, op2);
    } 
    else {
        // bag এ রাখা সম্ভব না
        return knapsack(i - 1, mx_weight);
    }
}

int main() {
    int n, mx_weight;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> val[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> weight[i];
    }

    cin >> mx_weight;

    cout << knapsack(n - 1, mx_weight) << endl;

    return 0;
}


/*

Time Complexity : 2^n

Input:
4
10 4 7 5
4 3 2 5
8

Output: 17


Explain: 

n = 4   (মোট ৪টা item)
val = [10, 4, 7, 5]   (values/profits)
weight = [4, 3, 2, 5] (weights)
mx_weight = 8         (ব্যাগ সর্বোচ্চ ৮ ওজন নিতে পারবে)


🔹 Items Table:
Item	Value	Weight
1	      10	4
2	       4	3
3	       7	2
4	       5	5


🔹 Goal:

ব্যাগে কিছু আইটেম রাখতে হবে, যেন

মোট weight ≤ 8 হয়

মোট value সর্বোচ্চ হয়

🔹 সম্ভাব্য কম্বিনেশনগুলো দেখি:

Item 1 + Item 2

ওজন = 4 + 3 = 7

value = 10 + 4 = 14

Item 1 + Item 3

ওজন = 4 + 2 = 6

value = 10 + 7 = 17 ✅

Item 1 + Item 4

ওজন = 4 + 5 = 9 ❌ (ব্যাগের ক্ষমতা ছাড়াই গেছে)

Item 2 + Item 3

ওজন = 3 + 2 = 5

value = 4 + 7 = 11

Item 2 + Item 4

ওজন = 3 + 5 = 8

value = 4 + 5 = 9

Item 3 + Item 4

ওজন = 2 + 5 = 7

value = 7 + 5 = 12

Item 1 + Item 2 + Item 3

ওজন = 4 + 3 + 2 = 9 ❌ (ব্যাগের ক্ষমতা ছাড়াই গেছে)

Item 1 + Item 2 + Item 4

ওজন = 4 + 3 + 5 = 12 ❌

Item 2 + Item 3 + Item 4

ওজন = 3 + 2 + 5 = 10 ❌

শুধু Item 1 → value = 10

শুধু Item 2 → value = 4

শুধু Item 3 → value = 7

শুধু Item 4 → value = 5

🔹 সর্বোচ্চ Value:

সবচেয়ে বেশি value আসছে → Item 1 + Item 3

ওজন = 4 + 2 = 6

value = 10 + 7 = 17 🎯

🔹 Output:
17


মানে ব্যাগে যদি Item 1 (value 10, weight 4) আর Item 3 (value 7, weight 2) রাখি, তাহলে ব্যাগের মোট ওজন = 6 (≤ 8), আর সর্বোচ্চ profit = 17 পাওয়া যাবে




*/