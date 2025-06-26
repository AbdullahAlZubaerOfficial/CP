#include<bits/stdc++.h>
using namespace std;


class Student{

  public:
  
  string name;
  int roll;
  int marks;


};

bool cmp(Student l , Student r){
  if(l.marks == r.marks){
    return l.roll > r.roll;
  }else{
    return l.marks < r.marks;
  }
}

int main(){
    
   int n;
   cin >> n;
   
   Student a[n];
   
   for(int i=0; i<n; i++){
    cin >> a[i].name >> a[i].roll >> a[i].marks ;
   }

   sort(a,a+n,cmp);

   for(int i=0; i<n; i++){
    cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
   }
    

    return 0;
}


/*

Input:
5
Asif 29 95
Sakib 55 89
Zubair 57 93
Ahsan 39 86
Joy 12 99

Output: 
Ahsan 39 86
Sakib 55 89
Zubair 57 93
Asif 29 95
Joy 12 99


Input: 
5
Asif 29 95
Sakib 55 86
Zubair 57 86
Ahsan 39 86
Joy 12 99

Output: 
Zubair 57 86
Sakib 55 86
Ahsan 39 86
Asif 29 95
Joy 12 99



*/