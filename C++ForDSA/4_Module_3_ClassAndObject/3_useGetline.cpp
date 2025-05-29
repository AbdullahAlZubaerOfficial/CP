/*

Usig getline for character name er modhe space thakle oita jate puro line print korte pare......alignas

*/

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

 
     cin.getline(a.name,100);   // ekhane input near somoy shudhu char er full name  nibe sathe ei line onno kisu input nibe na
     cin>>  a.roll >> a.gpa;   // egulo full name er next line e input nibe........

     cin.ignore();  // Clear buffer before getline.......eta use kora hoyeche karon sakib ahmed 
                                                                                  // 10 4.56 eta input near por je enter sign ache oita input nie niche getline....jar fole olta palta man orthath garbej value chole astese ........tai eta ke ignore korar jonno ignore function use kora hoyeche.. 

     cin.getline(b.name,100);
     cin>>  b.roll >> b.gpa;

     cout<< a.name << " " << a.roll << " "  << a.gpa <<  endl;
     cout<< b.name << " " << b.roll << " " << b.gpa  << endl;

    

    return 0;
}

/*

Input: 
sakib ahmed 
10 4.56
Rakib ahmed
20 4.87


Output: 
sakib ahmed  10 4.56
Rakib ahmed 20 4.87


*/