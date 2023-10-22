#include <iostream>
#include <string.h>
#include <initializer_list>


template<typename T>
void f(T const& chars){
    std::for_each(chars.begin(),chars.end(),[](char c) {std::cout << c;});
    std::cout << std::endl;
}

class X {
    std::vector<char> v;
    X(std::initializer_list<char> const& chars): v{chars} {
        f(chars);
    } 
};
int main(){
    X x{'h','e','l','l','o'};
    X y = {'h','e','l','l','o'};

    // f({'h','e','l','l','o'})
    f(std::initializer_list<char>{'h','e','l','l','o'})
}