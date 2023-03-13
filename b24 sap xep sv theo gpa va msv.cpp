#include <bits/stdc++.h> 
using namespace std;


class sinhvien{
private : 
    string name , lop , ns  , ma  ; 
    double gpa ; 

public : 
    sinhvien(string name , string lop , string ns ,double gpa , int stt){
        this->name = name ;
        this->lop = lop ; 
        this->ns = ns ; 
        this->gpa = gpa ; 
        string tmp = to_string(stt) ; 
        while(tmp.size() < 3 ){
            tmp = "0" + tmp ; 
        }
        this->ma = "SV" + tmp ; 
    }
    
    void chuanhoa( ){
        if(ns[1] == '/') ns.insert(0 , "0") ; 
        if(ns[4] == '/') ns.insert(3 , "0") ; 
        stringstream ss(name) ; 
        string tmp ; 
        string ten = ""; 
        while(ss >> tmp){
            ten += toupper(tmp[0]) ;  
            for(int i=1 ; i<tmp.size() ; i++){
                ten += tolower(tmp[i]) ;
            } 
            ten += ' '  ;
        }
        ten.pop_back() ;  
        this->name = ten  ; 
    }
  
    bool operator < (sinhvien other ){
        if(this->gpa != other.gpa )
            return this->gpa > other.gpa ;
        return this->ma < other.ma ; 
    }
    friend ostream & operator << (ostream & out , sinhvien x ){
        out << x.ma <<' ' <<x.name <<' '<<x.lop <<' '<<x.ns <<' ' << fixed << setprecision(2) << x.gpa << endl ; 
        return out ; 
    }
};

int main() {
    int n ; cin >> n ; 
    vector<sinhvien> v ; 
    for(int i=0 ; i<n ; i++){
        string ten , lop  , ns ; 
        cin.ignore() ; 
        getline(cin , ten ) ; 
        getline(cin , lop ) ; 
        getline(cin , ns) ;
        double gpa ; cin >> gpa ; 
        v.push_back(sinhvien(ten , lop , ns , gpa , i+1 )) ; 
    }
    sort(v.begin() , v.end() ) ; 
    for(sinhvien x : v ){
        x.chuanhoa() ; 
        cout << x ;  
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
