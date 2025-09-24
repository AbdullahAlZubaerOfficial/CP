#include<bits/stdc++.h>
using namespace std;

int main(){
    
/*

   Sample 1: 

   list<int> l = {10,20,30};
   list<int> l2;
   
   l2 = l;
// or,
//    l2.assign(l.begin(),l.end());

   for(int val : l2){
    cout << val << " ";
   }

   // Output: 10 20 30 
    
*/



/*


Sample 2: 

   list<int> l = {10,20,30};

   l.push_back(40);

   l.push_front(100);

   for(int val : l){
    cout << val << " ";
   }

   // Output: 100 10 20 30 40 

*/


/*

Sample 3: 

list<int> l = {10,20,30};

l.pop_back();      // last er value delete kore dei

for(int val : l){
    cout << val << " ";
}

// Output: 10 20


*/



/*

Sample 4: 

list<int> l = {10,20,30};

l.pop_front();      // first er value delete kore dei

for(int val : l){
    cout << val << " ";
}

// Output: 20 30

*/


/*

Sample 5:

vector<int> l = {10,20,30};
cout << *next(l.begin(),1);   // 20

*/



/*

Sample 6:

list<int> l = {10,20,30};

l.insert(next(l.begin(),2),100);   // 2 number index e 100 insert kora hoche

for(int val : l){  
    cout << val << " ";      
}

// Output: 10 20 100 30

*/



/*

Sample 7: 

list<int> l = {10, 20, 30};
list<int> l2 = {100,200};

l.insert(next(l.begin(),2),l2.begin(),l2.end());

for(int val : l){
    cout << val << " ";
}

// Output: 10 20 100 200 30 

*/



    return 0;
}