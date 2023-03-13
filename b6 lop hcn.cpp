#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


class hcn{
private : 
    int a , b ; 
    string color ; 
public :   
    void nhap(){
        cin >> a >> b ; 
        cin.ignore() ; 
        getline(cin , color ) ; 
        transform(color.begin() , color.end() , color.begin() , :: tolower) ;
    }
    void in(){
        if( a<=0 || b<=0 ){
           cout <<"INVALID" ;
            return ; 
        }
        else{ 
            color[0] = toupper(color[0]) ; 
           cout << 2*(a+b)<<" "<<a*b<<" "<<color ;
        }
    }
};
int main() {
    hcn s ; 
    s.nhap() ; 
    s.in() ; 
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
