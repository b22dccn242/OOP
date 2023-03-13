#include <bits/stdc++.h> 
using namespace std;



class tuyensinh{
private : 
    string ma , name  ; 
    double toan , ly , hoa ; 
public : 
    tuyensinh(string ma , string name , double toan , double ly , double hoa ){
        this->ma = ma ; 
        this->name = name ; 
        this->toan = toan  ; 
        this->ly = ly ; 
        this->hoa = hoa ; 
    }
    void in(){
        int k = ma[2] - '0' ; 
        double tongdiem = toan + ly + hoa ; 
        if(k == 1 ) tongdiem += 0.5 ; 
        else if ( k==2) tongdiem += 1.0 ; 
        else tongdiem += 2.5 ; 
        cout << ma <<' ' << name <<' ' << k <<' ' ;  
        if(tongdiem == int(tongdiem)) 
            cout << (int)tongdiem <<' '  ;
        else cout << fixed << setprecision(1) << tongdiem <<' ' ; 
        if(tongdiem >= 24 ) cout <<"TRUNG TUYEN " << endl ; 
        else cout <<"TRUOT" << endl; 
    }
};
int main() {
    string ma  ; getline(cin , ma ) ; 
    string ten ; getline(cin, ten ) ; 
    double toan , ly , hoa ; 
    cin >> toan >> ly >> hoa ; 
    tuyensinh x(ma, ten , toan , ly , hoa ) ;
    x.in() ; 
    return 0;
}
