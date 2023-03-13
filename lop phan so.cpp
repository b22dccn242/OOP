#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long 

class phanso{
private : 
    ll tu , mau ; 
public : 
    phanso(){} 
    phanso(ll tu , ll mau ){
        this->tu = tu ; 
        this->mau = mau ; 
    }
    friend istream& operator >> (istream&in , phanso &x){
        in >> x.tu>>x.mau ;
        return in ;
    }
    friend ostream& operator << (ostream&out , phanso x ){
        out << x.tu <<'/'<<x.mau ; 
        return out ; 
    }
    void xuli(){
        ll k = __gcd(tu , mau) ;
        tu  = tu / k ; 
        mau = mau / k ; 
    }
    
};

int main() {
    phanso x(1,1) ;
    cin >> x ; 
    x.xuli() ; 
    cout << x ; 
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

