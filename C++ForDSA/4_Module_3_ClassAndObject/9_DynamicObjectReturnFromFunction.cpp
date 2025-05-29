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
     Student* karim = new Student(2,5,5.00);
     
     return karim;
}

int main(){

     Student* p = fun();

     cout << (*p).roll << " " << (*p).cls << " " << (*p).gpa << endl;
    

    return 0;
}

/*

ekhane output shotik vabe pawa jabe........ pointer use korleo...and function theke kono kisu return korle delete hobe na....memory te theke jabe......jotokhon delete na korbo totokhon thakbe.......

Output: 
2 5 5




*/