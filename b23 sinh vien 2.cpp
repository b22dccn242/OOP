#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include<iomanip>
#include <sstream> 
#include <algorithm>
using namespace std;
class sinhvien{
private : 
    string name , ns , lop , ma = "SV0"; 
    double gpa ; 
public : 
    
    void nhap(){
        getline(cin , name ) ; 
        getline(cin , lop ) ;
        getline(cin , ns ) ; 
        cin >>gpa ; 
    } 
    void chuanhoa(){
        if(ns[1] == '/') ns.insert(0 , "0") ; 
        if(ns[4] == '/') ns.insert(3 , "0") ; 
        string tmp , ten = "" ;
        stringstream ss(name) ;
        while(ss >> tmp){
            ten += toupper(tmp[0]) ; 
            for(int i=1 ; i<tmp.size() ; i++){
                ten += tolower(tmp[i]) ; 
            }
            ten += ' ' ; 
        }
        ten.pop_back() ; 
        this->name = ten ; 
    }
    void xuat(int j ){
        if(j<10) cout << ma <<'0'<< j <<' ' ; 
        else cout << ma << j <<' ' ; 
        cout << name <<' ' << lop <<' '<< ns <<fixed <<setprecision(2) <<' ' << gpa << endl ;
    }
};
int main() {
    int n ; cin >> n ; 
    sinhvien a[n] ; 
    for(int i=0 ; i<n ; i++){
        cin.ignore() ; 
        a[i].nhap() ; 
    }
    for(int i=0 ;i<n ; i++){
        a[i].chuanhoa() ; 
        a[i].xuat(i+1) ; 
    }
    return 0;
}
