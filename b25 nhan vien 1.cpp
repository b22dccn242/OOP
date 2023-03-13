#include <bits/stdc++.h>
using namespace std;
class nhanvien{
private : 
    string name , gt , ns , dc , sothue , date ; 
    static int cnt ; 
public : 
    void chuanhoa(){
        if(ns[1] == '/') ns.insert(0 , "0" ) ; 
        if(ns[4] == '/') ns.insert(3 , "0" ) ;
        if(date[1] == '/') date.insert(0 , "0" ) ; 
        if(date[4] == '/') date.insert(3 , "0" ) ; 
        
    }
    friend ostream& operator << (ostream &out , nhanvien x ){
        cnt ++ ; 
        string tmp = to_string(cnt) ; 
        while(tmp.size() < 5){
            tmp = "0" + tmp ; 
        }
        out  <<tmp <<' ' << x.name <<' ' << x.gt <<' ' <<x.ns <<' ' << x.dc<<' ' << x.sothue <<' ' <<x.date << endl ; 
        return out ; 
    }
    friend istream& operator >> (istream&in , nhanvien &x ){ // chu y gan tham chieu luc nhap thong tin
        getline(in , x.name ) ; 
        getline(in , x.gt ) ; 
        getline(in , x.ns ) ; 
        getline(in , x.dc ) ; 
        getline(in , x.sothue ) ; 
        getline(in , x.date ) ; 
        return in ; 
    }
};
int nhanvien :: cnt = 0 ; 
int main() {
    int n ; cin >>n ;
    cin.ignore() ; 
    nhanvien a[n] ; 
    for(int i=0 ; i<n; i++){
        cin >> a[i] ;  
        a[i].chuanhoa() ; 
    }
    for(int i=0 ; i<n ; i++){
        cout << a[i] ;  
    }
    return 0;
}

