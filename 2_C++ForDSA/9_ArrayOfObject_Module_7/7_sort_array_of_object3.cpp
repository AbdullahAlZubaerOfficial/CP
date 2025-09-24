#include<bits/stdc++.h>
using namespace std;

class Student
{
    public: 
    string name;
    int roll;
    int marks;
};

bool cmp(Student l, Student r)
{

    // if(l.roll < r.roll){
    //     return true;
    // }
    // else{
    //     return false;
    // }


    // or,

    return l.roll < r.roll;   

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
sifat 24 92
rifat 23 95
ifat 17 86

Output:
sakib 15 89
ifat 17 86
rakib 18 65
rifat 23 95
sifat 24 92
akib 28 75


here , roll onushare sort kora hoyeche ascending order e (choto theke boro)..........
*/