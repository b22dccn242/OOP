#include <bits/stdc++.h>
using namespace std;

class sinhvien{
private : 
    string name  , ns ; 
    double d1 , d2 , d3 ; 
public : 
    void nhap(){
        getline(cin , name ) ; 
        getline(cin , ns ) ; 
        cin >> d1 >> d2 >> d3  ; 
    }
    
    void in(){
        cout << name <<" "<<ns<<" "<<fixed<<setprecision(1)<<d1+d2+d3 ; 
    }
};

int main() { 
    sinhvien x ;  
    x.nhap()  ;
    x.in() ; 
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

