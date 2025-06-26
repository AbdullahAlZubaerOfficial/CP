#include<bits/stdc++.h>
using namespace std;

class Student
{
    public: 
    string name;
    int roll;
    int marks;
};

int main(){
    
     int n;
     cin >> n;

     Student a[n];

     for(int i=0; i<n; i++){
        cin >> a[i].name >> a[i].roll >> a[i].marks;
     }

     Student mn;

     mn.marks = INT_MAX;


     for(int i=0; i<n; i++)
     {
       if(a[i].marks < mn.marks){
        mn = a[i];
       }
     }
    
     cout << mn.name << " " << mn.roll << " " << mn.marks << endl;

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

Output: rakib 18 65


here minimum mark shoho puro info chole astese........
*/