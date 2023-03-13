#include <bits/stdc++.h> 
using namespace std;
class SV{
private : 
    string name , lop , ns ; 
    double gpa ;
public : 
    SV(){
        name = lop = ns = "" ; 
        gpa  = 0 ; 
    }
    void nhap(){
        getline(cin , name ) ;
        getline(cin , lop ) ; 
        getline(cin , ns  ); 
        cin >> gpa ; 
    }
    void xuat(int stt){
        string tmp= to_string(stt) ; 
        while(tmp.size() < 3 ){
            tmp  = "0" + tmp ; 
        }
        cout << "SV" << tmp << ' ' << name << ' ' << lop <<' ' << ns << ' ' << fixed << setprecision(2) << gpa << endl ; 
    }
    void chuanhoa(){
        if(ns[1] =='/') ns.insert(0 , "0") ; 
        if(ns[4]== '/') ns.insert(3 , "0" ) ; 
    }
};
int main() {
    int n ; cin >> n ; 
    SV a[n] ; 
    for(int i=0 ; i<n ; i++){
        cin.ignore() ; 
        a[i].nhap() ; 
        a[i].chuanhoa() ; 
    }
    for(int i=0 ; i<n ; i++){
        a[i].xuat(i+1) ; 
    }
    return 0;
}

