#include<bits/stdc++.h>

int main(){
    std::vector <int> primes = {2,3,5,7,11};

    std::cout << primes[2];

    primes.push_back(13);
    primes.push_back(17);
    primes.pop_back();

    for (int i = 0;i< primes.size() ;i++){
        std::cout << primes[i] << " ";
    }

    return 0;
}