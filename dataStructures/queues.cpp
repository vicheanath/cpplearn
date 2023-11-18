#include<bits/stdc++.h>

int main(){
    std::queue<int> order;

    order.push(10);
    order.push(9);
    order.push(8);
    
    while(!order.empty()) {
        std::cout << order.front() << " ";
        order.pop();
    }
    // Outputs: 10 9 8

    return 0;
}