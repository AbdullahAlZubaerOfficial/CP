#include<bits/stdc++.h>
using namespace std;

class Cricketer
{
    public:
    string country;
    int jersy;
   
    Cricketer(string country, int jersy){
        this->country = country;
        this->jersy = jersy;
    }

};

int main(){
    
    Cricketer* dhoni = new Cricketer("India",100);
    Cricketer* kohli = new Cricketer("India",18);
    
    // kohli ->country = dhoni->country;     // dynamic country copy
    // kohli->jersy = dhoni->jersy;          // dynamic jersy copy

    *kohli = *dhoni;           // dhoni modhe ja variable ache sob copy hoy jabe dynamic vabe kohli modhe

    // cout << dhoni->jersy << " " << kohli->jersy << endl;
    delete dhoni;

    cout << kohli->country << " " << kohli->jersy << endl;

    return 0;
}


// Output: Indea 100