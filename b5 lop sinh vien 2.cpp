#include <bits/stdc++.h>
using namespace std;


class sinhvien{
private : 
    string name , lop , ns ; 
    double gpa ; 
public : 
    void nhap(){
        getline(cin , name ) ; 
        getline(cin , lop ) ; 
        getline(cin , ns ) ; 
        cin >> gpa ; 
    }
    void in(){
        cout << "SV001" <<" "<<name <<" " << lop<<" " ; 
        if(ns[1] == '/')
            ns.insert(0 , "0") ; 
        if(ns[4] == '/') 
            ns.insert(3 , "0") ; 
        cout << ns << " " <<fixed<<setprecision(1)<<gpa ; 
    }
};


int main() {
    sinhvien x ; 
    x.nhap() ; 
    x.in() ;  
    return 0;
}
