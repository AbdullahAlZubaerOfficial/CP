#include<bits/stdc++.h>
using namespace std;

class Student
{
    public: 
    int roll;
    int cls;
    double gpa;


    Student(int r,int c, double g){          // constructor
        roll = r;
        cls = c;
        gpa = g;
    }


};

int main(){

    Student rahim(45,5,3.70);
    Student karim(2,5,5.00);


/*
    //  Student rahim;
    //  rahim.roll = 45;
    //  rahim.cls = 5;
    //  rahim.gpa = 3.70;


    //  Student karim;
    //  karim.roll = 2;
    //  karim.cls = 5;
    //  karim.gpa = 5.00;

     // rahim,karim,..........tarpor abar arkejoner name...evabe die die bar bar input nie print korte hobe .....ja onek lengthy process and 100 millon name nile
     // evabe declar kora possible na........tai constructor use kore ei legthy process ke shohoj kora jai.......

*/

     cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
     cout << karim.roll << " " << karim.cls << " " << karim.gpa << endl;
    

    return 0;
}

/*

Output: 
45 5 3.70
2 5 5

*/