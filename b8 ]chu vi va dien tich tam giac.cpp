#include <cmath>
#include <cstdio>
#include <vector>
#include<iomanip>
#include <iostream>
#include <algorithm>
using namespace std;
class sc{
private : 
    int x1 , y1 , x2 , y2 , x3 , y3 ; 
public : 
    void nhap(){
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 ; 
    }
    void in(){
        double k1 = sqrt(pow(x1-x2 , 2) + pow(y1-y2 , 2)) ; 
        double k2 = sqrt(pow(x2-x3 , 2) + pow(y2-y3 , 2)) ; 
        double k3 = sqrt(pow(x1-x3 , 2) + pow(y1-y3 , 2)) ; 
        if(k1+k2 <= k3 || k2 + k3 <= k1 || k1+k3 <= k2 ){
            cout <<"INVALID" ; 
            return ; 
        }
        double p = (k1 + k2 + k3 ) / 2 ; 
        cout << fixed << setprecision(3)<< k1 + k2 + k3 << " " << sqrt(p*(p-k1)*(p-k2)*(p-k3)) << endl ; 
    }
};

int main() {
    sc x ; 
    int q ; cin >> q ; 
    while(q--){
        x.nhap() ; 
        x.in() ; 
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
