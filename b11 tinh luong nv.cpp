#include <bits/stdc++.h>
using namespace std;

using ll = long long;

class NhanVien{
private:
    string ma, ten, chucvu;
    int luongcb, ngaycong;

public:
    NhanVien(string ten, string chucvu, int luongcb, int ngaycong){
        this->ten = ten;
        this->chucvu = chucvu;
        this->luongcb = luongcb;
        this->ngaycong = ngaycong;
    }
    int getLuong(){
        return luongcb * ngaycong;
    }
    int getThuong(){
        if(ngaycong >= 25)
            return (int)(0.2 * getLuong());
        else if(ngaycong >= 22)
            return (int)(0.1 * getLuong());
        else
            return 0;
    }
    int getPhuCap(){
        if(chucvu == "GD") return 250000;
        else if(chucvu == "PGD")
            return 200000;
        else if(chucvu == "TP")
            return 180000;
        else return 150000;
    }
    int getThuNhap(){
        return getThuong() + getLuong() + getPhuCap();
    }
    void in(){
        cout << "NV01" << ' ' << ten << ' ' << getLuong() << ' ' << getThuong() << ' ' << getPhuCap() << ' ' << getThuNhap() << endl;
    }
};


int main(){
    string ten; getline(cin, ten);
    int luongcb, ngaycong; cin >> luongcb >> ngaycong;
    string chucvu; cin >> chucvu;
    NhanVien v(ten, chucvu, luongcb, ngaycong);
    v.in();
}
