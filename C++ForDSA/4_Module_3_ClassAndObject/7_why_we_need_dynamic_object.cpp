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

Student* fun(){
     Student karim(2,5,5.00);
     Student* p = &karim;
     return p;
}

int main(){

    Student* p = fun();

     cout << (*p).roll << " " << (*p).cls << " " << (*p).gpa << endl;
    

    return 0;
}

/*

ekhon normal vabe declare korle function theke declare korle man gulo auto delete hoye jabe .....jar fole main function theke kono man pabo na....and garbej value show korbe.....
eta online c compiler e check korle value ta ashbe......orthath jokhon amra pointer die variable declare korbo object e tokhon function theke kono kisu return korar sathe sathe function theke all value auto delete hoye jabe......

Output: 
2 30920 6.56141e-310




*/