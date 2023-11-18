#include <bits/stdc++.h>

int main(){
    char vowels[5] = {'a','e','i','o','u'};
    std::cout << vowels[2];

    char game[3][3] = {
        {'x','o','o'},
        {'o','x','x'},
        {'o','o','x'}
    };

    std::cout << game[0][2];
    return 0;
}