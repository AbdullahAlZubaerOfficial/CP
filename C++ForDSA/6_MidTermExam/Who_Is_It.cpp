#include<bits/stdc++.h>
using namespace std;

class Student {
public:
    int id;
    string name;
    char section;
    int marks;
};

int main(){
    
   int n;
   cin >> n;
   
   while(n--){
        Student a, b, c;

cin >> a.id >> a.name >> a.section >> a.marks;
cin >> b.id >> b.name >> b.section >> b.marks;
 cin >> c.id >> c.name >> c.section >> c.marks;

        Student good = a;

        if (b.marks > good.marks) {
            good = b;
        } else if (b.marks == good.marks && b.id < good.id) {
            good = b;
        }

        if (c.marks > good.marks) {
            good = c;
        } else if (c.marks == good.marks && c.id < good.id) {
            good = c;
        }

        cout << good.id << " " << good.name << " " << good.section << " " << good.marks << endl;
    }

    return 0;

   }
    

   