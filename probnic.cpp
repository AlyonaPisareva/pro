#include <iostream>
using namespace std;
int main() {
int n, a, o, twol=0, twor=0;
int m=120;
int r[120]={0};
cin>> n;
for(int i=0; i<n; i++){
    cin>> a;
    o=a%m;
    if(o==0) o=m;
    if(r[m-o]>a && r[m-o]+a>twol+twor){
        twol=r[m-o];
        twor=a;
    }
    if(0!=m){
        if(a>r[o]) r[o]=a;
    }
    else if (a>r[0]) r[0]=a;
}
cout <<twol << " " << twor;
    return 0;
}