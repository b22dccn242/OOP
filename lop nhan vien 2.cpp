#include <cmath>
#include <cstdio>
#include <vector>
#include<sstream> 
#include <iostream>
#include <algorithm>
using namespace std;

string chuanhoaten(string s ){
    transform(s.begin() , s.end() , s.begin() , :: tolower ) ; 
    stringstream ss(s) ; 
    string tmp , ten = "" ; 
    while(ss >> tmp){
        tmp[0] = toupper(tmp[0]) ; 
        ten += tmp + " " ; 
    }
    ten.pop_back() ; 
    return ten ; 
}

void chuanhoans(string &s){
    if(s[1] == '/') s.insert(0 , "0") ; 
    if(s[4] == '/') s.insert(3 , "0") ; 
}

class nhanvien{
private : 
    string name , gt , ns , diachi , ma , ngay ; 
public  :
    void nhap(){
        getline(cin , name ) ; 
        getline(cin , gt ) ; 
        getline(cin , ns ) ; 
        getline(cin , diachi ) ; 
        getline(cin , ma ) ;
        getline(cin , ngay) ; 
    }
    
    void in(){
        chuanhoans(ns) ; 
        chuanhoans(ngay ) ; 
        cout <<"00001"<<' '<<chuanhoaten(name)<<' '<<gt<<' '<<ns<<' '<<diachi<<' '<<ma<<' '<<ngay ; 
    } 
};

int main() {
    nhanvien s ; 
    s.nhap() ; 
    s.in() ; 
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
