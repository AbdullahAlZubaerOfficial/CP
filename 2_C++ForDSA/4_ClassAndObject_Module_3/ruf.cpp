#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    int marks;
    int roll;
    double gpa;

    Student(int marks,int roll, double gpa){
        this->roll = roll;
        this->marks = marks;
        this->gpa = gpa;
    }

};

int main(){
    
     Student rahim(2,90,4.89);

     Student* karim = new Student(1,96,5.00);

     cout << rahim.roll << " " << rahim.marks << " " << rahim.gpa << endl;
     cout << karim->roll << " " << karim->marks << " " << karim->gpa << endl;

    

    return 0;
}