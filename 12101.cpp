#include <iostream>
#include <vector>
using namespace std;
int main(){
    int a,b;
    cin >> a >> b;
    vector<string> c={"1"};
    vector<string> d={"1+1","2"};
    vector<string> e={"1+1+1","1+2","2+1","3"};
    vector<string> f;
    switch (a){
        case 1:
            f=c;
            break;
        case 2:
            f=d;
            break;
        case 3:
            f=e;
            break;
        default:
            for (int g=3;g<a;g=g+1){
                f={};
                for (int h=0;h<e.size();h=h+1){
                    f.push_back("1+"+e[h]);
                }
                for (int h=0;h<d.size();h=h+1){
                    f.push_back("2+"+d[h]);
                }
                for (int h=0;h<c.size();h=h+1){
                    f.push_back("3+"+c[h]);
                }
                c=d;
                d=e;
                e=f;
            }
    }
    if(b>f.size()){
        cout<<-1;
    }
    else{
        cout<<f[b-1];
    }
    return 0;
}