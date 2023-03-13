#define ll long long 

class gv{
private : 
    string ma , name  ; 
    ll luong ;
public : 
    void nhap(){
        getline(cin , ma ) ;
        getline(cin , name ) ; 
        cin >> luong ; 
    }
    void in(){
        cout << ma << " " << name << " " ; 
        string chucvu = "" , hs = "" ; 
        chucvu = chucvu + ma[0] + ma[1] ; 
        hs = hs + ma[2] + ma[3] ; 
        if(chucvu == "HT"){
            cout << stoi(hs) <<' ' <<  luong*stoi(hs) + 2000000 ;
        }
        else if(chucvu == "HP"){
            cout << stoi(hs) <<' '<< luong*stoi(hs) + 900000 ; 
        }
        else{
            cout << stoi(hs) << ' ' << luong*stoi(hs) + 500000 ; 
        }
    }
};

int main() {
    gv x ; 
    x.nhap() ; 
    x.in() ; 
    return 0;
}
