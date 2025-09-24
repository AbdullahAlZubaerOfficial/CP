#include<bits/stdc++.h>
using namespace std;

class Student
{
    public: 
    string name;
    int roll;
    int marks;
};

bool cmp(Student l, Student r) {

    if (l.marks == r.marks) {
        return l.roll < r.roll; // chhoto roll ta age
    }
    else{
     return l.marks > r.marks; // beshi mark ta age
   }
   
}

int main(){
    
     int n;
     cin >> n;

     Student a[n];

     for(int i=0; i<n; i++){
        cin >> a[i].name >> a[i].roll >> a[i].marks;
     }

     sort(a,a+n,cmp);
   
     for(int i=0; i<n; i++){
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
     }

    return 0;
}


/*

Input: 
6
sakib 15 89
rakib 18 65
akib 28 75
sifat 24 65
rifat 23 95
ifat 17 86

Output:
rifat 23 95
sakib 15 89
ifat 17 86
akib 28 75
rakib 18 65
sifat 24 65


here,  
Marks er upor sort hobe descending order-e (boro theke choto)........

Jodi duijoner marks same thake, tahole tader moddhe roll number er upor sort hobe ascending order-e (chhoto theke boro ).......
*/