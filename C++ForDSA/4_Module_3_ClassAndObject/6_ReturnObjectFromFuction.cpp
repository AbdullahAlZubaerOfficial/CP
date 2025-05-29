#include<bits/stdc++.h>
using namespace std;

class Student
{
    public: 
    int roll;
    int cls;
    double gpa;

    Student(int roll,int cls, double gpa){          // constructor
        this->roll = roll;   
        (*this).cls = cls;
        (*this).gpa = gpa;
    }


};

Student fun(){
     Student karim(2,5,5.00);
     return karim;
}

int main(){

    Student obj = fun();

     cout << obj.roll << " " << obj.cls << " " << obj.gpa << endl;
    

    return 0;
}

/*

Output: 
2 5 5


// object ta static hoar por o return korar por main function theke value peye jachi......but array khetre amra petam na.......

*/