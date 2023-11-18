#include <bits/stdc++.h>

int main(){

    std::stack<int> tower;
    tower.push(3);
    tower.push(2);
    tower.push(1);


    while (!tower.empty())
    {
        std::cout << tower.top() << " ";
        tower.pop();
    }
    
}