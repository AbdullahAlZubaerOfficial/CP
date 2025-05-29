#include<bits/stdc++.h>
using namespace std;

class Student
{
    public: 
    int roll;
    int cls;
    double gpa;

// same variable name rakhar jonno this and arrow sign use korte hoi...na hole garbej value chole ashe......
    Student(int roll,int cls, double gpa){          // constructor
        this->roll = roll;   // this-> or (*this).  jeta khushi use korte parbo.....etake difference bola hoi..
        (*this).cls = cls;
        (*this).gpa = gpa;
    }


};

int main(){

    Student rahim(45,5,3.70);
    Student karim(2,5,5.00);


     cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
     cout << karim.roll << " " << karim.cls << " " << karim.gpa << endl;
    

    return 0;
}

/*

Output: 
45 5 3.70
2 5 5

*/