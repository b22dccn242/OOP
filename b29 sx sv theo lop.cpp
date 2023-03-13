#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


class sinhvien{
private : 
    string ma , name ,  lop , email  ; 
public : 
    void nhap(){
        getline(cin , ma ) ; 
        getline(cin , name ) ; 
        getline(cin , lop ) ;
        getline(cin , email ) ; 
    }
    string getlop(){
        return this->lop  ; 
    }
    
    string getma(){
        return this->ma ; 
    }
    
    void xuat(){
        cout << ma <<' '<< name <<' ' << lop <<' ' << email << endl ; 
    }
}; 

bool comp(sinhvien a , sinhvien b ){
    if(a.getlop() != b.getlop())
        return a.getlop() < b.getlop() ; 
    return a.getma() < b.getma() ; 
}


int main() {
    int n ; cin >> n; 
    sinhvien a[n] ; 
    cin.ignore() ; 
    for(int i=0 ; i<n ; i++){ 
        a[i].nhap() ; 
    }
    sort(a , a+n , comp ) ; 
    for(int i=0 ;i <n ; i++){
        a[i].xuat() ; 
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
