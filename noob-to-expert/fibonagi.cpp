#include <bits/std++.h>

// create defend ll as long long
#define ll long long

ll n,m,k,q,l,r,x,y,z;

ll f(ll n){
    if (n < 2) return n;
    return f(n-1) + f(n-2);
}

int main(){
    std::cout << f(10);
    return 0;
}