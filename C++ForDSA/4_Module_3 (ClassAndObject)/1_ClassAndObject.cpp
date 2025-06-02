#include<bits/stdc++.h>
using namespace std;

class Student
{
    public: 
    char name[100]; // 100 byte
    int roll;       // 4 byte
    double gpa;     // 8 byte 

    // Total 112 byte
};  // Total 112 byte er shate 4 or 8 byte jog hobe...seta ei class er total byte


int main(){
    
     Student a;
     a.roll = 10;
     a.gpa = 4.5;
    //  a.name = "Sakib";      ekhane evabe 2nd time a ke declare kora jabe na
    char temp[100] = "Sakib";
    strcpy(a.name,temp);

    cout << a.name << " " << a.roll << " " << a.gpa << endl;  // temp,strcpy use kore ekhon a ke joto kushu access nite parbo.......

    return 0;
}


/*

Output: a 10 4.5

*/