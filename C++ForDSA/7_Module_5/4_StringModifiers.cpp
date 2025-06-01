#include<bits/stdc++.h>
using namespace std;

int main(){
    
     string s = "Hello World";
     string s1 = "Hi";

     s = s + s1;    // or,  s.append(s1);   // Output: Hello WorldHi

     s.push_back('A'); // Output: Output: Hello WorldA             // note : only ekta single character pushback kora jabe......multiple character kora jabe na....... 
     
     s = s + 'B';  //  Output: Hello WorldB   

     s[0] = 'G'; // Output: Gello World

     s.pop_back();  // string er last character delete hoye jabe auto ............// Output: Hello Worl

     s = s1;   // or, s.assign(s1);    // Output: Hi  

     s = "Gello";  // Output: Gello

     s.erase(5);   // Output: Hello      // Hello World er 5 number index theke remove hoa start korbe......ekbare last porjonto remove hoye jabe.......

     s.erase(5,2); // Hello World er 5 number index theke 2 ta index value delete korbe...... Output: Hel World

     s.replace(6,5,"Bangladesh"); // Hello World theke 6 number index e gie 6 number por theke koita character delete korte chai sei total index number dea lage...ekhane ami World delete korte cachi....World er total index hoche 5 ..........so 5 diesi...ar World er poriborte Bangladesh replace hobe......// Output: Hello Bangladesh
    //  koto number theke repace hoa star hobe oitar index number = 6,
    // 6 number index por koita character delete korte chai tar total character number = 5,
    // Replace String Bangladesh 

     s.replace(6,0,"Bangladesh"); // Output : Hello BangladeshWorld            // ekhane kono character delete korbe na.......tai majhe 0 diechi..........

     s.insert(5,"zubaer");  // Output: HelloZubaer World      // 5 number index theke zubaer add hoye jabe.....


 
     cout << s << endl;  


    return 0;
}