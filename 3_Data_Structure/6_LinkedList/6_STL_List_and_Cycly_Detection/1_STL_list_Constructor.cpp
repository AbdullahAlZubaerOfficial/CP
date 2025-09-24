// STL list behind the scene doubly linked list hisebe kaj kore.......

#include <bits/stdc++.h>
using namespace std;

int main()
{


/*

Sample 1:

list<int> l;
cout << l.size() << endl;

// Output: 0

*/


/*

Sample 2:

list<int> l(10);
cout << l.size() << endl;

// Output: 10

*/


/*

   Sample 3:

    list<int> l(10,3);
    cout << *l.begin() << endl;       // l.begin er age pointer dea hoyche karon l.begin ekta iterator
    
    // Output: 3


*/



/*


    Sample : 4

    list<int> l(10,3);
    for(auto it = l.begin(); it!=l.end(); it++){
     cout << *it << " ";
    }

    // Output: 3 3 3 3 3 3 3 3 3 3

    or,

    list<int> l(10,3);
    for(int val : l){
    cout << val << " ";
    }

   // Output: 3 3 3 3 3 3 3 3 3 3

*/


/*

  Sample 5 : 

 list<int> l = {1,2,3,4,5};
 list<int> l2(l);

 for(int val : l2){
    cout << val << " ";
 }

 Output: 1 2 3 4 5 


*/


/*

Sample 6 : 

list<int> l = {1,2,3,4,5};
int a[] = {10,20,30};
list<int> l2(a,a+3);

for(int val : l2){
    cout << val << " ";
}


// Output: 10 20 30


*/


/*

Sample 7: 

vector<int> v = {10,20,30};
list<int> l2(v.begin(),v.end());

for(int val : l2){
    cout << val << " ";
}

// Output: 10 20 30

*/

    return 0;
}