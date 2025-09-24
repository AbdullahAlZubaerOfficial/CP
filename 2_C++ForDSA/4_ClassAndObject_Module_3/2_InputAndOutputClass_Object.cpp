#include<bits/stdc++.h>
using namespace std;

class Student 
{
    public:
    char name[100];
    int roll;
    double gpa;
};

int main(){
    
     Student a,b;

     cin>> a.name >> a.roll >> a.gpa;
     cin>> b.name >> b.roll >> b.gpa;

     cout<< a.name << " " << a.roll << a.gpa << " " << endl;
     cout<< b.name << " " << b.roll << b.gpa << " " << endl;

    

    return 0;
}

/*

Input: 
sakib 10 4.56
rakib 10 4.56

Output: 
sakib 10 4.56
rakib 10 4.56


*/