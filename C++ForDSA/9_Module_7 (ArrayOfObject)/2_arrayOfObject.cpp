#include<bits/stdc++.h>
using namespace std;

class Student
{

    public:           // modifier
    string name;
    int roll;
    int marks;

};

int main(){
    
    int n;
    cin >> n; 
    
    // int a[5]
    Student a[n];

    for(int i=0; i<n; i++){
        
    cin.ignore();  
        getline(cin,a[i].name);
        cin >>  a[i].roll >> a[i].marks;
    }
    for(int i=0; i<n; i++){
        cout << a[i].name << " " <<  a[i].roll<< " " << a[i].marks  << endl ;
    }

    

    return 0;
}


/*

Input: 
3
sakib ahmed
15 89
rakib khan
18 65
akib hossain
28 75


Output: 
sakib ahmed 15 89
rakib khan 18 65
akib hossain 28 75


*/