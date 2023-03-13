#include <bits/stdc++.h>
using namespace std;
class diem{
private : 
    string name , ma = "HS0" ; 
    double diem[10]  , sum = 0 ; 
public : 
    void nhap(int stt){ 
        ma += to_string(stt);
        getline(cin , name) ;  
        for(int i=0 ; i<10; i++){
            cin >> diem[i] ; 
            sum += diem[i]; 
        }
    }
    void in(){
        cout <<ma <<' ' << name << ' ' << fixed << setprecision(1) << sum / 10 <<' ' ; 
        if (sum / 10 >= 9 ) cout <<"XUAT XAC" ; 
        else if (sum / 10 <=8.9 && sum/10 >=8 ) cout <<"GIOI" << endl ; 
        else if(sum/10>=7 && sum/10<=7.9) cout <<"KHA"  << endl ; 
        else if(sum/10>=5 && sum/10<=6.9) cout <<"TB" << endl ; 
        else cout <<"YEU" << endl ; 
    }
    double getgpa(){
        return this->sum ; 
    }
    string getma(){
        return this->ma ; 
    }
};

bool comp(diem a , diem b ){
    if(a.getgpa() != b.getgpa()) 
        return a.getgpa() > b.getgpa() ;
    return a.getma() < b.getma() ;
}
int main() {
    int n ; cin >> n ; 
    diem a[n] ; 
    for(int i=0 ; i<n ; i++){
        cin.ignore() ; 
        a[i].nhap(i+1) ; 
        cin.ignore() ; 
    }
    sort(a , a+n , comp ) ; 
    for(int i=0 ; i<n ; i++){
        a[i].in() ; 
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
