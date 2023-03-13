#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class nhanvien{
private : 
    string name , gt , ns , dc , ma , ngay ; 
public : 
    void nhap(){
        getline(cin , name ) ; 
        getline(cin , gt ) ; 
        getline(cin  , ns ) ; 
        getline(cin , dc ) ; 
        getline(cin , ma ) ; 
        getline(cin , ngay ) ; 
    }
    void chuanhoa(string s ){
        if(s[1] == '/') s.insert(0 , "0" ) ; 
        if(s[4] == '/') s.insert(3 , "0" ) ; 
    }
    void in(){
        chuanhoa(ns) ; 
        chuanhoa(ngay) ; 
        cout << "00001" <<' '<< name <<' '<< gt <<' '<< ns <<' '<< dc <<' '<< ma <<' '<< ngay ; 
    }
};

int main() {
    nhanvien x ; 
    x.nhap() ; 
    x.in() ; 
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

