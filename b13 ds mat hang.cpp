#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class MatHang{
private : 
    string ten , dv  , ma ; 
    int giamua , giaban , loinhuan ; 
public : 
    MatHang(string ten , string dv , int giamua , int giaban , int ma){
        string tmp = to_string(ma)  ; 
        while(tmp.size() < 4 ){
            tmp = "0" + tmp ; 
        }
        this->ten = ten ; 
        this->dv = dv ; 
        this->ma = "MH" + tmp ; 
        this->giaban = giaban ; 
        this->giamua = giamua ; 
    }
    
    void xuat(){
        cout << ma <<' ' <<ten << ' ' << dv <<' ' << giamua <<' ' << giaban <<' '<<giaban - giamua<< endl ; 
    }
    
    bool operator < (MatHang other){
        if(this ->giaban - this->giamua != other.giaban - other.giamua){
            return this->giaban - this->giamua > other.giaban - other.giamua ;
        }
        return this->ma < other.ma ; 
    }
};
int main() {
    vector<MatHang> v ;
    int n ; cin >> n ;
    for(int i=0  ; i<n ; i++){
        cin.ignore() ;
        string ten , dv ; getline(cin , ten ) ; 
        getline(cin , dv ) ; 
        int mua , ban ; cin >> mua >> ban ; 
        v.push_back(MatHang(ten , dv , mua , ban , i+1)) ; 
    }
    sort(v.begin(), v.end()  ) ; 
    for(MatHang x : v ){
         x.xuat() ; 
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

